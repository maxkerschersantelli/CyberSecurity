#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Laser
struct  Laser_t73191083  : public MonoBehaviour_t667441552
{
public:
	// System.Single Laser::speed
	float ___speed_2;
	// System.Single Laser::timeLeft
	float ___timeLeft_3;
	// UnityEngine.Vector3 Laser::direction
	Vector3_t4282066566  ___direction_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Laser_t73191083, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_timeLeft_3() { return static_cast<int32_t>(offsetof(Laser_t73191083, ___timeLeft_3)); }
	inline float get_timeLeft_3() const { return ___timeLeft_3; }
	inline float* get_address_of_timeLeft_3() { return &___timeLeft_3; }
	inline void set_timeLeft_3(float value)
	{
		___timeLeft_3 = value;
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(Laser_t73191083, ___direction_4)); }
	inline Vector3_t4282066566  get_direction_4() const { return ___direction_4; }
	inline Vector3_t4282066566 * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector3_t4282066566  value)
	{
		___direction_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
