using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LevelController : MonoBehaviour {

	public GameObject enemyCubePrefab;
	public GameObject enemySpherePrefab;
	public GameObject greenPowerUpPrefab;
	public GameObject spawners;
	public GameObject powerUpSpawners;
	public GameObject gameOverUI;
	public Text WaveText;
	public int currentWave = 1;

	private IEnumerator WaveOne;
	private IEnumerator WaveTwo;
	private IEnumerator WaveThree;
	private IEnumerator WaveFour;

	// Use this for initialization
	void Start () {
		WaveOne = WaveOneCo ();
		WaveTwo = WaveTwoCo ();
		WaveThree = WaveThreeCo ();
		WaveFour = WaveFourCo ();
		StartCoroutine(WaveOne);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void GameOver () {
		Debug.Log ("GameOver");
		GameObject[] enemies = GameObject.FindGameObjectsWithTag ("Enemy");
		for (int i = 0; i < enemies.Length; i++) {
			Destroy (enemies [i]);
		}
		StopCoroutine (WaveOne);
		StopCoroutine (WaveTwo);
		StopCoroutine (WaveThree);
		StopCoroutine (WaveFour);
		StartCoroutine (SwitchScene ());
	}

	private IEnumerator SwitchScene() {
		WaveText.GetComponent<Text> ().text = "Game Over";
		yield return new WaitForSeconds (2);
		Fading fade = GameObject.Find ("Fade").GetComponent<Fading> ();
		fade.fadeSpeed = 0.8f;
		float fadeTime = fade.BeginFade (1);
		yield return new WaitForSeconds (fadeTime);
		Application.LoadLevel(2);
	}

	private IEnumerator WaveOneCo() {
		Debug.Log ("Wave One");
		WaveText.GetComponent<Text> ().text = "Wave One";
		yield return new WaitForSeconds(3);
		WaveText.GetComponent<Text> ().text = "";
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(6).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(1).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(3).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(4);
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(2).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(4).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(8);
		StartCoroutine(WaveTwo);
	}

	private IEnumerator WaveTwoCo() {
		Debug.Log ("Wave Two");
		currentWave = 2;
		WaveText.GetComponent<Text> ().text = "Wave Two";
		yield return new WaitForSeconds(3);
		WaveText.GetComponent<Text> ().text = "";
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(0).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(4).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(6).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(3).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(8).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(1);
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(2).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(7).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(1).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(2);
		Instantiate(greenPowerUpPrefab, powerUpSpawners.transform.GetChild(3).transform.position, Quaternion.Euler(90, 0, 0));
		yield return new WaitForSeconds(9);
		Instantiate(enemySpherePrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(5);
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(0).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(8).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(1);
		Instantiate(enemySpherePrefab, spawners.transform.GetChild(3).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(8);
		StartCoroutine(WaveThree);
	}

	private IEnumerator WaveThreeCo() {
		Debug.Log ("Wave Three");
		currentWave = 3;
		WaveText.GetComponent<Text> ().text = "Wave Three";
		yield return new WaitForSeconds(3);
		WaveText.GetComponent<Text> ().text = "";
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(0).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemySpherePrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(1).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(5);
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(2).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemySpherePrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemySpherePrefab, spawners.transform.GetChild(6).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(enemyCubePrefab, spawners.transform.GetChild(3).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(10);
		StartCoroutine(WaveFour);
	}

	private IEnumerator WaveFourCo() {
		Debug.Log ("Wave Four");
		currentWave = 4;
		WaveText.GetComponent<Text> ().text = "Wave Four";
		yield return new WaitForSeconds(4);
		WaveText.GetComponent<Text> ().text = "";
		while (true) {
			yield return new WaitForSeconds(2);
			Instantiate(enemyCubePrefab, spawners.transform.GetChild(2).transform.position, Quaternion.Euler(0, 0, 0));
			yield return new WaitForSeconds(2);
			Instantiate(enemyCubePrefab, spawners.transform.GetChild(4).transform.position, Quaternion.Euler(0, 0, 0));
		}

	}
}
