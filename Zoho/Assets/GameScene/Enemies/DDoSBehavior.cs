using UnityEngine;
using System.Collections;

public class DDoSBehavior : MonoBehaviour, IEnemy {

	public GameObject spawnEffect;
	public GameObject explosionEffect;

	public GameObject pointDisplay;
	public GameObject SQL;
	public float speed; // move speed
	public GameObject target; // object this moves toward
	public int damage = 30;
	public int points = 30;
	public string type = "purple";

	// Use this for initialization
	void Start () {
		target = GameObject.FindGameObjectWithTag ("Target");
		transform.forward = target.transform.position - transform.position;
		Instantiate (spawnEffect).transform.position = transform.position;
	}

	// Update is called once per frame
	void Update () {
		transform.position = Vector3.MoveTowards(transform.position, target.transform.position, speed*Time.deltaTime);
	}

	public void DealDamage() {
		((TargetBehavior)target.GetComponent (typeof(TargetBehavior))).Damage (damage);
	}

	public void Die () {
		Instantiate (explosionEffect).transform.position = transform.position;

		for (int i = 1; i <= 4; i++) {
			Instantiate(SQL, transform.GetChild(i).transform.position, Quaternion.Euler(0, 0, 0));
		}
		Destroy (gameObject);
	}

	public int Points () {
		return points;
	}

	public string GetEnemyType(){
		return type;
	}

	public void DisplayPoints () {
		PointDisplay pointDisplayObject = Instantiate (pointDisplay).GetComponent<PointDisplay> ();
		pointDisplayObject.SetPoints (points);
		pointDisplayObject.SetPosition (transform.position);
	}

	void OnTriggerEnter(Collider other) {
		if (other.gameObject.tag == "Target") {
			DealDamage ();
			Die ();
		} 
	}
}
