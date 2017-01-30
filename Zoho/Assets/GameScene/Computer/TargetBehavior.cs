using UnityEngine;
using System.Collections;

public class TargetBehavior : MonoBehaviour {

	public int health = 100;
	private int state = 1;
	public GameObject levelController;
	public GameObject destroyPrefab1;
	public GameObject destroyPrefab2;
	public GameObject destroyPrefab3;
	public GameObject destroyPrefab4;
	public GameObject destroyPrefab5;

	public GameObject explosionEffect;

	GameObject[] prefabs = new GameObject[6];

	// Use this for initialization
	void Start () {
		prefabs [0] = transform.GetChild (0).gameObject;
	}
	
	// Update is called once per frame
	void Update () {
		if (health <= 0) {
			Die ();
		}
	}

	public void Damage (int damage) {
		health -= damage;
		if (state == 1 && health < 71) {
			state++;
			prefabs[1] = Instantiate (destroyPrefab5);
		} else if (state == 2 && health < 51) {
			state++;
			prefabs[2] = Instantiate (destroyPrefab4);
		} else if (state == 3 && health < 31) {
			state++;
			prefabs[3] = Instantiate (destroyPrefab3);
		}else if (state == 4 && health < 21) {
			state++;
			prefabs[4] = Instantiate (destroyPrefab2);
		} else if (state == 5 && health < 11) {
			state++;
			prefabs[5] = Instantiate (destroyPrefab1);
		}
		Debug.Log (damage);
		if (health <= 0) {
			((LevelController)levelController.GetComponent (typeof(LevelController))).GameOver ();
		}
	}

	void Die(){
		health = 100;
		Instantiate (explosionEffect).transform.position = transform.position;

		for (int i = 0; i < prefabs.Length; i++) {
			Destroy (prefabs [i]);
		}
	}
}
