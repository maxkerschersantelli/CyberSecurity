#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t2166990872;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t666883479;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t3691088287;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t3977636627;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t3793750323;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t867596585;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22065771578.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3484314264.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C"  void Dictionary_2__ctor_m3452600328_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3452600328(__this, method) ((  void (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2__ctor_m3452600328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m4103283327_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m4103283327(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t2166990872 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m4103283327_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m2091936089_gshared (Dictionary_2_t2166990872 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m2091936089(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t2166990872 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m2091936089_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m767179844_gshared (Dictionary_2_t2166990872 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m767179844(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t2166990872 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m767179844_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m208479561_gshared (Dictionary_2_t2166990872 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m208479561(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2166990872 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2__ctor_m208479561_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2194096512_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2194096512(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2166990872 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2194096512_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1896404517_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1896404517(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2166990872 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1896404517_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3550438668_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3550438668(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2166990872 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3550438668_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m883833443_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m883833443(__this, ___key0, method) ((  void (*) (Dictionary_2_t2166990872 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m883833443_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m397824298_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m397824298(__this, method) ((  bool (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m397824298_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2233308694_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2233308694(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2233308694_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4072055022_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4072055022(__this, method) ((  bool (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4072055022_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3090356601_gshared (Dictionary_2_t2166990872 * __this, KeyValuePair_2_t2065771578  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3090356601(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t2166990872 *, KeyValuePair_2_t2065771578 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3090356601_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3296644457_gshared (Dictionary_2_t2166990872 * __this, KeyValuePair_2_t2065771578  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3296644457(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2166990872 *, KeyValuePair_2_t2065771578 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3296644457_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3617848605_gshared (Dictionary_2_t2166990872 * __this, KeyValuePair_2U5BU5D_t3691088287* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3617848605(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2166990872 *, KeyValuePair_2U5BU5D_t3691088287*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3617848605_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1090730702_gshared (Dictionary_2_t2166990872 * __this, KeyValuePair_2_t2065771578  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1090730702(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2166990872 *, KeyValuePair_2_t2065771578 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1090730702_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m3485161020_gshared (Dictionary_2_t2166990872 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3485161020(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2166990872 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m3485161020_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m418503479_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m418503479(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m418503479_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1245766132_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1245766132(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1245766132_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1993490127_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1993490127(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1993490127_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3850601328_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m3850601328(__this, method) ((  int32_t (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2_get_Count_m3850601328_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C"  float Dictionary_2_get_Item_m381614843_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m381614843(__this, ___key0, method) ((  float (*) (Dictionary_2_t2166990872 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m381614843_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1211762632_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m1211762632(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2166990872 *, Il2CppObject *, float, const MethodInfo*))Dictionary_2_set_Item_m1211762632_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m201004928_gshared (Dictionary_2_t2166990872 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m201004928(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t2166990872 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m201004928_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3683560503_gshared (Dictionary_2_t2166990872 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3683560503(__this, ___size0, method) ((  void (*) (Dictionary_2_t2166990872 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3683560503_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m270031859_gshared (Dictionary_2_t2166990872 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m270031859(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2166990872 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m270031859_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2065771578  Dictionary_2_make_pair_m1133080895_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m1133080895(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t2065771578  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, float, const MethodInfo*))Dictionary_2_make_pair_m1133080895_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2492964567_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2492964567(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, float, const MethodInfo*))Dictionary_2_pick_key_m2492964567_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C"  float Dictionary_2_pick_value_m4082243543_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m4082243543(__this /* static, unused */, ___key0, ___value1, method) ((  float (*) (Il2CppObject * /* static, unused */, Il2CppObject *, float, const MethodInfo*))Dictionary_2_pick_value_m4082243543_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3570187388_gshared (Dictionary_2_t2166990872 * __this, KeyValuePair_2U5BU5D_t3691088287* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3570187388(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2166990872 *, KeyValuePair_2U5BU5D_t3691088287*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3570187388_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C"  void Dictionary_2_Resize_m4009191728_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m4009191728(__this, method) ((  void (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2_Resize_m4009191728_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3696770477_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m3696770477(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2166990872 *, Il2CppObject *, float, const MethodInfo*))Dictionary_2_Add_m3696770477_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C"  void Dictionary_2_Clear_m858733619_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m858733619(__this, method) ((  void (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2_Clear_m858733619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3659074905_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3659074905(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2166990872 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m3659074905_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3591113945_gshared (Dictionary_2_t2166990872 * __this, float ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3591113945(__this, ___value0, method) ((  bool (*) (Dictionary_2_t2166990872 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m3591113945_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m4215083942_gshared (Dictionary_2_t2166990872 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m4215083942(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2166990872 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2_GetObjectData_m4215083942_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3184786046_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3184786046(__this, ___sender0, method) ((  void (*) (Dictionary_2_t2166990872 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3184786046_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1720219639_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m1720219639(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2166990872 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m1720219639_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3323133106_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___key0, float* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3323133106(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t2166990872 *, Il2CppObject *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m3323133106_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
extern "C"  KeyCollection_t3793750323 * Dictionary_2_get_Keys_m630862861_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m630862861(__this, method) ((  KeyCollection_t3793750323 * (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2_get_Keys_m630862861_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C"  ValueCollection_t867596585 * Dictionary_2_get_Values_m1635102029_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1635102029(__this, method) ((  ValueCollection_t867596585 * (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2_get_Values_m1635102029_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m1942823474_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1942823474(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2166990872 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m1942823474_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C"  float Dictionary_2_ToTValue_m2394557682_gshared (Dictionary_2_t2166990872 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2394557682(__this, ___value0, method) ((  float (*) (Dictionary_2_t2166990872 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m2394557682_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1831759322_gshared (Dictionary_2_t2166990872 * __this, KeyValuePair_2_t2065771578  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1831759322(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t2166990872 *, KeyValuePair_2_t2065771578 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1831759322_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C"  Enumerator_t3484314264  Dictionary_2_GetEnumerator_m1179201549_gshared (Dictionary_2_t2166990872 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1179201549(__this, method) ((  Enumerator_t3484314264  (*) (Dictionary_2_t2166990872 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1179201549_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t1751606614  Dictionary_2_U3CCopyToU3Em__0_m771267612_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m771267612(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t1751606614  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m771267612_gshared)(__this /* static, unused */, ___key0, ___value1, method)
