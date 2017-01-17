using UnityEngine;
using System.Collections;

public class Shooting : MonoBehaviour {

	public float shootInterval = 0.25f;
	bool canShoot = true;

	public GameObject bulletPrefab;
	private static CardboardControl cardboard;

	// Use this for initialization
	void Start () {
		cardboard = GameObject.Find("CardboardControlManager").GetComponent<CardboardControl>();

	}
	
	// Update is called once per frame
	void Update () {
		if (cardboard.trigger.IsHeld() && canShoot) {
			Instantiate(bulletPrefab);
			canShoot = false;
			StartCoroutine(WaitToShoot(shootInterval));
		}
	}

	private IEnumerator WaitToShoot(float waitTime) {
		yield return new WaitForSeconds(waitTime);
		canShoot = true;
	}

}
