using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace CyberUI
{
	[System.Serializable]
	public enum Axis
	{
		X,
		Y,
		Z
	}
	public class RandomCircleMatrix : MonoBehaviour
	{
		[System.Serializable]
		public class RandomSetting
		{
			public List<Mesh> mesh;
			public List<Texture2D> texture;
			public List<Texture2D> mask;
			public List<Color> color;

			// May choose between
			// Transparent/CutOff/CutOff
			// Transparent/CutOff/CutOff_TwoSide
			// public Shader shader;
		}
		public RandomSetting layerSetting;

        [System.Serializable]
        public class RenderSetting
        {
            public string layerTag = string.Empty;
            public int layerId = 0;
            public int sortingLayerId = 0;
            public int sortingOrder = 0;
        }
        public RenderSetting renderSetting;

		public int NumberOfLayer=20;

		public float minScale=.5f;
		public float maxScale=5f;

		public Axis whirlAxis = Axis.Z;
		public float whirlSpeedMin=-100f;
		public float whirlSpeedMax=100f;

		[Range(0f,1f)] public float angleMin=0f;
		[Range(0f,1f)] public float angleMax=1f;

		public Vector3 randomSpawnMin = Vector3.zero;
		public Vector3 randomSpawnMax = Vector3.zero;


		void Start()
		{
			if( layerSetting.mesh.Count==0 ||
			   layerSetting.texture.Count==0 ||
			   layerSetting.mask.Count==0 )
			{
				Debug.LogError("RandomCircleMatrix : layerSetting invaild.");
				this.enabled=false;
			}

			RandomCreateCircle();
		}
		public void DeleteAllCircle()
		{
			// we only want to destroy the CircleLayer.
			foreach(Transform _child in this.transform)
			{
				if( _child.GetComponent<CircleLayer>()!=null )
					Destroy(_child.gameObject);
			}
            System.GC.Collect();
		}
		[ContextMenu("Random Create Circle")]
		public void RandomCreateCircle()
		{
			if( transform.childCount>0 )
			{
				DeleteAllCircle();
			}
			for(int i=0; i<NumberOfLayer; i++)
			{
				CreateCircle();
			}
		}

		private void CreateCircle()
		{
			int i=0;
			// mesh
			i = Random.Range(0,layerSetting.mesh.Count);
			Mesh _mesh = layerSetting.mesh[i];
			// texture
			i = Random.Range(0,layerSetting.texture.Count);
			Texture2D _texture = layerSetting.texture[i];
			// mask
			i = Random.Range(0,layerSetting.mask.Count);
			Texture2D _mask = layerSetting.mask[i];

			// scale
			float _scale = UnityEngine.Random.Range(minScale,maxScale);
			// position
			Vector3 _pos = new Vector3(Random.Range(randomSpawnMin.x,randomSpawnMax.x),
			                           Random.Range(randomSpawnMin.y,randomSpawnMax.y),
			                           Random.Range(randomSpawnMin.z,randomSpawnMax.z));

			// color override
			Color _color = Color.white;
			if( layerSetting.color.Count>0 )
			{
				i = Random.Range(0,layerSetting.color.Count);
				_color = layerSetting.color[i];
			}

			// angle
			float _angle = UnityEngine.Random.Range(angleMin,angleMax);

			// Whirl direction
			float _amount = UnityEngine.Random.Range (whirlSpeedMin, whirlSpeedMax);
			Vector3 _whirl = Vector3.zero;
			if (whirlAxis.Equals (Axis.X))
				_whirl = new Vector3 (_amount, 0f, 0f);
			else if (whirlAxis.Equals (Axis.Y))
				_whirl = new Vector3 (0f, _amount, 0f);
			else if (whirlAxis.Equals (Axis.Z))
				_whirl = new Vector3 (0f, 0f, _amount);

			// Create layer
			GameObject _layer = AddLayer(_mesh,_texture,_mask,_color,_angle,_pos,_scale,_whirl);
		}
		
		private GameObject AddLayer(Mesh _mesh,
		                            Texture2D _texture,
		                            Texture2D _mask,
		                            Color _color,
		                            float _angle,
		                            Vector3 _pos,
		                            float _scale,
		                            Vector3 _whirl)
		{
			GameObject _obj = new GameObject(string.Format("CircleLayer{0:000}",this.transform.childCount) );
			CircleLayer _layer = _obj.AddComponent<CircleLayer>();

            _layer.CreateCircleLayerMaterial(_mesh,_texture,_mask,_color,_angle,_whirl);
			_layer.UpdateSetting();

			_layer.transform.parent=this.transform;
			_layer.transform.localPosition=_pos;
			_layer.transform.localRotation=Quaternion.identity;
			_layer.transform.localScale = Vector3.one * _scale;

            _layer.gameObject.layer = renderSetting.layerId;

            Renderer _render = _layer.GetComponent<Renderer>();
            _render.sortingLayerID = renderSetting.sortingLayerId;
            _render.sortingOrder = renderSetting.sortingOrder;
            _render.tag = renderSetting.layerTag;

			return _obj;
		}
	}
}