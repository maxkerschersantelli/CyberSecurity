using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rolloffsettest : MonoBehaviour {

	public float rolloffset = 0.0f;
	AirplanePath path;

	// Use this for initialization
	void Start () {
		path = GetComponent<AirplanePath>();
		
	}
	
	// Update is called once per frame
	void Update () {
		//path.RollOffset = Mathf.Lerp (0, 360, t);
		if (path.Index == 2) {
			path.RollOffset = 180;
		} else {
			path.RollOffset = 0;
		}
	}

}
