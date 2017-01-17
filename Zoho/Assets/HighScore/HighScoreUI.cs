using UnityEngine;
using System.Collections;

public class HighScoreUI : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void Finish () {
		StartCoroutine (SwitchScene ());
	}

	private IEnumerator SwitchScene() {
		Fading fade = GameObject.Find ("Fade").GetComponent<Fading> ();
		fade.fadeSpeed = 0.8f;
		float fadeTime = fade.BeginFade (1);
		yield return new WaitForSeconds (fadeTime);
		Application.LoadLevel(0);
	}
}
