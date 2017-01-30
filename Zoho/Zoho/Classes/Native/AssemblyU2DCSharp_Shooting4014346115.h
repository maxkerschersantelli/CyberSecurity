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

// Shooting
struct  Shooting_t4014346115  : public MonoBehaviour_t667441552
{
public:
	// System.Single Shooting::shootInterval
	float ___shootInterval_2;
	// System.Boolean Shooting::canShoot
	bool ___canShoot_3;
	// UnityEngine.GameObject Shooting::bulletPrefab
	GameObject_t3674682005 * ___bulletPrefab_4;

public:
	inline static int32_t get_offset_of_shootInterval_2() { return static_cast<int32_t>(offsetof(Shooting_t4014346115, ___shootInterval_2)); }
	inline float get_shootInterval_2() const { return ___shootInterval_2; }
	inline float* get_address_of_shootInterval_2() { return &___shootInterval_2; }
	inline void set_shootInterval_2(float value)
	{
		___shootInterval_2 = value;
	}

	inline static int32_t get_offset_of_canShoot_3() { return static_cast<int32_t>(offsetof(Shooting_t4014346115, ___canShoot_3)); }
	inline bool get_canShoot_3() const { return ___canShoot_3; }
	inline bool* get_address_of_canShoot_3() { return &___canShoot_3; }
	inline void set_canShoot_3(bool value)
	{
		___canShoot_3 = value;
	}

	inline static int32_t get_offset_of_bulletPrefab_4() { return static_cast<int32_t>(offsetof(Shooting_t4014346115, ___bulletPrefab_4)); }
	inline GameObject_t3674682005 * get_bulletPrefab_4() const { return ___bulletPrefab_4; }
	inline GameObject_t3674682005 ** get_address_of_bulletPrefab_4() { return &___bulletPrefab_4; }
	inline void set_bulletPrefab_4(GameObject_t3674682005 * value)
	{
		___bulletPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_4, value);
	}
};

struct Shooting_t4014346115_StaticFields
{
public:
	// CardboardControl Shooting::cardboard
	CardboardControl_t480265927 * ___cardboard_5;

public:
	inline static int32_t get_offset_of_cardboard_5() { return static_cast<int32_t>(offsetof(Shooting_t4014346115_StaticFields, ___cardboard_5)); }
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
