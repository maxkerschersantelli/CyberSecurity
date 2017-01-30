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
// CardboardControl
struct CardboardControl_t480265927;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovingCharacterController
struct  MovingCharacterController_t552840279  : public MonoBehaviour_t667441552
{
public:
	// System.Single MovingCharacterController::speed
	float ___speed_2;
	// System.Single MovingCharacterController::reticleMaxLength
	float ___reticleMaxLength_3;
	// UnityEngine.GameObject MovingCharacterController::laserPrefab
	GameObject_t3674682005 * ___laserPrefab_4;
	// System.Boolean MovingCharacterController::moving
	bool ___moving_6;
	// System.Single MovingCharacterController::reticleTimer
	float ___reticleTimer_7;
	// System.Boolean MovingCharacterController::evenLaser
	bool ___evenLaser_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(MovingCharacterController_t552840279, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_reticleMaxLength_3() { return static_cast<int32_t>(offsetof(MovingCharacterController_t552840279, ___reticleMaxLength_3)); }
	inline float get_reticleMaxLength_3() const { return ___reticleMaxLength_3; }
	inline float* get_address_of_reticleMaxLength_3() { return &___reticleMaxLength_3; }
	inline void set_reticleMaxLength_3(float value)
	{
		___reticleMaxLength_3 = value;
	}

	inline static int32_t get_offset_of_laserPrefab_4() { return static_cast<int32_t>(offsetof(MovingCharacterController_t552840279, ___laserPrefab_4)); }
	inline GameObject_t3674682005 * get_laserPrefab_4() const { return ___laserPrefab_4; }
	inline GameObject_t3674682005 ** get_address_of_laserPrefab_4() { return &___laserPrefab_4; }
	inline void set_laserPrefab_4(GameObject_t3674682005 * value)
	{
		___laserPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___laserPrefab_4, value);
	}

	inline static int32_t get_offset_of_moving_6() { return static_cast<int32_t>(offsetof(MovingCharacterController_t552840279, ___moving_6)); }
	inline bool get_moving_6() const { return ___moving_6; }
	inline bool* get_address_of_moving_6() { return &___moving_6; }
	inline void set_moving_6(bool value)
	{
		___moving_6 = value;
	}

	inline static int32_t get_offset_of_reticleTimer_7() { return static_cast<int32_t>(offsetof(MovingCharacterController_t552840279, ___reticleTimer_7)); }
	inline float get_reticleTimer_7() const { return ___reticleTimer_7; }
	inline float* get_address_of_reticleTimer_7() { return &___reticleTimer_7; }
	inline void set_reticleTimer_7(float value)
	{
		___reticleTimer_7 = value;
	}

	inline static int32_t get_offset_of_evenLaser_8() { return static_cast<int32_t>(offsetof(MovingCharacterController_t552840279, ___evenLaser_8)); }
	inline bool get_evenLaser_8() const { return ___evenLaser_8; }
	inline bool* get_address_of_evenLaser_8() { return &___evenLaser_8; }
	inline void set_evenLaser_8(bool value)
	{
		___evenLaser_8 = value;
	}
};

struct MovingCharacterController_t552840279_StaticFields
{
public:
	// CardboardControl MovingCharacterController::cardboard
	CardboardControl_t480265927 * ___cardboard_5;

public:
	inline static int32_t get_offset_of_cardboard_5() { return static_cast<int32_t>(offsetof(MovingCharacterController_t552840279_StaticFields, ___cardboard_5)); }
	inline CardboardControl_t480265927 * get_cardboard_5() const { return ___cardboard_5; }
	inline CardboardControl_t480265927 ** get_address_of_cardboard_5() { return &___cardboard_5; }
	inline void set_cardboard_5(CardboardControl_t480265927 * value)
	{
		___cardboard_5 = value;
		Il2CppCodeGenWriteBarrier(&___cardboard_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
