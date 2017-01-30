#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelController
struct  LevelController_t812318240  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject LevelController::enemyCubePrefab
	GameObject_t3674682005 * ___enemyCubePrefab_2;
	// UnityEngine.GameObject LevelController::enemySpherePrefab
	GameObject_t3674682005 * ___enemySpherePrefab_3;
	// UnityEngine.GameObject LevelController::greenPowerUpPrefab
	GameObject_t3674682005 * ___greenPowerUpPrefab_4;
	// UnityEngine.GameObject LevelController::spawners
	GameObject_t3674682005 * ___spawners_5;
	// UnityEngine.GameObject LevelController::gameOverUI
	GameObject_t3674682005 * ___gameOverUI_6;
	// UnityEngine.UI.Text LevelController::WaveText
	Text_t9039225 * ___WaveText_7;
	// System.Int32 LevelController::currentWave
	int32_t ___currentWave_8;
	// System.Collections.IEnumerator LevelController::WaveOne
	Il2CppObject * ___WaveOne_9;
	// System.Collections.IEnumerator LevelController::WaveTwo
	Il2CppObject * ___WaveTwo_10;
	// System.Collections.IEnumerator LevelController::WaveThree
	Il2CppObject * ___WaveThree_11;
	// System.Collections.IEnumerator LevelController::WaveFour
	Il2CppObject * ___WaveFour_12;

public:
	inline static int32_t get_offset_of_enemyCubePrefab_2() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___enemyCubePrefab_2)); }
	inline GameObject_t3674682005 * get_enemyCubePrefab_2() const { return ___enemyCubePrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_enemyCubePrefab_2() { return &___enemyCubePrefab_2; }
	inline void set_enemyCubePrefab_2(GameObject_t3674682005 * value)
	{
		___enemyCubePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyCubePrefab_2, value);
	}

	inline static int32_t get_offset_of_enemySpherePrefab_3() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___enemySpherePrefab_3)); }
	inline GameObject_t3674682005 * get_enemySpherePrefab_3() const { return ___enemySpherePrefab_3; }
	inline GameObject_t3674682005 ** get_address_of_enemySpherePrefab_3() { return &___enemySpherePrefab_3; }
	inline void set_enemySpherePrefab_3(GameObject_t3674682005 * value)
	{
		___enemySpherePrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemySpherePrefab_3, value);
	}

	inline static int32_t get_offset_of_greenPowerUpPrefab_4() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___greenPowerUpPrefab_4)); }
	inline GameObject_t3674682005 * get_greenPowerUpPrefab_4() const { return ___greenPowerUpPrefab_4; }
	inline GameObject_t3674682005 ** get_address_of_greenPowerUpPrefab_4() { return &___greenPowerUpPrefab_4; }
	inline void set_greenPowerUpPrefab_4(GameObject_t3674682005 * value)
	{
		___greenPowerUpPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___greenPowerUpPrefab_4, value);
	}

	inline static int32_t get_offset_of_spawners_5() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___spawners_5)); }
	inline GameObject_t3674682005 * get_spawners_5() const { return ___spawners_5; }
	inline GameObject_t3674682005 ** get_address_of_spawners_5() { return &___spawners_5; }
	inline void set_spawners_5(GameObject_t3674682005 * value)
	{
		___spawners_5 = value;
		Il2CppCodeGenWriteBarrier(&___spawners_5, value);
	}

	inline static int32_t get_offset_of_gameOverUI_6() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___gameOverUI_6)); }
	inline GameObject_t3674682005 * get_gameOverUI_6() const { return ___gameOverUI_6; }
	inline GameObject_t3674682005 ** get_address_of_gameOverUI_6() { return &___gameOverUI_6; }
	inline void set_gameOverUI_6(GameObject_t3674682005 * value)
	{
		___gameOverUI_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverUI_6, value);
	}

	inline static int32_t get_offset_of_WaveText_7() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___WaveText_7)); }
	inline Text_t9039225 * get_WaveText_7() const { return ___WaveText_7; }
	inline Text_t9039225 ** get_address_of_WaveText_7() { return &___WaveText_7; }
	inline void set_WaveText_7(Text_t9039225 * value)
	{
		___WaveText_7 = value;
		Il2CppCodeGenWriteBarrier(&___WaveText_7, value);
	}

	inline static int32_t get_offset_of_currentWave_8() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___currentWave_8)); }
	inline int32_t get_currentWave_8() const { return ___currentWave_8; }
	inline int32_t* get_address_of_currentWave_8() { return &___currentWave_8; }
	inline void set_currentWave_8(int32_t value)
	{
		___currentWave_8 = value;
	}

	inline static int32_t get_offset_of_WaveOne_9() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___WaveOne_9)); }
	inline Il2CppObject * get_WaveOne_9() const { return ___WaveOne_9; }
	inline Il2CppObject ** get_address_of_WaveOne_9() { return &___WaveOne_9; }
	inline void set_WaveOne_9(Il2CppObject * value)
	{
		___WaveOne_9 = value;
		Il2CppCodeGenWriteBarrier(&___WaveOne_9, value);
	}

	inline static int32_t get_offset_of_WaveTwo_10() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___WaveTwo_10)); }
	inline Il2CppObject * get_WaveTwo_10() const { return ___WaveTwo_10; }
	inline Il2CppObject ** get_address_of_WaveTwo_10() { return &___WaveTwo_10; }
	inline void set_WaveTwo_10(Il2CppObject * value)
	{
		___WaveTwo_10 = value;
		Il2CppCodeGenWriteBarrier(&___WaveTwo_10, value);
	}

	inline static int32_t get_offset_of_WaveThree_11() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___WaveThree_11)); }
	inline Il2CppObject * get_WaveThree_11() const { return ___WaveThree_11; }
	inline Il2CppObject ** get_address_of_WaveThree_11() { return &___WaveThree_11; }
	inline void set_WaveThree_11(Il2CppObject * value)
	{
		___WaveThree_11 = value;
		Il2CppCodeGenWriteBarrier(&___WaveThree_11, value);
	}

	inline static int32_t get_offset_of_WaveFour_12() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___WaveFour_12)); }
	inline Il2CppObject * get_WaveFour_12() const { return ___WaveFour_12; }
	inline Il2CppObject ** get_address_of_WaveFour_12() { return &___WaveFour_12; }
	inline void set_WaveFour_12(Il2CppObject * value)
	{
		___WaveFour_12 = value;
		Il2CppCodeGenWriteBarrier(&___WaveFour_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
