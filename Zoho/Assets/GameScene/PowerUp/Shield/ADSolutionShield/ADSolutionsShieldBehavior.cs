using UnityEngine;
using System.Collections;

public class ADSolutionsShieldBehavior : MonoBehaviour, IShield {

	string color = "red";
	public int shieldLength = 4;

	// Use this for initialization
	void Start () {
		transform.position = GameObject.FindGameObjectWithTag ("Target").transform.position;
		StartCoroutine (EndShield ());
	}

	// Update is called once per frame
	void Update () {

	}

	public string GetColor () {
		return color;
	}

	void OnTriggerEnter(Collider other) {
		IEnemy enemy = other.gameObject.GetComponent<IEnemy> ();
		if (enemy != null && color.Equals(enemy.GetEnemyType())) {
			enemy.DisplayPoints ();
			enemy.Die ();
		}
	}

	private IEnumerator EndShield() {
		MeshRenderer mesh = ((MeshRenderer)GetComponent (typeof(MeshRenderer)));
		yield return new WaitForSeconds(shieldLength);
		mesh.enabled = false;
		yield return new WaitForSeconds(0.4f);
		mesh.enabled = true;
		yield return new WaitForSeconds(0.4f);
		mesh.enabled = false;
		yield return new WaitForSeconds(0.4f);
		mesh.enabled = true;
		yield return new WaitForSeconds(0.4f);
		mesh.enabled = false;
		yield return new WaitForSeconds(0.4f);
		mesh.enabled = true;
		yield return new WaitForSeconds(0.4f);
		Destroy (gameObject);
	}

}

