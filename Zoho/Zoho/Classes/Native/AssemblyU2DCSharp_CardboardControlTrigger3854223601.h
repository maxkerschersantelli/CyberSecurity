#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ParsedMagnetData
struct ParsedMagnetData_t1462532421;
// ParsedTouchData
struct ParsedTouchData_t214248024;
// CardboardControl
struct CardboardControl_t480265927;
// CardboardControlDelegates.CardboardControlDelegate
struct CardboardControlDelegate_t3309909616;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "AssemblyU2DCSharp_CardboardControlTrigger_TriggerS2305547831.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardControlTrigger
struct  CardboardControlTrigger_t3854223601  : public MonoBehaviour_t667441552
{
public:
	// System.Single CardboardControlTrigger::clickSpeedThreshold
	float ___clickSpeedThreshold_2;
	// System.Boolean CardboardControlTrigger::useEventCooldowns
	bool ___useEventCooldowns_3;
	// System.Boolean CardboardControlTrigger::vibrateOnDown
	bool ___vibrateOnDown_4;
	// System.Boolean CardboardControlTrigger::vibrateOnUp
	bool ___vibrateOnUp_5;
	// System.Boolean CardboardControlTrigger::vibrateOnClick
	bool ___vibrateOnClick_6;
	// System.Boolean CardboardControlTrigger::useMagnet
	bool ___useMagnet_7;
	// System.Boolean CardboardControlTrigger::useTouch
	bool ___useTouch_8;
	// UnityEngine.KeyCode CardboardControlTrigger::triggerKey
	int32_t ___triggerKey_9;
	// System.Boolean CardboardControlTrigger::printDebugInfo
	bool ___printDebugInfo_10;
	// ParsedMagnetData CardboardControlTrigger::magnet
	ParsedMagnetData_t1462532421 * ___magnet_11;
	// ParsedTouchData CardboardControlTrigger::touch
	ParsedTouchData_t214248024 * ___touch_12;
	// CardboardControlTrigger/TriggerState CardboardControlTrigger::currentTriggerState
	int32_t ___currentTriggerState_13;
	// System.Single CardboardControlTrigger::clickStartTime
	float ___clickStartTime_14;
	// System.Int32 CardboardControlTrigger::debugThrottle
	int32_t ___debugThrottle_15;
	// System.Int32 CardboardControlTrigger::FRAMES_PER_DEBUG
	int32_t ___FRAMES_PER_DEBUG_16;
	// CardboardControl CardboardControlTrigger::cardboard
	CardboardControl_t480265927 * ___cardboard_17;
	// CardboardControlDelegates.CardboardControlDelegate CardboardControlTrigger::OnUp
	CardboardControlDelegate_t3309909616 * ___OnUp_18;
	// CardboardControlDelegates.CardboardControlDelegate CardboardControlTrigger::OnDown
	CardboardControlDelegate_t3309909616 * ___OnDown_19;
	// CardboardControlDelegates.CardboardControlDelegate CardboardControlTrigger::OnClick
	CardboardControlDelegate_t3309909616 * ___OnClick_20;

public:
	inline static int32_t get_offset_of_clickSpeedThreshold_2() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___clickSpeedThreshold_2)); }
	inline float get_clickSpeedThreshold_2() const { return ___clickSpeedThreshold_2; }
	inline float* get_address_of_clickSpeedThreshold_2() { return &___clickSpeedThreshold_2; }
	inline void set_clickSpeedThreshold_2(float value)
	{
		___clickSpeedThreshold_2 = value;
	}

	inline static int32_t get_offset_of_useEventCooldowns_3() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___useEventCooldowns_3)); }
	inline bool get_useEventCooldowns_3() const { return ___useEventCooldowns_3; }
	inline bool* get_address_of_useEventCooldowns_3() { return &___useEventCooldowns_3; }
	inline void set_useEventCooldowns_3(bool value)
	{
		___useEventCooldowns_3 = value;
	}

	inline static int32_t get_offset_of_vibrateOnDown_4() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___vibrateOnDown_4)); }
	inline bool get_vibrateOnDown_4() const { return ___vibrateOnDown_4; }
	inline bool* get_address_of_vibrateOnDown_4() { return &___vibrateOnDown_4; }
	inline void set_vibrateOnDown_4(bool value)
	{
		___vibrateOnDown_4 = value;
	}

	inline static int32_t get_offset_of_vibrateOnUp_5() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___vibrateOnUp_5)); }
	inline bool get_vibrateOnUp_5() const { return ___vibrateOnUp_5; }
	inline bool* get_address_of_vibrateOnUp_5() { return &___vibrateOnUp_5; }
	inline void set_vibrateOnUp_5(bool value)
	{
		___vibrateOnUp_5 = value;
	}

	inline static int32_t get_offset_of_vibrateOnClick_6() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___vibrateOnClick_6)); }
	inline bool get_vibrateOnClick_6() const { return ___vibrateOnClick_6; }
	inline bool* get_address_of_vibrateOnClick_6() { return &___vibrateOnClick_6; }
	inline void set_vibrateOnClick_6(bool value)
	{
		___vibrateOnClick_6 = value;
	}

	inline static int32_t get_offset_of_useMagnet_7() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___useMagnet_7)); }
	inline bool get_useMagnet_7() const { return ___useMagnet_7; }
	inline bool* get_address_of_useMagnet_7() { return &___useMagnet_7; }
	inline void set_useMagnet_7(bool value)
	{
		___useMagnet_7 = value;
	}

	inline static int32_t get_offset_of_useTouch_8() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___useTouch_8)); }
	inline bool get_useTouch_8() const { return ___useTouch_8; }
	inline bool* get_address_of_useTouch_8() { return &___useTouch_8; }
	inline void set_useTouch_8(bool value)
	{
		___useTouch_8 = value;
	}

	inline static int32_t get_offset_of_triggerKey_9() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___triggerKey_9)); }
	inline int32_t get_triggerKey_9() const { return ___triggerKey_9; }
	inline int32_t* get_address_of_triggerKey_9() { return &___triggerKey_9; }
	inline void set_triggerKey_9(int32_t value)
	{
		___triggerKey_9 = value;
	}

	inline static int32_t get_offset_of_printDebugInfo_10() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___printDebugInfo_10)); }
	inline bool get_printDebugInfo_10() const { return ___printDebugInfo_10; }
	inline bool* get_address_of_printDebugInfo_10() { return &___printDebugInfo_10; }
	inline void set_printDebugInfo_10(bool value)
	{
		___printDebugInfo_10 = value;
	}

	inline static int32_t get_offset_of_magnet_11() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___magnet_11)); }
	inline ParsedMagnetData_t1462532421 * get_magnet_11() const { return ___magnet_11; }
	inline ParsedMagnetData_t1462532421 ** get_address_of_magnet_11() { return &___magnet_11; }
	inline void set_magnet_11(ParsedMagnetData_t1462532421 * value)
	{
		___magnet_11 = value;
		Il2CppCodeGenWriteBarrier(&___magnet_11, value);
	}

	inline static int32_t get_offset_of_touch_12() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___touch_12)); }
	inline ParsedTouchData_t214248024 * get_touch_12() const { return ___touch_12; }
	inline ParsedTouchData_t214248024 ** get_address_of_touch_12() { return &___touch_12; }
	inline void set_touch_12(ParsedTouchData_t214248024 * value)
	{
		___touch_12 = value;
		Il2CppCodeGenWriteBarrier(&___touch_12, value);
	}

	inline static int32_t get_offset_of_currentTriggerState_13() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___currentTriggerState_13)); }
	inline int32_t get_currentTriggerState_13() const { return ___currentTriggerState_13; }
	inline int32_t* get_address_of_currentTriggerState_13() { return &___currentTriggerState_13; }
	inline void set_currentTriggerState_13(int32_t value)
	{
		___currentTriggerState_13 = value;
	}

	inline static int32_t get_offset_of_clickStartTime_14() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___clickStartTime_14)); }
	inline float get_clickStartTime_14() const { return ___clickStartTime_14; }
	inline float* get_address_of_clickStartTime_14() { return &___clickStartTime_14; }
	inline void set_clickStartTime_14(float value)
	{
		___clickStartTime_14 = value;
	}

	inline static int32_t get_offset_of_debugThrottle_15() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___debugThrottle_15)); }
	inline int32_t get_debugThrottle_15() const { return ___debugThrottle_15; }
	inline int32_t* get_address_of_debugThrottle_15() { return &___debugThrottle_15; }
	inline void set_debugThrottle_15(int32_t value)
	{
		___debugThrottle_15 = value;
	}

	inline static int32_t get_offset_of_FRAMES_PER_DEBUG_16() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___FRAMES_PER_DEBUG_16)); }
	inline int32_t get_FRAMES_PER_DEBUG_16() const { return ___FRAMES_PER_DEBUG_16; }
	inline int32_t* get_address_of_FRAMES_PER_DEBUG_16() { return &___FRAMES_PER_DEBUG_16; }
	inline void set_FRAMES_PER_DEBUG_16(int32_t value)
	{
		___FRAMES_PER_DEBUG_16 = value;
	}

	inline static int32_t get_offset_of_cardboard_17() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___cardboard_17)); }
	inline CardboardControl_t480265927 * get_cardboard_17() const { return ___cardboard_17; }
	inline CardboardControl_t480265927 ** get_address_of_cardboard_17() { return &___cardboard_17; }
	inline void set_cardboard_17(CardboardControl_t480265927 * value)
	{
		___cardboard_17 = value;
		Il2CppCodeGenWriteBarrier(&___cardboard_17, value);
	}

	inline static int32_t get_offset_of_OnUp_18() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___OnUp_18)); }
	inline CardboardControlDelegate_t3309909616 * get_OnUp_18() const { return ___OnUp_18; }
	inline CardboardControlDelegate_t3309909616 ** get_address_of_OnUp_18() { return &___OnUp_18; }
	inline void set_OnUp_18(CardboardControlDelegate_t3309909616 * value)
	{
		___OnUp_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnUp_18, value);
	}

	inline static int32_t get_offset_of_OnDown_19() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___OnDown_19)); }
	inline CardboardControlDelegate_t3309909616 * get_OnDown_19() const { return ___OnDown_19; }
	inline CardboardControlDelegate_t3309909616 ** get_address_of_OnDown_19() { return &___OnDown_19; }
	inline void set_OnDown_19(CardboardControlDelegate_t3309909616 * value)
	{
		___OnDown_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnDown_19, value);
	}

	inline static int32_t get_offset_of_OnClick_20() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601, ___OnClick_20)); }
	inline CardboardControlDelegate_t3309909616 * get_OnClick_20() const { return ___OnClick_20; }
	inline CardboardControlDelegate_t3309909616 ** get_address_of_OnClick_20() { return &___OnClick_20; }
	inline void set_OnClick_20(CardboardControlDelegate_t3309909616 * value)
	{
		___OnClick_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnClick_20, value);
	}
};

struct CardboardControlTrigger_t3854223601_StaticFields
{
public:
	// CardboardControlDelegates.CardboardControlDelegate CardboardControlTrigger::<>f__am$cache13
	CardboardControlDelegate_t3309909616 * ___U3CU3Ef__amU24cache13_21;
	// CardboardControlDelegates.CardboardControlDelegate CardboardControlTrigger::<>f__am$cache14
	CardboardControlDelegate_t3309909616 * ___U3CU3Ef__amU24cache14_22;
	// CardboardControlDelegates.CardboardControlDelegate CardboardControlTrigger::<>f__am$cache15
	CardboardControlDelegate_t3309909616 * ___U3CU3Ef__amU24cache15_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> CardboardControlTrigger::<>f__switch$map1
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map1_24;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_21() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601_StaticFields, ___U3CU3Ef__amU24cache13_21)); }
	inline CardboardControlDelegate_t3309909616 * get_U3CU3Ef__amU24cache13_21() const { return ___U3CU3Ef__amU24cache13_21; }
	inline CardboardControlDelegate_t3309909616 ** get_address_of_U3CU3Ef__amU24cache13_21() { return &___U3CU3Ef__amU24cache13_21; }
	inline void set_U3CU3Ef__amU24cache13_21(CardboardControlDelegate_t3309909616 * value)
	{
		___U3CU3Ef__amU24cache13_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache13_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_22() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601_StaticFields, ___U3CU3Ef__amU24cache14_22)); }
	inline CardboardControlDelegate_t3309909616 * get_U3CU3Ef__amU24cache14_22() const { return ___U3CU3Ef__amU24cache14_22; }
	inline CardboardControlDelegate_t3309909616 ** get_address_of_U3CU3Ef__amU24cache14_22() { return &___U3CU3Ef__amU24cache14_22; }
	inline void set_U3CU3Ef__amU24cache14_22(CardboardControlDelegate_t3309909616 * value)
	{
		___U3CU3Ef__amU24cache14_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache14_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_23() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601_StaticFields, ___U3CU3Ef__amU24cache15_23)); }
	inline CardboardControlDelegate_t3309909616 * get_U3CU3Ef__amU24cache15_23() const { return ___U3CU3Ef__amU24cache15_23; }
	inline CardboardControlDelegate_t3309909616 ** get_address_of_U3CU3Ef__amU24cache15_23() { return &___U3CU3Ef__amU24cache15_23; }
	inline void set_U3CU3Ef__amU24cache15_23(CardboardControlDelegate_t3309909616 * value)
	{
		___U3CU3Ef__amU24cache15_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache15_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_24() { return static_cast<int32_t>(offsetof(CardboardControlTrigger_t3854223601_StaticFields, ___U3CU3Ef__switchU24map1_24)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map1_24() const { return ___U3CU3Ef__switchU24map1_24; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map1_24() { return &___U3CU3Ef__switchU24map1_24; }
	inline void set_U3CU3Ef__switchU24map1_24(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map1_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
