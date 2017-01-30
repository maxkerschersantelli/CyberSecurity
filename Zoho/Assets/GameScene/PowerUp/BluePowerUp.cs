using UnityEngine;
using System.Collections;

public class GreenPowerUp : MonoBehaviour, IPowerUp {

	private string color = "blue";
	public float rotationSpeed = 60;
	public GameObject shieldPrefab;

	// Use this for initialization
	void Start () {
		//GameObject spawns = GameObject.Find ("PowerUpSpawns");
		//transform.position = spawns.transform.GetChild(Random.Range (0, spawns.transform.childCount)).position;
	}

	// Update is called once per frame
	void Update () {
		transform.Rotate (0,0,rotationSpeed * Time.deltaTime);
	}

	public string GetColor () {
		return color;
	}

	public void ActivateShield () {
		Debug.Log ("Activate Blue Shield");
		Instantiate(shieldPrefab);
		Die ();
	}

	void Die(){
		Destroy (gameObject);
	}
}