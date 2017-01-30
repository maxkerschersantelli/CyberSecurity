using UnityEngine;
using System.Collections;

public class PriviligedEscilationBehavior : MonoBehaviour, IEnemy {

	public GameObject spawnEffect;
	public GameObject explosionEffect;

	public GameObject pointDisplay;
	public GameObject target; // object this moves toward

	public int damage = 10;
	public int points = 20;
	public string type = "red";
	public float speed; // move speed

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
