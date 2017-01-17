using UnityEngine;
using System.Collections;

public class PointDisplay : MonoBehaviour {

	// Use this for initialization
	void Start () {
		transform.LookAt (Camera.main.transform);
		transform.Rotate(new Vector3(0,180,0));
		Destroy (gameObject, 1);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void SetPoints(int points) {
		gameObject.GetComponent<TextMesh> ().text = "+" + points.ToString();
	}

	public void SetPosition (Vector3 newPosition){
		gameObject.transform.position = newPosition;
	}
		
}
