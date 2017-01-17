using UnityEngine;
using System.Collections;

public class BulletBehavior : MonoBehaviour {

	public float bulletSpeed = 5;
	public float bulletLife = 5;
	public GameObject levelController;

	// Use this for initialization
	void Start () {
		GameObject cam = GameObject.FindGameObjectWithTag ("MainCamera");
		levelController = GameObject.Find ("LevelController");
		transform.forward = cam.transform.forward;
		transform.position = new Vector3(cam.transform.position.x, (cam.transform.position.y - 0.5f), cam.transform.position.z);
		Destroy (gameObject, bulletLife);
	}
	
	// Update is called once per frame
	void Update () {
		transform.position += transform.forward * Time.deltaTime * bulletSpeed;
	}

	void Die() {
		Destroy (gameObject);
	}

	void OnTriggerEnter(Collider other) {
		IEnemy enemy = other.gameObject.GetComponent<IEnemy> ();
		IPowerUp powerUp = other.gameObject.GetComponent<IPowerUp> ();
		if (enemy != null) {
			((ScoreKeeper)levelController.GetComponent (typeof(ScoreKeeper))).IncreaseScore (enemy.Points ());
			enemy.DisplayPoints ();
			enemy.Die ();
		} else if (powerUp != null) {
			powerUp.ActivateShield ();
		} else if (other.gameObject.tag == "UI") {
			other.gameObject.GetComponent<GameOverUI> ().ReturnToMenu ();
		}
		Die ();
	}

}
