using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplayBehavior : MonoBehaviour {

	// Use this for initialization
	void Start () {
		transform.forward = GameObject.FindGameObjectWithTag("MainCamera").transform.position - transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void SetGazedAt(bool gazedAt) {
		if (gazedAt) {
			Debug.Log ("poo");
			transform.localScale = new Vector3 (transform.localScale.x * 2, transform.localScale.y * 2, transform.localScale.z * 2);
		}
	}

	public void SetNotGazedAt(bool notGazedAt) {
		if (notGazedAt) {
			Debug.Log ("pee");
			transform.localScale = new Vector3 (transform.localScale.x / 2, transform.localScale.y / 2, transform.localScale.z / 2);
		}
	}
}
