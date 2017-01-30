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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletBehavior
struct  BulletBehavior_t979510676  : public MonoBehaviour_t667441552
{
public:
	// System.Single BulletBehavior::bulletSpeed
	float ___bulletSpeed_2;
	// System.Single BulletBehavior::bulletLife
	float ___bulletLife_3;
	// UnityEngine.GameObject BulletBehavior::levelController
	GameObject_t3674682005 * ___levelController_4;

public:
	inline static int32_t get_offset_of_bulletSpeed_2() { return static_cast<int32_t>(offsetof(BulletBehavior_t979510676, ___bulletSpeed_2)); }
	inline float get_bulletSpeed_2() const { return ___bulletSpeed_2; }
	inline float* get_address_of_bulletSpeed_2() { return &___bulletSpeed_2; }
	inline void set_bulletSpeed_2(float value)
	{
		___bulletSpeed_2 = value;
	}

	inline static int32_t get_offset_of_bulletLife_3() { return static_cast<int32_t>(offsetof(BulletBehavior_t979510676, ___bulletLife_3)); }
	inline float get_bulletLife_3() const { return ___bulletLife_3; }
	inline float* get_address_of_bulletLife_3() { return &___bulletLife_3; }
	inline void set_bulletLife_3(float value)
	{
		___bulletLife_3 = value;
	}

	inline static int32_t get_offset_of_levelController_4() { return static_cast<int32_t>(offsetof(BulletBehavior_t979510676, ___levelController_4)); }
	inline GameObject_t3674682005 * get_levelController_4() const { return ___levelController_4; }
	inline GameObject_t3674682005 ** get_address_of_levelController_4() { return &___levelController_4; }
	inline void set_levelController_4(GameObject_t3674682005 * value)
	{
		___levelController_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelController_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
