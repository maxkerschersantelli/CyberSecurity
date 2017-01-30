#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CardboardControlTrigger
struct CardboardControlTrigger_t3854223601;
// CardboardControlGaze
struct CardboardControlGaze_t2988657900;
// CardboardControlBox
struct CardboardControlBox_t1066235268;
// CardboardControlReticle
struct CardboardControlReticle_t1717251949;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t817370046;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardControl
struct  CardboardControl_t480265927  : public MonoBehaviour_t667441552
{
public:
	// CardboardControlTrigger CardboardControl::trigger
	CardboardControlTrigger_t3854223601 * ___trigger_3;
	// CardboardControlGaze CardboardControl::gaze
	CardboardControlGaze_t2988657900 * ___gaze_4;
	// CardboardControlBox CardboardControl::box
	CardboardControlBox_t1066235268 * ___box_5;
	// CardboardControlReticle CardboardControl::reticle
	CardboardControlReticle_t1717251949 * ___reticle_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> CardboardControl::cooldownCounter
	Dictionary_2_t817370046 * ___cooldownCounter_7;
	// System.Single CardboardControl::eventCooldown
	float ___eventCooldown_8;

public:
	inline static int32_t get_offset_of_trigger_3() { return static_cast<int32_t>(offsetof(CardboardControl_t480265927, ___trigger_3)); }
	inline CardboardControlTrigger_t3854223601 * get_trigger_3() const { return ___trigger_3; }
	inline CardboardControlTrigger_t3854223601 ** get_address_of_trigger_3() { return &___trigger_3; }
	inline void set_trigger_3(CardboardControlTrigger_t3854223601 * value)
	{
		___trigger_3 = value;
		Il2CppCodeGenWriteBarrier(&___trigger_3, value);
	}

	inline static int32_t get_offset_of_gaze_4() { return static_cast<int32_t>(offsetof(CardboardControl_t480265927, ___gaze_4)); }
	inline CardboardControlGaze_t2988657900 * get_gaze_4() const { return ___gaze_4; }
	inline CardboardControlGaze_t2988657900 ** get_address_of_gaze_4() { return &___gaze_4; }
	inline void set_gaze_4(CardboardControlGaze_t2988657900 * value)
	{
		___gaze_4 = value;
		Il2CppCodeGenWriteBarrier(&___gaze_4, value);
	}

	inline static int32_t get_offset_of_box_5() { return static_cast<int32_t>(offsetof(CardboardControl_t480265927, ___box_5)); }
	inline CardboardControlBox_t1066235268 * get_box_5() const { return ___box_5; }
	inline CardboardControlBox_t1066235268 ** get_address_of_box_5() { return &___box_5; }
	inline void set_box_5(CardboardControlBox_t1066235268 * value)
	{
		___box_5 = value;
		Il2CppCodeGenWriteBarrier(&___box_5, value);
	}

	inline static int32_t get_offset_of_reticle_6() { return static_cast<int32_t>(offsetof(CardboardControl_t480265927, ___reticle_6)); }
	inline CardboardControlReticle_t1717251949 * get_reticle_6() const { return ___reticle_6; }
	inline CardboardControlReticle_t1717251949 ** get_address_of_reticle_6() { return &___reticle_6; }
	inline void set_reticle_6(CardboardControlReticle_t1717251949 * value)
	{
		___reticle_6 = value;
		Il2CppCodeGenWriteBarrier(&___reticle_6, value);
	}

	inline static int32_t get_offset_of_cooldownCounter_7() { return static_cast<int32_t>(offsetof(CardboardControl_t480265927, ___cooldownCounter_7)); }
	inline Dictionary_2_t817370046 * get_cooldownCounter_7() const { return ___cooldownCounter_7; }
	inline Dictionary_2_t817370046 ** get_address_of_cooldownCounter_7() { return &___cooldownCounter_7; }
	inline void set_cooldownCounter_7(Dictionary_2_t817370046 * value)
	{
		___cooldownCounter_7 = value;
		Il2CppCodeGenWriteBarrier(&___cooldownCounter_7, value);
	}

	inline static int32_t get_offset_of_eventCooldown_8() { return static_cast<int32_t>(offsetof(CardboardControl_t480265927, ___eventCooldown_8)); }
	inline float get_eventCooldown_8() const { return ___eventCooldown_8; }
	inline float* get_address_of_eventCooldown_8() { return &___eventCooldown_8; }
	inline void set_eventCooldown_8(float value)
	{
		___eventCooldown_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
