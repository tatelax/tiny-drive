#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210;
// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_oldName_0), (void*)value);
	}
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};


// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltip_0), (void*)value);
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042 (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * __this, String_t* ___tooltip0, const RuntimeMethod* method);
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * __this, String_t* ___oldName0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000 (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * __this, float ___min0, float ___max1, const RuntimeMethod* method);
static void NWH_Common_Cameras_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[1];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[2];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
}
static void CameraChanger_t5A43F5B4E90599D6E1F769EC260D5C02A12A4B14_CustomAttributesCacheGenerator_autoFindCameras(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x49\x66\x20\x74\x72\x75\x65\x20\x76\x65\x68\x69\x63\x6C\x65\x43\x61\x6D\x65\x72\x61\x73\x20\x6C\x69\x73\x74\x20\x77\x69\x6C\x6C\x20\x62\x65\x20\x66\x69\x6C\x6C\x65\x64\x20\x74\x68\x72\x6F\x75\x67\x68\x20\x63\x61\x6D\x65\x72\x61\x54\x61\x67\x2E"), NULL);
	}
}
static void CameraChanger_t5A43F5B4E90599D6E1F769EC260D5C02A12A4B14_CustomAttributesCacheGenerator_currentCameraIndex(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x49\x6E\x64\x65\x78\x20\x6F\x66\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x66\x72\x6F\x6D\x20\x76\x65\x68\x69\x63\x6C\x65\x20\x63\x61\x6D\x65\x72\x61\x73\x20\x6C\x69\x73\x74\x20\x74\x68\x61\x74\x20\x77\x69\x6C\x6C\x20\x62\x65\x20\x61\x63\x74\x69\x76\x65\x20\x66\x69\x72\x73\x74\x2E"), NULL);
	}
}
static void CameraChanger_t5A43F5B4E90599D6E1F769EC260D5C02A12A4B14_CustomAttributesCacheGenerator_cameras(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x76\x65\x68\x69\x63\x6C\x65\x43\x61\x6D\x65\x72\x61\x73"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x69\x73\x74\x20\x6F\x66\x20\x63\x61\x6D\x65\x72\x61\x73\x20\x74\x68\x61\x74\x20\x74\x68\x65\x20\x63\x68\x61\x6E\x67\x65\x72\x20\x77\x69\x6C\x6C\x20\x63\x79\x63\x6C\x65\x20\x74\x68\x72\x6F\x75\x67\x68\x2E\x20\x4C\x65\x61\x76\x65\x20\x65\x6D\x70\x74\x79\x20\x69\x66\x20\x79\x6F\x75\x20\x77\x61\x6E\x74\x20\x63\x61\x6D\x65\x72\x61\x73\x20\x74\x6F\x20\x62\x65\x20\x61\x75\x74\x6F\x6D\x61\x74\x69\x63\x61\x6C\x6C\x79\x20\x64\x65\x74\x65\x63\x74\x65\x64\x2E\x20\x54\x6F\x20\x62\x65\x20\x64\x65\x74\x65\x63\x74\x65\x64\x20\x63\x61\x6D\x65\x72\x61\x73\x20\x6E\x65\x65\x64\x20\x74\x6F\x20\x68\x61\x76\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x74\x61\x67\x20\x61\x6E\x64\x20\x62\x65\x20\x63\x68\x69\x6C\x64\x72\x65\x6E\x20\x6F\x66\x20\x74\x68\x65\x20\x6F\x62\x6A\x65\x63\x74\x20\x74\x68\x69\x73\x20\x73\x63\x72\x69\x70\x74\x20\x69\x73\x20\x61\x74\x74\x61\x63\x68\x65\x64\x20\x74\x6F\x2E"), NULL);
	}
}
static void U3CU3Ec_tA12A066F53A3329905B7EBF95FC787CBBA59C8C3_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CameraFollow_t27D30BF98D1D0F32C414E67847C57D406B5C5615_CustomAttributesCacheGenerator_distance(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 30.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x44\x69\x73\x74\x61\x6E\x63\x65\x20\x61\x74\x20\x77\x68\x69\x63\x68\x20\x63\x61\x6D\x65\x72\x61\x20\x77\x69\x6C\x6C\x20\x66\x6F\x6C\x6C\x6F\x77\x2E"), NULL);
	}
}
static void CameraFollow_t27D30BF98D1D0F32C414E67847C57D406B5C5615_CustomAttributesCacheGenerator_height(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x48\x65\x69\x67\x68\x74\x20\x69\x6E\x20\x72\x65\x6C\x61\x74\x69\x6F\x6E\x20\x74\x6F\x20\x74\x68\x65\x20\x74\x61\x72\x67\x65\x74\x20\x61\x74\x20\x77\x68\x69\x63\x68\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x77\x69\x6C\x6C\x20\x66\x6F\x6C\x6C\x6F\x77\x2E"), NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 10.0f, NULL);
	}
}
static void CameraFollow_t27D30BF98D1D0F32C414E67847C57D406B5C5615_CustomAttributesCacheGenerator_smoothing(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 1.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x50\x6F\x73\x69\x74\x69\x6F\x6E\x61\x6C\x20\x61\x6E\x64\x20\x72\x6F\x74\x61\x74\x69\x6F\x6E\x61\x6C\x20\x73\x6D\x6F\x6F\x74\x68\x69\x6E\x67\x20\x6F\x66\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x2E"), NULL);
	}
}
static void CameraFollow_t27D30BF98D1D0F32C414E67847C57D406B5C5615_CustomAttributesCacheGenerator_targetForwardOffset(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, -10.0f, 10.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x4F\x66\x66\x73\x65\x74\x20\x69\x6E\x20\x74\x68\x65\x20\x66\x6F\x72\x77\x61\x72\x64\x20\x64\x69\x72\x65\x63\x74\x69\x6F\x6E\x20\x66\x72\x6F\x6D\x20\x74\x68\x65\x20\x74\x61\x72\x67\x65\x74\x2E\x20\x55\x73\x65\x20\x74\x68\x69\x73\x20\x69\x66\x20\x79\x6F\x75\x20\x64\x6F\x20\x6E\x6F\x74\x20\x77\x61\x6E\x74\x20\x74\x6F\x20\x75\x73\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x62\x61\x69\x74\x73\x2E"), NULL);
	}
}
static void CameraFollow_t27D30BF98D1D0F32C414E67847C57D406B5C5615_CustomAttributesCacheGenerator_targetUpOffset(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, -5.0f, 5.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x4F\x66\x66\x73\x65\x74\x20\x69\x6E\x20\x74\x68\x65\x20\x75\x70\x20\x64\x69\x72\x65\x63\x74\x69\x6F\x6E\x20\x66\x72\x6F\x6D\x20\x74\x68\x65\x20\x74\x61\x72\x67\x65\x74\x2E\x20\x55\x73\x65\x20\x74\x68\x69\x73\x20\x69\x66\x20\x79\x6F\x75\x20\x64\x6F\x20\x6E\x6F\x74\x20\x77\x61\x6E\x74\x20\x74\x6F\x20\x75\x73\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x62\x61\x69\x74\x73\x2E"), NULL);
	}
}
static void CameraInsideVehicle_t3189318EBD6998E5A609B9BF6D7758DACB66AEDB_CustomAttributesCacheGenerator_isInsideVehicle(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x49\x73\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x69\x6E\x73\x69\x64\x65\x20\x76\x65\x68\x69\x63\x6C\x65\x3F"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_povType(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x61\x6D\x65\x72\x61\x20\x50\x4F\x56\x20\x74\x79\x70\x65\x2E\x20\x46\x69\x72\x73\x74\x20\x70\x65\x72\x73\x6F\x6E\x20\x63\x61\x6D\x65\x72\x61\x20\x77\x69\x6C\x6C\x20\x69\x6E\x76\x65\x72\x74\x20\x63\x6F\x6E\x74\x72\x6F\x6C\x73\x2E\xD\xA\x5A\x6F\x6F\x6D\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x76\x61\x69\x6C\x61\x62\x6C\x65\x20\x69\x6E\x20\x31\x73\x74\x20\x70\x65\x72\x73\x6F\x6E\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_allowRotation(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x43\x61\x6E\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x62\x65\x20\x72\x6F\x74\x61\x74\x65\x64\x20\x62\x79\x20\x74\x68\x65\x20\x75\x73\x65\x72\x3F"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_allowPanning(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x43\x61\x6E\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x62\x65\x20\x70\x61\x6E\x6E\x65\x64\x20\x62\x79\x20\x74\x68\x65\x20\x75\x73\x65\x72\x3F"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_distance(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 100.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x44\x69\x73\x74\x61\x6E\x63\x65\x20\x66\x72\x6F\x6D\x20\x74\x61\x72\x67\x65\x74\x20\x61\x74\x20\x77\x68\x69\x63\x68\x20\x63\x61\x6D\x65\x72\x61\x20\x77\x69\x6C\x6C\x20\x62\x65\x20\x70\x6F\x73\x69\x74\x69\x6F\x6E\x65\x64\x2E\x20\x4D\x69\x67\x68\x74\x20\x76\x61\x72\x79\x20\x64\x65\x70\x65\x6E\x64\x69\x6E\x67\x20\x6F\x6E\x20\x73\x6D\x6F\x6F\x74\x68\x69\x6E\x67\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_followTargetPitchAndYaw(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x66\x6F\x6C\x6C\x6F\x77\x54\x61\x72\x67\x65\x74\x73\x52\x6F\x74\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x49\x66\x20\x74\x72\x75\x65\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x77\x69\x6C\x6C\x20\x72\x6F\x74\x61\x74\x65\x20\x77\x69\x74\x68\x20\x74\x68\x65\x20\x76\x65\x68\x69\x63\x6C\x65\x20\x61\x6C\x6F\x6E\x67\x20\x74\x68\x65\x20\x58\x20\x61\x6E\x64\x20\x59\x20\x61\x78\x69\x73\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_followTargetRoll(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x49\x66\x20\x74\x72\x75\x65\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x77\x69\x6C\x6C\x20\x72\x6F\x74\x61\x74\x65\x20\x77\x69\x74\x68\x20\x74\x68\x65\x20\x76\x65\x68\x69\x63\x6C\x65\x20\x61\x6C\x6F\x6E\x67\x20\x74\x68\x65\x20\x5A\x20\x61\x78\x69\x73\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_maxDistance(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 100.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x4D\x61\x78\x69\x6D\x75\x6D\x20\x64\x69\x73\x74\x61\x6E\x63\x65\x20\x74\x68\x61\x74\x20\x77\x69\x6C\x6C\x20\x62\x65\x20\x72\x65\x61\x63\x68\x65\x64\x20\x77\x68\x65\x6E\x20\x7A\x6F\x6F\x6D\x69\x6E\x67\x20\x6F\x75\x74\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_minDistance(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 100.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x4D\x69\x6E\x69\x6D\x75\x6D\x20\x64\x69\x73\x74\x61\x6E\x63\x65\x20\x74\x68\x61\x74\x20\x77\x69\x6C\x6C\x20\x62\x65\x20\x72\x65\x61\x63\x68\x65\x64\x20\x77\x68\x65\x6E\x20\x7A\x6F\x6F\x6D\x69\x6E\x67\x20\x69\x6E\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_zoomSensitivity(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 15.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x53\x65\x6E\x73\x69\x74\x69\x76\x69\x74\x79\x20\x6F\x66\x20\x74\x68\x65\x20\x6D\x69\x64\x64\x6C\x65\x20\x6D\x6F\x75\x73\x65\x20\x62\x75\x74\x74\x6F\x6E\x20\x2F\x20\x77\x68\x65\x65\x6C\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_rotationSmoothing(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x53\x6D\x6F\x6F\x74\x68\x69\x6E\x67\x20\x6F\x66\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x72\x6F\x74\x61\x74\x69\x6F\x6E\x2E"), NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 1.0f, NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_verticalMaxAngle(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, -90.0f, 90.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x4D\x61\x78\x69\x6D\x75\x6D\x20\x76\x65\x72\x74\x69\x63\x61\x6C\x20\x61\x6E\x67\x6C\x65\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x63\x61\x6E\x20\x61\x63\x68\x69\x65\x76\x65\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_verticalMinAngle(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x4D\x69\x6E\x69\x6D\x75\x6D\x20\x76\x65\x72\x74\x69\x63\x61\x6C\x20\x61\x6E\x67\x6C\x65\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x63\x61\x6E\x20\x61\x63\x68\x69\x65\x76\x65\x2E"), NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, -90.0f, 90.0f, NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_rotationSensitivity(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x53\x65\x6E\x73\x69\x74\x69\x76\x69\x74\x79\x20\x6F\x66\x20\x72\x6F\x74\x61\x74\x69\x6F\x6E\x20\x69\x6E\x70\x75\x74\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_panningSensitivity(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x53\x65\x6E\x73\x69\x74\x69\x76\x69\x74\x79\x20\x6F\x66\x20\x70\x61\x6E\x6E\x69\x6E\x67\x20\x69\x6E\x70\x75\x74\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_initXRotation(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x49\x6E\x69\x74\x69\x61\x6C\x20\x72\x6F\x74\x61\x74\x69\x6F\x6E\x20\x61\x72\x6F\x75\x6E\x64\x20\x74\x68\x65\x20\x58\x20\x61\x78\x69\x73\x20\x28\x75\x70\x2F\x64\x6F\x77\x6E\x29"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_initYRotation(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x49\x6E\x69\x74\x69\x61\x6C\x20\x72\x6F\x74\x61\x74\x69\x6F\x6E\x20\x61\x72\x6F\x75\x6E\x64\x20\x74\x68\x65\x20\x59\x20\x61\x78\x69\x73\x20\x28\x6C\x65\x66\x74\x2F\x72\x69\x67\x68\x74\x29"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_targetPositionOffset(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x4C\x6F\x6F\x6B\x20\x70\x6F\x73\x69\x74\x69\x6F\x6E\x20\x6F\x66\x66\x73\x65\x74\x20\x66\x72\x6F\x6D\x20\x74\x68\x65\x20\x74\x61\x72\x67\x65\x74\x20\x63\x65\x6E\x74\x65\x72\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_useShake(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x68\x6F\x75\x6C\x64\x20\x63\x61\x6D\x65\x72\x61\x20\x6D\x6F\x76\x65\x6D\x65\x6E\x74\x20\x6F\x6E\x20\x61\x63\x63\x65\x6C\x65\x72\x61\x74\x69\x6F\x6E\x20\x62\x65\x20\x75\x73\x65\x64\x3F"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_shakeMaxOffset(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x4D\x61\x78\x69\x6D\x75\x6D\x20\x68\x65\x61\x64\x20\x6D\x6F\x76\x65\x6D\x65\x6E\x74\x20\x66\x72\x6F\x6D\x20\x74\x68\x65\x20\x69\x6E\x69\x74\x69\x61\x6C\x20\x70\x6F\x73\x69\x74\x69\x6F\x6E\x2E"), NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 1.0f, NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_shakeIntensity(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 1.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x48\x6F\x77\x20\x6D\x75\x63\x68\x20\x77\x69\x6C\x6C\x20\x74\x68\x65\x20\x68\x65\x61\x64\x20\x6D\x6F\x76\x65\x20\x61\x72\x6F\x75\x6E\x64\x20\x66\x6F\x72\x20\x74\x68\x65\x20\x67\x69\x76\x65\x6E\x20\x67\x2D\x66\x6F\x72\x63\x65\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_shakeSmoothing(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 1.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x53\x6D\x6F\x6F\x74\x68\x69\x6E\x67\x20\x6F\x66\x20\x74\x68\x65\x20\x68\x65\x61\x64\x20\x6D\x6F\x76\x65\x6D\x65\x6E\x74\x2E"), NULL);
	}
}
static void CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_shakeAxisIntensity(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x4D\x6F\x76\x65\x6D\x65\x6E\x74\x20\x69\x6E\x74\x65\x6E\x73\x69\x74\x79\x20\x70\x65\x72\x20\x61\x78\x69\x73\x2E\x20\x53\x65\x74\x20\x74\x6F\x20\x30\x20\x74\x6F\x20\x64\x69\x73\x61\x62\x6C\x65\x20\x6D\x6F\x76\x65\x6D\x65\x6E\x74\x20\x6F\x6E\x20\x74\x68\x61\x74\x20\x61\x78\x69\x73\x20\x6F\x72\x20\x6E\x65\x67\x61\x74\x69\x76\x65\x20\x74\x6F\x20\x72\x65\x76\x65\x72\x73\x65\x20\x69\x74\x2E"), NULL);
	}
}
static void U3CU3Ec_t383E82B76A23A2AB5F92B5DEF354F5BED8F0A236_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CameraOnboard_t263BC16EE3C0AF55DB9172598F3AB8B3DA303AA8_CustomAttributesCacheGenerator_maxMovementOffset(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x61\x78\x50\x6F\x73\x69\x74\x69\x6F\x6E\x4F\x66\x66\x73\x65\x74\x4D\x61\x67\x6E\x69\x74\x75\x64\x65"), NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 1.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[2];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x4D\x61\x78\x69\x6D\x75\x6D\x20\x68\x65\x61\x64\x20\x6D\x6F\x76\x65\x6D\x65\x6E\x74\x20\x66\x72\x6F\x6D\x20\x74\x68\x65\x20\x69\x6E\x69\x74\x69\x61\x6C\x20\x70\x6F\x73\x69\x74\x69\x6F\x6E\x2E"), NULL);
	}
}
static void CameraOnboard_t263BC16EE3C0AF55DB9172598F3AB8B3DA303AA8_CustomAttributesCacheGenerator_movementIntensity(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 1.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x48\x6F\x77\x20\x6D\x75\x63\x68\x20\x77\x69\x6C\x6C\x20\x74\x68\x65\x20\x68\x65\x61\x64\x20\x6D\x6F\x76\x65\x20\x61\x72\x6F\x75\x6E\x64\x20\x66\x6F\x72\x20\x74\x68\x65\x20\x67\x69\x76\x65\x6E\x20\x67\x2D\x66\x6F\x72\x63\x65\x2E"), NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[2];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x70\x6F\x73\x69\x74\x69\x6F\x6E\x49\x6E\x74\x65\x6E\x73\x69\x74\x79"), NULL);
	}
}
static void CameraOnboard_t263BC16EE3C0AF55DB9172598F3AB8B3DA303AA8_CustomAttributesCacheGenerator_movementSmoothing(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x70\x6F\x73\x69\x74\x69\x6F\x6E\x53\x6D\x6F\x6F\x74\x68\x69\x6E\x67"), NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 1.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[2];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x53\x6D\x6F\x6F\x74\x68\x69\x6E\x67\x20\x6F\x66\x20\x74\x68\x65\x20\x68\x65\x61\x64\x20\x6D\x6F\x76\x65\x6D\x65\x6E\x74\x2E"), NULL);
	}
}
static void CameraOnboard_t263BC16EE3C0AF55DB9172598F3AB8B3DA303AA8_CustomAttributesCacheGenerator_axisIntensity(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x20\x20\x20\x20\x4D\x6F\x76\x65\x6D\x65\x6E\x74\x20\x69\x6E\x74\x65\x6E\x73\x69\x74\x79\x20\x70\x65\x72\x20\x61\x78\x69\x73\x2E\x20\x53\x65\x74\x20\x74\x6F\x20\x30\x20\x74\x6F\x20\x64\x69\x73\x61\x62\x6C\x65\x20\x6D\x6F\x76\x65\x6D\x65\x6E\x74\x20\x6F\x6E\x20\x74\x68\x61\x74\x20\x61\x78\x69\x73\x20\x6F\x72\x20\x6E\x65\x67\x61\x74\x69\x76\x65\x20\x74\x6F\x20\x72\x65\x76\x65\x72\x73\x65\x20\x69\x74\x2E"), NULL);
	}
}
static void VehicleCamera_t0E43033C0F0CC8931E1FF9C96C583EB170A659BF_CustomAttributesCacheGenerator_target(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x72\x61\x6E\x73\x66\x6F\x72\x6D\x20\x74\x68\x61\x74\x20\x74\x68\x69\x73\x20\x73\x63\x72\x69\x70\x74\x20\x69\x73\x20\x74\x61\x72\x67\x65\x74\x69\x6E\x67\x2E\x20\x43\x61\x6E\x20\x62\x65\x20\x6C\x65\x66\x74\x20\x65\x6D\x70\x74\x79\x20\x69\x66\x20\x68\x65\x61\x64\x20\x6D\x6F\x76\x65\x6D\x65\x6E\x74\x20\x69\x73\x20\x6E\x6F\x74\x20\x62\x65\x69\x6E\x67\x20\x75\x73\x65\x64\x2E"), NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_NWH_Common_Cameras_AttributeGenerators[];
const CustomAttributesCacheGenerator g_NWH_Common_Cameras_AttributeGenerators[39] = 
{
	U3CU3Ec_tA12A066F53A3329905B7EBF95FC787CBBA59C8C3_CustomAttributesCacheGenerator,
	U3CU3Ec_t383E82B76A23A2AB5F92B5DEF354F5BED8F0A236_CustomAttributesCacheGenerator,
	CameraChanger_t5A43F5B4E90599D6E1F769EC260D5C02A12A4B14_CustomAttributesCacheGenerator_autoFindCameras,
	CameraChanger_t5A43F5B4E90599D6E1F769EC260D5C02A12A4B14_CustomAttributesCacheGenerator_currentCameraIndex,
	CameraChanger_t5A43F5B4E90599D6E1F769EC260D5C02A12A4B14_CustomAttributesCacheGenerator_cameras,
	CameraFollow_t27D30BF98D1D0F32C414E67847C57D406B5C5615_CustomAttributesCacheGenerator_distance,
	CameraFollow_t27D30BF98D1D0F32C414E67847C57D406B5C5615_CustomAttributesCacheGenerator_height,
	CameraFollow_t27D30BF98D1D0F32C414E67847C57D406B5C5615_CustomAttributesCacheGenerator_smoothing,
	CameraFollow_t27D30BF98D1D0F32C414E67847C57D406B5C5615_CustomAttributesCacheGenerator_targetForwardOffset,
	CameraFollow_t27D30BF98D1D0F32C414E67847C57D406B5C5615_CustomAttributesCacheGenerator_targetUpOffset,
	CameraInsideVehicle_t3189318EBD6998E5A609B9BF6D7758DACB66AEDB_CustomAttributesCacheGenerator_isInsideVehicle,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_povType,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_allowRotation,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_allowPanning,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_distance,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_followTargetPitchAndYaw,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_followTargetRoll,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_maxDistance,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_minDistance,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_zoomSensitivity,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_rotationSmoothing,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_verticalMaxAngle,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_verticalMinAngle,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_rotationSensitivity,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_panningSensitivity,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_initXRotation,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_initYRotation,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_targetPositionOffset,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_useShake,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_shakeMaxOffset,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_shakeIntensity,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_shakeSmoothing,
	CameraMouseDrag_tFF4FEA4E831DC127D68F536F443F81F3E13DEFC7_CustomAttributesCacheGenerator_shakeAxisIntensity,
	CameraOnboard_t263BC16EE3C0AF55DB9172598F3AB8B3DA303AA8_CustomAttributesCacheGenerator_maxMovementOffset,
	CameraOnboard_t263BC16EE3C0AF55DB9172598F3AB8B3DA303AA8_CustomAttributesCacheGenerator_movementIntensity,
	CameraOnboard_t263BC16EE3C0AF55DB9172598F3AB8B3DA303AA8_CustomAttributesCacheGenerator_movementSmoothing,
	CameraOnboard_t263BC16EE3C0AF55DB9172598F3AB8B3DA303AA8_CustomAttributesCacheGenerator_axisIntensity,
	VehicleCamera_t0E43033C0F0CC8931E1FF9C96C583EB170A659BF_CustomAttributesCacheGenerator_target,
	NWH_Common_Cameras_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
