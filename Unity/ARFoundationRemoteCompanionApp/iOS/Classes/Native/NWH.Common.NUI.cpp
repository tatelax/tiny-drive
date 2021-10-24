#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD2B61E7EAF7FB690E666152454821325DA2FEC48 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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


// NWH.NUI.NUISettings
struct NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0  : public RuntimeObject
{
public:

public:
};

struct NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields
{
public:
	// UnityEngine.Color NWH.NUI.NUISettings::scriptableObjectHeaderColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___scriptableObjectHeaderColor_4;
	// UnityEngine.Color NWH.NUI.NUISettings::editorHeaderColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___editorHeaderColor_5;
	// UnityEngine.Color NWH.NUI.NUISettings::propertyHeaderColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___propertyHeaderColor_6;
	// UnityEngine.Color NWH.NUI.NUISettings::disabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___disabledColor_7;
	// UnityEngine.Color NWH.NUI.NUISettings::enabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___enabledColor_8;
	// UnityEngine.Color NWH.NUI.NUISettings::lightBlueColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lightBlueColor_9;
	// UnityEngine.Color NWH.NUI.NUISettings::lightGreyColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lightGreyColor_10;

public:
	inline static int32_t get_offset_of_scriptableObjectHeaderColor_4() { return static_cast<int32_t>(offsetof(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields, ___scriptableObjectHeaderColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_scriptableObjectHeaderColor_4() const { return ___scriptableObjectHeaderColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_scriptableObjectHeaderColor_4() { return &___scriptableObjectHeaderColor_4; }
	inline void set_scriptableObjectHeaderColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___scriptableObjectHeaderColor_4 = value;
	}

	inline static int32_t get_offset_of_editorHeaderColor_5() { return static_cast<int32_t>(offsetof(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields, ___editorHeaderColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_editorHeaderColor_5() const { return ___editorHeaderColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_editorHeaderColor_5() { return &___editorHeaderColor_5; }
	inline void set_editorHeaderColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___editorHeaderColor_5 = value;
	}

	inline static int32_t get_offset_of_propertyHeaderColor_6() { return static_cast<int32_t>(offsetof(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields, ___propertyHeaderColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_propertyHeaderColor_6() const { return ___propertyHeaderColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_propertyHeaderColor_6() { return &___propertyHeaderColor_6; }
	inline void set_propertyHeaderColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___propertyHeaderColor_6 = value;
	}

	inline static int32_t get_offset_of_disabledColor_7() { return static_cast<int32_t>(offsetof(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields, ___disabledColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_disabledColor_7() const { return ___disabledColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_disabledColor_7() { return &___disabledColor_7; }
	inline void set_disabledColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___disabledColor_7 = value;
	}

	inline static int32_t get_offset_of_enabledColor_8() { return static_cast<int32_t>(offsetof(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields, ___enabledColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_enabledColor_8() const { return ___enabledColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_enabledColor_8() { return &___enabledColor_8; }
	inline void set_enabledColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___enabledColor_8 = value;
	}

	inline static int32_t get_offset_of_lightBlueColor_9() { return static_cast<int32_t>(offsetof(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields, ___lightBlueColor_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_lightBlueColor_9() const { return ___lightBlueColor_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_lightBlueColor_9() { return &___lightBlueColor_9; }
	inline void set_lightBlueColor_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___lightBlueColor_9 = value;
	}

	inline static int32_t get_offset_of_lightGreyColor_10() { return static_cast<int32_t>(offsetof(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields, ___lightGreyColor_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_lightGreyColor_10() const { return ___lightGreyColor_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_lightGreyColor_10() { return &___lightGreyColor_10; }
	inline void set_lightGreyColor_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___lightGreyColor_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
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
// System.Void NWH.NUI.NUISettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUISettings__cctor_mC3F8CF8808D8470DBC0E8320FF33E31A754BFE5F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color scriptableObjectHeaderColor = new Color32(220, 122, 32,  255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_0), (uint8_t)((int32_t)220), (uint8_t)((int32_t)122), (uint8_t)((int32_t)32), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_0, /*hidden argument*/NULL);
		((NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields*)il2cpp_codegen_static_fields_for(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_il2cpp_TypeInfo_var))->set_scriptableObjectHeaderColor_4(L_1);
		// public static Color editorHeaderColor           = new Color32(20,  125, 211, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_2), (uint8_t)((int32_t)20), (uint8_t)((int32_t)125), (uint8_t)((int32_t)211), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_2, /*hidden argument*/NULL);
		((NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields*)il2cpp_codegen_static_fields_for(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_il2cpp_TypeInfo_var))->set_editorHeaderColor_5(L_3);
		// public static Color propertyHeaderColor         = new Color32(78,  152, 213, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_4), (uint8_t)((int32_t)78), (uint8_t)((int32_t)152), (uint8_t)((int32_t)213), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_4, /*hidden argument*/NULL);
		((NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields*)il2cpp_codegen_static_fields_for(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_il2cpp_TypeInfo_var))->set_propertyHeaderColor_6(L_5);
		// public static Color disabledColor  = new Color(1f,   0.5f, 0.5f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_6), (1.0f), (0.5f), (0.5f), /*hidden argument*/NULL);
		((NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields*)il2cpp_codegen_static_fields_for(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_il2cpp_TypeInfo_var))->set_disabledColor_7(L_6);
		// public static Color enabledColor   = new Color(0.5f, 1f,   0.5f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_7), (0.5f), (1.0f), (0.5f), /*hidden argument*/NULL);
		((NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields*)il2cpp_codegen_static_fields_for(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_il2cpp_TypeInfo_var))->set_enabledColor_8(L_7);
		// public static Color lightBlueColor = new Color32(70,  170, 220, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_8), (uint8_t)((int32_t)70), (uint8_t)((int32_t)170), (uint8_t)((int32_t)220), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_8, /*hidden argument*/NULL);
		((NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields*)il2cpp_codegen_static_fields_for(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_il2cpp_TypeInfo_var))->set_lightBlueColor_9(L_9);
		// public static Color lightGreyColor = new Color32(192, 192, 192, 255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_10), (uint8_t)((int32_t)192), (uint8_t)((int32_t)192), (uint8_t)((int32_t)192), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_10, /*hidden argument*/NULL);
		((NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_StaticFields*)il2cpp_codegen_static_fields_for(NUISettings_t247FD050F60CE5F28032515F8F1B38E55D435FF0_il2cpp_TypeInfo_var))->set_lightGreyColor_10(L_11);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
