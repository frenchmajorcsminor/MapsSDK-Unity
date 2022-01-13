#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"


// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.Runtime.Serialization.MemberHolder>
struct IEqualityComparer_1_t33A58346F7FA84C153DA0C4B167EE21284B2C96A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.Geospatial.TileId>
struct IEqualityComparer_1_t7189B454CE2E34F0E360D6B85C1CC1FD7702CEEF;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<=aBD=`1<=aa4=>>
struct Segment_t25679067B1D01FECB3389CB5971DC48C752D8C27;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<=aBD=`1<=aa5=>>
struct Segment_t3958F3ED7C0C504E9CA9E20DD07A7589387DC403;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<=aBD=`1<Microsoft.Maps.Unity.TextureTile>>
struct Segment_t2E8DC195F9E7F1E56E969345B1EB3D0512705D9E;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Int32,System.Collections.Generic.Dictionary`2<=aaB6=,System.Int32>>
struct Tables_tC9E47BAAE0649CEE3169B279F7C88D7DE3EAC574;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,System.Object>
struct Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<Microsoft.Geospatial.TileId,System.Nullable`1<=aBA=>>
struct Tables_t2484D549429E072EFAFB0ACED864EECEE6289AF2;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<Microsoft.Geospatial.TileId,System.Boolean>
struct Tables_tDE82EA556423759E5561AD72B86C0AB5C13D0E74;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<Microsoft.Geospatial.TileId,System.Byte>
struct Tables_t8C3494DE58CEDBE55DBE0A3E8B240414D31E457B;

struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C;
struct IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct NOVTABLE IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Object>
struct NOVTABLE IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mC226A587D3EB776EBAAF655FFB36C67B1A315D65(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mEEF9E99289AFB12AE3EA4C207B17A8F0052B66AE(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mD49CF5C044925DD6600120A2307BBF30958B4202(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m70A333EC79569FEF37E249F09CF4EA8483414F97(IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___first0, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Object>
struct NOVTABLE IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40(IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205(Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};

// System.Object


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<=aaB6=,System.Int32>>
struct ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tC9E47BAAE0649CEE3169B279F7C88D7DE3EAC574 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB, ____tables_0)); }
	inline Tables_tC9E47BAAE0649CEE3169B279F7C88D7DE3EAC574 * get__tables_0() const { return ____tables_0; }
	inline Tables_tC9E47BAAE0649CEE3169B279F7C88D7DE3EAC574 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tC9E47BAAE0649CEE3169B279F7C88D7DE3EAC574 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_6;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_6() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB_StaticFields, ___s_isValueWriteAtomic_6)); }
	inline bool get_s_isValueWriteAtomic_6() const { return ___s_isValueWriteAtomic_6; }
	inline bool* get_address_of_s_isValueWriteAtomic_6() { return &___s_isValueWriteAtomic_6; }
	inline void set_s_isValueWriteAtomic_6(bool value)
	{
		___s_isValueWriteAtomic_6 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165, ____tables_0)); }
	inline Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4 * get__tables_0() const { return ____tables_0; }
	inline Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_6;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_6() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_StaticFields, ___s_isValueWriteAtomic_6)); }
	inline bool get_s_isValueWriteAtomic_6() const { return ___s_isValueWriteAtomic_6; }
	inline bool* get_address_of_s_isValueWriteAtomic_6() { return &___s_isValueWriteAtomic_6; }
	inline void set_s_isValueWriteAtomic_6(bool value)
	{
		___s_isValueWriteAtomic_6 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Object>
struct ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6, ____tables_0)); }
	inline Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187 * get__tables_0() const { return ____tables_0; }
	inline Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_6;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_6() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_StaticFields, ___s_isValueWriteAtomic_6)); }
	inline bool get_s_isValueWriteAtomic_6() const { return ___s_isValueWriteAtomic_6; }
	inline bool* get_address_of_s_isValueWriteAtomic_6() { return &___s_isValueWriteAtomic_6; }
	inline void set_s_isValueWriteAtomic_6(bool value)
	{
		___s_isValueWriteAtomic_6 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<Microsoft.Geospatial.TileId,System.Nullable`1<=aBA=>>
struct ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t2484D549429E072EFAFB0ACED864EECEE6289AF2 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844, ____tables_0)); }
	inline Tables_t2484D549429E072EFAFB0ACED864EECEE6289AF2 * get__tables_0() const { return ____tables_0; }
	inline Tables_t2484D549429E072EFAFB0ACED864EECEE6289AF2 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t2484D549429E072EFAFB0ACED864EECEE6289AF2 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_6;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_6() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844_StaticFields, ___s_isValueWriteAtomic_6)); }
	inline bool get_s_isValueWriteAtomic_6() const { return ___s_isValueWriteAtomic_6; }
	inline bool* get_address_of_s_isValueWriteAtomic_6() { return &___s_isValueWriteAtomic_6; }
	inline void set_s_isValueWriteAtomic_6(bool value)
	{
		___s_isValueWriteAtomic_6 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<Microsoft.Geospatial.TileId,System.Boolean>
struct ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tDE82EA556423759E5561AD72B86C0AB5C13D0E74 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959, ____tables_0)); }
	inline Tables_tDE82EA556423759E5561AD72B86C0AB5C13D0E74 * get__tables_0() const { return ____tables_0; }
	inline Tables_tDE82EA556423759E5561AD72B86C0AB5C13D0E74 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tDE82EA556423759E5561AD72B86C0AB5C13D0E74 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_6;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_6() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959_StaticFields, ___s_isValueWriteAtomic_6)); }
	inline bool get_s_isValueWriteAtomic_6() const { return ___s_isValueWriteAtomic_6; }
	inline bool* get_address_of_s_isValueWriteAtomic_6() { return &___s_isValueWriteAtomic_6; }
	inline void set_s_isValueWriteAtomic_6(bool value)
	{
		___s_isValueWriteAtomic_6 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<Microsoft.Geospatial.TileId,System.Byte>
struct ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t8C3494DE58CEDBE55DBE0A3E8B240414D31E457B * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0, ____tables_0)); }
	inline Tables_t8C3494DE58CEDBE55DBE0A3E8B240414D31E457B * get__tables_0() const { return ____tables_0; }
	inline Tables_t8C3494DE58CEDBE55DBE0A3E8B240414D31E457B ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t8C3494DE58CEDBE55DBE0A3E8B240414D31E457B * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_6;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_6() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0_StaticFields, ___s_isValueWriteAtomic_6)); }
	inline bool get_s_isValueWriteAtomic_6() const { return ___s_isValueWriteAtomic_6; }
	inline bool* get_address_of_s_isValueWriteAtomic_6() { return &___s_isValueWriteAtomic_6; }
	inline void set_s_isValueWriteAtomic_6(bool value)
	{
		___s_isValueWriteAtomic_6 = value;
	}
};


// System.Collections.Concurrent.ConcurrentQueue`1<=aBD=`1<=aa4=>>
struct ConcurrentQueue_1_t0CE1638B8C59F234A5132A739E5A96C2C383EFF7  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t25679067B1D01FECB3389CB5971DC48C752D8C27 * ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t25679067B1D01FECB3389CB5971DC48C752D8C27 * ____head_4;

public:
	inline static int32_t get_offset_of__crossSegmentLock_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t0CE1638B8C59F234A5132A739E5A96C2C383EFF7, ____crossSegmentLock_2)); }
	inline RuntimeObject * get__crossSegmentLock_2() const { return ____crossSegmentLock_2; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_2() { return &____crossSegmentLock_2; }
	inline void set__crossSegmentLock_2(RuntimeObject * value)
	{
		____crossSegmentLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t0CE1638B8C59F234A5132A739E5A96C2C383EFF7, ____tail_3)); }
	inline Segment_t25679067B1D01FECB3389CB5971DC48C752D8C27 * get__tail_3() const { return ____tail_3; }
	inline Segment_t25679067B1D01FECB3389CB5971DC48C752D8C27 ** get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(Segment_t25679067B1D01FECB3389CB5971DC48C752D8C27 * value)
	{
		____tail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_3), (void*)value);
	}

	inline static int32_t get_offset_of__head_4() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t0CE1638B8C59F234A5132A739E5A96C2C383EFF7, ____head_4)); }
	inline Segment_t25679067B1D01FECB3389CB5971DC48C752D8C27 * get__head_4() const { return ____head_4; }
	inline Segment_t25679067B1D01FECB3389CB5971DC48C752D8C27 ** get_address_of__head_4() { return &____head_4; }
	inline void set__head_4(Segment_t25679067B1D01FECB3389CB5971DC48C752D8C27 * value)
	{
		____head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_4), (void*)value);
	}
};


// System.Collections.Concurrent.ConcurrentQueue`1<=aBD=`1<=aa5=>>
struct ConcurrentQueue_1_t71A5F6406DDD1C36DD7E76EDDC6A5781BF02234F  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t3958F3ED7C0C504E9CA9E20DD07A7589387DC403 * ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t3958F3ED7C0C504E9CA9E20DD07A7589387DC403 * ____head_4;

public:
	inline static int32_t get_offset_of__crossSegmentLock_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t71A5F6406DDD1C36DD7E76EDDC6A5781BF02234F, ____crossSegmentLock_2)); }
	inline RuntimeObject * get__crossSegmentLock_2() const { return ____crossSegmentLock_2; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_2() { return &____crossSegmentLock_2; }
	inline void set__crossSegmentLock_2(RuntimeObject * value)
	{
		____crossSegmentLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t71A5F6406DDD1C36DD7E76EDDC6A5781BF02234F, ____tail_3)); }
	inline Segment_t3958F3ED7C0C504E9CA9E20DD07A7589387DC403 * get__tail_3() const { return ____tail_3; }
	inline Segment_t3958F3ED7C0C504E9CA9E20DD07A7589387DC403 ** get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(Segment_t3958F3ED7C0C504E9CA9E20DD07A7589387DC403 * value)
	{
		____tail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_3), (void*)value);
	}

	inline static int32_t get_offset_of__head_4() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t71A5F6406DDD1C36DD7E76EDDC6A5781BF02234F, ____head_4)); }
	inline Segment_t3958F3ED7C0C504E9CA9E20DD07A7589387DC403 * get__head_4() const { return ____head_4; }
	inline Segment_t3958F3ED7C0C504E9CA9E20DD07A7589387DC403 ** get_address_of__head_4() { return &____head_4; }
	inline void set__head_4(Segment_t3958F3ED7C0C504E9CA9E20DD07A7589387DC403 * value)
	{
		____head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_4), (void*)value);
	}
};


// System.Collections.Concurrent.ConcurrentQueue`1<=aBD=`1<Microsoft.Maps.Unity.TextureTile>>
struct ConcurrentQueue_1_tFEB553E7A6A3A6C88D5DE0BAE004A4328709600B  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t2E8DC195F9E7F1E56E969345B1EB3D0512705D9E * ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t2E8DC195F9E7F1E56E969345B1EB3D0512705D9E * ____head_4;

public:
	inline static int32_t get_offset_of__crossSegmentLock_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tFEB553E7A6A3A6C88D5DE0BAE004A4328709600B, ____crossSegmentLock_2)); }
	inline RuntimeObject * get__crossSegmentLock_2() const { return ____crossSegmentLock_2; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_2() { return &____crossSegmentLock_2; }
	inline void set__crossSegmentLock_2(RuntimeObject * value)
	{
		____crossSegmentLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tFEB553E7A6A3A6C88D5DE0BAE004A4328709600B, ____tail_3)); }
	inline Segment_t2E8DC195F9E7F1E56E969345B1EB3D0512705D9E * get__tail_3() const { return ____tail_3; }
	inline Segment_t2E8DC195F9E7F1E56E969345B1EB3D0512705D9E ** get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(Segment_t2E8DC195F9E7F1E56E969345B1EB3D0512705D9E * value)
	{
		____tail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_3), (void*)value);
	}

	inline static int32_t get_offset_of__head_4() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tFEB553E7A6A3A6C88D5DE0BAE004A4328709600B, ____head_4)); }
	inline Segment_t2E8DC195F9E7F1E56E969345B1EB3D0512705D9E * get__head_4() const { return ____head_4; }
	inline Segment_t2E8DC195F9E7F1E56E969345B1EB3D0512705D9E ** get_address_of__head_4() { return &____head_4; }
	inline void set__head_4(Segment_t2E8DC195F9E7F1E56E969345B1EB3D0512705D9E * value)
	{
		____head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0);
il2cpp_hresult_t IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mC226A587D3EB776EBAAF655FFB36C67B1A315D65_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mEEF9E99289AFB12AE3EA4C207B17A8F0052B66AE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mD49CF5C044925DD6600120A2307BBF30958B4202_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m70A333EC79569FEF37E249F09CF4EA8483414F97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___first0, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___second1);



// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<=aaB6=,System.Int32>>
struct ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t96B5C1A1696D707C645B9D5E5BF3B872ACD955EB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Object>
struct ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper>, IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B, IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2
{
	inline ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B::IID;
		interfaceIds[1] = IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40(IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205(Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, ___value1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371(Il2CppHString ___key0) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mC226A587D3EB776EBAAF655FFB36C67B1A315D65(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mC226A587D3EB776EBAAF655FFB36C67B1A315D65_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mEEF9E99289AFB12AE3EA4C207B17A8F0052B66AE(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mEEF9E99289AFB12AE3EA4C207B17A8F0052B66AE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mD49CF5C044925DD6600120A2307BBF30958B4202(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mD49CF5C044925DD6600120A2307BBF30958B4202_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m70A333EC79569FEF37E249F09CF4EA8483414F97(IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___first0, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___second1) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m70A333EC79569FEF37E249F09CF4EA8483414F97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___first0, ___second1);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<Microsoft.Geospatial.TileId,System.Nullable`1<=aBA=>>
struct ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tD25A3243FA8FC679DE3D382C04BAD6A4AEEA6844_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<Microsoft.Geospatial.TileId,System.Boolean>
struct ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t354C7F4EED0FC98DB7752C0251A3622ED91BD959_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<Microsoft.Geospatial.TileId,System.Byte>
struct ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t39CAB334B67B18CD554B8092084D118F30C1CDF0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentQueue`1<=aBD=`1<=aa4=>>
struct ConcurrentQueue_1_t0CE1638B8C59F234A5132A739E5A96C2C383EFF7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentQueue_1_t0CE1638B8C59F234A5132A739E5A96C2C383EFF7_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentQueue_1_t0CE1638B8C59F234A5132A739E5A96C2C383EFF7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentQueue_1_t0CE1638B8C59F234A5132A739E5A96C2C383EFF7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentQueue_1_t0CE1638B8C59F234A5132A739E5A96C2C383EFF7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentQueue_1_t0CE1638B8C59F234A5132A739E5A96C2C383EFF7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentQueue_1_t0CE1638B8C59F234A5132A739E5A96C2C383EFF7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentQueue`1<=aBD=`1<=aa5=>>
struct ConcurrentQueue_1_t71A5F6406DDD1C36DD7E76EDDC6A5781BF02234F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentQueue_1_t71A5F6406DDD1C36DD7E76EDDC6A5781BF02234F_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentQueue_1_t71A5F6406DDD1C36DD7E76EDDC6A5781BF02234F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentQueue_1_t71A5F6406DDD1C36DD7E76EDDC6A5781BF02234F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentQueue_1_t71A5F6406DDD1C36DD7E76EDDC6A5781BF02234F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentQueue_1_t71A5F6406DDD1C36DD7E76EDDC6A5781BF02234F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentQueue_1_t71A5F6406DDD1C36DD7E76EDDC6A5781BF02234F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentQueue`1<=aBD=`1<Microsoft.Maps.Unity.TextureTile>>
struct ConcurrentQueue_1_tFEB553E7A6A3A6C88D5DE0BAE004A4328709600B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentQueue_1_tFEB553E7A6A3A6C88D5DE0BAE004A4328709600B_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentQueue_1_tFEB553E7A6A3A6C88D5DE0BAE004A4328709600B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentQueue_1_tFEB553E7A6A3A6C88D5DE0BAE004A4328709600B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentQueue_1_tFEB553E7A6A3A6C88D5DE0BAE004A4328709600B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentQueue_1_tFEB553E7A6A3A6C88D5DE0BAE004A4328709600B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentQueue_1_tFEB553E7A6A3A6C88D5DE0BAE004A4328709600B_ComCallableWrapper(obj));
}
