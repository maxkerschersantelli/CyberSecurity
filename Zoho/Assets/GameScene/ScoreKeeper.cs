using UnityEngine;
using System.Collections;

public class ScoreKeeper : MonoBehaviour {

	public int score = 0;
	public GameObject scoreUIObject;
	ScoreUI scoreUI;

	// Use this for initialization
	void Start () {
		scoreUI = scoreUIObject.GetComponent<ScoreUI> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void IncreaseScore (int points) {
		score += points;
		scoreUI.UpdateScore (score);
	}
}
