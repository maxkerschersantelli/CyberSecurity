#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GreenPowerUp
struct  GreenPowerUp_t1055926813  : public MonoBehaviour_t667441552
{
public:
	// System.String GreenPowerUp::color
	String_t* ___color_2;
	// System.Single GreenPowerUp::rotationSpeed
	float ___rotationSpeed_3;
	// UnityEngine.GameObject GreenPowerUp::shieldPrefab
	GameObject_t3674682005 * ___shieldPrefab_4;

public:
	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(GreenPowerUp_t1055926813, ___color_2)); }
	inline String_t* get_color_2() const { return ___color_2; }
	inline String_t** get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(String_t* value)
	{
		___color_2 = value;
		Il2CppCodeGenWriteBarrier(&___color_2, value);
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(GreenPowerUp_t1055926813, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_shieldPrefab_4() { return static_cast<int32_t>(offsetof(GreenPowerUp_t1055926813, ___shieldPrefab_4)); }
	inline GameObject_t3674682005 * get_shieldPrefab_4() const { return ___shieldPrefab_4; }
	inline GameObject_t3674682005 ** get_address_of_shieldPrefab_4() { return &___shieldPrefab_4; }
	inline void set_shieldPrefab_4(GameObject_t3674682005 * value)
	{
		___shieldPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___shieldPrefab_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
