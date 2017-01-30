using UnityEngine;
using System.Collections;
using PubNubMessaging.Core;
using UnityEngine.UI;
using UnityEngine;

public class HighScoreUI : MonoBehaviour {

	public Text nameField;
	public Text yourScore;
	public GameObject scoreBoard;
	public GameObject enterName;
	public GameObject finishButton;

	Pubnub pubnub;
	string publishKey = "pub-c-ca77dae9-1ae7-4dab-9651-5d560c37f8c7";
	string subKey = "sub-c-73c8b964-bcbf-11e6-b737-0619f8945a4f";

	// Use this for initialization
	void Start () {
		finishButton.SetActive (false);
		scoreBoard.SetActive (false);
		yourScore.text += PlayerPrefs.GetInt ("Player Score").ToString();
		pubnub = new Pubnub( publishKey, subKey);
		Subscribe ();
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

	public void NameEntered(){
		Publish ();
	}

	void displayHighscores (string scores){
		enterName.SetActive (false);
		scoreBoard.SetActive (true);
		finishButton.SetActive (true);
		GameObject.Find ("Keyboard").SetActive(false);

		scores = scores.Substring (2);
		scores = scores.Substring (0, scores.IndexOf ("\""));

		Debug.Log (scores);

		scoreBoard.transform.GetChild (6).GetChild (1).GetComponent<Text> ().text = scores.Substring(scores.LastIndexOf(",") + 1);

		Transform current;
		for (int i = 2; i < scoreBoard.transform.childCount; i++) {
			current = scoreBoard.transform.GetChild (i);
			current.GetChild (0).GetComponent<Text>().text = scores.Substring (0, scores.IndexOf (","));
			scores = scores.Substring (scores.IndexOf (",") + 1);
			current.GetChild (1).GetComponent<Text>().text = scores.Substring (0, scores.IndexOf (","));
			scores = scores.Substring (scores.IndexOf (",") + 1);
		}
		//scoreBoard.transform.GetChild (6).GetChild (1).GetComponent<Text> ().text = scores;

	}

	public void Publish () {
		pubnub.Publish<string>(
			"scoreboard",
			nameField.text + "," + PlayerPrefs.GetInt ("Player Score").ToString(),
			DisplayReturnMessage,
			DisplayErrorMessage
		);
	}

	public void Subscribe(){
		pubnub.Subscribe<string> (
			"highscore",
			DisplaySubscribeReturnMessage,
			DisplaySubscribeConnectStatusMessage,
			DisplayErrorMessage
		);
	}

	void DisplayReturnMessage(string result)
	{
		UnityEngine.Debug.Log("PUBLISH STATUS CALLBACK");
		UnityEngine.Debug.Log(result);
		//"" += "\n" + result;
	}

	void DisplayErrorMessage(PubnubClientError pubnubError) {
		UnityEngine.Debug.Log(pubnubError.StatusCode);
	}

	void DisplaySubscribeReturnMessage(string result) {
		//recieved.text += "\n" + result;

		displayHighscores (result);

		UnityEngine.Debug.Log("SUBSCRIBE REGULAR CALLBACK:"); 
		UnityEngine.Debug.Log(result);
		if (!string.IsNullOrEmpty(result) && !string.IsNullOrEmpty(result.Trim()))
		{
			/*List<object> deserializedMessage = pubnub.JsonPluggableLibrary.DeserializeToListOfObject(result);
			if (deserializedMessage != null && deserializedMessage.Count > 0)
			{
				object subscribedObject = (object)deserializedMessage[0];
				if (subscribedObject != null)
				{
					//IF CUSTOM OBJECT IS EXCEPTED, YOU CAN CAST THIS OBJECT TO YOUR CUSTOM CLASS TYPE
					string resultActualMessage = pubnub.JsonPluggableLibrary.SerializeToJsonString(subscribedObject);
				}
			}*/
		}
	}

	void DisplaySubscribeConnectStatusMessage(string result)
	{
		UnityEngine.Debug.Log("SUBSCRIBE CONNECT CALLBACK");
		//recieved.text += "\n" + "Subscribed to: " + subscribeChannel.text;
	}
}
