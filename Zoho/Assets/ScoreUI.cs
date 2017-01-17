using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreUI : MonoBehaviour {

	private Text scoreText;

	// Use this for initialization
	void Start () {
		scoreText = gameObject.GetComponent<Text> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void UpdateScore(int score) {
		scoreText.text = "SCORE: " + score.ToString();
	}
}
