using UnityEngine;
using System.Collections;

public class CyclePanel : MonoBehaviour
{
	public CyberUI.RandomCircleMatrix target;
	bool mWinDisplay = true;
	Rect mWinPos = new Rect(0,0,300,700);
	Rect mDragArea = new Rect(0,0,300,20);
	public float mZoomDepth=1f;
	void Start()
	{
		mZoomDepth = target.transform.localScale.z;
	}
	void OnGUI()
	{
		if( GUILayout.Button( (mWinDisplay)?"Hide Panel":"Show Panel") )
		{
			mWinDisplay=!mWinDisplay;
		}
		if( mWinDisplay )
			mWinPos = GUILayout.Window(1101,mWinPos,DrawWindow,"Panel");
	}
	private void DrawWindow(int id)
	{
		GUI.DragWindow(mDragArea);
        GUILayout.Label("Hints:\n"+
            "Mouse Drag Circles to rotate"+"\n"+
            "Mouse Scroll to zoom" + "\n");

        if( GUILayout.Button("Reset position"))
        {
            target.transform.rotation = Quaternion.identity;
            mZoomDepth = 1f;
        }

		//
		// Real time
		GUILayout.Label("Scale target Z : ");
		mZoomDepth = GUILayout.HorizontalSlider(mZoomDepth,-10f,10f);
		GUILayout.Space(20f);

		if( GUILayout.Button("Create Random Cycle", GUILayout.Height(80f) ) )
		{
			target.RandomCreateCircle();
		}

		GUILayout.Label("Layer : "+ target.NumberOfLayer);
		target.NumberOfLayer = Mathf.FloorToInt( GUILayout.HorizontalSlider(target.NumberOfLayer, 1f, 1000f) );

		GUILayout.Label("Scale : ("+target.minScale+"~"+target.maxScale+")");
		target.minScale = GUILayout.HorizontalSlider(target.minScale, 0f, 10f);
		target.maxScale = GUILayout.HorizontalSlider(target.maxScale, 0f, 10f);

		GUILayout.Label("Speed : ("+target.whirlSpeedMin+"~"+target.whirlSpeedMax+")");
		target.whirlSpeedMin = GUILayout.HorizontalSlider(target.whirlSpeedMin, -1000f, 1000f);
		target.whirlSpeedMax = GUILayout.HorizontalSlider(target.whirlSpeedMax, -1000f, 1000f);

		GUILayout.Label("Angle : ("+target.angleMin+"~"+target.angleMax+")");
		target.angleMin = GUILayout.HorizontalSlider(target.angleMin, 0f, 1f);
		target.angleMax = GUILayout.HorizontalSlider(target.angleMax, 0f, 1f);

		GUILayout.Label("Spawn Point :");
        GUILayout.Label("min" + target.randomSpawnMin);
        GUILayout.BeginHorizontal();
		target.randomSpawnMin.x = GUILayout.HorizontalSlider(target.randomSpawnMin.x, -10f, 10f);
		target.randomSpawnMin.y = GUILayout.HorizontalSlider(target.randomSpawnMin.y, -10f, 10f);
		target.randomSpawnMin.z = GUILayout.HorizontalSlider(target.randomSpawnMin.z, -10f, 10f);
        GUILayout.EndHorizontal();
		GUILayout.Label("max:"+target.randomSpawnMax);
        GUILayout.BeginHorizontal();
		target.randomSpawnMax.x = GUILayout.HorizontalSlider(target.randomSpawnMax.x, -10f, 10f);
		target.randomSpawnMax.y = GUILayout.HorizontalSlider(target.randomSpawnMax.y, -10f, 10f);
		target.randomSpawnMax.z = GUILayout.HorizontalSlider(target.randomSpawnMax.z, -10f, 10f);
        GUILayout.EndHorizontal();
		if( GUILayout.Button("Spawn Align Center") )
		{
			target.randomSpawnMin=Vector3.zero;
			target.randomSpawnMax=Vector3.zero;
		}
	}

    void Update()
    {
        mZoomDepth = Mathf.Clamp(mZoomDepth + Input.GetAxis("Mouse ScrollWheel") * 2f, -10f, 10f);
    
		// Zoom depth effect.
		Vector3 _depth = new Vector3(1f,1f,mZoomDepth);
		if (Vector3.Distance(target.transform.localScale, _depth) < 0.01f)
			return;
		target.transform.localScale = Vector3.Lerp(target.transform.localScale,_depth,5f*Time.deltaTime);
		if (Vector3.Distance(target.transform.localScale, _depth) < 0.01f)
		{
			target.transform.localScale=_depth;
		}
	}

}
