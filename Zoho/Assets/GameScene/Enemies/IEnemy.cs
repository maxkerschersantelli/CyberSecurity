using UnityEngine;
using System.Collections;

public interface IEnemy{
	int Points ();
	void DealDamage ();
	void Die ();
	string GetEnemyType ();
	void DisplayPoints ();
}
