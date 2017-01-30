#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ParsedMagnetData/MagnetMoment>
struct List_1_t3102422404;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_ParsedMagnetData_MagnetWindowSta3440928333.h"
#include "AssemblyU2DCSharp_ParsedMagnetData_TriggerState1325291107.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParsedMagnetData
struct  ParsedMagnetData_t1462532421  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<ParsedMagnetData/MagnetMoment> ParsedMagnetData::magnetWindow
	List_1_t3102422404 * ___magnetWindow_0;
	// ParsedMagnetData/MagnetWindowState ParsedMagnetData::currentMagnetWindow
	MagnetWindowState_t3440928333  ___currentMagnetWindow_1;
	// System.Single ParsedMagnetData::MAX_WINDOW_SECONDS
	float ___MAX_WINDOW_SECONDS_2;
	// System.Single ParsedMagnetData::MAGNET_RATIO_MIN_THRESHOLD
	float ___MAGNET_RATIO_MIN_THRESHOLD_3;
	// System.Single ParsedMagnetData::MAGNET_RATIO_MAX_THRESHOLD
	float ___MAGNET_RATIO_MAX_THRESHOLD_4;
	// System.Single ParsedMagnetData::MAGNET_MAGNITUDE_THRESHOLD
	float ___MAGNET_MAGNITUDE_THRESHOLD_5;
	// System.Single ParsedMagnetData::STABLE_RATIO_THRESHOLD
	float ___STABLE_RATIO_THRESHOLD_6;
	// System.Single ParsedMagnetData::STABLE_DELTA_THRESHOLD
	float ___STABLE_DELTA_THRESHOLD_7;
	// System.Single ParsedMagnetData::windowLength
	float ___windowLength_8;
	// ParsedMagnetData/TriggerState ParsedMagnetData::triggerState
	int32_t ___triggerState_9;
	// System.Boolean ParsedMagnetData::isDown
	bool ___isDown_10;
	// System.Boolean ParsedMagnetData::isStable
	bool ___isStable_11;

public:
	inline static int32_t get_offset_of_magnetWindow_0() { return static_cast<int32_t>(offsetof(ParsedMagnetData_t1462532421, ___magnetWindow_0)); }
	inline List_1_t3102422404 * get_magnetWindow_0() const { return ___magnetWindow_0; }
	inline List_1_t3102422404 ** get_address_of_magnetWindow_0() { return &___magnetWindow_0; }
	inline void set_magnetWindow_0(List_1_t3102422404 * value)
	{
		___magnetWindow_0 = value;
		Il2CppCodeGenWriteBarrier(&___magnetWindow_0, value);
	}

	inline static int32_t get_offset_of_currentMagnetWindow_1() { return static_cast<int32_t>(offsetof(ParsedMagnetData_t1462532421, ___currentMagnetWindow_1)); }
	inline MagnetWindowState_t3440928333  get_currentMagnetWindow_1() const { return ___currentMagnetWindow_1; }
	inline MagnetWindowState_t3440928333 * get_address_of_currentMagnetWindow_1() { return &___currentMagnetWindow_1; }
	inline void set_currentMagnetWindow_1(MagnetWindowState_t3440928333  value)
	{
		___currentMagnetWindow_1 = value;
	}

	inline static int32_t get_offset_of_MAX_WINDOW_SECONDS_2() { return static_cast<int32_t>(offsetof(ParsedMagnetData_t1462532421, ___MAX_WINDOW_SECONDS_2)); }
	inline float get_MAX_WINDOW_SECONDS_2() const { return ___MAX_WINDOW_SECONDS_2; }
	inline float* get_address_of_MAX_WINDOW_SECONDS_2() { return &___MAX_WINDOW_SECONDS_2; }
	inline void set_MAX_WINDOW_SECONDS_2(float value)
	{
		___MAX_WINDOW_SECONDS_2 = value;
	}

	inline static int32_t get_offset_of_MAGNET_RATIO_MIN_THRESHOLD_3() { return static_cast<int32_t>(offsetof(ParsedMagnetData_t1462532421, ___MAGNET_RATIO_MIN_THRESHOLD_3)); }
	inline float get_MAGNET_RATIO_MIN_THRESHOLD_3() const { return ___MAGNET_RATIO_MIN_THRESHOLD_3; }
	inline float* get_address_of_MAGNET_RATIO_MIN_THRESHOLD_3() { return &___MAGNET_RATIO_MIN_THRESHOLD_3; }
	inline void set_MAGNET_RATIO_MIN_THRESHOLD_3(float value)
	{
		___MAGNET_RATIO_MIN_THRESHOLD_3 = value;
	}

	inline static int32_t get_offset_of_MAGNET_RATIO_MAX_THRESHOLD_4() { return static_cast<int32_t>(offsetof(ParsedMagnetData_t1462532421, ___MAGNET_RATIO_MAX_THRESHOLD_4)); }
	inline float get_MAGNET_RATIO_MAX_THRESHOLD_4() const { return ___MAGNET_RATIO_MAX_THRESHOLD_4; }
	inline float* get_address_of_MAGNET_RATIO_MAX_THRESHOLD_4() { return &___MAGNET_RATIO_MAX_THRESHOLD_4; }
	inline void set_MAGNET_RATIO_MAX_THRESHOLD_4(float value)
	{
		___MAGNET_RATIO_MAX_THRESHOLD_4 = value;
	}

	inline static int32_t get_offset_of_MAGNET_MAGNITUDE_THRESHOLD_5() { return static_cast<int32_t>(offsetof(ParsedMagnetData_t1462532421, ___MAGNET_MAGNITUDE_THRESHOLD_5)); }
	inline float get_MAGNET_MAGNITUDE_THRESHOLD_5() const { return ___MAGNET_MAGNITUDE_THRESHOLD_5; }
	inline float* get_address_of_MAGNET_MAGNITUDE_THRESHOLD_5() { return &___MAGNET_MAGNITUDE_THRESHOLD_5; }
	inline void set_MAGNET_MAGNITUDE_THRESHOLD_5(float value)
	{
		___MAGNET_MAGNITUDE_THRESHOLD_5 = value;
	}

	inline static int32_t get_offset_of_STABLE_RATIO_THRESHOLD_6() { return static_cast<int32_t>(offsetof(ParsedMagnetData_t1462532421, ___STABLE_RATIO_THRESHOLD_6)); }
	inline float get_STABLE_RATIO_THRESHOLD_6() const { return ___STABLE_RATIO_THRESHOLD_6; }
	inline float* get_address_of_STABLE_RATIO_THRESHOLD_6() { return &___STABLE_RATIO_THRESHOLD_6; }
	inline void set_STABLE_RATIO_THRESHOLD_6(float value)
	{
		___STABLE_RATIO_THRESHOLD_6 = value;
	}

	inline static int32_t get_offset_of_STABLE_DELTA_THRESHOLD_7() { return static_cast<int32_t>(offsetof(ParsedMagnetData_t1462532421, ___STABLE_DELTA_THRESHOLD_7)); }
	inline float get_STABLE_DELTA_THRESHOLD_7() const { return ___STABLE_DELTA_THRESHOLD_7; }
	inline float* get_address_of_STABLE_DELTA_THRESHOLD_7() { return &___STABLE_DELTA_THRESHOLD_7; }
	inline void set_STABLE_DELTA_THRESHOLD_7(float value)
	{
		___STABLE_DELTA_THRESHOLD_7 = value;
	}

	inline static int32_t get_offset_of_windowLength_8() { return static_cast<int32_t>(offsetof(ParsedMagnetData_t1462532421, ___windowLength_8)); }
	inline float get_windowLength_8() const { return ___windowLength_8; }
	inline float* get_address_of_windowLength_8() { return &___windowLength_8; }
	inline void set_windowLength_8(float value)
	{
		___windowLength_8 = value;
	}

	inline static int32_t get_offset_of_triggerState_9() { return static_cast<int32_t>(offsetof(ParsedMagnetData_t1462532421, ___triggerState_9)); }
	inline int32_t get_triggerState_9() const { return ___triggerState_9; }
	inline int32_t* get_address_of_triggerState_9() { return &___triggerState_9; }
	inline void set_triggerState_9(int32_t value)
	{
		___triggerState_9 = value;
	}

	inline static int32_t get_offset_of_isDown_10() { return static_cast<int32_t>(offsetof(ParsedMagnetData_t1462532421, ___isDown_10)); }
	inline bool get_isDown_10() const { return ___isDown_10; }
	inline bool* get_address_of_isDown_10() { return &___isDown_10; }
	inline void set_isDown_10(bool value)
	{
		___isDown_10 = value;
	}

	inline static int32_t get_offset_of_isStable_11() { return static_cast<int32_t>(offsetof(ParsedMagnetData_t1462532421, ___isStable_11)); }
	inline bool get_isStable_11() const { return ___isStable_11; }
	inline bool* get_address_of_isStable_11() { return &___isStable_11; }
	inline void set_isStable_11(bool value)
	{
		___isStable_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
