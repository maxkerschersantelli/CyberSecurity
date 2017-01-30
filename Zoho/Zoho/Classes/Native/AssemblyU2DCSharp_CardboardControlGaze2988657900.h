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
// GvrHead
struct GvrHead_t2074018243;
// CardboardControl
struct CardboardControl_t480265927;
// CardboardControlDelegates.CardboardControlDelegate
struct CardboardControlDelegate_t3309909616;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardControlGaze
struct  CardboardControlGaze_t2988657900  : public MonoBehaviour_t667441552
{
public:
	// System.Single CardboardControlGaze::maxDistance
	float ___maxDistance_2;
	// UnityEngine.LayerMask CardboardControlGaze::layerMask
	LayerMask_t3236759763  ___layerMask_3;
	// System.Boolean CardboardControlGaze::useEventCooldowns
	bool ___useEventCooldowns_4;
	// System.Boolean CardboardControlGaze::vibrateOnChange
	bool ___vibrateOnChange_5;
	// System.Boolean CardboardControlGaze::vibrateOnStare
	bool ___vibrateOnStare_6;
	// System.Single CardboardControlGaze::stareTimeThreshold
	float ___stareTimeThreshold_7;
	// UnityEngine.GameObject CardboardControlGaze::previousObject
	GameObject_t3674682005 * ___previousObject_8;
	// UnityEngine.GameObject CardboardControlGaze::currentObject
	GameObject_t3674682005 * ___currentObject_9;
	// System.Single CardboardControlGaze::gazeStartTime
	float ___gazeStartTime_10;
	// GvrHead CardboardControlGaze::head
	GvrHead_t2074018243 * ___head_11;
	// UnityEngine.RaycastHit CardboardControlGaze::hit
	RaycastHit_t4003175726  ___hit_12;
	// System.Boolean CardboardControlGaze::isHeld
	bool ___isHeld_13;
	// System.Boolean CardboardControlGaze::stared
	bool ___stared_14;
	// CardboardControl CardboardControlGaze::cardboard
	CardboardControl_t480265927 * ___cardboard_15;
	// CardboardControlDelegates.CardboardControlDelegate CardboardControlGaze::OnChange
	CardboardControlDelegate_t3309909616 * ___OnChange_16;
	// CardboardControlDelegates.CardboardControlDelegate CardboardControlGaze::OnStare
	CardboardControlDelegate_t3309909616 * ___OnStare_17;

public:
	inline static int32_t get_offset_of_maxDistance_2() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___maxDistance_2)); }
	inline float get_maxDistance_2() const { return ___maxDistance_2; }
	inline float* get_address_of_maxDistance_2() { return &___maxDistance_2; }
	inline void set_maxDistance_2(float value)
	{
		___maxDistance_2 = value;
	}

	inline static int32_t get_offset_of_layerMask_3() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___layerMask_3)); }
	inline LayerMask_t3236759763  get_layerMask_3() const { return ___layerMask_3; }
	inline LayerMask_t3236759763 * get_address_of_layerMask_3() { return &___layerMask_3; }
	inline void set_layerMask_3(LayerMask_t3236759763  value)
	{
		___layerMask_3 = value;
	}

	inline static int32_t get_offset_of_useEventCooldowns_4() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___useEventCooldowns_4)); }
	inline bool get_useEventCooldowns_4() const { return ___useEventCooldowns_4; }
	inline bool* get_address_of_useEventCooldowns_4() { return &___useEventCooldowns_4; }
	inline void set_useEventCooldowns_4(bool value)
	{
		___useEventCooldowns_4 = value;
	}

	inline static int32_t get_offset_of_vibrateOnChange_5() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___vibrateOnChange_5)); }
	inline bool get_vibrateOnChange_5() const { return ___vibrateOnChange_5; }
	inline bool* get_address_of_vibrateOnChange_5() { return &___vibrateOnChange_5; }
	inline void set_vibrateOnChange_5(bool value)
	{
		___vibrateOnChange_5 = value;
	}

	inline static int32_t get_offset_of_vibrateOnStare_6() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___vibrateOnStare_6)); }
	inline bool get_vibrateOnStare_6() const { return ___vibrateOnStare_6; }
	inline bool* get_address_of_vibrateOnStare_6() { return &___vibrateOnStare_6; }
	inline void set_vibrateOnStare_6(bool value)
	{
		___vibrateOnStare_6 = value;
	}

	inline static int32_t get_offset_of_stareTimeThreshold_7() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___stareTimeThreshold_7)); }
	inline float get_stareTimeThreshold_7() const { return ___stareTimeThreshold_7; }
	inline float* get_address_of_stareTimeThreshold_7() { return &___stareTimeThreshold_7; }
	inline void set_stareTimeThreshold_7(float value)
	{
		___stareTimeThreshold_7 = value;
	}

	inline static int32_t get_offset_of_previousObject_8() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___previousObject_8)); }
	inline GameObject_t3674682005 * get_previousObject_8() const { return ___previousObject_8; }
	inline GameObject_t3674682005 ** get_address_of_previousObject_8() { return &___previousObject_8; }
	inline void set_previousObject_8(GameObject_t3674682005 * value)
	{
		___previousObject_8 = value;
		Il2CppCodeGenWriteBarrier(&___previousObject_8, value);
	}

	inline static int32_t get_offset_of_currentObject_9() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___currentObject_9)); }
	inline GameObject_t3674682005 * get_currentObject_9() const { return ___currentObject_9; }
	inline GameObject_t3674682005 ** get_address_of_currentObject_9() { return &___currentObject_9; }
	inline void set_currentObject_9(GameObject_t3674682005 * value)
	{
		___currentObject_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentObject_9, value);
	}

	inline static int32_t get_offset_of_gazeStartTime_10() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___gazeStartTime_10)); }
	inline float get_gazeStartTime_10() const { return ___gazeStartTime_10; }
	inline float* get_address_of_gazeStartTime_10() { return &___gazeStartTime_10; }
	inline void set_gazeStartTime_10(float value)
	{
		___gazeStartTime_10 = value;
	}

	inline static int32_t get_offset_of_head_11() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___head_11)); }
	inline GvrHead_t2074018243 * get_head_11() const { return ___head_11; }
	inline GvrHead_t2074018243 ** get_address_of_head_11() { return &___head_11; }
	inline void set_head_11(GvrHead_t2074018243 * value)
	{
		___head_11 = value;
		Il2CppCodeGenWriteBarrier(&___head_11, value);
	}

	inline static int32_t get_offset_of_hit_12() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___hit_12)); }
	inline RaycastHit_t4003175726  get_hit_12() const { return ___hit_12; }
	inline RaycastHit_t4003175726 * get_address_of_hit_12() { return &___hit_12; }
	inline void set_hit_12(RaycastHit_t4003175726  value)
	{
		___hit_12 = value;
	}

	inline static int32_t get_offset_of_isHeld_13() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___isHeld_13)); }
	inline bool get_isHeld_13() const { return ___isHeld_13; }
	inline bool* get_address_of_isHeld_13() { return &___isHeld_13; }
	inline void set_isHeld_13(bool value)
	{
		___isHeld_13 = value;
	}

	inline static int32_t get_offset_of_stared_14() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___stared_14)); }
	inline bool get_stared_14() const { return ___stared_14; }
	inline bool* get_address_of_stared_14() { return &___stared_14; }
	inline void set_stared_14(bool value)
	{
		___stared_14 = value;
	}

	inline static int32_t get_offset_of_cardboard_15() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___cardboard_15)); }
	inline CardboardControl_t480265927 * get_cardboard_15() const { return ___cardboard_15; }
	inline CardboardControl_t480265927 ** get_address_of_cardboard_15() { return &___cardboard_15; }
	inline void set_cardboard_15(CardboardControl_t480265927 * value)
	{
		___cardboard_15 = value;
		Il2CppCodeGenWriteBarrier(&___cardboard_15, value);
	}

	inline static int32_t get_offset_of_OnChange_16() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___OnChange_16)); }
	inline CardboardControlDelegate_t3309909616 * get_OnChange_16() const { return ___OnChange_16; }
	inline CardboardControlDelegate_t3309909616 ** get_address_of_OnChange_16() { return &___OnChange_16; }
	inline void set_OnChange_16(CardboardControlDelegate_t3309909616 * value)
	{
		___OnChange_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnChange_16, value);
	}

	inline static int32_t get_offset_of_OnStare_17() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900, ___OnStare_17)); }
	inline CardboardControlDelegate_t3309909616 * get_OnStare_17() const { return ___OnStare_17; }
	inline CardboardControlDelegate_t3309909616 ** get_address_of_OnStare_17() { return &___OnStare_17; }
	inline void set_OnStare_17(CardboardControlDelegate_t3309909616 * value)
	{
		___OnStare_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnStare_17, value);
	}
};

struct CardboardControlGaze_t2988657900_StaticFields
{
public:
	// CardboardControlDelegates.CardboardControlDelegate CardboardControlGaze::<>f__am$cache10
	CardboardControlDelegate_t3309909616 * ___U3CU3Ef__amU24cache10_18;
	// CardboardControlDelegates.CardboardControlDelegate CardboardControlGaze::<>f__am$cache11
	CardboardControlDelegate_t3309909616 * ___U3CU3Ef__amU24cache11_19;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_18() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900_StaticFields, ___U3CU3Ef__amU24cache10_18)); }
	inline CardboardControlDelegate_t3309909616 * get_U3CU3Ef__amU24cache10_18() const { return ___U3CU3Ef__amU24cache10_18; }
	inline CardboardControlDelegate_t3309909616 ** get_address_of_U3CU3Ef__amU24cache10_18() { return &___U3CU3Ef__amU24cache10_18; }
	inline void set_U3CU3Ef__amU24cache10_18(CardboardControlDelegate_t3309909616 * value)
	{
		___U3CU3Ef__amU24cache10_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache10_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_19() { return static_cast<int32_t>(offsetof(CardboardControlGaze_t2988657900_StaticFields, ___U3CU3Ef__amU24cache11_19)); }
	inline CardboardControlDelegate_t3309909616 * get_U3CU3Ef__amU24cache11_19() const { return ___U3CU3Ef__amU24cache11_19; }
	inline CardboardControlDelegate_t3309909616 ** get_address_of_U3CU3Ef__amU24cache11_19() { return &___U3CU3Ef__amU24cache11_19; }
	inline void set_U3CU3Ef__amU24cache11_19(CardboardControlDelegate_t3309909616 * value)
	{
		___U3CU3Ef__amU24cache11_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache11_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
