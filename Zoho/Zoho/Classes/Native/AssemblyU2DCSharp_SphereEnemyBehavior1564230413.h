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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SphereEnemyBehavior
struct  SphereEnemyBehavior_t1564230413  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject SphereEnemyBehavior::pointDisplay
	GameObject_t3674682005 * ___pointDisplay_2;
	// System.Single SphereEnemyBehavior::speed
	float ___speed_3;
	// UnityEngine.GameObject SphereEnemyBehavior::target
	GameObject_t3674682005 * ___target_4;
	// System.Int32 SphereEnemyBehavior::damage
	int32_t ___damage_5;
	// System.Int32 SphereEnemyBehavior::points
	int32_t ___points_6;
	// System.String SphereEnemyBehavior::type
	String_t* ___type_7;

public:
	inline static int32_t get_offset_of_pointDisplay_2() { return static_cast<int32_t>(offsetof(SphereEnemyBehavior_t1564230413, ___pointDisplay_2)); }
	inline GameObject_t3674682005 * get_pointDisplay_2() const { return ___pointDisplay_2; }
	inline GameObject_t3674682005 ** get_address_of_pointDisplay_2() { return &___pointDisplay_2; }
	inline void set_pointDisplay_2(GameObject_t3674682005 * value)
	{
		___pointDisplay_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointDisplay_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(SphereEnemyBehavior_t1564230413, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(SphereEnemyBehavior_t1564230413, ___target_4)); }
	inline GameObject_t3674682005 * get_target_4() const { return ___target_4; }
	inline GameObject_t3674682005 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_t3674682005 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_damage_5() { return static_cast<int32_t>(offsetof(SphereEnemyBehavior_t1564230413, ___damage_5)); }
	inline int32_t get_damage_5() const { return ___damage_5; }
	inline int32_t* get_address_of_damage_5() { return &___damage_5; }
	inline void set_damage_5(int32_t value)
	{
		___damage_5 = value;
	}

	inline static int32_t get_offset_of_points_6() { return static_cast<int32_t>(offsetof(SphereEnemyBehavior_t1564230413, ___points_6)); }
	inline int32_t get_points_6() const { return ___points_6; }
	inline int32_t* get_address_of_points_6() { return &___points_6; }
	inline void set_points_6(int32_t value)
	{
		___points_6 = value;
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(SphereEnemyBehavior_t1564230413, ___type_7)); }
	inline String_t* get_type_7() const { return ___type_7; }
	inline String_t** get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(String_t* value)
	{
		___type_7 = value;
		Il2CppCodeGenWriteBarrier(&___type_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
