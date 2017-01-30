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
// ScoreUI
struct ScoreUI_t3588654214;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreKeeper
struct  ScoreKeeper_t2936965124  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 ScoreKeeper::score
	int32_t ___score_2;
	// UnityEngine.GameObject ScoreKeeper::scoreUIObject
	GameObject_t3674682005 * ___scoreUIObject_3;
	// ScoreUI ScoreKeeper::scoreUI
	ScoreUI_t3588654214 * ___scoreUI_4;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(ScoreKeeper_t2936965124, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_scoreUIObject_3() { return static_cast<int32_t>(offsetof(ScoreKeeper_t2936965124, ___scoreUIObject_3)); }
	inline GameObject_t3674682005 * get_scoreUIObject_3() const { return ___scoreUIObject_3; }
	inline GameObject_t3674682005 ** get_address_of_scoreUIObject_3() { return &___scoreUIObject_3; }
	inline void set_scoreUIObject_3(GameObject_t3674682005 * value)
	{
		___scoreUIObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreUIObject_3, value);
	}

	inline static int32_t get_offset_of_scoreUI_4() { return static_cast<int32_t>(offsetof(ScoreKeeper_t2936965124, ___scoreUI_4)); }
	inline ScoreUI_t3588654214 * get_scoreUI_4() const { return ___scoreUI_4; }
	inline ScoreUI_t3588654214 ** get_address_of_scoreUI_4() { return &___scoreUI_4; }
	inline void set_scoreUI_4(ScoreUI_t3588654214 * value)
	{
		___scoreUI_4 = value;
		Il2CppCodeGenWriteBarrier(&___scoreUI_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
