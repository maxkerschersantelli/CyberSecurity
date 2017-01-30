using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LevelController : MonoBehaviour {

	public GameObject SQLPrefab;
	public GameObject PriviligedEscilationPrefab;
	public GameObject DDoSPrefab;
	public GameObject MalwarePrefab;
	public GameObject InsiderThreatPrefab;
	public GameObject PasstheHashAttachPrefab;

	public GameObject EventLogAnalyzerPowerUp;
	public GameObject ADSolutionsPowerUp;
	public GameObject PasswordManagerProPowerUp;

	public GameObject spawners;
	public GameObject powerUpSpawners;

	public GameObject gameOverUI;
	public Text WaveText;
	public int currentWave = 1;

	private IEnumerator WaveOne;
	private IEnumerator WaveTwo;
	private IEnumerator WaveThree;
	private IEnumerator WaveFour;
	private IEnumerator WaveFive;
	private IEnumerator WaveSix;
	private IEnumerator Endless;

	// Use this for initialization
	void Start () {
		WaveOne = WaveOneCo ();
		WaveTwo = WaveTwoCo ();
		WaveThree = WaveThreeCo ();
		WaveFour = WaveFourCo ();
		WaveFive = WaveFiveCo ();
		WaveSix = WaveSixCo ();
		Endless = EndlessCo ();
		StartCoroutine(WaveOne);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void GameOver () {
		Debug.Log ("GameOver");
		PlayerPrefs.SetInt("Player Score", GetComponent<ScoreKeeper>().score);

		GameObject[] enemies = GameObject.FindGameObjectsWithTag ("Enemy");
		for (int i = 0; i < enemies.Length; i++) {
			Destroy (enemies [i]);
		}

		GameObject[] powerUp = GameObject.FindGameObjectsWithTag ("PowerUp");
		for (int i = 0; i < powerUp.Length; i++) {
			Destroy (powerUp [i]);
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
		yield return new WaitForSeconds(4);
		WaveText.GetComponent<Text> ().text = "WARNING: SQL Injections Detected";
		yield return new WaitForSeconds(4);
		WaveText.GetComponent<Text> ().text = "";
		Instantiate(SQLPrefab, spawners.transform.GetChild(6).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(1).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(3).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(4);
		Instantiate(SQLPrefab, spawners.transform.GetChild(2).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(4).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(10);
		StartCoroutine(WaveTwo);
	}

	private IEnumerator WaveTwoCo() {
		Debug.Log ("Wave Two");
		currentWave = 2;
		WaveText.GetComponent<Text> ().text = "WARNING: DDoS Attacks Detected";
		yield return new WaitForSeconds(3);
		WaveText.GetComponent<Text> ().text = "";
		Instantiate(DDoSPrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(7);
		Instantiate(DDoSPrefab, spawners.transform.GetChild(4).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(DDoSPrefab, spawners.transform.GetChild(0).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(8);
		Instantiate(SQLPrefab, spawners.transform.GetChild(0).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(DDoSPrefab, spawners.transform.GetChild(4).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(6).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(3).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(DDoSPrefab, spawners.transform.GetChild(8).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(0.75f);
		Instantiate(SQLPrefab, spawners.transform.GetChild(2).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(DDoSPrefab, spawners.transform.GetChild(7).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(1).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(3);
		Instantiate(EventLogAnalyzerPowerUp, powerUpSpawners.transform.GetChild(3).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(8);
		StartCoroutine(WaveThree);
	}

	private IEnumerator WaveThreeCo() {
		Debug.Log ("Wave Three");
		currentWave = 3;
		WaveText.GetComponent<Text> ().text = "WARNING: Priviliged Escilation Attacks Detected";
		yield return new WaitForSeconds(3);
		WaveText.GetComponent<Text> ().text = "";
		Instantiate(PriviligedEscilationPrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(5);
		Instantiate(SQLPrefab, spawners.transform.GetChild(0).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(1).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(2);
		Instantiate(PriviligedEscilationPrefab, spawners.transform.GetChild(4).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(4);
		Instantiate(SQLPrefab, spawners.transform.GetChild(6).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(3).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(2).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds (1);
		Instantiate(PriviligedEscilationPrefab, spawners.transform.GetChild(1).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds (3);
		Instantiate(PriviligedEscilationPrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(4);
		StartCoroutine(WaveFour);
	}

	private IEnumerator WaveFourCo() {
		Debug.Log ("Wave four");
		currentWave = 4;
		WaveText.GetComponent<Text> ().text = "Warning: Malware Detected";
		yield return new WaitForSeconds(3);
		WaveText.GetComponent<Text> ().text = "";
		Instantiate(MalwarePrefab);
		yield return new WaitForSeconds(5);
		Instantiate(SQLPrefab, spawners.transform.GetChild(0).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(PriviligedEscilationPrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(MalwarePrefab);
		yield return new WaitForSeconds(5);
		Instantiate(ADSolutionsPowerUp, powerUpSpawners.transform.GetChild(3).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(MalwarePrefab);
		Instantiate(DDoSPrefab, spawners.transform.GetChild(8).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(1);
		Instantiate(SQLPrefab, spawners.transform.GetChild(6).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(3).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(1);
		Instantiate(MalwarePrefab);
		Instantiate(SQLPrefab, spawners.transform.GetChild(2).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(7).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(2);
		Instantiate(PriviligedEscilationPrefab, spawners.transform.GetChild(1).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(PriviligedEscilationPrefab, spawners.transform.GetChild(7).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(8);
		StartCoroutine(WaveFive);
	}

	private IEnumerator WaveFiveCo (){
		Debug.Log ("Wave five");
		currentWave = 5;
		WaveText.GetComponent<Text> ().text = "WARNING: Inside Threats Detected";
		yield return new WaitForSeconds(3);
		WaveText.GetComponent<Text> ().text = "";
		Instantiate(InsiderThreatPrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(5);
		Instantiate(SQLPrefab, spawners.transform.GetChild(0).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(PriviligedEscilationPrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(InsiderThreatPrefab, spawners.transform.GetChild(1).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(5);
		Instantiate(MalwarePrefab);
		Instantiate(DDoSPrefab, spawners.transform.GetChild(6).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(InsiderThreatPrefab, spawners.transform.GetChild(3).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(PriviligedEscilationPrefab, spawners.transform.GetChild(1).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(10);
		StartCoroutine(WaveSix);
	}

	private IEnumerator WaveSixCo (){
		Debug.Log ("Wave Six");
		currentWave = 6;
		WaveText.GetComponent<Text> ().text = "Warning: Pass-the-Hash Attacks Detected";
		yield return new WaitForSeconds(3);
		WaveText.GetComponent<Text> ().text = "";
		Instantiate(PasstheHashAttachPrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(5);
		Instantiate(SQLPrefab, spawners.transform.GetChild(0).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(PasstheHashAttachPrefab, spawners.transform.GetChild(5).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(1).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(PasswordManagerProPowerUp, powerUpSpawners.transform.GetChild(2).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(5);
		Instantiate(MalwarePrefab);
		Instantiate(DDoSPrefab, spawners.transform.GetChild(6).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(SQLPrefab, spawners.transform.GetChild(3).transform.position, Quaternion.Euler(0, 0, 0));
		Instantiate(PriviligedEscilationPrefab, spawners.transform.GetChild(1).transform.position, Quaternion.Euler(0, 0, 0));
		yield return new WaitForSeconds(10);
		StartCoroutine(Endless);
	}

	private IEnumerator EndlessCo () {
		Debug.Log ("Endless");
		currentWave = 0;
		WaveText.GetComponent<Text> ().text = "Endless";
		yield return new WaitForSeconds(4);
		WaveText.GetComponent<Text> ().text = "";
		while (true) {
			yield return new WaitForSeconds(3);
			Instantiate(SQLPrefab, spawners.transform.GetChild(2).transform.position, Quaternion.Euler(0, 0, 0));
			Instantiate(MalwarePrefab);
			yield return new WaitForSeconds(3);
			Instantiate(PasswordManagerProPowerUp, powerUpSpawners.transform.GetChild(2).transform.position, Quaternion.Euler(0, 0, 0));
			Instantiate(PriviligedEscilationPrefab, spawners.transform.GetChild(4).transform.position, Quaternion.Euler(0, 0, 0));
			Instantiate(DDoSPrefab, spawners.transform.GetChild(6).transform.position, Quaternion.Euler(0, 0, 0));
			yield return new WaitForSeconds(4);
			Instantiate(PasstheHashAttachPrefab, spawners.transform.GetChild(4).transform.position, Quaternion.Euler(0, 0, 0));
			Instantiate(InsiderThreatPrefab, spawners.transform.GetChild(6).transform.position, Quaternion.Euler(0, 0, 0));
		}

	}
}
