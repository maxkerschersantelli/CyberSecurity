#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CardboardControl
struct CardboardControl_t480265927;
// CardboardControlDelegates.CardboardControlDelegate
struct CardboardControlDelegate_t3309909616;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_DeviceOrientation1141857680.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardControlBox
struct  CardboardControlBox_t1066235268  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean CardboardControlBox::useEventCooldowns
	bool ___useEventCooldowns_3;
	// System.Boolean CardboardControlBox::vibrateOnOrientationTilt
	bool ___vibrateOnOrientationTilt_4;
	// UnityEngine.KeyCode CardboardControlBox::tiltKey
	int32_t ___tiltKey_5;
	// System.Boolean CardboardControlBox::tiltReported
	bool ___tiltReported_6;
	// CardboardControl CardboardControlBox::cardboard
	CardboardControl_t480265927 * ___cardboard_7;
	// CardboardControlDelegates.CardboardControlDelegate CardboardControlBox::OnTilt
	CardboardControlDelegate_t3309909616 * ___OnTilt_8;

public:
	inline static int32_t get_offset_of_useEventCooldowns_3() { return static_cast<int32_t>(offsetof(CardboardControlBox_t1066235268, ___useEventCooldowns_3)); }
	inline bool get_useEventCooldowns_3() const { return ___useEventCooldowns_3; }
	inline bool* get_address_of_useEventCooldowns_3() { return &___useEventCooldowns_3; }
	inline void set_useEventCooldowns_3(bool value)
	{
		___useEventCooldowns_3 = value;
	}

	inline static int32_t get_offset_of_vibrateOnOrientationTilt_4() { return static_cast<int32_t>(offsetof(CardboardControlBox_t1066235268, ___vibrateOnOrientationTilt_4)); }
	inline bool get_vibrateOnOrientationTilt_4() const { return ___vibrateOnOrientationTilt_4; }
	inline bool* get_address_of_vibrateOnOrientationTilt_4() { return &___vibrateOnOrientationTilt_4; }
	inline void set_vibrateOnOrientationTilt_4(bool value)
	{
		___vibrateOnOrientationTilt_4 = value;
	}

	inline static int32_t get_offset_of_tiltKey_5() { return static_cast<int32_t>(offsetof(CardboardControlBox_t1066235268, ___tiltKey_5)); }
	inline int32_t get_tiltKey_5() const { return ___tiltKey_5; }
	inline int32_t* get_address_of_tiltKey_5() { return &___tiltKey_5; }
	inline void set_tiltKey_5(int32_t value)
	{
		___tiltKey_5 = value;
	}

	inline static int32_t get_offset_of_tiltReported_6() { return static_cast<int32_t>(offsetof(CardboardControlBox_t1066235268, ___tiltReported_6)); }
	inline bool get_tiltReported_6() const { return ___tiltReported_6; }
	inline bool* get_address_of_tiltReported_6() { return &___tiltReported_6; }
	inline void set_tiltReported_6(bool value)
	{
		___tiltReported_6 = value;
	}

	inline static int32_t get_offset_of_cardboard_7() { return static_cast<int32_t>(offsetof(CardboardControlBox_t1066235268, ___cardboard_7)); }
	inline CardboardControl_t480265927 * get_cardboard_7() const { return ___cardboard_7; }
	inline CardboardControl_t480265927 ** get_address_of_cardboard_7() { return &___cardboard_7; }
	inline void set_cardboard_7(CardboardControl_t480265927 * value)
	{
		___cardboard_7 = value;
		Il2CppCodeGenWriteBarrier(&___cardboard_7, value);
	}

	inline static int32_t get_offset_of_OnTilt_8() { return static_cast<int32_t>(offsetof(CardboardControlBox_t1066235268, ___OnTilt_8)); }
	inline CardboardControlDelegate_t3309909616 * get_OnTilt_8() const { return ___OnTilt_8; }
	inline CardboardControlDelegate_t3309909616 ** get_address_of_OnTilt_8() { return &___OnTilt_8; }
	inline void set_OnTilt_8(CardboardControlDelegate_t3309909616 * value)
	{
		___OnTilt_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnTilt_8, value);
	}
};

struct CardboardControlBox_t1066235268_StaticFields
{
public:
	// CardboardControlDelegates.CardboardControlDelegate CardboardControlBox::<>f__am$cache6
	CardboardControlDelegate_t3309909616 * ___U3CU3Ef__amU24cache6_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> CardboardControlBox::<>f__switch$map0
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map0_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_9() { return static_cast<int32_t>(offsetof(CardboardControlBox_t1066235268_StaticFields, ___U3CU3Ef__amU24cache6_9)); }
	inline CardboardControlDelegate_t3309909616 * get_U3CU3Ef__amU24cache6_9() const { return ___U3CU3Ef__amU24cache6_9; }
	inline CardboardControlDelegate_t3309909616 ** get_address_of_U3CU3Ef__amU24cache6_9() { return &___U3CU3Ef__amU24cache6_9; }
	inline void set_U3CU3Ef__amU24cache6_9(CardboardControlDelegate_t3309909616 * value)
	{
		___U3CU3Ef__amU24cache6_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_10() { return static_cast<int32_t>(offsetof(CardboardControlBox_t1066235268_StaticFields, ___U3CU3Ef__switchU24map0_10)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map0_10() const { return ___U3CU3Ef__switchU24map0_10; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map0_10() { return &___U3CU3Ef__switchU24map0_10; }
	inline void set_U3CU3Ef__switchU24map0_10(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
