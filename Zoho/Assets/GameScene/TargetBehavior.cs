using UnityEngine;
using System.Collections;

public class TargetBehavior : MonoBehaviour {

	public int health = 100;
	public GameObject levelController;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void Damage (int damage) {
		health -= damage;
		Debug.Log (damage);
		if (health <= 0) {
			((LevelController)levelController.GetComponent (typeof(LevelController))).GameOver ();
		}
	}
}
