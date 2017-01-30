using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PasswordManagerBehavior : MonoBehaviour, IPowerUp {

	private string color = "green";
	public float rotationSpeed = 60;
	public GameObject shieldPrefab;
	public GameObject announcement;

	// Use this for initialization
	void Start () {
		announcement = GameObject.Find ("WaveText");
	}

	// Update is called once per frame
	void Update () {
		transform.Rotate (0,rotationSpeed * Time.deltaTime, 0);
	}

	public string GetColor () {
		return color;
	}

	public void ActivateShield () {
		Debug.Log ("Activate green Shield");
		StartCoroutine (DisplayText ());
		Instantiate(shieldPrefab);
		Die ();
	}

	void Die(){
		Destroy (gameObject);
	}

	private IEnumerator DisplayText() {
		announcement.GetComponent<Text>().text = "Password Manager Pro Activated";
		yield return new WaitForSeconds(4);
		announcement.GetComponent<Text> ().text = "";
	}
}