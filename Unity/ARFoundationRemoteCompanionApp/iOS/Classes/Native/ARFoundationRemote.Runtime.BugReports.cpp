#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t32463C505981FAA3FE78829467992AC7309CD9CA;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug
struct Unity_2020_2_NullableSerializationBug_t9E3FAAF322BBB2A12CE7C4996BFDE8E11773FF97;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral27C77314A7650A9279AE864267414D4C9424B460;
IL2CPP_EXTERN_C String_t* _stringLiteralBE9B50C82EA22EE094932EBC7DB7B62993E65CDE;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m3B2ACBDDAB1DCE33E4583DA3092378F510BCC2F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m2A698CB11F281F1E4F9DD76F7B55FB5298269AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC68FC20C59377FDA666D3A80A0B83B4E4A7BDD78_RuntimeMethod_var;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3F050790C67D652FC06617B905C8E35AEA5F53D2 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
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

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
struct InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199 
{
public:
	// System.Single ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct::floatValue
	float ___floatValue_0;
	// System.Boolean ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct::boolValue
	bool ___boolValue_1;

public:
	inline static int32_t get_offset_of_floatValue_0() { return static_cast<int32_t>(offsetof(InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199, ___floatValue_0)); }
	inline float get_floatValue_0() const { return ___floatValue_0; }
	inline float* get_address_of_floatValue_0() { return &___floatValue_0; }
	inline void set_floatValue_0(float value)
	{
		___floatValue_0 = value;
	}

	inline static int32_t get_offset_of_boolValue_1() { return static_cast<int32_t>(offsetof(InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199, ___boolValue_1)); }
	inline bool get_boolValue_1() const { return ___boolValue_1; }
	inline bool* get_address_of_boolValue_1() { return &___boolValue_1; }
	inline void set_boolValue_1(bool value)
	{
		___boolValue_1 = value;
	}
};

// Native definition for P/Invoke marshalling of ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
struct InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshaled_pinvoke
{
	float ___floatValue_0;
	int32_t ___boolValue_1;
};
// Native definition for COM marshalling of ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
struct InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshaled_com
{
	float ___floatValue_0;
	int32_t ___boolValue_1;
};

// System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct>
struct Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB 
{
public:
	// T System.Nullable`1::value
	InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB, ___value_0)); }
	inline InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199  get_value_0() const { return ___value_0; }
	inline InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct FormatterAssemblyStyle_t176037936039C0AEAEDFF283CD0E53E721D4CEF2 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t176037936039C0AEAEDFF283CD0E53E721D4CEF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct FormatterTypeStyle_tE84DD5CF7A3D4E07A4881B66CE1AE112677A4E6A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_tE84DD5CF7A3D4E07A4881B66CE1AE112677A4E6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_14)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct TypeFilterLevel_t7ED94310B4D2D5C697A19E0CE2327A7DC5B39C4D 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t7ED94310B4D2D5C697A19E0CE2327A7DC5B39C4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
struct StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515 
{
public:
	// System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct> ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField::innerStruct
	Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB  ___innerStruct_0;

public:
	inline static int32_t get_offset_of_innerStruct_0() { return static_cast<int32_t>(offsetof(StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515, ___innerStruct_0)); }
	inline Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB  get_innerStruct_0() const { return ___innerStruct_0; }
	inline Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB * get_address_of_innerStruct_0() { return &___innerStruct_0; }
	inline void set_innerStruct_0(Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB  value)
	{
		___innerStruct_0 = value;
	}
};

// Native definition for P/Invoke marshalling of ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
struct StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshaled_pinvoke
{
	Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB  ___innerStruct_0;
};
// Native definition for COM marshalling of ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
struct StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshaled_com
{
	Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB  ___innerStruct_0;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_crossAppDomainArray_6;

public:
	inline static int32_t get_offset_of_m_surrogates_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_surrogates_0)); }
	inline RuntimeObject* get_m_surrogates_0() const { return ___m_surrogates_0; }
	inline RuntimeObject** get_address_of_m_surrogates_0() { return &___m_surrogates_0; }
	inline void set_m_surrogates_0(RuntimeObject* value)
	{
		___m_surrogates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_surrogates_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_context_1)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_m_context_1() const { return ___m_context_1; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_context_1))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_binder_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_binder_2)); }
	inline SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * get_m_binder_2() const { return ___m_binder_2; }
	inline SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 ** get_address_of_m_binder_2() { return &___m_binder_2; }
	inline void set_m_binder_2(SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * value)
	{
		___m_binder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_binder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_typeFormat_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_typeFormat_3)); }
	inline int32_t get_m_typeFormat_3() const { return ___m_typeFormat_3; }
	inline int32_t* get_address_of_m_typeFormat_3() { return &___m_typeFormat_3; }
	inline void set_m_typeFormat_3(int32_t value)
	{
		___m_typeFormat_3 = value;
	}

	inline static int32_t get_offset_of_m_assemblyFormat_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_assemblyFormat_4)); }
	inline int32_t get_m_assemblyFormat_4() const { return ___m_assemblyFormat_4; }
	inline int32_t* get_address_of_m_assemblyFormat_4() { return &___m_assemblyFormat_4; }
	inline void set_m_assemblyFormat_4(int32_t value)
	{
		___m_assemblyFormat_4 = value;
	}

	inline static int32_t get_offset_of_m_securityLevel_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_securityLevel_5)); }
	inline int32_t get_m_securityLevel_5() const { return ___m_securityLevel_5; }
	inline int32_t* get_address_of_m_securityLevel_5() { return &___m_securityLevel_5; }
	inline void set_m_securityLevel_5(int32_t value)
	{
		___m_securityLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_crossAppDomainArray_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_crossAppDomainArray_6)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_crossAppDomainArray_6() const { return ___m_crossAppDomainArray_6; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_crossAppDomainArray_6() { return &___m_crossAppDomainArray_6; }
	inline void set_m_crossAppDomainArray_6(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_crossAppDomainArray_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_crossAppDomainArray_6), (void*)value);
	}
};

struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * ___typeNameCache_7;

public:
	inline static int32_t get_offset_of_typeNameCache_7() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_StaticFields, ___typeNameCache_7)); }
	inline Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * get_typeNameCache_7() const { return ___typeNameCache_7; }
	inline Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 ** get_address_of_typeNameCache_7() { return &___typeNameCache_7; }
	inline void set_typeNameCache_7(Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * value)
	{
		___typeNameCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeNameCache_7), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug
struct Unity_2020_2_NullableSerializationBug_t9E3FAAF322BBB2A12CE7C4996BFDE8E11773FF97  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3B2ACBDDAB1DCE33E4583DA3092378F510BCC2F2_gshared (Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB * __this, InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2A698CB11F281F1E4F9DD76F7B55FB5298269AAE_gshared_inline (Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199  Nullable_1_get_Value_mC68FC20C59377FDA666D3A80A0B83B4E4A7BDD78_gshared (Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB * __this, const RuntimeMethod* method);

// System.Byte[] ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug::serializeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Unity_2020_2_NullableSerializationBug_serializeData_m2B2E53C6EC46079A802C5214A8163871063D745A (const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126 (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * __this, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BinaryFormatter_Deserialize_mF7AFD0FE0E41A77BC60B11705FA7CC76EFE63DBC (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___serializationStream0, const RuntimeMethod* method);
// System.String ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug::check(ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unity_2020_2_NullableSerializationBug_check_m695C56C39DDB3EE6D416594BCB704420D25419B5 (StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515  ___deserialized0, const RuntimeMethod* method);
// System.Void System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct>::.ctor(!0)
inline void Nullable_1__ctor_m3B2ACBDDAB1DCE33E4583DA3092378F510BCC2F2 (Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB * __this, InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB *, InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199 , const RuntimeMethod*))Nullable_1__ctor_m3B2ACBDDAB1DCE33E4583DA3092378F510BCC2F2_gshared)(__this, ___value0, method);
}
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_m780327356D3B5B1B734338AB398B32E65AD6CB5B (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___serializationStream0, RuntimeObject * ___graph1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct>::get_HasValue()
inline bool Nullable_1_get_HasValue_m2A698CB11F281F1E4F9DD76F7B55FB5298269AAE_inline (Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB *, const RuntimeMethod*))Nullable_1_get_HasValue_m2A698CB11F281F1E4F9DD76F7B55FB5298269AAE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m983A0A378ACBE8C0EC78AEDDC7CDF6251F0DCEDC (bool ___condition0, const RuntimeMethod* method);
// !0 System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct>::get_Value()
inline InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199  Nullable_1_get_Value_mC68FC20C59377FDA666D3A80A0B83B4E4A7BDD78 (Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB * __this, const RuntimeMethod* method)
{
	return ((  InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199  (*) (Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB *, const RuntimeMethod*))Nullable_1_get_Value_mC68FC20C59377FDA666D3A80A0B83B4E4A7BDD78_gshared)(__this, method);
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug::CheckBug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unity_2020_2_NullableSerializationBug_CheckBug_m4C82304A78DF7EBAA311A839FA4CB9CC30F98E1C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_1 = NULL;
	StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var serialized = serializeData();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = Unity_2020_2_NullableSerializationBug_serializeData_m2B2E53C6EC46079A802C5214A8163871063D745A(/*hidden argument*/NULL);
		V_0 = L_0;
		// using (var memoryStream = new MemoryStream(serialized)) {
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_2 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// var deserialized = (StructWithNullableField) new BinaryFormatter().Deserialize(memoryStream);
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_3 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_3, /*hidden argument*/NULL);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_4 = V_1;
		NullCheck(L_3);
		RuntimeObject * L_5;
		L_5 = BinaryFormatter_Deserialize_mF7AFD0FE0E41A77BC60B11705FA7CC76EFE63DBC(L_3, L_4, /*hidden argument*/NULL);
		V_2 = ((*(StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515 *)((StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515 *)UnBox(L_5, StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_il2cpp_TypeInfo_var))));
		// return check(deserialized);
		StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515  L_6 = V_2;
		String_t* L_7;
		L_7 = Unity_2020_2_NullableSerializationBug_check_m695C56C39DDB3EE6D416594BCB704420D25419B5(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		IL2CPP_LEAVE(0x34, FINALLY_0029);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_8 = V_1;
			if (!L_8)
			{
				goto IL_0033;
			}
		}

IL_002c:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		// }
		String_t* L_10 = V_3;
		return L_10;
	}
}
// System.Byte[] ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug::serializeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Unity_2020_2_NullableSerializationBug_serializeData_m2B2E53C6EC46079A802C5214A8163871063D745A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m3B2ACBDDAB1DCE33E4583DA3092378F510BCC2F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515  V_0;
	memset((&V_0), 0, sizeof(V_0));
	StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199  V_2;
	memset((&V_2), 0, sizeof(V_2));
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_3 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = new StructWithNullableField {
		//     innerStruct = new InnerStruct {
		//         floatValue = dummyFloatValue
		//     }
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515 ));
		il2cpp_codegen_initobj((&V_2), sizeof(InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199 ));
		(&V_2)->set_floatValue_0((123.456001f));
		InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199  L_0 = V_2;
		Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m3B2ACBDDAB1DCE33E4583DA3092378F510BCC2F2((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m3B2ACBDDAB1DCE33E4583DA3092378F510BCC2F2_RuntimeMethod_var);
		(&V_1)->set_innerStruct_0(L_1);
		StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515  L_2 = V_1;
		V_0 = L_2;
		// using (var memoryStream = new MemoryStream()) {
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_3 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_3, /*hidden argument*/NULL);
		V_3 = L_3;
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		// new BinaryFormatter().Serialize(memoryStream, instance);
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_4 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_4, /*hidden argument*/NULL);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_5 = V_3;
		StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515  L_6 = V_0;
		StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515  L_7 = L_6;
		RuntimeObject * L_8 = Box(StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_4);
		BinaryFormatter_Serialize_m780327356D3B5B1B734338AB398B32E65AD6CB5B(L_4, L_5, L_8, /*hidden argument*/NULL);
		// return memoryStream.ToArray();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_9 = V_3;
		NullCheck(L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_9);
		V_4 = L_10;
		IL2CPP_LEAVE(0x5A, FINALLY_004f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_11 = V_3;
			if (!L_11)
			{
				goto IL_0059;
			}
		}

IL_0052:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_12);
		}

IL_0059:
		{
			IL2CPP_END_FINALLY(79)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_4;
		return L_13;
	}
}
// System.String ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug::check(ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unity_2020_2_NullableSerializationBug_check_m695C56C39DDB3EE6D416594BCB704420D25419B5 (StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515  ___deserialized0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2A698CB11F281F1E4F9DD76F7B55FB5298269AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC68FC20C59377FDA666D3A80A0B83B4E4A7BDD78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27C77314A7650A9279AE864267414D4C9424B460);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE9B50C82EA22EE094932EBC7DB7B62993E65CDE);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// var innerStruct = deserialized.innerStruct;
		StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515  L_0 = ___deserialized0;
		Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB  L_1 = L_0.get_innerStruct_0();
		V_0 = L_1;
		// Assert.IsTrue(innerStruct.HasValue);
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m2A698CB11F281F1E4F9DD76F7B55FB5298269AAE_inline((Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m2A698CB11F281F1E4F9DD76F7B55FB5298269AAE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsTrue_m983A0A378ACBE8C0EC78AEDDC7CDF6251F0DCEDC(L_2, /*hidden argument*/NULL);
		// var deserializedFloatValue = innerStruct.Value.floatValue;
		InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199  L_3;
		L_3 = Nullable_1_get_Value_mC68FC20C59377FDA666D3A80A0B83B4E4A7BDD78((Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mC68FC20C59377FDA666D3A80A0B83B4E4A7BDD78_RuntimeMethod_var);
		float L_4 = L_3.get_floatValue_0();
		V_1 = L_4;
		// if (!Mathf.Approximately(dummyFloatValue, deserializedFloatValue)) {
		float L_5 = V_1;
		bool L_6;
		L_6 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55((123.456001f), L_5, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// return $"Unity {Application.unityVersion} has a bug that prevents the plugin from working correctly. Please follow this bug report to track the status:\n" +
		//     "https://issuetracker.unity3d.com/issues/serialization-il2cpp-binaryformatter-dot-deserialize-method-fails-to-deserialize-a-nullable-struct-field-with-multiple-fields";
		String_t* L_8;
		L_8 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral27C77314A7650A9279AE864267414D4C9424B460, L_8, _stringLiteralBE9B50C82EA22EE094932EBC7DB7B62993E65CDE, /*hidden argument*/NULL);
		V_3 = L_9;
		goto IL_0051;
	}

IL_004c:
	{
		// return null;
		V_3 = (String_t*)NULL;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		String_t* L_10 = V_3;
		return L_10;
	}
}
// System.Void ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity_2020_2_NullableSerializationBug__ctor_m1227D880D6975730D4E43B42AB9332C64B19D736 (Unity_2020_2_NullableSerializationBug_t9E3FAAF322BBB2A12CE7C4996BFDE8E11773FF97 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
IL2CPP_EXTERN_C void InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshal_pinvoke(const InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199& unmarshaled, InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshaled_pinvoke& marshaled)
{
	marshaled.___floatValue_0 = unmarshaled.get_floatValue_0();
	marshaled.___boolValue_1 = static_cast<int32_t>(unmarshaled.get_boolValue_1());
}
IL2CPP_EXTERN_C void InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshal_pinvoke_back(const InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshaled_pinvoke& marshaled, InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199& unmarshaled)
{
	float unmarshaled_floatValue_temp_0 = 0.0f;
	unmarshaled_floatValue_temp_0 = marshaled.___floatValue_0;
	unmarshaled.set_floatValue_0(unmarshaled_floatValue_temp_0);
	bool unmarshaled_boolValue_temp_1 = false;
	unmarshaled_boolValue_temp_1 = static_cast<bool>(marshaled.___boolValue_1);
	unmarshaled.set_boolValue_1(unmarshaled_boolValue_temp_1);
}
// Conversion method for clean up from marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
IL2CPP_EXTERN_C void InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshal_pinvoke_cleanup(InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
IL2CPP_EXTERN_C void InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshal_com(const InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199& unmarshaled, InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshaled_com& marshaled)
{
	marshaled.___floatValue_0 = unmarshaled.get_floatValue_0();
	marshaled.___boolValue_1 = static_cast<int32_t>(unmarshaled.get_boolValue_1());
}
IL2CPP_EXTERN_C void InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshal_com_back(const InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshaled_com& marshaled, InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199& unmarshaled)
{
	float unmarshaled_floatValue_temp_0 = 0.0f;
	unmarshaled_floatValue_temp_0 = marshaled.___floatValue_0;
	unmarshaled.set_floatValue_0(unmarshaled_floatValue_temp_0);
	bool unmarshaled_boolValue_temp_1 = false;
	unmarshaled_boolValue_temp_1 = static_cast<bool>(marshaled.___boolValue_1);
	unmarshaled.set_boolValue_1(unmarshaled_boolValue_temp_1);
}
// Conversion method for clean up from marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
IL2CPP_EXTERN_C void InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshal_com_cleanup(InnerStruct_t245DB3289CE1076BEE161D7CCA3C1E041E02D199_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
IL2CPP_EXTERN_C void StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshal_pinvoke(const StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515& unmarshaled, StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshaled_pinvoke& marshaled)
{
	Exception_t* ___innerStruct_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'innerStruct' of type 'StructWithNullableField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___innerStruct_0Exception, NULL);
}
IL2CPP_EXTERN_C void StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshal_pinvoke_back(const StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshaled_pinvoke& marshaled, StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515& unmarshaled)
{
	Exception_t* ___innerStruct_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'innerStruct' of type 'StructWithNullableField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___innerStruct_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
IL2CPP_EXTERN_C void StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshal_pinvoke_cleanup(StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
IL2CPP_EXTERN_C void StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshal_com(const StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515& unmarshaled, StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshaled_com& marshaled)
{
	Exception_t* ___innerStruct_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'innerStruct' of type 'StructWithNullableField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___innerStruct_0Exception, NULL);
}
IL2CPP_EXTERN_C void StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshal_com_back(const StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshaled_com& marshaled, StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515& unmarshaled)
{
	Exception_t* ___innerStruct_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'innerStruct' of type 'StructWithNullableField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___innerStruct_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
IL2CPP_EXTERN_C void StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshal_com_cleanup(StructWithNullableField_t037ECD6184B8D13DD11B2C33B5E08DD91751F515_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2A698CB11F281F1E4F9DD76F7B55FB5298269AAE_gshared_inline (Nullable_1_t6BB75AEFA64FF2DFF377CAAAB0850441679CF7BB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
