using UnityEngine;
using System.Collections;

public class CircleLayer : MonoBehaviour
{
	#region -- variable
	const string Cutoff = "Transparent/CutOff/CutOff";
	const string CutoffV2 = "Transparent/CutOff/CutOff_TwoSide";
    const string OldShader = "_old";

	public Mesh mMesh;
	public Texture2D mSkin;
	public Texture2D mMask;
	public Color mColor=Color.white;
	[Range(0f,1f)] public float mPercent=0f;
	public Vector3 mWhirlDirection=Vector3.zero;
	public bool mDisableShadow=true;
	public bool mForceUpdate=false;	// only use this when editor mode.
	#endregion

	#region setter/getter
	public Texture2D skin
	{
		get{return mSkin;}
		set{
			mSkin=value;
			this.GetComponent<Renderer>().material.SetTexture("_MainTex",mSkin);
		}
	}
	public Texture2D mask
	{
		get{return mMask;}
		set{
			mMask=value;
			this.GetComponent<Renderer>().material.SetTexture("_CutTex",mMask);
		}
	}
	public Mesh mesh
	{
		get{return mMesh;}
		set{
			mMesh=value;
			AppendMesh(mMesh,false);
		}
	}
	public Color color
	{
		get{return mColor;}
		set{
			mColor=value;
			this.GetComponent<Renderer>().material.SetColor("_Color",mColor);
		}
	}
	public float percent
	{
		get{return mPercent;}
		set{
			mPercent=value;
			this.GetComponent<Renderer>().material.SetFloat("_Cutoff",mPercent);
		}
	}
	public Transform Parent{
		get{return this.transform.parent;}
		set{this.transform.parent=value as Transform;}
	}
	#endregion

	/// <summary>Updates Circle layer setting in Inspector</summary>
	[ContextMenu("Update Setting")]
	public void UpdateSetting()
	{
		// mesh
		AppendMesh(mMesh,false);
		// material
		CreateCircleLayerMaterial();
	}
	/// <summary>RealTime Creates the circle layer material.</summary>
	/// <remarks>May cause material leak. when create multi times.</remarks>
	/// <param name="_mesh">_mesh.</param>
	/// <param name="_skin">_skin.</param>
	/// <param name="_mask">_mask.</param>
	public void CreateCircleLayerMaterial(Mesh _mesh,
	                                     Texture2D _skin,
	                                     Texture2D _mask,
	                                     Color _color,
	                                     float _percent,
	                                     Vector3 _whirl)
	{
		mMesh=_mesh;
		mSkin=_skin;
		mMask=_mask;
		mColor=_color;
		mPercent=_percent;
		mWhirlDirection=_whirl;
		CreateCircleLayerMaterial();
	}
	private void CreateCircleLayerMaterial()
	{
		Renderer _render = this.gameObject.GetComponent<MeshRenderer>();
		if( _render==null )
			_render = this.gameObject.AddComponent<MeshRenderer>();
        #if UNITY_2_6 || UNITY_3_0 || UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_5 || UNITY_4_6
		Shader _shader = Shader.Find(CutoffV2+OldShader);
        #else
        Shader _shader = Shader.Find(CutoffV2);
        #endif
        _render.material = new Material(_shader);
		// force update skin, mask, color on shader.
		this.skin = this.skin;
		this.mask = this.mask;
		this.color=this.color;
		this.percent=this.percent;
		if( mDisableShadow )
		{
			_render.castShadows=false;
			_render.receiveShadows=false;
		}
	}
	/// <summary>Appends or replace the mesh on this object.</summary>
	/// <remarks>May cause mesh leak. when create multi times.</remarks>
	/// <param name="_mesh">_mesh.</param>
	/// <param name="_shareMesh">If set to <c>true</c> assign sharemesh.</param>
	public void AppendMesh(Mesh _mesh, bool _shareMesh=false)
	{
		MeshFilter _filter = GetComponent<MeshFilter>();
		if( _filter==null )
			_filter = this.gameObject.AddComponent<MeshFilter>();
		if( _shareMesh )
			_filter.sharedMesh = _mesh;
		else
			_filter.mesh = _mesh;
	}

	void Awake() {
		UpdateSetting();
	}
	void Update()
	{
		if( !mWhirlDirection.Equals(Vector3.zero) )
			transform.Rotate(mWhirlDirection * Time.deltaTime);
		#if UNITY_EDITOR
		if( mForceUpdate ) UpdateSetting();
		#endif
	}
}