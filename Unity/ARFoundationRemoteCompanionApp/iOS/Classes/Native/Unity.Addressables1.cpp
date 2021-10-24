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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>>
struct Action_1_t88843A476A52066DC24B7760ADD42B6454C6EC5B;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>>
struct Action_1_tF8BFCB4A4DF5A86D4A4EE42B2935648B1E8AD072;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct Action_1_t6634F94209C51241AB52BDC921720558A925806B;
// System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>
struct Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9;
// System.Action`1<UnityEngine.Networking.UnityWebRequest>
struct Action_1_t93E83C69602A953E840CBDF697EDD10E266F47D0;
// System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696;
// System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>
struct Action_1_tD61C7D2B046523AB783EBF4D00B665A08F81B609;
// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception>
struct Action_2_tE037A9A64F7D0B18736E26533D8819D3CA6D6A41;
// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object>
struct Action_4_tB83C8F50B5A70EB6ACEFFD5422338AA361EF1148;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>>
struct AsyncOperationBase_1_t83E82AF13D0861ABF96E701C62511E1FDE92A061;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.List`1<System.String>>
struct AsyncOperationBase_1_tDE0B6217541A6B0E778A91D29B4B943D24801A35;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>
struct AsyncOperationBase_1_tAB1F47A33E4D2FAA60BB0A9C067DAEDAA3E4A402;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>
struct AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>
struct AsyncOperationBase_1_t77B00BFC3586344473A296EB5124C9489A85AE23;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData>
struct AsyncOperationBase_1_t2CE3F2102EB1B1FCA19149FD17C46F73D43CA783;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>>
struct DelegateList_1_t1A664E16725AD5ACFDAEF6F74F8B730CB372EEC7;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct DelegateList_1_tEE43E46533E305A3EC7853BB615F872878A2A503;
// DelegateList`1<System.Single>
struct DelegateList_1_t160D08954252A3DE253C53A7F9B2774406AAA31D;
// System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct Dictionary_2_tE29FF4DD4D0DDCC80F44D342E11FC0D97A94CC0A;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct Dictionary_2_t1B2F62A5CB01E356B3C3FDEBB20B967EE7C405C9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>
struct Dictionary_2_t252CD5F999D800C98B116C8924D98E33812747D6;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct Dictionary_2_tFE864065647FF3F1F8ACB61B44C408D5FAFD3FCC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.String>
struct Func_2_t7992B3857C3AFEEE62B2362748CC3BE16829C9E5;
// System.Func`2<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider,System.Boolean>
struct Func_2_t69C4F92AEBB32B94C7D556BD1CD790E8FC896B45;
// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct HashSet_1_tA8ED10554572301FDA2F65860E6B048C8CE660FC;
// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>
struct HashSet_1_t01433913211306E52271EEE7566976D5EFC46A1D;
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>
struct IList_1_t5C8A610FDC5FA97482DA32A92661CA24B72CC255;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901;
// ListWithEvents`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct ListWithEvents_1_t707B8F8E6EA83D829524975DE2E78802D44D7483;
// ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct ListWithEvents_1_t140F58A2A8D19A91538922235BB34676780A1EE2;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct List_1_t4C8FFBA32489BE0DA99C242CC428213F33A603C6;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>
struct List_1_tCC60720586CD8095D9FA65D37104C8CFEFCA0983;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct List_1_t42B4D8B6A894DBCA2E79764976B98CCC882FB11D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData>
struct List_1_t0DF9D498983B77B207A7E6FC612A1E79C607F026;
// System.Collections.Generic.List`1<UnityEngine.AddressableAssets.AddressablesImpl/ResourceLocatorInfo>
struct List_1_t5A857F880D0CFEA1592ADB710EE5A59BC3C4237F;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>
struct List_1_t72EF16CD17DC2FFCD924CD6FE6E91E25825D249B;
// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>
struct TaskCompletionSource_1_tA4D923F2FF75502E1B06B8F1F71320273E06F00A;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation[]
struct IResourceLocationU5BU5D_tF65F723E5499FF3F2EA8F75B1275C63675F396A0;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// UnityEngine.ResourceManagement.Util.SerializedType[]
struct SerializedTypeU5BU5D_tF5E5FFA9BE1C3CAD6FD8BDEB57C0EAE491BA8616;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.AddressableAssets.AddressablesImpl
struct AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// UnityEngine.AssetBundle
struct AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4;
// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A;
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData
struct ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_t49C00CF1C75BD0D6DFA01C3C490EBD4ABAAD76F3;
// System.Exception
struct Exception_t;
// UnityEngine.ResourceManagement.Util.IAllocationStrategy
struct IAllocationStrategy_tE54E654B6217CAB298442DFC133DE00E4CD001DE;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation
struct IAsyncOperation_tC630FE54804ACC03A481095B1012686957D420AB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation
struct IGenericProviderOperation_tC2E0AAC714A6DCC6BC398A97E9570D627EED7679;
// UnityEngine.ResourceManagement.ResourceProviders.IInstanceProvider
struct IInstanceProvider_tF47C2459DE5D6A6455E750AD06EEA9A9DDFAC5B4;
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
struct IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE;
// UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator
struct IResourceLocator_tF8C315ADD0E8B6B6E5869F3D25AE9145593E8444;
// UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider
struct IResourceProvider_t54B76C9554B84C687B8BC5708D509235DA8709FA;
// UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider
struct ISceneProvider_t7C38CF882A53DECB0C26A59C16BA443085E8EEAA;
// UnityEngine.ResourceManagement.AsyncOperations.InitalizationObjectsOperation
struct InitalizationObjectsOperation_tB327C4C33B585E8D197BFAA550E075D3596B364F;
// UnityEngine.AddressableAssets.Initialization.InitializationOperation
struct InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions
struct ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF;
// UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase
struct ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C;
// UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap
struct ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8;
// UnityEngine.ResourceManagement.ResourceManager
struct ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037;
// UnityEngine.AddressableAssets.Utility.ResourceManagerDiagnostics
struct ResourceManagerDiagnostics_t2CAC6BE26AC64F18159FE55C52C2B864A5B1FA62;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.ResourceManagement.Util.UnityWebRequestResult
struct UnityWebRequestResult_t100F520A4720C5527F6534B751FACE43DBB20BA9;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.ResourceManagement.WebRequestQueueOperation
struct WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151;
// UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp
struct InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007;
// UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c
struct U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB;
// UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tF42A377A5088BDDD9F2C683DAA8C640D1A4D6A2D;
// UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tE67E92DF82A5AEC1124BF444A40FC210787F25BB;
// UnityEngine.AddressableAssets.UpdateCatalogsOperation/<>c
struct U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7;
// UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog
struct BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t88843A476A52066DC24B7760ADD42B6454C6EC5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerAssetBundle_t49C00CF1C75BD0D6DFA01C3C490EBD4ABAAD76F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t11A712125B3862757906E01853A29E53CDBB6B40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t35488BE070734B4C5D136DC1A68CBC9CE507D488_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t5C8A610FDC5FA97482DA32A92661CA24B72CC255_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestQueue_tF61BB018FE0D4E900245AB6612FCDBED34E81D39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08402675249E13601CD62B2997ED4E6863DB2D59;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742;
IL2CPP_EXTERN_C String_t* _stringLiteral133E86059726B90D6B305988FCC5468765E621FD;
IL2CPP_EXTERN_C String_t* _stringLiteral155F0465C23A0C08CB714B866F3FF9FF59CCACD8;
IL2CPP_EXTERN_C String_t* _stringLiteral1FE50377B347C1D51DF49731907D92C8915C8CF5;
IL2CPP_EXTERN_C String_t* _stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB;
IL2CPP_EXTERN_C String_t* _stringLiteral30D6D4CB31ABB242501386F03D1F25DEF9644B8A;
IL2CPP_EXTERN_C String_t* _stringLiteral4D260AA820F6A4564310B4E98067CDAF1039A6B7;
IL2CPP_EXTERN_C String_t* _stringLiteral5B5DFFF4F9A9F739F5328FBC36971CADE6ECBA34;
IL2CPP_EXTERN_C String_t* _stringLiteral6446C10AE56DD6012CC6B817847776314E6C0319;
IL2CPP_EXTERN_C String_t* _stringLiteralAF064DF11EFBB17F548B652B554EBD3B8C45A6DC;
IL2CPP_EXTERN_C String_t* _stringLiteralB0BB6911BDAA8D73DD5BBA56D9EAF79D76F35036;
IL2CPP_EXTERN_C String_t* _stringLiteralD97BCB0B290372AFF7311E4C38D0CA6CC8124893;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m772F2F580154DDE72E6E4565DB9CA566FB916B56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m6968F38E1A0133D1BEEDE591D610C3104F3C3A9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m9FF563E80CB9F5E48B29071804E6BFC0C55D3571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mB87A76797258A7255D6EE65E30BE3AFE649A9BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisIResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_m0D3609A7D4746673D750C4068EF7C7EC5E9215B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundle_LoadAllAssetsAsync_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mB6BB417BA12FCFF1FF841B17D1EC1B43BFFA6A3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_WaitForCompletion_m2D22B1D8CC422F2BA28EB209B3FDD24CB38A9511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_add_Completed_m06312DD8B215B792459E537EB0121A771BD63311_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_IsDone_m48F645E09612697B79542FEC71052AB5607E11F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_LocationName_mD8967A5DA3F690399784433DCB0BA312A0965FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Result_m9E0F8E3BA297A7755DA4D27837797234397187D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_op_Implicit_mFABA6AD34A1DD6D494F3F6CEE40ED31D14C38BC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BundledCatalog_LoadTextAssetRequestComplete_m08269CBA1E9DCDFA79F63DD6DA3D4BB78117327A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BundledCatalog_U3CLoadCatalogFromBundleAsyncU3Eb__19_0_mF553D71A9BD5B7BB7514CCFBC0CC630341FF8187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BundledCatalog_U3CLoadCatalogFromBundleAsyncU3Eb__19_1_mDB50BF3C73723E967D4E97C57E744C29BA2E5484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BundledCatalog_WebRequestOperationCompleted_mBD80182B7BD5C6A0E5A3BF03CEB3E47A02B3ED1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BundledCatalog__ctor_m25344A2E9AD17F17DD40F8677B065F0ED783BEA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalOp_CatalogLoadOpCompleteCallback_m24B8AF466CD86C1989F7F2A561FE40DD6DE1DD71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalOp_U3CLoadCatalogU3Eb__14_0_m9CA7C49E427E908BCF84B42522A3517C9D1E4348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalOp_WaitForCompletionCallback_mD4D27D6AEFCA70E697564DF72CCC784B093FB82D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mC99A84B95996D4F885A2353ED41667D0D1F818C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProvideHandle_Complete_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mAA93370DE113F5184E995B0ABE0A7067BFCE661D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_ProvideResource_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_m31207C2595F055E461742D982305B7491CD6B60C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ContentCatalogProvider_t9816343589D5F6B669F2194F2D6F4A87EE5C5202_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonAssetProvider_t91ED5F9C90361A026E0B2C4B494B1342E6A6A9DB_0_0_0_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct IResourceLocationU5BU5D_tF65F723E5499FF3F2EA8F75B1275C63675F396A0;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions
struct ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::m_IgnoreFailures
	bool ___m_IgnoreFailures_0;
	// System.Int32 UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::m_WebRequestTimeout
	int32_t ___m_WebRequestTimeout_1;

public:
	inline static int32_t get_offset_of_m_IgnoreFailures_0() { return static_cast<int32_t>(offsetof(ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF, ___m_IgnoreFailures_0)); }
	inline bool get_m_IgnoreFailures_0() const { return ___m_IgnoreFailures_0; }
	inline bool* get_address_of_m_IgnoreFailures_0() { return &___m_IgnoreFailures_0; }
	inline void set_m_IgnoreFailures_0(bool value)
	{
		___m_IgnoreFailures_0 = value;
	}

	inline static int32_t get_offset_of_m_WebRequestTimeout_1() { return static_cast<int32_t>(offsetof(ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF, ___m_WebRequestTimeout_1)); }
	inline int32_t get_m_WebRequestTimeout_1() const { return ___m_WebRequestTimeout_1; }
	inline int32_t* get_address_of_m_WebRequestTimeout_1() { return &___m_WebRequestTimeout_1; }
	inline void set_m_WebRequestTimeout_1(int32_t value)
	{
		___m_WebRequestTimeout_1 = value;
	}
};


// UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase
struct ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C  : public RuntimeObject
{
public:
	// System.String UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_Id
	String_t* ___m_Id_1;
	// System.String UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_ProviderId
	String_t* ___m_ProviderId_2;
	// System.Object UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_Data
	RuntimeObject * ___m_Data_3;
	// System.Int32 UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_DependencyHashCode
	int32_t ___m_DependencyHashCode_4;
	// System.Int32 UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_HashCode
	int32_t ___m_HashCode_5;
	// System.Type UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_Type
	Type_t * ___m_Type_6;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_Dependencies
	List_1_tCC60720586CD8095D9FA65D37104C8CFEFCA0983 * ___m_Dependencies_7;
	// System.String UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_PrimaryKey
	String_t* ___m_PrimaryKey_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C, ___m_Id_1)); }
	inline String_t* get_m_Id_1() const { return ___m_Id_1; }
	inline String_t** get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(String_t* value)
	{
		___m_Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderId_2() { return static_cast<int32_t>(offsetof(ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C, ___m_ProviderId_2)); }
	inline String_t* get_m_ProviderId_2() const { return ___m_ProviderId_2; }
	inline String_t** get_address_of_m_ProviderId_2() { return &___m_ProviderId_2; }
	inline void set_m_ProviderId_2(String_t* value)
	{
		___m_ProviderId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProviderId_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Data_3() { return static_cast<int32_t>(offsetof(ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C, ___m_Data_3)); }
	inline RuntimeObject * get_m_Data_3() const { return ___m_Data_3; }
	inline RuntimeObject ** get_address_of_m_Data_3() { return &___m_Data_3; }
	inline void set_m_Data_3(RuntimeObject * value)
	{
		___m_Data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Data_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DependencyHashCode_4() { return static_cast<int32_t>(offsetof(ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C, ___m_DependencyHashCode_4)); }
	inline int32_t get_m_DependencyHashCode_4() const { return ___m_DependencyHashCode_4; }
	inline int32_t* get_address_of_m_DependencyHashCode_4() { return &___m_DependencyHashCode_4; }
	inline void set_m_DependencyHashCode_4(int32_t value)
	{
		___m_DependencyHashCode_4 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_5() { return static_cast<int32_t>(offsetof(ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C, ___m_HashCode_5)); }
	inline int32_t get_m_HashCode_5() const { return ___m_HashCode_5; }
	inline int32_t* get_address_of_m_HashCode_5() { return &___m_HashCode_5; }
	inline void set_m_HashCode_5(int32_t value)
	{
		___m_HashCode_5 = value;
	}

	inline static int32_t get_offset_of_m_Type_6() { return static_cast<int32_t>(offsetof(ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C, ___m_Type_6)); }
	inline Type_t * get_m_Type_6() const { return ___m_Type_6; }
	inline Type_t ** get_address_of_m_Type_6() { return &___m_Type_6; }
	inline void set_m_Type_6(Type_t * value)
	{
		___m_Type_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Dependencies_7() { return static_cast<int32_t>(offsetof(ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C, ___m_Dependencies_7)); }
	inline List_1_tCC60720586CD8095D9FA65D37104C8CFEFCA0983 * get_m_Dependencies_7() const { return ___m_Dependencies_7; }
	inline List_1_tCC60720586CD8095D9FA65D37104C8CFEFCA0983 ** get_address_of_m_Dependencies_7() { return &___m_Dependencies_7; }
	inline void set_m_Dependencies_7(List_1_tCC60720586CD8095D9FA65D37104C8CFEFCA0983 * value)
	{
		___m_Dependencies_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dependencies_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_PrimaryKey_8() { return static_cast<int32_t>(offsetof(ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C, ___m_PrimaryKey_8)); }
	inline String_t* get_m_PrimaryKey_8() const { return ___m_PrimaryKey_8; }
	inline String_t** get_address_of_m_PrimaryKey_8() { return &___m_PrimaryKey_8; }
	inline void set_m_PrimaryKey_8(String_t* value)
	{
		___m_PrimaryKey_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrimaryKey_8), (void*)value);
	}
};


// UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap
struct ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8  : public RuntimeObject
{
public:
	// System.String UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap::<LocatorId>k__BackingField
	String_t* ___U3CLocatorIdU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>> UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap::<Locations>k__BackingField
	Dictionary_2_t252CD5F999D800C98B116C8924D98E33812747D6 * ___U3CLocationsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLocatorIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8, ___U3CLocatorIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CLocatorIdU3Ek__BackingField_0() const { return ___U3CLocatorIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CLocatorIdU3Ek__BackingField_0() { return &___U3CLocatorIdU3Ek__BackingField_0; }
	inline void set_U3CLocatorIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CLocatorIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocatorIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocationsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8, ___U3CLocationsU3Ek__BackingField_1)); }
	inline Dictionary_2_t252CD5F999D800C98B116C8924D98E33812747D6 * get_U3CLocationsU3Ek__BackingField_1() const { return ___U3CLocationsU3Ek__BackingField_1; }
	inline Dictionary_2_t252CD5F999D800C98B116C8924D98E33812747D6 ** get_address_of_U3CLocationsU3Ek__BackingField_1() { return &___U3CLocationsU3Ek__BackingField_1; }
	inline void set_U3CLocationsU3Ek__BackingField_1(Dictionary_2_t252CD5F999D800C98B116C8924D98E33812747D6 * value)
	{
		___U3CLocationsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocationsU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.ResourceManagement.ResourceManager
struct ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::postProfilerEvents
	bool ___postProfilerEvents_0;
	// System.Func`2<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.String> UnityEngine.ResourceManagement.ResourceManager::<InternalIdTransformFunc>k__BackingField
	Func_2_t7992B3857C3AFEEE62B2362748CC3BE16829C9E5 * ___U3CInternalIdTransformFuncU3Ek__BackingField_2;
	// System.Action`1<UnityEngine.Networking.UnityWebRequest> UnityEngine.ResourceManagement.ResourceManager::<WebRequestOverride>k__BackingField
	Action_1_t93E83C69602A953E840CBDF697EDD10E266F47D0 * ___U3CWebRequestOverrideU3Ek__BackingField_3;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::CallbackHooksEnabled
	bool ___CallbackHooksEnabled_4;
	// ListWithEvents`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider> UnityEngine.ResourceManagement.ResourceManager::m_ResourceProviders
	ListWithEvents_1_t707B8F8E6EA83D829524975DE2E78802D44D7483 * ___m_ResourceProviders_5;
	// UnityEngine.ResourceManagement.Util.IAllocationStrategy UnityEngine.ResourceManagement.ResourceManager::m_allocator
	RuntimeObject* ___m_allocator_6;
	// ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver> UnityEngine.ResourceManagement.ResourceManager::m_UpdateReceivers
	ListWithEvents_1_t140F58A2A8D19A91538922235BB34676780A1EE2 * ___m_UpdateReceivers_7;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver> UnityEngine.ResourceManagement.ResourceManager::m_UpdateReceiversToRemove
	List_1_t42B4D8B6A894DBCA2E79764976B98CCC882FB11D * ___m_UpdateReceiversToRemove_8;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_UpdatingReceivers
	bool ___m_UpdatingReceivers_9;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_InsideUpdateMethod
	bool ___m_InsideUpdateMethod_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider> UnityEngine.ResourceManagement.ResourceManager::m_providerMap
	Dictionary_2_t1B2F62A5CB01E356B3C3FDEBB20B967EE7C405C9 * ___m_providerMap_11;
	// System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_AssetOperationCache
	Dictionary_2_tE29FF4DD4D0DDCC80F44D342E11FC0D97A94CC0A * ___m_AssetOperationCache_12;
	// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation> UnityEngine.ResourceManagement.ResourceManager::m_TrackedInstanceOperations
	HashSet_1_t01433913211306E52271EEE7566976D5EFC46A1D * ___m_TrackedInstanceOperations_13;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.ResourceManager::m_UpdateCallbacks
	DelegateList_1_t160D08954252A3DE253C53A7F9B2774406AAA31D * ___m_UpdateCallbacks_14;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_DeferredCompleteCallbacks
	List_1_t4C8FFBA32489BE0DA99C242CC428213F33A603C6 * ___m_DeferredCompleteCallbacks_15;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_InsideExecuteDeferredCallbacksMethod
	bool ___m_InsideExecuteDeferredCallbacksMethod_16;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest> UnityEngine.ResourceManagement.ResourceManager::m_DeferredCallbacksToRegister
	List_1_t72EF16CD17DC2FFCD924CD6FE6E91E25825D249B * ___m_DeferredCallbacksToRegister_17;
	// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object> UnityEngine.ResourceManagement.ResourceManager::m_obsoleteDiagnosticsHandler
	Action_4_tB83C8F50B5A70EB6ACEFFD5422338AA361EF1148 * ___m_obsoleteDiagnosticsHandler_18;
	// System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext> UnityEngine.ResourceManagement.ResourceManager::m_diagnosticsHandler
	Action_1_tD61C7D2B046523AB783EBF4D00B665A08F81B609 * ___m_diagnosticsHandler_19;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_ReleaseOpNonCached
	Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D * ___m_ReleaseOpNonCached_20;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_ReleaseOpCached
	Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D * ___m_ReleaseOpCached_21;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_ReleaseInstanceOp
	Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D * ___m_ReleaseInstanceOp_22;
	// UnityEngine.Networking.CertificateHandler UnityEngine.ResourceManagement.ResourceManager::<CertificateHandlerInstance>k__BackingField
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___U3CCertificateHandlerInstanceU3Ek__BackingField_25;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_RegisteredForCallbacks
	bool ___m_RegisteredForCallbacks_26;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> UnityEngine.ResourceManagement.ResourceManager::m_ProviderOperationTypeCache
	Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * ___m_ProviderOperationTypeCache_27;

public:
	inline static int32_t get_offset_of_postProfilerEvents_0() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___postProfilerEvents_0)); }
	inline bool get_postProfilerEvents_0() const { return ___postProfilerEvents_0; }
	inline bool* get_address_of_postProfilerEvents_0() { return &___postProfilerEvents_0; }
	inline void set_postProfilerEvents_0(bool value)
	{
		___postProfilerEvents_0 = value;
	}

	inline static int32_t get_offset_of_U3CInternalIdTransformFuncU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___U3CInternalIdTransformFuncU3Ek__BackingField_2)); }
	inline Func_2_t7992B3857C3AFEEE62B2362748CC3BE16829C9E5 * get_U3CInternalIdTransformFuncU3Ek__BackingField_2() const { return ___U3CInternalIdTransformFuncU3Ek__BackingField_2; }
	inline Func_2_t7992B3857C3AFEEE62B2362748CC3BE16829C9E5 ** get_address_of_U3CInternalIdTransformFuncU3Ek__BackingField_2() { return &___U3CInternalIdTransformFuncU3Ek__BackingField_2; }
	inline void set_U3CInternalIdTransformFuncU3Ek__BackingField_2(Func_2_t7992B3857C3AFEEE62B2362748CC3BE16829C9E5 * value)
	{
		___U3CInternalIdTransformFuncU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInternalIdTransformFuncU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWebRequestOverrideU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___U3CWebRequestOverrideU3Ek__BackingField_3)); }
	inline Action_1_t93E83C69602A953E840CBDF697EDD10E266F47D0 * get_U3CWebRequestOverrideU3Ek__BackingField_3() const { return ___U3CWebRequestOverrideU3Ek__BackingField_3; }
	inline Action_1_t93E83C69602A953E840CBDF697EDD10E266F47D0 ** get_address_of_U3CWebRequestOverrideU3Ek__BackingField_3() { return &___U3CWebRequestOverrideU3Ek__BackingField_3; }
	inline void set_U3CWebRequestOverrideU3Ek__BackingField_3(Action_1_t93E83C69602A953E840CBDF697EDD10E266F47D0 * value)
	{
		___U3CWebRequestOverrideU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWebRequestOverrideU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackHooksEnabled_4() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___CallbackHooksEnabled_4)); }
	inline bool get_CallbackHooksEnabled_4() const { return ___CallbackHooksEnabled_4; }
	inline bool* get_address_of_CallbackHooksEnabled_4() { return &___CallbackHooksEnabled_4; }
	inline void set_CallbackHooksEnabled_4(bool value)
	{
		___CallbackHooksEnabled_4 = value;
	}

	inline static int32_t get_offset_of_m_ResourceProviders_5() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_ResourceProviders_5)); }
	inline ListWithEvents_1_t707B8F8E6EA83D829524975DE2E78802D44D7483 * get_m_ResourceProviders_5() const { return ___m_ResourceProviders_5; }
	inline ListWithEvents_1_t707B8F8E6EA83D829524975DE2E78802D44D7483 ** get_address_of_m_ResourceProviders_5() { return &___m_ResourceProviders_5; }
	inline void set_m_ResourceProviders_5(ListWithEvents_1_t707B8F8E6EA83D829524975DE2E78802D44D7483 * value)
	{
		___m_ResourceProviders_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResourceProviders_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_allocator_6() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_allocator_6)); }
	inline RuntimeObject* get_m_allocator_6() const { return ___m_allocator_6; }
	inline RuntimeObject** get_address_of_m_allocator_6() { return &___m_allocator_6; }
	inline void set_m_allocator_6(RuntimeObject* value)
	{
		___m_allocator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_allocator_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateReceivers_7() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_UpdateReceivers_7)); }
	inline ListWithEvents_1_t140F58A2A8D19A91538922235BB34676780A1EE2 * get_m_UpdateReceivers_7() const { return ___m_UpdateReceivers_7; }
	inline ListWithEvents_1_t140F58A2A8D19A91538922235BB34676780A1EE2 ** get_address_of_m_UpdateReceivers_7() { return &___m_UpdateReceivers_7; }
	inline void set_m_UpdateReceivers_7(ListWithEvents_1_t140F58A2A8D19A91538922235BB34676780A1EE2 * value)
	{
		___m_UpdateReceivers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdateReceivers_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateReceiversToRemove_8() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_UpdateReceiversToRemove_8)); }
	inline List_1_t42B4D8B6A894DBCA2E79764976B98CCC882FB11D * get_m_UpdateReceiversToRemove_8() const { return ___m_UpdateReceiversToRemove_8; }
	inline List_1_t42B4D8B6A894DBCA2E79764976B98CCC882FB11D ** get_address_of_m_UpdateReceiversToRemove_8() { return &___m_UpdateReceiversToRemove_8; }
	inline void set_m_UpdateReceiversToRemove_8(List_1_t42B4D8B6A894DBCA2E79764976B98CCC882FB11D * value)
	{
		___m_UpdateReceiversToRemove_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdateReceiversToRemove_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdatingReceivers_9() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_UpdatingReceivers_9)); }
	inline bool get_m_UpdatingReceivers_9() const { return ___m_UpdatingReceivers_9; }
	inline bool* get_address_of_m_UpdatingReceivers_9() { return &___m_UpdatingReceivers_9; }
	inline void set_m_UpdatingReceivers_9(bool value)
	{
		___m_UpdatingReceivers_9 = value;
	}

	inline static int32_t get_offset_of_m_InsideUpdateMethod_10() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_InsideUpdateMethod_10)); }
	inline bool get_m_InsideUpdateMethod_10() const { return ___m_InsideUpdateMethod_10; }
	inline bool* get_address_of_m_InsideUpdateMethod_10() { return &___m_InsideUpdateMethod_10; }
	inline void set_m_InsideUpdateMethod_10(bool value)
	{
		___m_InsideUpdateMethod_10 = value;
	}

	inline static int32_t get_offset_of_m_providerMap_11() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_providerMap_11)); }
	inline Dictionary_2_t1B2F62A5CB01E356B3C3FDEBB20B967EE7C405C9 * get_m_providerMap_11() const { return ___m_providerMap_11; }
	inline Dictionary_2_t1B2F62A5CB01E356B3C3FDEBB20B967EE7C405C9 ** get_address_of_m_providerMap_11() { return &___m_providerMap_11; }
	inline void set_m_providerMap_11(Dictionary_2_t1B2F62A5CB01E356B3C3FDEBB20B967EE7C405C9 * value)
	{
		___m_providerMap_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_providerMap_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_AssetOperationCache_12() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_AssetOperationCache_12)); }
	inline Dictionary_2_tE29FF4DD4D0DDCC80F44D342E11FC0D97A94CC0A * get_m_AssetOperationCache_12() const { return ___m_AssetOperationCache_12; }
	inline Dictionary_2_tE29FF4DD4D0DDCC80F44D342E11FC0D97A94CC0A ** get_address_of_m_AssetOperationCache_12() { return &___m_AssetOperationCache_12; }
	inline void set_m_AssetOperationCache_12(Dictionary_2_tE29FF4DD4D0DDCC80F44D342E11FC0D97A94CC0A * value)
	{
		___m_AssetOperationCache_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AssetOperationCache_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedInstanceOperations_13() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_TrackedInstanceOperations_13)); }
	inline HashSet_1_t01433913211306E52271EEE7566976D5EFC46A1D * get_m_TrackedInstanceOperations_13() const { return ___m_TrackedInstanceOperations_13; }
	inline HashSet_1_t01433913211306E52271EEE7566976D5EFC46A1D ** get_address_of_m_TrackedInstanceOperations_13() { return &___m_TrackedInstanceOperations_13; }
	inline void set_m_TrackedInstanceOperations_13(HashSet_1_t01433913211306E52271EEE7566976D5EFC46A1D * value)
	{
		___m_TrackedInstanceOperations_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedInstanceOperations_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateCallbacks_14() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_UpdateCallbacks_14)); }
	inline DelegateList_1_t160D08954252A3DE253C53A7F9B2774406AAA31D * get_m_UpdateCallbacks_14() const { return ___m_UpdateCallbacks_14; }
	inline DelegateList_1_t160D08954252A3DE253C53A7F9B2774406AAA31D ** get_address_of_m_UpdateCallbacks_14() { return &___m_UpdateCallbacks_14; }
	inline void set_m_UpdateCallbacks_14(DelegateList_1_t160D08954252A3DE253C53A7F9B2774406AAA31D * value)
	{
		___m_UpdateCallbacks_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdateCallbacks_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeferredCompleteCallbacks_15() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_DeferredCompleteCallbacks_15)); }
	inline List_1_t4C8FFBA32489BE0DA99C242CC428213F33A603C6 * get_m_DeferredCompleteCallbacks_15() const { return ___m_DeferredCompleteCallbacks_15; }
	inline List_1_t4C8FFBA32489BE0DA99C242CC428213F33A603C6 ** get_address_of_m_DeferredCompleteCallbacks_15() { return &___m_DeferredCompleteCallbacks_15; }
	inline void set_m_DeferredCompleteCallbacks_15(List_1_t4C8FFBA32489BE0DA99C242CC428213F33A603C6 * value)
	{
		___m_DeferredCompleteCallbacks_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeferredCompleteCallbacks_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_InsideExecuteDeferredCallbacksMethod_16() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_InsideExecuteDeferredCallbacksMethod_16)); }
	inline bool get_m_InsideExecuteDeferredCallbacksMethod_16() const { return ___m_InsideExecuteDeferredCallbacksMethod_16; }
	inline bool* get_address_of_m_InsideExecuteDeferredCallbacksMethod_16() { return &___m_InsideExecuteDeferredCallbacksMethod_16; }
	inline void set_m_InsideExecuteDeferredCallbacksMethod_16(bool value)
	{
		___m_InsideExecuteDeferredCallbacksMethod_16 = value;
	}

	inline static int32_t get_offset_of_m_DeferredCallbacksToRegister_17() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_DeferredCallbacksToRegister_17)); }
	inline List_1_t72EF16CD17DC2FFCD924CD6FE6E91E25825D249B * get_m_DeferredCallbacksToRegister_17() const { return ___m_DeferredCallbacksToRegister_17; }
	inline List_1_t72EF16CD17DC2FFCD924CD6FE6E91E25825D249B ** get_address_of_m_DeferredCallbacksToRegister_17() { return &___m_DeferredCallbacksToRegister_17; }
	inline void set_m_DeferredCallbacksToRegister_17(List_1_t72EF16CD17DC2FFCD924CD6FE6E91E25825D249B * value)
	{
		___m_DeferredCallbacksToRegister_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeferredCallbacksToRegister_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_obsoleteDiagnosticsHandler_18() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_obsoleteDiagnosticsHandler_18)); }
	inline Action_4_tB83C8F50B5A70EB6ACEFFD5422338AA361EF1148 * get_m_obsoleteDiagnosticsHandler_18() const { return ___m_obsoleteDiagnosticsHandler_18; }
	inline Action_4_tB83C8F50B5A70EB6ACEFFD5422338AA361EF1148 ** get_address_of_m_obsoleteDiagnosticsHandler_18() { return &___m_obsoleteDiagnosticsHandler_18; }
	inline void set_m_obsoleteDiagnosticsHandler_18(Action_4_tB83C8F50B5A70EB6ACEFFD5422338AA361EF1148 * value)
	{
		___m_obsoleteDiagnosticsHandler_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_obsoleteDiagnosticsHandler_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_diagnosticsHandler_19() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_diagnosticsHandler_19)); }
	inline Action_1_tD61C7D2B046523AB783EBF4D00B665A08F81B609 * get_m_diagnosticsHandler_19() const { return ___m_diagnosticsHandler_19; }
	inline Action_1_tD61C7D2B046523AB783EBF4D00B665A08F81B609 ** get_address_of_m_diagnosticsHandler_19() { return &___m_diagnosticsHandler_19; }
	inline void set_m_diagnosticsHandler_19(Action_1_tD61C7D2B046523AB783EBF4D00B665A08F81B609 * value)
	{
		___m_diagnosticsHandler_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_diagnosticsHandler_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReleaseOpNonCached_20() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_ReleaseOpNonCached_20)); }
	inline Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D * get_m_ReleaseOpNonCached_20() const { return ___m_ReleaseOpNonCached_20; }
	inline Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D ** get_address_of_m_ReleaseOpNonCached_20() { return &___m_ReleaseOpNonCached_20; }
	inline void set_m_ReleaseOpNonCached_20(Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D * value)
	{
		___m_ReleaseOpNonCached_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReleaseOpNonCached_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReleaseOpCached_21() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_ReleaseOpCached_21)); }
	inline Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D * get_m_ReleaseOpCached_21() const { return ___m_ReleaseOpCached_21; }
	inline Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D ** get_address_of_m_ReleaseOpCached_21() { return &___m_ReleaseOpCached_21; }
	inline void set_m_ReleaseOpCached_21(Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D * value)
	{
		___m_ReleaseOpCached_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReleaseOpCached_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReleaseInstanceOp_22() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_ReleaseInstanceOp_22)); }
	inline Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D * get_m_ReleaseInstanceOp_22() const { return ___m_ReleaseInstanceOp_22; }
	inline Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D ** get_address_of_m_ReleaseInstanceOp_22() { return &___m_ReleaseInstanceOp_22; }
	inline void set_m_ReleaseInstanceOp_22(Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D * value)
	{
		___m_ReleaseInstanceOp_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReleaseInstanceOp_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCertificateHandlerInstanceU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___U3CCertificateHandlerInstanceU3Ek__BackingField_25)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_U3CCertificateHandlerInstanceU3Ek__BackingField_25() const { return ___U3CCertificateHandlerInstanceU3Ek__BackingField_25; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_U3CCertificateHandlerInstanceU3Ek__BackingField_25() { return &___U3CCertificateHandlerInstanceU3Ek__BackingField_25; }
	inline void set_U3CCertificateHandlerInstanceU3Ek__BackingField_25(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___U3CCertificateHandlerInstanceU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCertificateHandlerInstanceU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredForCallbacks_26() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_RegisteredForCallbacks_26)); }
	inline bool get_m_RegisteredForCallbacks_26() const { return ___m_RegisteredForCallbacks_26; }
	inline bool* get_address_of_m_RegisteredForCallbacks_26() { return &___m_RegisteredForCallbacks_26; }
	inline void set_m_RegisteredForCallbacks_26(bool value)
	{
		___m_RegisteredForCallbacks_26 = value;
	}

	inline static int32_t get_offset_of_m_ProviderOperationTypeCache_27() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037, ___m_ProviderOperationTypeCache_27)); }
	inline Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * get_m_ProviderOperationTypeCache_27() const { return ___m_ProviderOperationTypeCache_27; }
	inline Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 ** get_address_of_m_ProviderOperationTypeCache_27() { return &___m_ProviderOperationTypeCache_27; }
	inline void set_m_ProviderOperationTypeCache_27(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * value)
	{
		___m_ProviderOperationTypeCache_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProviderOperationTypeCache_27), (void*)value);
	}
};

struct ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037_StaticFields
{
public:
	// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception> UnityEngine.ResourceManagement.ResourceManager::<ExceptionHandler>k__BackingField
	Action_2_tE037A9A64F7D0B18736E26533D8819D3CA6D6A41 * ___U3CExceptionHandlerU3Ek__BackingField_1;
	// System.Int32 UnityEngine.ResourceManagement.ResourceManager::s_GroupOperationTypeHash
	int32_t ___s_GroupOperationTypeHash_23;
	// System.Int32 UnityEngine.ResourceManagement.ResourceManager::s_InstanceOperationTypeHash
	int32_t ___s_InstanceOperationTypeHash_24;

public:
	inline static int32_t get_offset_of_U3CExceptionHandlerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037_StaticFields, ___U3CExceptionHandlerU3Ek__BackingField_1)); }
	inline Action_2_tE037A9A64F7D0B18736E26533D8819D3CA6D6A41 * get_U3CExceptionHandlerU3Ek__BackingField_1() const { return ___U3CExceptionHandlerU3Ek__BackingField_1; }
	inline Action_2_tE037A9A64F7D0B18736E26533D8819D3CA6D6A41 ** get_address_of_U3CExceptionHandlerU3Ek__BackingField_1() { return &___U3CExceptionHandlerU3Ek__BackingField_1; }
	inline void set_U3CExceptionHandlerU3Ek__BackingField_1(Action_2_tE037A9A64F7D0B18736E26533D8819D3CA6D6A41 * value)
	{
		___U3CExceptionHandlerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExceptionHandlerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_GroupOperationTypeHash_23() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037_StaticFields, ___s_GroupOperationTypeHash_23)); }
	inline int32_t get_s_GroupOperationTypeHash_23() const { return ___s_GroupOperationTypeHash_23; }
	inline int32_t* get_address_of_s_GroupOperationTypeHash_23() { return &___s_GroupOperationTypeHash_23; }
	inline void set_s_GroupOperationTypeHash_23(int32_t value)
	{
		___s_GroupOperationTypeHash_23 = value;
	}

	inline static int32_t get_offset_of_s_InstanceOperationTypeHash_24() { return static_cast<int32_t>(offsetof(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037_StaticFields, ___s_InstanceOperationTypeHash_24)); }
	inline int32_t get_s_InstanceOperationTypeHash_24() const { return ___s_InstanceOperationTypeHash_24; }
	inline int32_t* get_address_of_s_InstanceOperationTypeHash_24() { return &___s_InstanceOperationTypeHash_24; }
	inline void set_s_InstanceOperationTypeHash_24(int32_t value)
	{
		___s_InstanceOperationTypeHash_24 = value;
	}
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

// UnityEngine.ResourceManagement.WebRequestQueueOperation
struct WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.ResourceManagement.WebRequestQueueOperation::m_Completed
	bool ___m_Completed_0;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.ResourceManagement.WebRequestQueueOperation::Result
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * ___Result_1;
	// System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> UnityEngine.ResourceManagement.WebRequestQueueOperation::OnComplete
	Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696 * ___OnComplete_2;
	// UnityEngine.Networking.UnityWebRequest UnityEngine.ResourceManagement.WebRequestQueueOperation::m_WebRequest
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___m_WebRequest_3;

public:
	inline static int32_t get_offset_of_m_Completed_0() { return static_cast<int32_t>(offsetof(WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151, ___m_Completed_0)); }
	inline bool get_m_Completed_0() const { return ___m_Completed_0; }
	inline bool* get_address_of_m_Completed_0() { return &___m_Completed_0; }
	inline void set_m_Completed_0(bool value)
	{
		___m_Completed_0 = value;
	}

	inline static int32_t get_offset_of_Result_1() { return static_cast<int32_t>(offsetof(WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151, ___Result_1)); }
	inline UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * get_Result_1() const { return ___Result_1; }
	inline UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 ** get_address_of_Result_1() { return &___Result_1; }
	inline void set_Result_1(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * value)
	{
		___Result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Result_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnComplete_2() { return static_cast<int32_t>(offsetof(WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151, ___OnComplete_2)); }
	inline Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696 * get_OnComplete_2() const { return ___OnComplete_2; }
	inline Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696 ** get_address_of_OnComplete_2() { return &___OnComplete_2; }
	inline void set_OnComplete_2(Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696 * value)
	{
		___OnComplete_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnComplete_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_WebRequest_3() { return static_cast<int32_t>(offsetof(WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151, ___m_WebRequest_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_m_WebRequest_3() const { return ___m_WebRequest_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_m_WebRequest_3() { return &___m_WebRequest_3; }
	inline void set_m_WebRequest_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___m_WebRequest_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WebRequest_3), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c
struct U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB_StaticFields
{
public:
	// UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c::<>9
	U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider,System.Boolean> UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c::<>9__13_0
	Func_2_t69C4F92AEBB32B94C7D556BD1CD790E8FC896B45 * ___U3CU3E9__13_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB_StaticFields, ___U3CU3E9__13_0_1)); }
	inline Func_2_t69C4F92AEBB32B94C7D556BD1CD790E8FC896B45 * get_U3CU3E9__13_0_1() const { return ___U3CU3E9__13_0_1; }
	inline Func_2_t69C4F92AEBB32B94C7D556BD1CD790E8FC896B45 ** get_address_of_U3CU3E9__13_0_1() { return &___U3CU3E9__13_0_1; }
	inline void set_U3CU3E9__13_0_1(Func_2_t69C4F92AEBB32B94C7D556BD1CD790E8FC896B45 * value)
	{
		___U3CU3E9__13_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_1), (void*)value);
	}
};


// UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tF42A377A5088BDDD9F2C683DAA8C640D1A4D6A2D  : public RuntimeObject
{
public:
	// UnityEngine.AddressableAssets.AddressablesImpl UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass16_0::addressables
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2 * ___addressables_0;
	// System.String UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass16_0::providerSuffix
	String_t* ___providerSuffix_1;
	// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass16_0::remoteHashLocation
	RuntimeObject* ___remoteHashLocation_2;

public:
	inline static int32_t get_offset_of_addressables_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tF42A377A5088BDDD9F2C683DAA8C640D1A4D6A2D, ___addressables_0)); }
	inline AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2 * get_addressables_0() const { return ___addressables_0; }
	inline AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2 ** get_address_of_addressables_0() { return &___addressables_0; }
	inline void set_addressables_0(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2 * value)
	{
		___addressables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addressables_0), (void*)value);
	}

	inline static int32_t get_offset_of_providerSuffix_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tF42A377A5088BDDD9F2C683DAA8C640D1A4D6A2D, ___providerSuffix_1)); }
	inline String_t* get_providerSuffix_1() const { return ___providerSuffix_1; }
	inline String_t** get_address_of_providerSuffix_1() { return &___providerSuffix_1; }
	inline void set_providerSuffix_1(String_t* value)
	{
		___providerSuffix_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___providerSuffix_1), (void*)value);
	}

	inline static int32_t get_offset_of_remoteHashLocation_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tF42A377A5088BDDD9F2C683DAA8C640D1A4D6A2D, ___remoteHashLocation_2)); }
	inline RuntimeObject* get_remoteHashLocation_2() const { return ___remoteHashLocation_2; }
	inline RuntimeObject** get_address_of_remoteHashLocation_2() { return &___remoteHashLocation_2; }
	inline void set_remoteHashLocation_2(RuntimeObject* value)
	{
		___remoteHashLocation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteHashLocation_2), (void*)value);
	}
};


// UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tE67E92DF82A5AEC1124BF444A40FC210787F25BB  : public RuntimeObject
{
public:
	// UnityEngine.AddressableAssets.Initialization.InitializationOperation UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass18_0::<>4__this
	InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0 * ___U3CU3E4__this_0;
	// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass18_0::catalogs
	RuntimeObject* ___catalogs_1;
	// UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass18_0::locMap
	ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8 * ___locMap_2;
	// System.Int32 UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass18_0::index
	int32_t ___index_3;
	// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass18_0::remoteHashLocation
	RuntimeObject* ___remoteHashLocation_4;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_tE67E92DF82A5AEC1124BF444A40FC210787F25BB, ___U3CU3E4__this_0)); }
	inline InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_catalogs_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_tE67E92DF82A5AEC1124BF444A40FC210787F25BB, ___catalogs_1)); }
	inline RuntimeObject* get_catalogs_1() const { return ___catalogs_1; }
	inline RuntimeObject** get_address_of_catalogs_1() { return &___catalogs_1; }
	inline void set_catalogs_1(RuntimeObject* value)
	{
		___catalogs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___catalogs_1), (void*)value);
	}

	inline static int32_t get_offset_of_locMap_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_tE67E92DF82A5AEC1124BF444A40FC210787F25BB, ___locMap_2)); }
	inline ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8 * get_locMap_2() const { return ___locMap_2; }
	inline ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8 ** get_address_of_locMap_2() { return &___locMap_2; }
	inline void set_locMap_2(ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8 * value)
	{
		___locMap_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locMap_2), (void*)value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_tE67E92DF82A5AEC1124BF444A40FC210787F25BB, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_remoteHashLocation_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_tE67E92DF82A5AEC1124BF444A40FC210787F25BB, ___remoteHashLocation_4)); }
	inline RuntimeObject* get_remoteHashLocation_4() const { return ___remoteHashLocation_4; }
	inline RuntimeObject** get_address_of_remoteHashLocation_4() { return &___remoteHashLocation_4; }
	inline void set_remoteHashLocation_4(RuntimeObject* value)
	{
		___remoteHashLocation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteHashLocation_4), (void*)value);
	}
};


// UnityEngine.AddressableAssets.UpdateCatalogsOperation/<>c
struct U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7_StaticFields
{
public:
	// UnityEngine.AddressableAssets.UpdateCatalogsOperation/<>c UnityEngine.AddressableAssets.UpdateCatalogsOperation/<>c::<>9
	U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider,System.Boolean> UnityEngine.AddressableAssets.UpdateCatalogsOperation/<>c::<>9__4_0
	Func_2_t69C4F92AEBB32B94C7D556BD1CD790E8FC896B45 * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_2_t69C4F92AEBB32B94C7D556BD1CD790E8FC896B45 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_2_t69C4F92AEBB32B94C7D556BD1CD790E8FC896B45 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_2_t69C4F92AEBB32B94C7D556BD1CD790E8FC896B45 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog
struct BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD  : public RuntimeObject
{
public:
	// System.String UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::m_BundlePath
	String_t* ___m_BundlePath_0;
	// System.Boolean UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::m_OpInProgress
	bool ___m_OpInProgress_1;
	// UnityEngine.AssetBundleCreateRequest UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::m_LoadBundleRequest
	AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * ___m_LoadBundleRequest_2;
	// UnityEngine.AssetBundle UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::m_CatalogAssetBundle
	AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * ___m_CatalogAssetBundle_3;
	// UnityEngine.AssetBundleRequest UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::m_LoadTextAssetRequest
	AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * ___m_LoadTextAssetRequest_4;
	// UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::m_CatalogData
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * ___m_CatalogData_5;
	// UnityEngine.ResourceManagement.WebRequestQueueOperation UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::m_WebRequestQueueOperation
	WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151 * ___m_WebRequestQueueOperation_6;
	// UnityEngine.AsyncOperation UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::m_RequestOperation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___m_RequestOperation_7;
	// System.Int32 UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::m_WebRequestTimeout
	int32_t ___m_WebRequestTimeout_8;
	// System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::OnLoaded
	Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * ___OnLoaded_9;

public:
	inline static int32_t get_offset_of_m_BundlePath_0() { return static_cast<int32_t>(offsetof(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD, ___m_BundlePath_0)); }
	inline String_t* get_m_BundlePath_0() const { return ___m_BundlePath_0; }
	inline String_t** get_address_of_m_BundlePath_0() { return &___m_BundlePath_0; }
	inline void set_m_BundlePath_0(String_t* value)
	{
		___m_BundlePath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BundlePath_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_OpInProgress_1() { return static_cast<int32_t>(offsetof(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD, ___m_OpInProgress_1)); }
	inline bool get_m_OpInProgress_1() const { return ___m_OpInProgress_1; }
	inline bool* get_address_of_m_OpInProgress_1() { return &___m_OpInProgress_1; }
	inline void set_m_OpInProgress_1(bool value)
	{
		___m_OpInProgress_1 = value;
	}

	inline static int32_t get_offset_of_m_LoadBundleRequest_2() { return static_cast<int32_t>(offsetof(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD, ___m_LoadBundleRequest_2)); }
	inline AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * get_m_LoadBundleRequest_2() const { return ___m_LoadBundleRequest_2; }
	inline AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A ** get_address_of_m_LoadBundleRequest_2() { return &___m_LoadBundleRequest_2; }
	inline void set_m_LoadBundleRequest_2(AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * value)
	{
		___m_LoadBundleRequest_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoadBundleRequest_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CatalogAssetBundle_3() { return static_cast<int32_t>(offsetof(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD, ___m_CatalogAssetBundle_3)); }
	inline AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * get_m_CatalogAssetBundle_3() const { return ___m_CatalogAssetBundle_3; }
	inline AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 ** get_address_of_m_CatalogAssetBundle_3() { return &___m_CatalogAssetBundle_3; }
	inline void set_m_CatalogAssetBundle_3(AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * value)
	{
		___m_CatalogAssetBundle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CatalogAssetBundle_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_LoadTextAssetRequest_4() { return static_cast<int32_t>(offsetof(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD, ___m_LoadTextAssetRequest_4)); }
	inline AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * get_m_LoadTextAssetRequest_4() const { return ___m_LoadTextAssetRequest_4; }
	inline AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A ** get_address_of_m_LoadTextAssetRequest_4() { return &___m_LoadTextAssetRequest_4; }
	inline void set_m_LoadTextAssetRequest_4(AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * value)
	{
		___m_LoadTextAssetRequest_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoadTextAssetRequest_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CatalogData_5() { return static_cast<int32_t>(offsetof(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD, ___m_CatalogData_5)); }
	inline ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * get_m_CatalogData_5() const { return ___m_CatalogData_5; }
	inline ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D ** get_address_of_m_CatalogData_5() { return &___m_CatalogData_5; }
	inline void set_m_CatalogData_5(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * value)
	{
		___m_CatalogData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CatalogData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_WebRequestQueueOperation_6() { return static_cast<int32_t>(offsetof(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD, ___m_WebRequestQueueOperation_6)); }
	inline WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151 * get_m_WebRequestQueueOperation_6() const { return ___m_WebRequestQueueOperation_6; }
	inline WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151 ** get_address_of_m_WebRequestQueueOperation_6() { return &___m_WebRequestQueueOperation_6; }
	inline void set_m_WebRequestQueueOperation_6(WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151 * value)
	{
		___m_WebRequestQueueOperation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WebRequestQueueOperation_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_RequestOperation_7() { return static_cast<int32_t>(offsetof(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD, ___m_RequestOperation_7)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_m_RequestOperation_7() const { return ___m_RequestOperation_7; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_m_RequestOperation_7() { return &___m_RequestOperation_7; }
	inline void set_m_RequestOperation_7(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___m_RequestOperation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RequestOperation_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_WebRequestTimeout_8() { return static_cast<int32_t>(offsetof(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD, ___m_WebRequestTimeout_8)); }
	inline int32_t get_m_WebRequestTimeout_8() const { return ___m_WebRequestTimeout_8; }
	inline int32_t* get_address_of_m_WebRequestTimeout_8() { return &___m_WebRequestTimeout_8; }
	inline void set_m_WebRequestTimeout_8(int32_t value)
	{
		___m_WebRequestTimeout_8 = value;
	}

	inline static int32_t get_offset_of_OnLoaded_9() { return static_cast<int32_t>(offsetof(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD, ___OnLoaded_9)); }
	inline Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * get_OnLoaded_9() const { return ___OnLoaded_9; }
	inline Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 ** get_address_of_OnLoaded_9() { return &___OnLoaded_9; }
	inline void set_OnLoaded_9(Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * value)
	{
		___OnLoaded_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLoaded_9), (void*)value);
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>>
struct AsyncOperationHandle_1_t5CED34FCEBFC00E685EAABBF350C43CBC2AED1D4 
{
public:
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t83E82AF13D0861ABF96E701C62511E1FDE92A061 * ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;

public:
	inline static int32_t get_offset_of_m_InternalOp_0() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t5CED34FCEBFC00E685EAABBF350C43CBC2AED1D4, ___m_InternalOp_0)); }
	inline AsyncOperationBase_1_t83E82AF13D0861ABF96E701C62511E1FDE92A061 * get_m_InternalOp_0() const { return ___m_InternalOp_0; }
	inline AsyncOperationBase_1_t83E82AF13D0861ABF96E701C62511E1FDE92A061 ** get_address_of_m_InternalOp_0() { return &___m_InternalOp_0; }
	inline void set_m_InternalOp_0(AsyncOperationBase_1_t83E82AF13D0861ABF96E701C62511E1FDE92A061 * value)
	{
		___m_InternalOp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalOp_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t5CED34FCEBFC00E685EAABBF350C43CBC2AED1D4, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_LocationName_2() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t5CED34FCEBFC00E685EAABBF350C43CBC2AED1D4, ___m_LocationName_2)); }
	inline String_t* get_m_LocationName_2() const { return ___m_LocationName_2; }
	inline String_t** get_address_of_m_LocationName_2() { return &___m_LocationName_2; }
	inline void set_m_LocationName_2(String_t* value)
	{
		___m_LocationName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocationName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t5CED34FCEBFC00E685EAABBF350C43CBC2AED1D4, ___m_UnloadSceneOpExcludeReleaseCallback_3)); }
	inline bool get_m_UnloadSceneOpExcludeReleaseCallback_3() const { return ___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline bool* get_address_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return &___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline void set_m_UnloadSceneOpExcludeReleaseCallback_3(bool value)
	{
		___m_UnloadSceneOpExcludeReleaseCallback_3 = value;
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.List`1<System.String>>
struct AsyncOperationHandle_1_t5DE487B645CF83194DCB3AD2EF93EB8E154B2B0B 
{
public:
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tDE0B6217541A6B0E778A91D29B4B943D24801A35 * ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;

public:
	inline static int32_t get_offset_of_m_InternalOp_0() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t5DE487B645CF83194DCB3AD2EF93EB8E154B2B0B, ___m_InternalOp_0)); }
	inline AsyncOperationBase_1_tDE0B6217541A6B0E778A91D29B4B943D24801A35 * get_m_InternalOp_0() const { return ___m_InternalOp_0; }
	inline AsyncOperationBase_1_tDE0B6217541A6B0E778A91D29B4B943D24801A35 ** get_address_of_m_InternalOp_0() { return &___m_InternalOp_0; }
	inline void set_m_InternalOp_0(AsyncOperationBase_1_tDE0B6217541A6B0E778A91D29B4B943D24801A35 * value)
	{
		___m_InternalOp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalOp_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t5DE487B645CF83194DCB3AD2EF93EB8E154B2B0B, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_LocationName_2() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t5DE487B645CF83194DCB3AD2EF93EB8E154B2B0B, ___m_LocationName_2)); }
	inline String_t* get_m_LocationName_2() const { return ___m_LocationName_2; }
	inline String_t** get_address_of_m_LocationName_2() { return &___m_LocationName_2; }
	inline void set_m_LocationName_2(String_t* value)
	{
		___m_LocationName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocationName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t5DE487B645CF83194DCB3AD2EF93EB8E154B2B0B, ___m_UnloadSceneOpExcludeReleaseCallback_3)); }
	inline bool get_m_UnloadSceneOpExcludeReleaseCallback_3() const { return ___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline bool* get_address_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return &___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline void set_m_UnloadSceneOpExcludeReleaseCallback_3(bool value)
	{
		___m_UnloadSceneOpExcludeReleaseCallback_3 = value;
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>
struct AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 
{
public:
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tAB1F47A33E4D2FAA60BB0A9C067DAEDAA3E4A402 * ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;

public:
	inline static int32_t get_offset_of_m_InternalOp_0() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442, ___m_InternalOp_0)); }
	inline AsyncOperationBase_1_tAB1F47A33E4D2FAA60BB0A9C067DAEDAA3E4A402 * get_m_InternalOp_0() const { return ___m_InternalOp_0; }
	inline AsyncOperationBase_1_tAB1F47A33E4D2FAA60BB0A9C067DAEDAA3E4A402 ** get_address_of_m_InternalOp_0() { return &___m_InternalOp_0; }
	inline void set_m_InternalOp_0(AsyncOperationBase_1_tAB1F47A33E4D2FAA60BB0A9C067DAEDAA3E4A402 * value)
	{
		___m_InternalOp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalOp_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_LocationName_2() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442, ___m_LocationName_2)); }
	inline String_t* get_m_LocationName_2() const { return ___m_LocationName_2; }
	inline String_t** get_address_of_m_LocationName_2() { return &___m_LocationName_2; }
	inline void set_m_LocationName_2(String_t* value)
	{
		___m_LocationName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocationName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442, ___m_UnloadSceneOpExcludeReleaseCallback_3)); }
	inline bool get_m_UnloadSceneOpExcludeReleaseCallback_3() const { return ___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline bool* get_address_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return &___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline void set_m_UnloadSceneOpExcludeReleaseCallback_3(bool value)
	{
		___m_UnloadSceneOpExcludeReleaseCallback_3 = value;
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>
struct AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE 
{
public:
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA * ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;

public:
	inline static int32_t get_offset_of_m_InternalOp_0() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE, ___m_InternalOp_0)); }
	inline AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA * get_m_InternalOp_0() const { return ___m_InternalOp_0; }
	inline AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA ** get_address_of_m_InternalOp_0() { return &___m_InternalOp_0; }
	inline void set_m_InternalOp_0(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA * value)
	{
		___m_InternalOp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalOp_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_LocationName_2() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE, ___m_LocationName_2)); }
	inline String_t* get_m_LocationName_2() const { return ___m_LocationName_2; }
	inline String_t** get_address_of_m_LocationName_2() { return &___m_LocationName_2; }
	inline void set_m_LocationName_2(String_t* value)
	{
		___m_LocationName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocationName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE, ___m_UnloadSceneOpExcludeReleaseCallback_3)); }
	inline bool get_m_UnloadSceneOpExcludeReleaseCallback_3() const { return ___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline bool* get_address_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return &___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline void set_m_UnloadSceneOpExcludeReleaseCallback_3(bool value)
	{
		___m_UnloadSceneOpExcludeReleaseCallback_3 = value;
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>
struct AsyncOperationHandle_1_t32FCA2B8F199EEDA03C392932AF85F2AD9C388D7 
{
public:
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t77B00BFC3586344473A296EB5124C9489A85AE23 * ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;

public:
	inline static int32_t get_offset_of_m_InternalOp_0() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t32FCA2B8F199EEDA03C392932AF85F2AD9C388D7, ___m_InternalOp_0)); }
	inline AsyncOperationBase_1_t77B00BFC3586344473A296EB5124C9489A85AE23 * get_m_InternalOp_0() const { return ___m_InternalOp_0; }
	inline AsyncOperationBase_1_t77B00BFC3586344473A296EB5124C9489A85AE23 ** get_address_of_m_InternalOp_0() { return &___m_InternalOp_0; }
	inline void set_m_InternalOp_0(AsyncOperationBase_1_t77B00BFC3586344473A296EB5124C9489A85AE23 * value)
	{
		___m_InternalOp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalOp_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t32FCA2B8F199EEDA03C392932AF85F2AD9C388D7, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_LocationName_2() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t32FCA2B8F199EEDA03C392932AF85F2AD9C388D7, ___m_LocationName_2)); }
	inline String_t* get_m_LocationName_2() const { return ___m_LocationName_2; }
	inline String_t** get_address_of_m_LocationName_2() { return &___m_LocationName_2; }
	inline void set_m_LocationName_2(String_t* value)
	{
		___m_LocationName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocationName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t32FCA2B8F199EEDA03C392932AF85F2AD9C388D7, ___m_UnloadSceneOpExcludeReleaseCallback_3)); }
	inline bool get_m_UnloadSceneOpExcludeReleaseCallback_3() const { return ___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline bool* get_address_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return &___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline void set_m_UnloadSceneOpExcludeReleaseCallback_3(bool value)
	{
		___m_UnloadSceneOpExcludeReleaseCallback_3 = value;
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData>
struct AsyncOperationHandle_1_tD9812B9979E4D55015216D81BCBF97A7323C3B10 
{
public:
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t2CE3F2102EB1B1FCA19149FD17C46F73D43CA783 * ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;

public:
	inline static int32_t get_offset_of_m_InternalOp_0() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tD9812B9979E4D55015216D81BCBF97A7323C3B10, ___m_InternalOp_0)); }
	inline AsyncOperationBase_1_t2CE3F2102EB1B1FCA19149FD17C46F73D43CA783 * get_m_InternalOp_0() const { return ___m_InternalOp_0; }
	inline AsyncOperationBase_1_t2CE3F2102EB1B1FCA19149FD17C46F73D43CA783 ** get_address_of_m_InternalOp_0() { return &___m_InternalOp_0; }
	inline void set_m_InternalOp_0(AsyncOperationBase_1_t2CE3F2102EB1B1FCA19149FD17C46F73D43CA783 * value)
	{
		___m_InternalOp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalOp_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tD9812B9979E4D55015216D81BCBF97A7323C3B10, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_LocationName_2() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tD9812B9979E4D55015216D81BCBF97A7323C3B10, ___m_LocationName_2)); }
	inline String_t* get_m_LocationName_2() const { return ___m_LocationName_2; }
	inline String_t** get_address_of_m_LocationName_2() { return &___m_LocationName_2; }
	inline void set_m_LocationName_2(String_t* value)
	{
		___m_LocationName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocationName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tD9812B9979E4D55015216D81BCBF97A7323C3B10, ___m_UnloadSceneOpExcludeReleaseCallback_3)); }
	inline bool get_m_UnloadSceneOpExcludeReleaseCallback_3() const { return ___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline bool* get_address_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return &___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline void set_m_UnloadSceneOpExcludeReleaseCallback_3(bool value)
	{
		___m_UnloadSceneOpExcludeReleaseCallback_3 = value;
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E 
{
public:
	// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_1;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_Version
	int32_t ___m_Version_2;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_LocationName
	String_t* ___m_LocationName_3;

public:
	inline static int32_t get_offset_of_m_InternalOp_1() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E, ___m_InternalOp_1)); }
	inline RuntimeObject* get_m_InternalOp_1() const { return ___m_InternalOp_1; }
	inline RuntimeObject** get_address_of_m_InternalOp_1() { return &___m_InternalOp_1; }
	inline void set_m_InternalOp_1(RuntimeObject* value)
	{
		___m_InternalOp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalOp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_2() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E, ___m_Version_2)); }
	inline int32_t get_m_Version_2() const { return ___m_Version_2; }
	inline int32_t* get_address_of_m_Version_2() { return &___m_Version_2; }
	inline void set_m_Version_2(int32_t value)
	{
		___m_Version_2 = value;
	}

	inline static int32_t get_offset_of_m_LocationName_3() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E, ___m_LocationName_3)); }
	inline String_t* get_m_LocationName_3() const { return ___m_LocationName_3; }
	inline String_t** get_address_of_m_LocationName_3() { return &___m_LocationName_3; }
	inline void set_m_LocationName_3(String_t* value)
	{
		___m_LocationName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocationName_3), (void*)value);
	}
};

struct AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E_StaticFields
{
public:
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_IsWaitingForCompletion
	bool ___m_IsWaitingForCompletion_0;

public:
	inline static int32_t get_offset_of_m_IsWaitingForCompletion_0() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E_StaticFields, ___m_IsWaitingForCompletion_0)); }
	inline bool get_m_IsWaitingForCompletion_0() const { return ___m_IsWaitingForCompletion_0; }
	inline bool* get_address_of_m_IsWaitingForCompletion_0() { return &___m_IsWaitingForCompletion_0; }
	inline void set_m_IsWaitingForCompletion_0(bool value)
	{
		___m_IsWaitingForCompletion_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp_1;
	int32_t ___m_Version_2;
	char* ___m_LocationName_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E_marshaled_com
{
	RuntimeObject* ___m_InternalOp_1;
	int32_t ___m_Version_2;
	Il2CppChar* ___m_LocationName_3;
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

// UnityEngine.Hash128
struct Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A 
{
public:
	// System.UInt32 UnityEngine.Hash128::m_u32_0
	uint32_t ___m_u32_0_0;
	// System.UInt32 UnityEngine.Hash128::m_u32_1
	uint32_t ___m_u32_1_1;
	// System.UInt32 UnityEngine.Hash128::m_u32_2
	uint32_t ___m_u32_2_2;
	// System.UInt32 UnityEngine.Hash128::m_u32_3
	uint32_t ___m_u32_3_3;

public:
	inline static int32_t get_offset_of_m_u32_0_0() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_0_0)); }
	inline uint32_t get_m_u32_0_0() const { return ___m_u32_0_0; }
	inline uint32_t* get_address_of_m_u32_0_0() { return &___m_u32_0_0; }
	inline void set_m_u32_0_0(uint32_t value)
	{
		___m_u32_0_0 = value;
	}

	inline static int32_t get_offset_of_m_u32_1_1() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_1_1)); }
	inline uint32_t get_m_u32_1_1() const { return ___m_u32_1_1; }
	inline uint32_t* get_address_of_m_u32_1_1() { return &___m_u32_1_1; }
	inline void set_m_u32_1_1(uint32_t value)
	{
		___m_u32_1_1 = value;
	}

	inline static int32_t get_offset_of_m_u32_2_2() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_2_2)); }
	inline uint32_t get_m_u32_2_2() const { return ___m_u32_2_2; }
	inline uint32_t* get_address_of_m_u32_2_2() { return &___m_u32_2_2; }
	inline void set_m_u32_2_2(uint32_t value)
	{
		___m_u32_2_2 = value;
	}

	inline static int32_t get_offset_of_m_u32_3_3() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_3_3)); }
	inline uint32_t get_m_u32_3_3() const { return ___m_u32_3_3; }
	inline uint32_t* get_address_of_m_u32_3_3() { return &___m_u32_3_3; }
	inline void set_m_u32_3_3(uint32_t value)
	{
		___m_u32_3_3 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D 
{
public:
	// System.Int32 UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::m_Version
	int32_t ___m_Version_0;
	// UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_1;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::m_ResourceManager
	ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * ___m_ResourceManager_2;

public:
	inline static int32_t get_offset_of_m_Version_0() { return static_cast<int32_t>(offsetof(ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D, ___m_Version_0)); }
	inline int32_t get_m_Version_0() const { return ___m_Version_0; }
	inline int32_t* get_address_of_m_Version_0() { return &___m_Version_0; }
	inline void set_m_Version_0(int32_t value)
	{
		___m_Version_0 = value;
	}

	inline static int32_t get_offset_of_m_InternalOp_1() { return static_cast<int32_t>(offsetof(ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D, ___m_InternalOp_1)); }
	inline RuntimeObject* get_m_InternalOp_1() const { return ___m_InternalOp_1; }
	inline RuntimeObject** get_address_of_m_InternalOp_1() { return &___m_InternalOp_1; }
	inline void set_m_InternalOp_1(RuntimeObject* value)
	{
		___m_InternalOp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalOp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ResourceManager_2() { return static_cast<int32_t>(offsetof(ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D, ___m_ResourceManager_2)); }
	inline ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * get_m_ResourceManager_2() const { return ___m_ResourceManager_2; }
	inline ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 ** get_address_of_m_ResourceManager_2() { return &___m_ResourceManager_2; }
	inline void set_m_ResourceManager_2(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * value)
	{
		___m_ResourceManager_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResourceManager_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D_marshaled_pinvoke
{
	int32_t ___m_Version_0;
	RuntimeObject* ___m_InternalOp_1;
	ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * ___m_ResourceManager_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D_marshaled_com
{
	int32_t ___m_Version_0;
	RuntimeObject* ___m_InternalOp_1;
	ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * ___m_ResourceManager_2;
};

// UnityEngine.ResourceManagement.Util.SerializedType
struct SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B 
{
public:
	// System.String UnityEngine.ResourceManagement.Util.SerializedType::m_AssemblyName
	String_t* ___m_AssemblyName_0;
	// System.String UnityEngine.ResourceManagement.Util.SerializedType::m_ClassName
	String_t* ___m_ClassName_1;
	// System.Type UnityEngine.ResourceManagement.Util.SerializedType::m_CachedType
	Type_t * ___m_CachedType_2;
	// System.Boolean UnityEngine.ResourceManagement.Util.SerializedType::<ValueChanged>k__BackingField
	bool ___U3CValueChangedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_AssemblyName_0() { return static_cast<int32_t>(offsetof(SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B, ___m_AssemblyName_0)); }
	inline String_t* get_m_AssemblyName_0() const { return ___m_AssemblyName_0; }
	inline String_t** get_address_of_m_AssemblyName_0() { return &___m_AssemblyName_0; }
	inline void set_m_AssemblyName_0(String_t* value)
	{
		___m_AssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AssemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClassName_1() { return static_cast<int32_t>(offsetof(SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B, ___m_ClassName_1)); }
	inline String_t* get_m_ClassName_1() const { return ___m_ClassName_1; }
	inline String_t** get_address_of_m_ClassName_1() { return &___m_ClassName_1; }
	inline void set_m_ClassName_1(String_t* value)
	{
		___m_ClassName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClassName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedType_2() { return static_cast<int32_t>(offsetof(SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B, ___m_CachedType_2)); }
	inline Type_t * get_m_CachedType_2() const { return ___m_CachedType_2; }
	inline Type_t ** get_address_of_m_CachedType_2() { return &___m_CachedType_2; }
	inline void set_m_CachedType_2(Type_t * value)
	{
		___m_CachedType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedType_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueChangedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B, ___U3CValueChangedU3Ek__BackingField_3)); }
	inline bool get_U3CValueChangedU3Ek__BackingField_3() const { return ___U3CValueChangedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CValueChangedU3Ek__BackingField_3() { return &___U3CValueChangedU3Ek__BackingField_3; }
	inline void set_U3CValueChangedU3Ek__BackingField_3(bool value)
	{
		___U3CValueChangedU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.Util.SerializedType
struct SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B_marshaled_pinvoke
{
	char* ___m_AssemblyName_0;
	char* ___m_ClassName_1;
	Type_t * ___m_CachedType_2;
	int32_t ___U3CValueChangedU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.Util.SerializedType
struct SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B_marshaled_com
{
	Il2CppChar* ___m_AssemblyName_0;
	Il2CppChar* ___m_ClassName_1;
	Type_t * ___m_CachedType_2;
	int32_t ___U3CValueChangedU3Ek__BackingField_3;
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


// UnityEngine.AddressableAssets.AddressablesImpl
struct AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2  : public RuntimeObject
{
public:
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.AddressableAssets.AddressablesImpl::m_ResourceManager
	ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * ___m_ResourceManager_0;
	// UnityEngine.ResourceManagement.ResourceProviders.IInstanceProvider UnityEngine.AddressableAssets.AddressablesImpl::m_InstanceProvider
	RuntimeObject* ___m_InstanceProvider_1;
	// System.Int32 UnityEngine.AddressableAssets.AddressablesImpl::m_CatalogRequestsTimeout
	int32_t ___m_CatalogRequestsTimeout_2;
	// UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider UnityEngine.AddressableAssets.AddressablesImpl::SceneProvider
	RuntimeObject* ___SceneProvider_4;
	// System.Collections.Generic.List`1<UnityEngine.AddressableAssets.AddressablesImpl/ResourceLocatorInfo> UnityEngine.AddressableAssets.AddressablesImpl::m_ResourceLocators
	List_1_t5A857F880D0CFEA1592ADB710EE5A59BC3C4237F * ___m_ResourceLocators_5;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> UnityEngine.AddressableAssets.AddressablesImpl::m_InitializationOperation
	AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE  ___m_InitializationOperation_6;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.List`1<System.String>> UnityEngine.AddressableAssets.AddressablesImpl::m_ActiveCheckUpdateOperation
	AsyncOperationHandle_1_t5DE487B645CF83194DCB3AD2EF93EB8E154B2B0B  ___m_ActiveCheckUpdateOperation_7;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>> UnityEngine.AddressableAssets.AddressablesImpl::m_ActiveUpdateOperation
	AsyncOperationHandle_1_t5CED34FCEBFC00E685EAABBF350C43CBC2AED1D4  ___m_ActiveUpdateOperation_8;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.AddressableAssets.AddressablesImpl::m_OnHandleCompleteAction
	Action_1_t6634F94209C51241AB52BDC921720558A925806B * ___m_OnHandleCompleteAction_9;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.AddressableAssets.AddressablesImpl::m_OnSceneHandleCompleteAction
	Action_1_t6634F94209C51241AB52BDC921720558A925806B * ___m_OnSceneHandleCompleteAction_10;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.AddressableAssets.AddressablesImpl::m_OnHandleDestroyedAction
	Action_1_t6634F94209C51241AB52BDC921720558A925806B * ___m_OnHandleDestroyedAction_11;
	// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.AddressableAssets.AddressablesImpl::m_resultToHandle
	Dictionary_2_tFE864065647FF3F1F8ACB61B44C408D5FAFD3FCC * ___m_resultToHandle_12;
	// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.AddressableAssets.AddressablesImpl::m_SceneInstances
	HashSet_1_tA8ED10554572301FDA2F65860E6B048C8CE660FC * ___m_SceneInstances_13;
	// System.Boolean UnityEngine.AddressableAssets.AddressablesImpl::hasStartedInitialization
	bool ___hasStartedInitialization_14;

public:
	inline static int32_t get_offset_of_m_ResourceManager_0() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___m_ResourceManager_0)); }
	inline ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * get_m_ResourceManager_0() const { return ___m_ResourceManager_0; }
	inline ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 ** get_address_of_m_ResourceManager_0() { return &___m_ResourceManager_0; }
	inline void set_m_ResourceManager_0(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * value)
	{
		___m_ResourceManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResourceManager_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_InstanceProvider_1() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___m_InstanceProvider_1)); }
	inline RuntimeObject* get_m_InstanceProvider_1() const { return ___m_InstanceProvider_1; }
	inline RuntimeObject** get_address_of_m_InstanceProvider_1() { return &___m_InstanceProvider_1; }
	inline void set_m_InstanceProvider_1(RuntimeObject* value)
	{
		___m_InstanceProvider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InstanceProvider_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CatalogRequestsTimeout_2() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___m_CatalogRequestsTimeout_2)); }
	inline int32_t get_m_CatalogRequestsTimeout_2() const { return ___m_CatalogRequestsTimeout_2; }
	inline int32_t* get_address_of_m_CatalogRequestsTimeout_2() { return &___m_CatalogRequestsTimeout_2; }
	inline void set_m_CatalogRequestsTimeout_2(int32_t value)
	{
		___m_CatalogRequestsTimeout_2 = value;
	}

	inline static int32_t get_offset_of_SceneProvider_4() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___SceneProvider_4)); }
	inline RuntimeObject* get_SceneProvider_4() const { return ___SceneProvider_4; }
	inline RuntimeObject** get_address_of_SceneProvider_4() { return &___SceneProvider_4; }
	inline void set_SceneProvider_4(RuntimeObject* value)
	{
		___SceneProvider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneProvider_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ResourceLocators_5() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___m_ResourceLocators_5)); }
	inline List_1_t5A857F880D0CFEA1592ADB710EE5A59BC3C4237F * get_m_ResourceLocators_5() const { return ___m_ResourceLocators_5; }
	inline List_1_t5A857F880D0CFEA1592ADB710EE5A59BC3C4237F ** get_address_of_m_ResourceLocators_5() { return &___m_ResourceLocators_5; }
	inline void set_m_ResourceLocators_5(List_1_t5A857F880D0CFEA1592ADB710EE5A59BC3C4237F * value)
	{
		___m_ResourceLocators_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResourceLocators_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitializationOperation_6() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___m_InitializationOperation_6)); }
	inline AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE  get_m_InitializationOperation_6() const { return ___m_InitializationOperation_6; }
	inline AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE * get_address_of_m_InitializationOperation_6() { return &___m_InitializationOperation_6; }
	inline void set_m_InitializationOperation_6(AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE  value)
	{
		___m_InitializationOperation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_InitializationOperation_6))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_InitializationOperation_6))->___m_LocationName_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ActiveCheckUpdateOperation_7() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___m_ActiveCheckUpdateOperation_7)); }
	inline AsyncOperationHandle_1_t5DE487B645CF83194DCB3AD2EF93EB8E154B2B0B  get_m_ActiveCheckUpdateOperation_7() const { return ___m_ActiveCheckUpdateOperation_7; }
	inline AsyncOperationHandle_1_t5DE487B645CF83194DCB3AD2EF93EB8E154B2B0B * get_address_of_m_ActiveCheckUpdateOperation_7() { return &___m_ActiveCheckUpdateOperation_7; }
	inline void set_m_ActiveCheckUpdateOperation_7(AsyncOperationHandle_1_t5DE487B645CF83194DCB3AD2EF93EB8E154B2B0B  value)
	{
		___m_ActiveCheckUpdateOperation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActiveCheckUpdateOperation_7))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActiveCheckUpdateOperation_7))->___m_LocationName_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ActiveUpdateOperation_8() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___m_ActiveUpdateOperation_8)); }
	inline AsyncOperationHandle_1_t5CED34FCEBFC00E685EAABBF350C43CBC2AED1D4  get_m_ActiveUpdateOperation_8() const { return ___m_ActiveUpdateOperation_8; }
	inline AsyncOperationHandle_1_t5CED34FCEBFC00E685EAABBF350C43CBC2AED1D4 * get_address_of_m_ActiveUpdateOperation_8() { return &___m_ActiveUpdateOperation_8; }
	inline void set_m_ActiveUpdateOperation_8(AsyncOperationHandle_1_t5CED34FCEBFC00E685EAABBF350C43CBC2AED1D4  value)
	{
		___m_ActiveUpdateOperation_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActiveUpdateOperation_8))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActiveUpdateOperation_8))->___m_LocationName_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnHandleCompleteAction_9() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___m_OnHandleCompleteAction_9)); }
	inline Action_1_t6634F94209C51241AB52BDC921720558A925806B * get_m_OnHandleCompleteAction_9() const { return ___m_OnHandleCompleteAction_9; }
	inline Action_1_t6634F94209C51241AB52BDC921720558A925806B ** get_address_of_m_OnHandleCompleteAction_9() { return &___m_OnHandleCompleteAction_9; }
	inline void set_m_OnHandleCompleteAction_9(Action_1_t6634F94209C51241AB52BDC921720558A925806B * value)
	{
		___m_OnHandleCompleteAction_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHandleCompleteAction_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSceneHandleCompleteAction_10() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___m_OnSceneHandleCompleteAction_10)); }
	inline Action_1_t6634F94209C51241AB52BDC921720558A925806B * get_m_OnSceneHandleCompleteAction_10() const { return ___m_OnSceneHandleCompleteAction_10; }
	inline Action_1_t6634F94209C51241AB52BDC921720558A925806B ** get_address_of_m_OnSceneHandleCompleteAction_10() { return &___m_OnSceneHandleCompleteAction_10; }
	inline void set_m_OnSceneHandleCompleteAction_10(Action_1_t6634F94209C51241AB52BDC921720558A925806B * value)
	{
		___m_OnSceneHandleCompleteAction_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSceneHandleCompleteAction_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHandleDestroyedAction_11() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___m_OnHandleDestroyedAction_11)); }
	inline Action_1_t6634F94209C51241AB52BDC921720558A925806B * get_m_OnHandleDestroyedAction_11() const { return ___m_OnHandleDestroyedAction_11; }
	inline Action_1_t6634F94209C51241AB52BDC921720558A925806B ** get_address_of_m_OnHandleDestroyedAction_11() { return &___m_OnHandleDestroyedAction_11; }
	inline void set_m_OnHandleDestroyedAction_11(Action_1_t6634F94209C51241AB52BDC921720558A925806B * value)
	{
		___m_OnHandleDestroyedAction_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHandleDestroyedAction_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_resultToHandle_12() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___m_resultToHandle_12)); }
	inline Dictionary_2_tFE864065647FF3F1F8ACB61B44C408D5FAFD3FCC * get_m_resultToHandle_12() const { return ___m_resultToHandle_12; }
	inline Dictionary_2_tFE864065647FF3F1F8ACB61B44C408D5FAFD3FCC ** get_address_of_m_resultToHandle_12() { return &___m_resultToHandle_12; }
	inline void set_m_resultToHandle_12(Dictionary_2_tFE864065647FF3F1F8ACB61B44C408D5FAFD3FCC * value)
	{
		___m_resultToHandle_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_resultToHandle_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_SceneInstances_13() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___m_SceneInstances_13)); }
	inline HashSet_1_tA8ED10554572301FDA2F65860E6B048C8CE660FC * get_m_SceneInstances_13() const { return ___m_SceneInstances_13; }
	inline HashSet_1_tA8ED10554572301FDA2F65860E6B048C8CE660FC ** get_address_of_m_SceneInstances_13() { return &___m_SceneInstances_13; }
	inline void set_m_SceneInstances_13(HashSet_1_tA8ED10554572301FDA2F65860E6B048C8CE660FC * value)
	{
		___m_SceneInstances_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SceneInstances_13), (void*)value);
	}

	inline static int32_t get_offset_of_hasStartedInitialization_14() { return static_cast<int32_t>(offsetof(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2, ___hasStartedInitialization_14)); }
	inline bool get_hasStartedInitialization_14() const { return ___hasStartedInitialization_14; }
	inline bool* get_address_of_hasStartedInitialization_14() { return &___hasStartedInitialization_14; }
	inline void set_hasStartedInitialization_14(bool value)
	{
		___hasStartedInitialization_14 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus
struct AsyncOperationStatus_t219728AFD0411DF8AFFFE6B8BABA4F4DE31AF407 
{
public:
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncOperationStatus_t219728AFD0411DF8AFFFE6B8BABA4F4DE31AF407, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAttributes
struct FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LogType
struct LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.ResourceManagement.Util.ObjectInitializationData
struct ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3 
{
public:
	// System.String UnityEngine.ResourceManagement.Util.ObjectInitializationData::m_Id
	String_t* ___m_Id_0;
	// UnityEngine.ResourceManagement.Util.SerializedType UnityEngine.ResourceManagement.Util.ObjectInitializationData::m_ObjectType
	SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B  ___m_ObjectType_1;
	// System.String UnityEngine.ResourceManagement.Util.ObjectInitializationData::m_Data
	String_t* ___m_Data_2;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3, ___m_Id_0)); }
	inline String_t* get_m_Id_0() const { return ___m_Id_0; }
	inline String_t** get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(String_t* value)
	{
		___m_Id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObjectType_1() { return static_cast<int32_t>(offsetof(ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3, ___m_ObjectType_1)); }
	inline SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B  get_m_ObjectType_1() const { return ___m_ObjectType_1; }
	inline SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B * get_address_of_m_ObjectType_1() { return &___m_ObjectType_1; }
	inline void set_m_ObjectType_1(SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B  value)
	{
		___m_ObjectType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ObjectType_1))->___m_AssemblyName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ObjectType_1))->___m_ClassName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ObjectType_1))->___m_CachedType_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Data_2() { return static_cast<int32_t>(offsetof(ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3, ___m_Data_2)); }
	inline String_t* get_m_Data_2() const { return ___m_Data_2; }
	inline String_t** get_address_of_m_Data_2() { return &___m_Data_2; }
	inline void set_m_Data_2(String_t* value)
	{
		___m_Data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Data_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.Util.ObjectInitializationData
struct ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3_marshaled_pinvoke
{
	char* ___m_Id_0;
	SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B_marshaled_pinvoke ___m_ObjectType_1;
	char* ___m_Data_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.Util.ObjectInitializationData
struct ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3_marshaled_com
{
	Il2CppChar* ___m_Id_0;
	SerializedType_t11D0506CAD7F8088F87CA851B3D4B24459086B2B_marshaled_com ___m_ObjectType_1;
	Il2CppChar* ___m_Data_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex
struct DependencyHashIndex_tE39CE09E87F0142449A16C31DBF285EB314023FA 
{
public:
	// System.Int32 UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DependencyHashIndex_tE39CE09E87F0142449A16C31DBF285EB314023FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp
struct InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007  : public RuntimeObject
{
public:
	// System.String UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::m_LocalDataPath
	String_t* ___m_LocalDataPath_0;
	// System.String UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::m_RemoteHashValue
	String_t* ___m_RemoteHashValue_1;
	// System.String UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::m_LocalHashValue
	String_t* ___m_LocalHashValue_2;
	// UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::m_ProviderInterface
	ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D  ___m_ProviderInterface_3;
	// UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::m_ContentCatalogData
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * ___m_ContentCatalogData_4;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::m_ContentCatalogDataLoadOp
	AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442  ___m_ContentCatalogDataLoadOp_5;
	// UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::m_BundledCatalog
	BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * ___m_BundledCatalog_6;
	// System.Boolean UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::m_Retried
	bool ___m_Retried_7;
	// System.Boolean UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::m_DisableCatalogUpdateOnStart
	bool ___m_DisableCatalogUpdateOnStart_8;
	// System.Boolean UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::m_IsLocalCatalogInBundle
	bool ___m_IsLocalCatalogInBundle_9;

public:
	inline static int32_t get_offset_of_m_LocalDataPath_0() { return static_cast<int32_t>(offsetof(InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007, ___m_LocalDataPath_0)); }
	inline String_t* get_m_LocalDataPath_0() const { return ___m_LocalDataPath_0; }
	inline String_t** get_address_of_m_LocalDataPath_0() { return &___m_LocalDataPath_0; }
	inline void set_m_LocalDataPath_0(String_t* value)
	{
		___m_LocalDataPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalDataPath_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_RemoteHashValue_1() { return static_cast<int32_t>(offsetof(InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007, ___m_RemoteHashValue_1)); }
	inline String_t* get_m_RemoteHashValue_1() const { return ___m_RemoteHashValue_1; }
	inline String_t** get_address_of_m_RemoteHashValue_1() { return &___m_RemoteHashValue_1; }
	inline void set_m_RemoteHashValue_1(String_t* value)
	{
		___m_RemoteHashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RemoteHashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalHashValue_2() { return static_cast<int32_t>(offsetof(InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007, ___m_LocalHashValue_2)); }
	inline String_t* get_m_LocalHashValue_2() const { return ___m_LocalHashValue_2; }
	inline String_t** get_address_of_m_LocalHashValue_2() { return &___m_LocalHashValue_2; }
	inline void set_m_LocalHashValue_2(String_t* value)
	{
		___m_LocalHashValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalHashValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderInterface_3() { return static_cast<int32_t>(offsetof(InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007, ___m_ProviderInterface_3)); }
	inline ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D  get_m_ProviderInterface_3() const { return ___m_ProviderInterface_3; }
	inline ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * get_address_of_m_ProviderInterface_3() { return &___m_ProviderInterface_3; }
	inline void set_m_ProviderInterface_3(ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D  value)
	{
		___m_ProviderInterface_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProviderInterface_3))->___m_InternalOp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProviderInterface_3))->___m_ResourceManager_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ContentCatalogData_4() { return static_cast<int32_t>(offsetof(InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007, ___m_ContentCatalogData_4)); }
	inline ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * get_m_ContentCatalogData_4() const { return ___m_ContentCatalogData_4; }
	inline ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D ** get_address_of_m_ContentCatalogData_4() { return &___m_ContentCatalogData_4; }
	inline void set_m_ContentCatalogData_4(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * value)
	{
		___m_ContentCatalogData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContentCatalogData_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentCatalogDataLoadOp_5() { return static_cast<int32_t>(offsetof(InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007, ___m_ContentCatalogDataLoadOp_5)); }
	inline AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442  get_m_ContentCatalogDataLoadOp_5() const { return ___m_ContentCatalogDataLoadOp_5; }
	inline AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 * get_address_of_m_ContentCatalogDataLoadOp_5() { return &___m_ContentCatalogDataLoadOp_5; }
	inline void set_m_ContentCatalogDataLoadOp_5(AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442  value)
	{
		___m_ContentCatalogDataLoadOp_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ContentCatalogDataLoadOp_5))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ContentCatalogDataLoadOp_5))->___m_LocationName_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BundledCatalog_6() { return static_cast<int32_t>(offsetof(InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007, ___m_BundledCatalog_6)); }
	inline BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * get_m_BundledCatalog_6() const { return ___m_BundledCatalog_6; }
	inline BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD ** get_address_of_m_BundledCatalog_6() { return &___m_BundledCatalog_6; }
	inline void set_m_BundledCatalog_6(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * value)
	{
		___m_BundledCatalog_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BundledCatalog_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Retried_7() { return static_cast<int32_t>(offsetof(InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007, ___m_Retried_7)); }
	inline bool get_m_Retried_7() const { return ___m_Retried_7; }
	inline bool* get_address_of_m_Retried_7() { return &___m_Retried_7; }
	inline void set_m_Retried_7(bool value)
	{
		___m_Retried_7 = value;
	}

	inline static int32_t get_offset_of_m_DisableCatalogUpdateOnStart_8() { return static_cast<int32_t>(offsetof(InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007, ___m_DisableCatalogUpdateOnStart_8)); }
	inline bool get_m_DisableCatalogUpdateOnStart_8() const { return ___m_DisableCatalogUpdateOnStart_8; }
	inline bool* get_address_of_m_DisableCatalogUpdateOnStart_8() { return &___m_DisableCatalogUpdateOnStart_8; }
	inline void set_m_DisableCatalogUpdateOnStart_8(bool value)
	{
		___m_DisableCatalogUpdateOnStart_8 = value;
	}

	inline static int32_t get_offset_of_m_IsLocalCatalogInBundle_9() { return static_cast<int32_t>(offsetof(InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007, ___m_IsLocalCatalogInBundle_9)); }
	inline bool get_m_IsLocalCatalogInBundle_9() const { return ___m_IsLocalCatalogInBundle_9; }
	inline bool* get_address_of_m_IsLocalCatalogInBundle_9() { return &___m_IsLocalCatalogInBundle_9; }
	inline void set_m_IsLocalCatalogInBundle_9(bool value)
	{
		___m_IsLocalCatalogInBundle_9 = value;
	}
};


// UnityEngine.AddressableAssets.Utility.SerializationUtilities/ObjectType
struct ObjectType_t077AABE6FD8431E177D77EDDC2BAE7565408C2E1 
{
public:
	// System.Int32 UnityEngine.AddressableAssets.Utility.SerializationUtilities/ObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectType_t077AABE6FD8431E177D77EDDC2BAE7565408C2E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>
struct AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA  : public RuntimeObject
{
public:
	// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_referenceCount
	int32_t ___m_referenceCount_1;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Status
	int32_t ___m_Status_2;
	// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Error
	Exception_t * ___m_Error_3;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_RM
	ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * ___m_RM_4;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Version
	int32_t ___m_Version_5;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_DestroyedAction
	DelegateList_1_tEE43E46533E305A3EC7853BB615F872878A2A503 * ___m_DestroyedAction_6;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_CompletedActionT
	DelegateList_1_t1A664E16725AD5ACFDAEF6F74F8B730CB372EEC7 * ___m_CompletedActionT_7;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_OnDestroyAction
	Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D * ___m_OnDestroyAction_8;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_dependencyCompleteAction
	Action_1_t6634F94209C51241AB52BDC921720558A925806B * ___m_dependencyCompleteAction_9;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::HasExecuted
	bool ___HasExecuted_10;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_11;
	// System.Threading.Tasks.TaskCompletionSource`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSource
	TaskCompletionSource_1_tA4D923F2FF75502E1B06B8F1F71320273E06F00A * ___m_taskCompletionSource_12;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSourceTypeless
	TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * ___m_taskCompletionSourceTypeless_13;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_InDeferredCallbackQueue
	bool ___m_InDeferredCallbackQueue_14;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallbacks
	DelegateList_1_t160D08954252A3DE253C53A7F9B2774406AAA31D * ___m_UpdateCallbacks_15;
	// System.Action`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallback
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___m_UpdateCallback_16;

public:
	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___U3CResultU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_0() const { return ___U3CResultU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_0() { return &___U3CResultU3Ek__BackingField_0; }
	inline void set_U3CResultU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_referenceCount_1() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_referenceCount_1)); }
	inline int32_t get_m_referenceCount_1() const { return ___m_referenceCount_1; }
	inline int32_t* get_address_of_m_referenceCount_1() { return &___m_referenceCount_1; }
	inline void set_m_referenceCount_1(int32_t value)
	{
		___m_referenceCount_1 = value;
	}

	inline static int32_t get_offset_of_m_Status_2() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_Status_2)); }
	inline int32_t get_m_Status_2() const { return ___m_Status_2; }
	inline int32_t* get_address_of_m_Status_2() { return &___m_Status_2; }
	inline void set_m_Status_2(int32_t value)
	{
		___m_Status_2 = value;
	}

	inline static int32_t get_offset_of_m_Error_3() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_Error_3)); }
	inline Exception_t * get_m_Error_3() const { return ___m_Error_3; }
	inline Exception_t ** get_address_of_m_Error_3() { return &___m_Error_3; }
	inline void set_m_Error_3(Exception_t * value)
	{
		___m_Error_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Error_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_RM_4() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_RM_4)); }
	inline ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * get_m_RM_4() const { return ___m_RM_4; }
	inline ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 ** get_address_of_m_RM_4() { return &___m_RM_4; }
	inline void set_m_RM_4(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * value)
	{
		___m_RM_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RM_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_DestroyedAction_6() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_DestroyedAction_6)); }
	inline DelegateList_1_tEE43E46533E305A3EC7853BB615F872878A2A503 * get_m_DestroyedAction_6() const { return ___m_DestroyedAction_6; }
	inline DelegateList_1_tEE43E46533E305A3EC7853BB615F872878A2A503 ** get_address_of_m_DestroyedAction_6() { return &___m_DestroyedAction_6; }
	inline void set_m_DestroyedAction_6(DelegateList_1_tEE43E46533E305A3EC7853BB615F872878A2A503 * value)
	{
		___m_DestroyedAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DestroyedAction_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_CompletedActionT_7() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_CompletedActionT_7)); }
	inline DelegateList_1_t1A664E16725AD5ACFDAEF6F74F8B730CB372EEC7 * get_m_CompletedActionT_7() const { return ___m_CompletedActionT_7; }
	inline DelegateList_1_t1A664E16725AD5ACFDAEF6F74F8B730CB372EEC7 ** get_address_of_m_CompletedActionT_7() { return &___m_CompletedActionT_7; }
	inline void set_m_CompletedActionT_7(DelegateList_1_t1A664E16725AD5ACFDAEF6F74F8B730CB372EEC7 * value)
	{
		___m_CompletedActionT_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CompletedActionT_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDestroyAction_8() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_OnDestroyAction_8)); }
	inline Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D * get_m_OnDestroyAction_8() const { return ___m_OnDestroyAction_8; }
	inline Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D ** get_address_of_m_OnDestroyAction_8() { return &___m_OnDestroyAction_8; }
	inline void set_m_OnDestroyAction_8(Action_1_t1D81F9A5889336016171AB3CD9C0979E8E952D1D * value)
	{
		___m_OnDestroyAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDestroyAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_dependencyCompleteAction_9() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_dependencyCompleteAction_9)); }
	inline Action_1_t6634F94209C51241AB52BDC921720558A925806B * get_m_dependencyCompleteAction_9() const { return ___m_dependencyCompleteAction_9; }
	inline Action_1_t6634F94209C51241AB52BDC921720558A925806B ** get_address_of_m_dependencyCompleteAction_9() { return &___m_dependencyCompleteAction_9; }
	inline void set_m_dependencyCompleteAction_9(Action_1_t6634F94209C51241AB52BDC921720558A925806B * value)
	{
		___m_dependencyCompleteAction_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dependencyCompleteAction_9), (void*)value);
	}

	inline static int32_t get_offset_of_HasExecuted_10() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___HasExecuted_10)); }
	inline bool get_HasExecuted_10() const { return ___HasExecuted_10; }
	inline bool* get_address_of_HasExecuted_10() { return &___HasExecuted_10; }
	inline void set_HasExecuted_10(bool value)
	{
		___HasExecuted_10 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___U3CIsRunningU3Ek__BackingField_11)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_11() const { return ___U3CIsRunningU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_11() { return &___U3CIsRunningU3Ek__BackingField_11; }
	inline void set_U3CIsRunningU3Ek__BackingField_11(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_taskCompletionSource_12() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_taskCompletionSource_12)); }
	inline TaskCompletionSource_1_tA4D923F2FF75502E1B06B8F1F71320273E06F00A * get_m_taskCompletionSource_12() const { return ___m_taskCompletionSource_12; }
	inline TaskCompletionSource_1_tA4D923F2FF75502E1B06B8F1F71320273E06F00A ** get_address_of_m_taskCompletionSource_12() { return &___m_taskCompletionSource_12; }
	inline void set_m_taskCompletionSource_12(TaskCompletionSource_1_tA4D923F2FF75502E1B06B8F1F71320273E06F00A * value)
	{
		___m_taskCompletionSource_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskCompletionSource_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskCompletionSourceTypeless_13() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_taskCompletionSourceTypeless_13)); }
	inline TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * get_m_taskCompletionSourceTypeless_13() const { return ___m_taskCompletionSourceTypeless_13; }
	inline TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 ** get_address_of_m_taskCompletionSourceTypeless_13() { return &___m_taskCompletionSourceTypeless_13; }
	inline void set_m_taskCompletionSourceTypeless_13(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * value)
	{
		___m_taskCompletionSourceTypeless_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskCompletionSourceTypeless_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_InDeferredCallbackQueue_14() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_InDeferredCallbackQueue_14)); }
	inline bool get_m_InDeferredCallbackQueue_14() const { return ___m_InDeferredCallbackQueue_14; }
	inline bool* get_address_of_m_InDeferredCallbackQueue_14() { return &___m_InDeferredCallbackQueue_14; }
	inline void set_m_InDeferredCallbackQueue_14(bool value)
	{
		___m_InDeferredCallbackQueue_14 = value;
	}

	inline static int32_t get_offset_of_m_UpdateCallbacks_15() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_UpdateCallbacks_15)); }
	inline DelegateList_1_t160D08954252A3DE253C53A7F9B2774406AAA31D * get_m_UpdateCallbacks_15() const { return ___m_UpdateCallbacks_15; }
	inline DelegateList_1_t160D08954252A3DE253C53A7F9B2774406AAA31D ** get_address_of_m_UpdateCallbacks_15() { return &___m_UpdateCallbacks_15; }
	inline void set_m_UpdateCallbacks_15(DelegateList_1_t160D08954252A3DE253C53A7F9B2774406AAA31D * value)
	{
		___m_UpdateCallbacks_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdateCallbacks_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateCallback_16() { return static_cast<int32_t>(offsetof(AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA, ___m_UpdateCallback_16)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_m_UpdateCallback_16() const { return ___m_UpdateCallback_16; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_m_UpdateCallback_16() { return &___m_UpdateCallback_16; }
	inline void set_m_UpdateCallback_16(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___m_UpdateCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdateCallback_16), (void*)value);
	}
};


// UnityEngine.AssetBundle
struct AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
};

// UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData
struct ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D  : public RuntimeObject
{
public:
	// System.String UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::localHash
	String_t* ___localHash_0;
	// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::location
	RuntimeObject* ___location_1;
	// System.String UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::m_LocatorId
	String_t* ___m_LocatorId_2;
	// UnityEngine.ResourceManagement.Util.ObjectInitializationData UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::m_InstanceProviderData
	ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3  ___m_InstanceProviderData_3;
	// UnityEngine.ResourceManagement.Util.ObjectInitializationData UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::m_SceneProviderData
	ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3  ___m_SceneProviderData_4;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::m_ResourceProviderData
	List_1_t0DF9D498983B77B207A7E6FC612A1E79C607F026 * ___m_ResourceProviderData_5;
	// System.String[] UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::m_ProviderIds
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ProviderIds_6;
	// System.String[] UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::m_InternalIds
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_InternalIds_7;
	// System.String UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::m_KeyDataString
	String_t* ___m_KeyDataString_8;
	// System.String UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::m_BucketDataString
	String_t* ___m_BucketDataString_9;
	// System.String UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::m_EntryDataString
	String_t* ___m_EntryDataString_10;
	// System.String UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::m_ExtraDataString
	String_t* ___m_ExtraDataString_13;
	// UnityEngine.ResourceManagement.Util.SerializedType[] UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::m_resourceTypes
	SerializedTypeU5BU5D_tF5E5FFA9BE1C3CAD6FD8BDEB57C0EAE491BA8616* ___m_resourceTypes_14;
	// System.String[] UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::m_InternalIdPrefixes
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_InternalIdPrefixes_15;

public:
	inline static int32_t get_offset_of_localHash_0() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___localHash_0)); }
	inline String_t* get_localHash_0() const { return ___localHash_0; }
	inline String_t** get_address_of_localHash_0() { return &___localHash_0; }
	inline void set_localHash_0(String_t* value)
	{
		___localHash_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localHash_0), (void*)value);
	}

	inline static int32_t get_offset_of_location_1() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___location_1)); }
	inline RuntimeObject* get_location_1() const { return ___location_1; }
	inline RuntimeObject** get_address_of_location_1() { return &___location_1; }
	inline void set_location_1(RuntimeObject* value)
	{
		___location_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___location_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocatorId_2() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___m_LocatorId_2)); }
	inline String_t* get_m_LocatorId_2() const { return ___m_LocatorId_2; }
	inline String_t** get_address_of_m_LocatorId_2() { return &___m_LocatorId_2; }
	inline void set_m_LocatorId_2(String_t* value)
	{
		___m_LocatorId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocatorId_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_InstanceProviderData_3() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___m_InstanceProviderData_3)); }
	inline ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3  get_m_InstanceProviderData_3() const { return ___m_InstanceProviderData_3; }
	inline ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3 * get_address_of_m_InstanceProviderData_3() { return &___m_InstanceProviderData_3; }
	inline void set_m_InstanceProviderData_3(ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3  value)
	{
		___m_InstanceProviderData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_InstanceProviderData_3))->___m_Id_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_InstanceProviderData_3))->___m_ObjectType_1))->___m_AssemblyName_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_InstanceProviderData_3))->___m_ObjectType_1))->___m_ClassName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_InstanceProviderData_3))->___m_ObjectType_1))->___m_CachedType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_InstanceProviderData_3))->___m_Data_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SceneProviderData_4() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___m_SceneProviderData_4)); }
	inline ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3  get_m_SceneProviderData_4() const { return ___m_SceneProviderData_4; }
	inline ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3 * get_address_of_m_SceneProviderData_4() { return &___m_SceneProviderData_4; }
	inline void set_m_SceneProviderData_4(ObjectInitializationData_t4552E1504B7D6894C22177D7F4CEC1B2EE8F9BB3  value)
	{
		___m_SceneProviderData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SceneProviderData_4))->___m_Id_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SceneProviderData_4))->___m_ObjectType_1))->___m_AssemblyName_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SceneProviderData_4))->___m_ObjectType_1))->___m_ClassName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SceneProviderData_4))->___m_ObjectType_1))->___m_CachedType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SceneProviderData_4))->___m_Data_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ResourceProviderData_5() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___m_ResourceProviderData_5)); }
	inline List_1_t0DF9D498983B77B207A7E6FC612A1E79C607F026 * get_m_ResourceProviderData_5() const { return ___m_ResourceProviderData_5; }
	inline List_1_t0DF9D498983B77B207A7E6FC612A1E79C607F026 ** get_address_of_m_ResourceProviderData_5() { return &___m_ResourceProviderData_5; }
	inline void set_m_ResourceProviderData_5(List_1_t0DF9D498983B77B207A7E6FC612A1E79C607F026 * value)
	{
		___m_ResourceProviderData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResourceProviderData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderIds_6() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___m_ProviderIds_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ProviderIds_6() const { return ___m_ProviderIds_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ProviderIds_6() { return &___m_ProviderIds_6; }
	inline void set_m_ProviderIds_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ProviderIds_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProviderIds_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalIds_7() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___m_InternalIds_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_InternalIds_7() const { return ___m_InternalIds_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_InternalIds_7() { return &___m_InternalIds_7; }
	inline void set_m_InternalIds_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_InternalIds_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalIds_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_KeyDataString_8() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___m_KeyDataString_8)); }
	inline String_t* get_m_KeyDataString_8() const { return ___m_KeyDataString_8; }
	inline String_t** get_address_of_m_KeyDataString_8() { return &___m_KeyDataString_8; }
	inline void set_m_KeyDataString_8(String_t* value)
	{
		___m_KeyDataString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_KeyDataString_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_BucketDataString_9() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___m_BucketDataString_9)); }
	inline String_t* get_m_BucketDataString_9() const { return ___m_BucketDataString_9; }
	inline String_t** get_address_of_m_BucketDataString_9() { return &___m_BucketDataString_9; }
	inline void set_m_BucketDataString_9(String_t* value)
	{
		___m_BucketDataString_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BucketDataString_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_EntryDataString_10() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___m_EntryDataString_10)); }
	inline String_t* get_m_EntryDataString_10() const { return ___m_EntryDataString_10; }
	inline String_t** get_address_of_m_EntryDataString_10() { return &___m_EntryDataString_10; }
	inline void set_m_EntryDataString_10(String_t* value)
	{
		___m_EntryDataString_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EntryDataString_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExtraDataString_13() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___m_ExtraDataString_13)); }
	inline String_t* get_m_ExtraDataString_13() const { return ___m_ExtraDataString_13; }
	inline String_t** get_address_of_m_ExtraDataString_13() { return &___m_ExtraDataString_13; }
	inline void set_m_ExtraDataString_13(String_t* value)
	{
		___m_ExtraDataString_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExtraDataString_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_resourceTypes_14() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___m_resourceTypes_14)); }
	inline SerializedTypeU5BU5D_tF5E5FFA9BE1C3CAD6FD8BDEB57C0EAE491BA8616* get_m_resourceTypes_14() const { return ___m_resourceTypes_14; }
	inline SerializedTypeU5BU5D_tF5E5FFA9BE1C3CAD6FD8BDEB57C0EAE491BA8616** get_address_of_m_resourceTypes_14() { return &___m_resourceTypes_14; }
	inline void set_m_resourceTypes_14(SerializedTypeU5BU5D_tF5E5FFA9BE1C3CAD6FD8BDEB57C0EAE491BA8616* value)
	{
		___m_resourceTypes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_resourceTypes_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalIdPrefixes_15() { return static_cast<int32_t>(offsetof(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D, ___m_InternalIdPrefixes_15)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_InternalIdPrefixes_15() const { return ___m_InternalIdPrefixes_15; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_InternalIdPrefixes_15() { return &___m_InternalIdPrefixes_15; }
	inline void set_m_InternalIdPrefixes_15(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_InternalIdPrefixes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalIdPrefixes_15), (void*)value);
	}
};


// UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_t49C00CF1C75BD0D6DFA01C3C490EBD4ABAAD76F3  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_t49C00CF1C75BD0D6DFA01C3C490EBD4ABAAD76F3_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_t49C00CF1C75BD0D6DFA01C3C490EBD4ABAAD76F3_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// System.IO.MonoIOStat
struct MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t * ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t * ___m_Type_3;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.ResourceManagement.Util.UnityWebRequestResult
struct UnityWebRequestResult_t100F520A4720C5527F6534B751FACE43DBB20BA9  : public RuntimeObject
{
public:
	// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_0;
	// System.Int64 UnityEngine.ResourceManagement.Util.UnityWebRequestResult::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_1;
	// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.ResourceManagement.Util.UnityWebRequestResult::<Result>k__BackingField
	int32_t ___U3CResultU3Ek__BackingField_2;
	// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_3;
	// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnityWebRequestResult_t100F520A4720C5527F6534B751FACE43DBB20BA9, ___U3CErrorU3Ek__BackingField_0)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_0() const { return ___U3CErrorU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_0() { return &___U3CErrorU3Ek__BackingField_0; }
	inline void set_U3CErrorU3Ek__BackingField_0(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnityWebRequestResult_t100F520A4720C5527F6534B751FACE43DBB20BA9, ___U3CResponseCodeU3Ek__BackingField_1)); }
	inline int64_t get_U3CResponseCodeU3Ek__BackingField_1() const { return ___U3CResponseCodeU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CResponseCodeU3Ek__BackingField_1() { return &___U3CResponseCodeU3Ek__BackingField_1; }
	inline void set_U3CResponseCodeU3Ek__BackingField_1(int64_t value)
	{
		___U3CResponseCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestResult_t100F520A4720C5527F6534B751FACE43DBB20BA9, ___U3CResultU3Ek__BackingField_2)); }
	inline int32_t get_U3CResultU3Ek__BackingField_2() const { return ___U3CResultU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CResultU3Ek__BackingField_2() { return &___U3CResultU3Ek__BackingField_2; }
	inline void set_U3CResultU3Ek__BackingField_2(int32_t value)
	{
		___U3CResultU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UnityWebRequestResult_t100F520A4720C5527F6534B751FACE43DBB20BA9, ___U3CMethodU3Ek__BackingField_3)); }
	inline String_t* get_U3CMethodU3Ek__BackingField_3() const { return ___U3CMethodU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CMethodU3Ek__BackingField_3() { return &___U3CMethodU3Ek__BackingField_3; }
	inline void set_U3CMethodU3Ek__BackingField_3(String_t* value)
	{
		___U3CMethodU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(UnityWebRequestResult_t100F520A4720C5527F6534B751FACE43DBB20BA9, ___U3CUrlU3Ek__BackingField_4)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_4() const { return ___U3CUrlU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_4() { return &___U3CUrlU3Ek__BackingField_4; }
	inline void set_U3CUrlU3Ek__BackingField_4(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlU3Ek__BackingField_4), (void*)value);
	}
};


// PackedPlayModeBuildLogs/RuntimeBuildLog
struct RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B 
{
public:
	// UnityEngine.LogType PackedPlayModeBuildLogs/RuntimeBuildLog::Type
	int32_t ___Type_0;
	// System.String PackedPlayModeBuildLogs/RuntimeBuildLog::Message
	String_t* ___Message_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of PackedPlayModeBuildLogs/RuntimeBuildLog
struct RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshaled_pinvoke
{
	int32_t ___Type_0;
	char* ___Message_1;
};
// Native definition for COM marshalling of PackedPlayModeBuildLogs/RuntimeBuildLog
struct RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshaled_com
{
	int32_t ___Type_0;
	Il2CppChar* ___Message_1;
};

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>>
struct Action_1_t88843A476A52066DC24B7760ADD42B6454C6EC5B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>
struct Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A  : public ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_pinvoke : public ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_com : public ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_com
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// UnityEngine.AddressableAssets.Initialization.InitializationOperation
struct InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0  : public AsyncOperationBase_1_tC92742CA3BBB656EB304889668532E5A44D51FDA
{
public:
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData> UnityEngine.AddressableAssets.Initialization.InitializationOperation::m_rtdOp
	AsyncOperationHandle_1_tD9812B9979E4D55015216D81BCBF97A7323C3B10  ___m_rtdOp_17;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> UnityEngine.AddressableAssets.Initialization.InitializationOperation::m_loadCatalogOp
	AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE  ___m_loadCatalogOp_18;
	// System.String UnityEngine.AddressableAssets.Initialization.InitializationOperation::m_ProviderSuffix
	String_t* ___m_ProviderSuffix_19;
	// UnityEngine.AddressableAssets.AddressablesImpl UnityEngine.AddressableAssets.Initialization.InitializationOperation::m_Addressables
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2 * ___m_Addressables_20;
	// UnityEngine.AddressableAssets.Utility.ResourceManagerDiagnostics UnityEngine.AddressableAssets.Initialization.InitializationOperation::m_Diagnostics
	ResourceManagerDiagnostics_t2CAC6BE26AC64F18159FE55C52C2B864A5B1FA62 * ___m_Diagnostics_21;
	// UnityEngine.ResourceManagement.AsyncOperations.InitalizationObjectsOperation UnityEngine.AddressableAssets.Initialization.InitializationOperation::m_InitGroupOps
	InitalizationObjectsOperation_tB327C4C33B585E8D197BFAA550E075D3596B364F * ___m_InitGroupOps_22;

public:
	inline static int32_t get_offset_of_m_rtdOp_17() { return static_cast<int32_t>(offsetof(InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0, ___m_rtdOp_17)); }
	inline AsyncOperationHandle_1_tD9812B9979E4D55015216D81BCBF97A7323C3B10  get_m_rtdOp_17() const { return ___m_rtdOp_17; }
	inline AsyncOperationHandle_1_tD9812B9979E4D55015216D81BCBF97A7323C3B10 * get_address_of_m_rtdOp_17() { return &___m_rtdOp_17; }
	inline void set_m_rtdOp_17(AsyncOperationHandle_1_tD9812B9979E4D55015216D81BCBF97A7323C3B10  value)
	{
		___m_rtdOp_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_rtdOp_17))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_rtdOp_17))->___m_LocationName_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_loadCatalogOp_18() { return static_cast<int32_t>(offsetof(InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0, ___m_loadCatalogOp_18)); }
	inline AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE  get_m_loadCatalogOp_18() const { return ___m_loadCatalogOp_18; }
	inline AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE * get_address_of_m_loadCatalogOp_18() { return &___m_loadCatalogOp_18; }
	inline void set_m_loadCatalogOp_18(AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE  value)
	{
		___m_loadCatalogOp_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_loadCatalogOp_18))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_loadCatalogOp_18))->___m_LocationName_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ProviderSuffix_19() { return static_cast<int32_t>(offsetof(InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0, ___m_ProviderSuffix_19)); }
	inline String_t* get_m_ProviderSuffix_19() const { return ___m_ProviderSuffix_19; }
	inline String_t** get_address_of_m_ProviderSuffix_19() { return &___m_ProviderSuffix_19; }
	inline void set_m_ProviderSuffix_19(String_t* value)
	{
		___m_ProviderSuffix_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProviderSuffix_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Addressables_20() { return static_cast<int32_t>(offsetof(InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0, ___m_Addressables_20)); }
	inline AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2 * get_m_Addressables_20() const { return ___m_Addressables_20; }
	inline AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2 ** get_address_of_m_Addressables_20() { return &___m_Addressables_20; }
	inline void set_m_Addressables_20(AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2 * value)
	{
		___m_Addressables_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Addressables_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Diagnostics_21() { return static_cast<int32_t>(offsetof(InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0, ___m_Diagnostics_21)); }
	inline ResourceManagerDiagnostics_t2CAC6BE26AC64F18159FE55C52C2B864A5B1FA62 * get_m_Diagnostics_21() const { return ___m_Diagnostics_21; }
	inline ResourceManagerDiagnostics_t2CAC6BE26AC64F18159FE55C52C2B864A5B1FA62 ** get_address_of_m_Diagnostics_21() { return &___m_Diagnostics_21; }
	inline void set_m_Diagnostics_21(ResourceManagerDiagnostics_t2CAC6BE26AC64F18159FE55C52C2B864A5B1FA62 * value)
	{
		___m_Diagnostics_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Diagnostics_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitGroupOps_22() { return static_cast<int32_t>(offsetof(InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0, ___m_InitGroupOps_22)); }
	inline InitalizationObjectsOperation_tB327C4C33B585E8D197BFAA550E075D3596B364F * get_m_InitGroupOps_22() const { return ___m_InitGroupOps_22; }
	inline InitalizationObjectsOperation_tB327C4C33B585E8D197BFAA550E075D3596B364F ** get_address_of_m_InitGroupOps_22() { return &___m_InitGroupOps_22; }
	inline void set_m_InitGroupOps_22(InitalizationObjectsOperation_tB327C4C33B585E8D197BFAA550E075D3596B364F * value)
	{
		___m_InitGroupOps_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InitGroupOps_22), (void*)value);
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation[]
struct IResourceLocationU5BU5D_tF65F723E5499FF3F2EA8F75B1275C63675F396A0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * m_Items[1];

public:
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_1_get_IsDone_m05CCAA6F5BCDCF17E5F56C807C9E30585A41AA01_gshared (AsyncOperationHandle_1_t32FCA2B8F199EEDA03C392932AF85F2AD9C388D7 * __this, const RuntimeMethod* method);
// !0 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::WaitForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AsyncOperationHandle_1_WaitForCompletion_mE25E6F3056B0BA7CDE2B1FA9ADAD631CD4B35B7D_gshared (AsyncOperationHandle_1_t32FCA2B8F199EEDA03C392932AF85F2AD9C388D7 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<!!0> UnityEngine.ResourceManagement.ResourceManager::ProvideResource<System.Object>(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t32FCA2B8F199EEDA03C392932AF85F2AD9C388D7  ResourceManager_ProvideResource_TisRuntimeObject_mAEB7A63AD1A1C83F577B89B284F01CD5C07CAB85_gshared (ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * __this, RuntimeObject* ___location0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m7DAEF6068F535E380A25468791B4E56A07EA6453_gshared (Action_1_tF8BFCB4A4DF5A86D4A4EE42B2935648B1E8AD072 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_1_add_Completed_m194EB5EADB37C544A1D1D3F048552244255832DC_gshared (AsyncOperationHandle_1_t32FCA2B8F199EEDA03C392932AF85F2AD9C388D7 * __this, Action_1_tF8BFCB4A4DF5A86D4A4EE42B2935648B1E8AD072 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::Complete<System.Object>(!!0,System.Boolean,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle_Complete_TisRuntimeObject_mBCDBFB1C8604FAB4B8B3ACF8D8B7478FDF403A01_gshared (ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * __this, RuntimeObject * ___result0, bool ___status1, Exception_t * ___exception2, const RuntimeMethod* method);
// !0 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AsyncOperationHandle_1_get_Result_mD8BB77B2B9BDA2377CFCA4DCCAE29470B7129634_gshared (AsyncOperationHandle_1_t32FCA2B8F199EEDA03C392932AF85F2AD9C388D7 * __this, const RuntimeMethod* method);
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::op_Implicit(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E  AsyncOperationHandle_1_op_Implicit_m0EF14226F99FFFA711F1C5066D88B0D2052AA5FF_gshared (AsyncOperationHandle_1_t32FCA2B8F199EEDA03C392932AF85F2AD9C388D7  ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::get_LocationName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsyncOperationHandle_1_get_LocationName_m6D715B8844AD83376E660B3CFF99AC7F804FD008_gshared (AsyncOperationHandle_1_t32FCA2B8F199EEDA03C392932AF85F2AD9C388D7 * __this, const RuntimeMethod* method);
// UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAllAssetsAsync<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * AssetBundle_LoadAllAssetsAsync_TisRuntimeObject_mAD108D9E85C76D5E6F32A60D37BF5FB6163E630C_gshared (AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::SetWaitForCompletionCallback(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle_SetWaitForCompletionCallback_mF6497E3222C3CF79B8CDFF31F3E820C46995F257 (ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___callback0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::GetDependencies(System.Collections.Generic.IList`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle_GetDependencies_m50B8C3466AED683B0F8581207B09D887350CB741 (ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * __this, RuntimeObject* ___list0, const RuntimeMethod* method);
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProvideHandle_get_Location_m5F7540397789E7214F8B9DD88C8E9B8A7A6ABE53 (ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * __this, const RuntimeMethod* method);
// System.String UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::DetermineIdToLoad(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.Collections.Generic.IList`1<System.Object>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalOp_DetermineIdToLoad_mF308B5630DA8523B3E0E3867D031D37053F9ADF8 (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, RuntimeObject* ___location0, RuntimeObject* ___dependencyObjects1, bool ___disableCatalogUpdateOnStart2, const RuntimeMethod* method);
// System.Boolean UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::CanLoadCatalogFromBundle(System.String,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalOp_CanLoadCatalogFromBundle_m21AE3A73839FF3110BC0E220B1E2ACE8288CA45F (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, String_t* ___idToLoad0, RuntimeObject* ___location1, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::LoadCatalog(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_LoadCatalog_m1495254C8BA1EA3BF40FB402BA81CE37BEDE1CD1 (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, String_t* ___idToLoad0, bool ___loadCatalogFromLocalBundle1, const RuntimeMethod* method);
// System.Boolean UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::WaitForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BundledCatalog_WaitForCompletion_m7E7C816D26846EB1787886F7B339E67A2764D373 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>::get_IsDone()
inline bool AsyncOperationHandle_1_get_IsDone_m48F645E09612697B79542FEC71052AB5607E11F3 (AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 *, const RuntimeMethod*))AsyncOperationHandle_1_get_IsDone_m05CCAA6F5BCDCF17E5F56C807C9E30585A41AA01_gshared)(__this, method);
}
// !0 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>::WaitForCompletion()
inline ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * AsyncOperationHandle_1_WaitForCompletion_m2D22B1D8CC422F2BA28EB209B3FDD24CB38A9511 (AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 * __this, const RuntimeMethod* method)
{
	return ((  ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * (*) (AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 *, const RuntimeMethod*))AsyncOperationHandle_1_WaitForCompletion_mE25E6F3056B0BA7CDE2B1FA9ADAD631CD4B35B7D_gshared)(__this, method);
}
// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * ProvideHandle_get_ResourceManager_m05D4E79DEBFDD6BD466CD6A2219958B00C6C3E8E (ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// System.Void UnityEngine.ResourceManagement.ResourceManager::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Update_m1038C44C2B864801F1D40DC503AA7F1029AAAF70 (ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * __this, float ___unscaledDeltaTime0, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::CleanData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentCatalogData_CleanData_mBD383848BC73A610E77C0EFED84F4D28A5D7C642 (ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::GetTransformedInternalId(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalOp_GetTransformedInternalId_m9EB31E5873ABDFDB23E8868DBEAEFBA815976CDD (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, RuntimeObject* ___loc0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF * ProviderLoadRequestOptions_Copy_m41C8BD5FE57904C59676B2338AF1B3DBA7468188 (ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::get_WebRequestTimeout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProviderLoadRequestOptions_get_WebRequestTimeout_mA2C845CB3F7ADF3D8C2E92ACE8B763752BCE4434_inline (ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog__ctor_m25344A2E9AD17F17DD40F8677B065F0ED783BEA2 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, String_t* ___bundlePath0, int32_t ___webRequestTimeout1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB87A76797258A7255D6EE65E30BE3AFE649A9BD1 (Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::add_OnLoaded(System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_add_OnLoaded_mAD3E254385A3C20FD2233B2C6F5F9AAEF5A2DC7A (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::LoadCatalogFromBundleAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_LoadCatalogFromBundleAsync_m6A83294E1C98AEE474F94F603ABFD74AFFE4DB26 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>()
inline IResourceLocationU5BU5D_tF65F723E5499FF3F2EA8F75B1275C63675F396A0* Array_Empty_TisIResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_m0D3609A7D4746673D750C4068EF7C7EC5E9215B3_inline (const RuntimeMethod* method)
{
	return ((  IResourceLocationU5BU5D_tF65F723E5499FF3F2EA8F75B1275C63675F396A0* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::.ctor(System.String,System.String,System.String,System.Type,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceLocationBase__ctor_m9F01B99ECB49EFF4B75BF41E169FBFEF707809AA (ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C * __this, String_t* ___name0, String_t* ___id1, String_t* ___providerId2, Type_t * ___t3, IResourceLocationU5BU5D_tF65F723E5499FF3F2EA8F75B1275C63675F396A0* ___dependencies4, const RuntimeMethod* method);
// System.Void UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::set_Data(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceLocationBase_set_Data_m27679E141DAE40E2566189ABE8E951B9B2BB9E5C (ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<!!0> UnityEngine.ResourceManagement.ResourceManager::ProvideResource<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
inline AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442  ResourceManager_ProvideResource_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_m31207C2595F055E461742D982305B7491CD6B60C (ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * __this, RuntimeObject* ___location0, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442  (*) (ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 *, RuntimeObject*, const RuntimeMethod*))ResourceManager_ProvideResource_TisRuntimeObject_mAEB7A63AD1A1C83F577B89B284F01CD5C07CAB85_gshared)(__this, ___location0, method);
}
// System.Void System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6968F38E1A0133D1BEEDE591D610C3104F3C3A9D (Action_1_t88843A476A52066DC24B7760ADD42B6454C6EC5B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t88843A476A52066DC24B7760ADD42B6454C6EC5B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m7DAEF6068F535E380A25468791B4E56A07EA6453_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<!0>>)
inline void AsyncOperationHandle_1_add_Completed_m06312DD8B215B792459E537EB0121A771BD63311 (AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 * __this, Action_1_t88843A476A52066DC24B7760ADD42B6454C6EC5B * ___value0, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 *, Action_1_t88843A476A52066DC24B7760ADD42B6454C6EC5B *, const RuntimeMethod*))AsyncOperationHandle_1_add_Completed_m194EB5EADB37C544A1D1D3F048552244255832DC_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::Complete<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>(!!0,System.Boolean,System.Exception)
inline void ProvideHandle_Complete_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mAA93370DE113F5184E995B0ABE0A7067BFCE661D (ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * __this, ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * ___result0, bool ___status1, Exception_t * ___exception2, const RuntimeMethod* method)
{
	((  void (*) (ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *, ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D *, bool, Exception_t *, const RuntimeMethod*))ProvideHandle_Complete_TisRuntimeObject_mBCDBFB1C8604FAB4B8B3ACF8D8B7478FDF403A01_gshared)(__this, ___result0, ___status1, ___exception2, method);
}
// !0 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>::get_Result()
inline ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * AsyncOperationHandle_1_get_Result_m9E0F8E3BA297A7755DA4D27837797234397187D9 (AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 * __this, const RuntimeMethod* method)
{
	return ((  ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * (*) (AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 *, const RuntimeMethod*))AsyncOperationHandle_1_get_Result_mD8BB77B2B9BDA2377CFCA4DCCAE29470B7129634_gshared)(__this, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>::op_Implicit(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<!0>)
inline AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E  AsyncOperationHandle_1_op_Implicit_mFABA6AD34A1DD6D494F3F6CEE40ED31D14C38BC8 (AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442  ___obj0, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E  (*) (AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 , const RuntimeMethod*))AsyncOperationHandle_1_op_Implicit_m0EF14226F99FFFA711F1C5066D88B0D2052AA5FF_gshared)(___obj0, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::Release(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Release_mD67A0632D3D7D0B7F97841BC1E4C7CF2FC191C57 (ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * __this, AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::OnCatalogLoaded(UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_OnCatalogLoaded_m66156379F9CC35AF9B9C28587DFC7A4BF83A1B17 (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * ___ccd0, const RuntimeMethod* method);
// System.String UnityEngine.ResourceManagement.ResourceManager::TransformInternalId(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourceManager_TransformInternalId_m99309A473F0354A9A003C8269967FB49300DC06C (ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * __this, RuntimeObject* ___location0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// UnityEngine.Hash128 UnityEngine.Hash128::Compute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  Hash128_Compute_m6A62DCDE72D17F89013487150F0D7B469AEDDC6A (String_t* ___data0, const RuntimeMethod* method);
// System.String UnityEngine.Hash128::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Hash128_ToString_mE6E0973B9B42A6AB9BEB8ACC679291CDAD2D03AC (Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A * __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE (String_t* ___path0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>::get_LocationName()
inline String_t* AsyncOperationHandle_1_get_LocationName_mD8967A5DA3F690399784433DCB0BA312A0965FC9 (AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 *, const RuntimeMethod*))AsyncOperationHandle_1_get_LocationName_m6D715B8844AD83376E660B3CFF99AC7F804FD008_gshared)(__this, method);
}
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77 (String_t* ___path0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.Addressables::LogWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Addressables_LogWarning_m19F95ADA7CB0B069CDCA4EDA34701EEB258BA7D7 (String_t* ___msg0, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::Start(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_Start_mBC8FF06EAB326570EC75D1BA9261BB52471A320D (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D  ___providerInterface0, bool ___disableCatalogUpdateOnStart1, bool ___isLocalCatalogInBundle2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC50250652CAFC8DA6D3059D6A9C2BA267367084E (U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> UnityEngine.AddressableAssets.Initialization.InitializationOperation::OnCatalogDataLoaded(UnityEngine.AddressableAssets.AddressablesImpl,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>,System.String,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE  InitializationOperation_OnCatalogDataLoaded_m0A0B20D7A77016FE1CB4D04266FAD6CBB8DC5DA8 (AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2 * ___addressables0, AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442  ___op1, String_t* ___providerSuffix2, RuntimeObject* ___remoteHashLocation3, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.Initialization.InitializationOperation::LoadOpComplete(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>,System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>,UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap,System.Int32,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOperation_LoadOpComplete_mAF7C847159E5FFE5797C364A438EE9BFB770615D (InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0 * __this, AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE  ___op0, RuntimeObject* ___catalogs1, ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8 * ___locMap2, int32_t ___index3, RuntimeObject* ___remoteHashLocation4, const RuntimeMethod* method);
// System.Void PackedPlayModeBuildLogs/RuntimeBuildLog::.ctor(UnityEngine.LogType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeBuildLog__ctor_mFF590D784D0F57DF9EFDBE9985E74150C09D3161 (RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B * __this, int32_t ___type0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.UpdateCatalogsOperation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBC529E048D36019B81CD8B58B628219B7B06201F (U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_Unload_m55E93756EA10FF87EF7EFFA8846AC76AE55C4AB2 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66 (AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * __this, bool ___unloadAllLoadedObjects0, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.Addressables::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Addressables_LogError_m4BD0C34F80ED89C9CF5F7E9CF26EFC357ACA0453 (String_t* ___msg0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ResourceManagement.Util.ResourceManagerConfig::ShouldPathUseWebRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManagerConfig_ShouldPathUseWebRequest_m20ED59B08CD29D311DE947B60B3020B6447EA19A (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestAssetBundle_GetAssetBundle_m59D1CAF6EBF34A45A33EE4627AFED7109FF99B26 (String_t* ___uri0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.ResourceManagement.WebRequestQueueOperation UnityEngine.ResourceManagement.WebRequestQueue::QueueRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151 * WebRequestQueue_QueueRequest_m9E882E5334EC6CB6FB517C1A0DF985B83779B78F (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ResourceManagement.WebRequestQueueOperation::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequestQueueOperation_get_IsDone_mD60F4EB09496B7A2F86C696815E34491375CC9D0 (WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::WebRequestOperationCompleted(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_WebRequestOperationCompleted_mBD80182B7BD5C6A0E5A3BF03CEB3E47A02B3ED1A (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___op0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10 (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9FF563E80CB9F5E48B29071804E6BFC0C55D3571 (Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.AssetBundleCreateRequest UnityEngine.AssetBundle::LoadFromFileAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * AssetBundle_LoadFromFileAsync_m32FB2B292114D2ED2DCAF0170E9DE16B21E9DAD8 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::get_webRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ResourceManagement.Util.UnityWebRequestUtilities::RequestHasErrors(UnityEngine.Networking.UnityWebRequest,UnityEngine.ResourceManagement.Util.UnityWebRequestResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestUtilities_RequestHasErrors_mFDB638EBB14B72DDD660D8E23F37A257C1871B4A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webReq0, UnityWebRequestResult_t100F520A4720C5527F6534B751FACE43DBB20BA9 ** ___result1, const RuntimeMethod* method);
// UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * DownloadHandlerAssetBundle_get_assetBundle_m083E8230E8A5644AE6176135C86B4E1A6283190D (DownloadHandlerAssetBundle_t49C00CF1C75BD0D6DFA01C3C490EBD4ABAAD76F3 * __this, const RuntimeMethod* method);
// UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAllAssetsAsync<UnityEngine.TextAsset>()
inline AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * AssetBundle_LoadAllAssetsAsync_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mB6BB417BA12FCFF1FF841B17D1EC1B43BFFA6A3A (AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * __this, const RuntimeMethod* method)
{
	return ((  AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * (*) (AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 *, const RuntimeMethod*))AssetBundle_LoadAllAssetsAsync_TisRuntimeObject_mAD108D9E85C76D5E6F32A60D37BF5FB6163E630C_gshared)(__this, method);
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::LoadTextAssetRequestComplete(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_LoadTextAssetRequestComplete_m08269CBA1E9DCDFA79F63DD6DA3D4BB78117327A (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___op0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * AssetBundleRequest_get_asset_mB0A96FBC026D143638E467DEB37228ACD55F1813 (AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * __this, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>(System.String)
inline ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * JsonUtility_FromJson_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mC99A84B95996D4F885A2353ED41667D0D1F818C1 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>::Invoke(!0)
inline void Action_1_Invoke_m772F2F580154DDE72E6E4565DB9CA566FB916B56 (Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * __this, ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 *, ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * AssetBundleCreateRequest_get_assetBundle_m608C1516A7DC8E4B1F9D63EDCF6EE8D6C2CFF013 (AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.AssetBundleRequest::get_allAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* AssetBundleRequest_get_allAssets_m77A51D54E51CAECFF0014E4EE90A841B4A0BE15A (AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * __this, const RuntimeMethod* method);
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
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::Start(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_Start_mBC8FF06EAB326570EC75D1BA9261BB52471A320D (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D  ___providerInterface0, bool ___disableCatalogUpdateOnStart1, bool ___isLocalCatalogInBundle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalOp_WaitForCompletionCallback_mD4D27D6AEFCA70E697564DF72CCC784B093FB82D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// m_ProviderInterface = providerInterface;
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D  L_0 = ___providerInterface0;
		__this->set_m_ProviderInterface_3(L_0);
		// m_DisableCatalogUpdateOnStart = disableCatalogUpdateOnStart;
		bool L_1 = ___disableCatalogUpdateOnStart1;
		__this->set_m_DisableCatalogUpdateOnStart_8(L_1);
		// m_IsLocalCatalogInBundle = isLocalCatalogInBundle;
		bool L_2 = ___isLocalCatalogInBundle2;
		__this->set_m_IsLocalCatalogInBundle_9(L_2);
		// m_ProviderInterface.SetWaitForCompletionCallback(WaitForCompletionCallback);
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_3 = __this->get_address_of_m_ProviderInterface_3();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_4, __this, (intptr_t)((intptr_t)InternalOp_WaitForCompletionCallback_mD4D27D6AEFCA70E697564DF72CCC784B093FB82D_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		ProvideHandle_SetWaitForCompletionCallback_mF6497E3222C3CF79B8CDFF31F3E820C46995F257((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_3, L_4, /*hidden argument*/NULL);
		// m_LocalDataPath = null;
		__this->set_m_LocalDataPath_0((String_t*)NULL);
		// m_RemoteHashValue = null;
		__this->set_m_RemoteHashValue_1((String_t*)NULL);
		// List<object> deps = new List<object>(); // TODO: garbage. need to pass actual count and reuse the list
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_5, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_0 = L_5;
		// m_ProviderInterface.GetDependencies(deps);
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_6 = __this->get_address_of_m_ProviderInterface_3();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_7 = V_0;
		ProvideHandle_GetDependencies_m50B8C3466AED683B0F8581207B09D887350CB741((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_6, L_7, /*hidden argument*/NULL);
		// string idToLoad = DetermineIdToLoad(m_ProviderInterface.Location, deps, disableCatalogUpdateOnStart);
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_8 = __this->get_address_of_m_ProviderInterface_3();
		RuntimeObject* L_9;
		L_9 = ProvideHandle_get_Location_m5F7540397789E7214F8B9DD88C8E9B8A7A6ABE53((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_8, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_10 = V_0;
		bool L_11 = ___disableCatalogUpdateOnStart1;
		String_t* L_12;
		L_12 = InternalOp_DetermineIdToLoad_mF308B5630DA8523B3E0E3867D031D37053F9ADF8(__this, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// bool loadCatalogFromLocalBundle = isLocalCatalogInBundle && CanLoadCatalogFromBundle(idToLoad, m_ProviderInterface.Location);
		bool L_13 = ___isLocalCatalogInBundle2;
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_14 = V_1;
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_15 = __this->get_address_of_m_ProviderInterface_3();
		RuntimeObject* L_16;
		L_16 = ProvideHandle_get_Location_m5F7540397789E7214F8B9DD88C8E9B8A7A6ABE53((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = InternalOp_CanLoadCatalogFromBundle_m21AE3A73839FF3110BC0E220B1E2ACE8288CA45F(__this, L_14, L_16, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_17));
		goto IL_007b;
	}

IL_007a:
	{
		G_B3_0 = 0;
	}

IL_007b:
	{
		V_2 = (bool)G_B3_0;
		// LoadCatalog(idToLoad, loadCatalogFromLocalBundle);
		String_t* L_18 = V_1;
		bool L_19 = V_2;
		InternalOp_LoadCatalog_m1495254C8BA1EA3BF40FB402BA81CE37BEDE1CD1(__this, L_18, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::WaitForCompletionCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalOp_WaitForCompletionCallback_mD4D27D6AEFCA70E697564DF72CCC784B093FB82D (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_WaitForCompletion_m2D22B1D8CC422F2BA28EB209B3FDD24CB38A9511_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_IsDone_m48F645E09612697B79542FEC71052AB5607E11F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B10_0 = 0;
	{
		// if (m_ContentCatalogData != null)
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_0 = __this->get_m_ContentCatalogData_4();
		V_1 = (bool)((!(((RuntimeObject*)(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0082;
	}

IL_0012:
	{
		// if (m_BundledCatalog != null)
		BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * L_2 = __this->get_m_BundledCatalog_6();
		V_3 = (bool)((!(((RuntimeObject*)(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// ccComplete = m_BundledCatalog.WaitForCompletion();
		BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * L_4 = __this->get_m_BundledCatalog_6();
		NullCheck(L_4);
		bool L_5;
		L_5 = BundledCatalog_WaitForCompletion_m7E7C816D26846EB1787886F7B339E67A2764D373(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0053;
	}

IL_002f:
	{
		// ccComplete = m_ContentCatalogDataLoadOp.IsDone;
		AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 * L_6 = __this->get_address_of_m_ContentCatalogDataLoadOp_5();
		bool L_7;
		L_7 = AsyncOperationHandle_1_get_IsDone_m48F645E09612697B79542FEC71052AB5607E11F3((AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 *)L_6, /*hidden argument*/AsyncOperationHandle_1_get_IsDone_m48F645E09612697B79542FEC71052AB5607E11F3_RuntimeMethod_var);
		V_0 = L_7;
		// if (!ccComplete)
		bool L_8 = V_0;
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// m_ContentCatalogDataLoadOp.WaitForCompletion();
		AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 * L_10 = __this->get_address_of_m_ContentCatalogDataLoadOp_5();
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_11;
		L_11 = AsyncOperationHandle_1_WaitForCompletion_m2D22B1D8CC422F2BA28EB209B3FDD24CB38A9511((AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 *)L_10, /*hidden argument*/AsyncOperationHandle_1_WaitForCompletion_m2D22B1D8CC422F2BA28EB209B3FDD24CB38A9511_RuntimeMethod_var);
	}

IL_0052:
	{
	}

IL_0053:
	{
		// if (ccComplete && m_ContentCatalogData == null)
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_13 = __this->get_m_ContentCatalogData_4();
		G_B10_0 = ((((RuntimeObject*)(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D *)L_13) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B10_0 = 0;
	}

IL_0062:
	{
		V_5 = (bool)G_B10_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_007e;
		}
	}
	{
		// m_ProviderInterface.ResourceManager.Update(Time.unscaledDeltaTime);
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_15 = __this->get_address_of_m_ProviderInterface_3();
		ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * L_16;
		L_16 = ProvideHandle_get_ResourceManager_m05D4E79DEBFDD6BD466CD6A2219958B00C6C3E8E((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_15, /*hidden argument*/NULL);
		float L_17;
		L_17 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		NullCheck(L_16);
		ResourceManager_Update_m1038C44C2B864801F1D40DC503AA7F1029AAAF70(L_16, L_17, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// return ccComplete;
		bool L_18 = V_0;
		V_2 = L_18;
		goto IL_0082;
	}

IL_0082:
	{
		// }
		bool L_19 = V_2;
		return L_19;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_Release_mDB782777D780E9A09CEFCDC9AAF2B20CEA09F448 (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, const RuntimeMethod* method)
{
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * G_B2_0 = NULL;
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * G_B1_0 = NULL;
	{
		// m_ContentCatalogData?.CleanData();
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_0 = __this->get_m_ContentCatalogData_4();
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		ContentCatalogData_CleanData_mBD383848BC73A610E77C0EFED84F4D28A5D7C642(G_B2_0, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::CanLoadCatalogFromBundle(System.String,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalOp_CanLoadCatalogFromBundle_m21AE3A73839FF3110BC0E220B1E2ACE8288CA45F (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, String_t* ___idToLoad0, RuntimeObject* ___location1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30D6D4CB31ABB242501386F03D1F25DEF9644B8A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return Path.GetExtension(idToLoad) == ".bundle" &&
		//     idToLoad.Equals(GetTransformedInternalId(location));
		String_t* L_0 = ___idToLoad0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral30D6D4CB31ABB242501386F03D1F25DEF9644B8A, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___idToLoad0;
		RuntimeObject* L_4 = ___location1;
		String_t* L_5;
		L_5 = InternalOp_GetTransformedInternalId_m9EB31E5873ABDFDB23E8868DBEAEFBA815976CDD(__this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_3, L_5, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::LoadCatalog(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_LoadCatalog_m1495254C8BA1EA3BF40FB402BA81CE37BEDE1CD1 (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, String_t* ___idToLoad0, bool ___loadCatalogFromLocalBundle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m6968F38E1A0133D1BEEDE591D610C3104F3C3A9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mB87A76797258A7255D6EE65E30BE3AFE649A9BD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t88843A476A52066DC24B7760ADD42B6454C6EC5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisIResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_m0D3609A7D4746673D750C4068EF7C7EC5E9215B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_add_Completed_m06312DD8B215B792459E537EB0121A771BD63311_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalOp_CatalogLoadOpCompleteCallback_m24B8AF466CD86C1989F7F2A561FE40DD6DE1DD71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalOp_U3CLoadCatalogU3Eb__14_0_m9CA7C49E427E908BCF84B42522A3517C9D1E4348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonAssetProvider_t91ED5F9C90361A026E0B2C4B494B1342E6A6A9DB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_ProvideResource_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_m31207C2595F055E461742D982305B7491CD6B60C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF * V_0 = NULL;
	ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C * V_5 = NULL;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B7_0 = 0;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// ProviderLoadRequestOptions providerLoadRequestOptions = null;
			V_0 = (ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF *)NULL;
			// if (m_ProviderInterface.Location.Data is ProviderLoadRequestOptions providerData)
			ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_0 = __this->get_address_of_m_ProviderInterface_3();
			RuntimeObject* L_1;
			L_1 = ProvideHandle_get_Location_m5F7540397789E7214F8B9DD88C8E9B8A7A6ABE53((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_0, /*hidden argument*/NULL);
			NullCheck(L_1);
			RuntimeObject * L_2;
			L_2 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_Data() */, IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var, L_1);
			V_1 = ((ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF *)IsInstClass((RuntimeObject*)L_2, ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF_il2cpp_TypeInfo_var));
			ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF * L_3 = V_1;
			V_2 = (bool)((!(((RuntimeObject*)(ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_0029;
			}
		}

IL_0022:
		{
			// providerLoadRequestOptions = providerData.Copy();
			ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF * L_5 = V_1;
			NullCheck(L_5);
			ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF * L_6;
			L_6 = ProviderLoadRequestOptions_Copy_m41C8BD5FE57904C59676B2338AF1B3DBA7468188(L_5, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_0029:
		{
			// if (loadCatalogFromLocalBundle)
			bool L_7 = ___loadCatalogFromLocalBundle1;
			V_3 = L_7;
			bool L_8 = V_3;
			if (!L_8)
			{
				goto IL_0072;
			}
		}

IL_002e:
		{
			// int webRequestTimeout = providerLoadRequestOptions?.WebRequestTimeout ?? 0;
			ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF * L_9 = V_0;
			if (L_9)
			{
				goto IL_0035;
			}
		}

IL_0032:
		{
			G_B7_0 = 0;
			goto IL_003b;
		}

IL_0035:
		{
			ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF * L_10 = V_0;
			NullCheck(L_10);
			int32_t L_11;
			L_11 = ProviderLoadRequestOptions_get_WebRequestTimeout_mA2C845CB3F7ADF3D8C2E92ACE8B763752BCE4434_inline(L_10, /*hidden argument*/NULL);
			G_B7_0 = L_11;
		}

IL_003b:
		{
			V_4 = G_B7_0;
			// m_BundledCatalog = new BundledCatalog(idToLoad, webRequestTimeout);
			String_t* L_12 = ___idToLoad0;
			int32_t L_13 = V_4;
			BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * L_14 = (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD *)il2cpp_codegen_object_new(BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_il2cpp_TypeInfo_var);
			BundledCatalog__ctor_m25344A2E9AD17F17DD40F8677B065F0ED783BEA2(L_14, L_12, L_13, /*hidden argument*/NULL);
			__this->set_m_BundledCatalog_6(L_14);
			// m_BundledCatalog.OnLoaded += ccd =>
			// {
			//     m_ContentCatalogData = ccd;
			//     OnCatalogLoaded(ccd);
			// };
			BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * L_15 = __this->get_m_BundledCatalog_6();
			Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_16 = (Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 *)il2cpp_codegen_object_new(Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747_il2cpp_TypeInfo_var);
			Action_1__ctor_mB87A76797258A7255D6EE65E30BE3AFE649A9BD1(L_16, __this, (intptr_t)((intptr_t)InternalOp_U3CLoadCatalogU3Eb__14_0_m9CA7C49E427E908BCF84B42522A3517C9D1E4348_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mB87A76797258A7255D6EE65E30BE3AFE649A9BD1_RuntimeMethod_var);
			NullCheck(L_15);
			BundledCatalog_add_OnLoaded_mAD3E254385A3C20FD2233B2C6F5F9AAEF5A2DC7A(L_15, L_16, /*hidden argument*/NULL);
			// m_BundledCatalog.LoadCatalogFromBundleAsync();
			BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * L_17 = __this->get_m_BundledCatalog_6();
			NullCheck(L_17);
			BundledCatalog_LoadCatalogFromBundleAsync_m6A83294E1C98AEE474F94F603ABFD74AFFE4DB26(L_17, /*hidden argument*/NULL);
			goto IL_00d4;
		}

IL_0072:
		{
			// ResourceLocationBase location = new ResourceLocationBase(idToLoad, idToLoad,
			//     typeof(JsonAssetProvider).FullName, typeof(ContentCatalogData));
			String_t* L_18 = ___idToLoad0;
			String_t* L_19 = ___idToLoad0;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (JsonAssetProvider_t91ED5F9C90361A026E0B2C4B494B1342E6A6A9DB_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_21;
			L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			String_t* L_22;
			L_22 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_21);
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_23 = { reinterpret_cast<intptr_t> (ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_0_0_0_var) };
			Type_t * L_24;
			L_24 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_23, /*hidden argument*/NULL);
			IResourceLocationU5BU5D_tF65F723E5499FF3F2EA8F75B1275C63675F396A0* L_25;
			L_25 = Array_Empty_TisIResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_m0D3609A7D4746673D750C4068EF7C7EC5E9215B3_inline(/*hidden argument*/Array_Empty_TisIResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_m0D3609A7D4746673D750C4068EF7C7EC5E9215B3_RuntimeMethod_var);
			ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C * L_26 = (ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C *)il2cpp_codegen_object_new(ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C_il2cpp_TypeInfo_var);
			ResourceLocationBase__ctor_m9F01B99ECB49EFF4B75BF41E169FBFEF707809AA(L_26, L_18, L_19, L_22, L_24, L_25, /*hidden argument*/NULL);
			V_5 = L_26;
			// location.Data = providerLoadRequestOptions;
			ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C * L_27 = V_5;
			ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF * L_28 = V_0;
			NullCheck(L_27);
			ResourceLocationBase_set_Data_m27679E141DAE40E2566189ABE8E951B9B2BB9E5C(L_27, L_28, /*hidden argument*/NULL);
			// m_ContentCatalogDataLoadOp = m_ProviderInterface.ResourceManager.ProvideResource<ContentCatalogData>(location);
			ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_29 = __this->get_address_of_m_ProviderInterface_3();
			ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * L_30;
			L_30 = ProvideHandle_get_ResourceManager_m05D4E79DEBFDD6BD466CD6A2219958B00C6C3E8E((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_29, /*hidden argument*/NULL);
			ResourceLocationBase_t8D6922C4379478D358B8DB8B76ACA9C2AFBFFA8C * L_31 = V_5;
			NullCheck(L_30);
			AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442  L_32;
			L_32 = ResourceManager_ProvideResource_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_m31207C2595F055E461742D982305B7491CD6B60C(L_30, L_31, /*hidden argument*/ResourceManager_ProvideResource_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_m31207C2595F055E461742D982305B7491CD6B60C_RuntimeMethod_var);
			__this->set_m_ContentCatalogDataLoadOp_5(L_32);
			// m_ContentCatalogDataLoadOp.Completed += CatalogLoadOpCompleteCallback;
			AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 * L_33 = __this->get_address_of_m_ContentCatalogDataLoadOp_5();
			Action_1_t88843A476A52066DC24B7760ADD42B6454C6EC5B * L_34 = (Action_1_t88843A476A52066DC24B7760ADD42B6454C6EC5B *)il2cpp_codegen_object_new(Action_1_t88843A476A52066DC24B7760ADD42B6454C6EC5B_il2cpp_TypeInfo_var);
			Action_1__ctor_m6968F38E1A0133D1BEEDE591D610C3104F3C3A9D(L_34, __this, (intptr_t)((intptr_t)InternalOp_CatalogLoadOpCompleteCallback_m24B8AF466CD86C1989F7F2A561FE40DD6DE1DD71_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6968F38E1A0133D1BEEDE591D610C3104F3C3A9D_RuntimeMethod_var);
			AsyncOperationHandle_1_add_Completed_m06312DD8B215B792459E537EB0121A771BD63311((AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 *)L_33, L_34, /*hidden argument*/AsyncOperationHandle_1_add_Completed_m06312DD8B215B792459E537EB0121A771BD63311_RuntimeMethod_var);
		}

IL_00d4:
		{
			goto IL_00ed;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d7;
		}
		throw e;
	}

CATCH_00d7:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// m_ProviderInterface.Complete<ContentCatalogData>(null, false, ex);
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_35 = __this->get_address_of_m_ProviderInterface_3();
		Exception_t * L_36 = V_6;
		ProvideHandle_Complete_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mAA93370DE113F5184E995B0ABE0A7067BFCE661D((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_35, (ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D *)NULL, (bool)0, L_36, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ProvideHandle_Complete_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mAA93370DE113F5184E995B0ABE0A7067BFCE661D_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ed;
	} // end catch (depth: 1)

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::CatalogLoadOpCompleteCallback(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_CatalogLoadOpCompleteCallback_m24B8AF466CD86C1989F7F2A561FE40DD6DE1DD71 (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442  ___op0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m9E0F8E3BA297A7755DA4D27837797234397187D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_op_Implicit_mFABA6AD34A1DD6D494F3F6CEE40ED31D14C38BC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ContentCatalogData = op.Result;
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_0;
		L_0 = AsyncOperationHandle_1_get_Result_m9E0F8E3BA297A7755DA4D27837797234397187D9((AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 *)(&___op0), /*hidden argument*/AsyncOperationHandle_1_get_Result_m9E0F8E3BA297A7755DA4D27837797234397187D9_RuntimeMethod_var);
		__this->set_m_ContentCatalogData_4(L_0);
		// m_ProviderInterface.ResourceManager.Release(op);
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_1 = __this->get_address_of_m_ProviderInterface_3();
		ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * L_2;
		L_2 = ProvideHandle_get_ResourceManager_m05D4E79DEBFDD6BD466CD6A2219958B00C6C3E8E((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_1, /*hidden argument*/NULL);
		AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442  L_3 = ___op0;
		AsyncOperationHandle_tC0F3D4ACAD11030C361B1F16D175D730ADC7992E  L_4;
		L_4 = AsyncOperationHandle_1_op_Implicit_mFABA6AD34A1DD6D494F3F6CEE40ED31D14C38BC8(L_3, /*hidden argument*/AsyncOperationHandle_1_op_Implicit_mFABA6AD34A1DD6D494F3F6CEE40ED31D14C38BC8_RuntimeMethod_var);
		NullCheck(L_2);
		ResourceManager_Release_mD67A0632D3D7D0B7F97841BC1E4C7CF2FC191C57(L_2, L_4, /*hidden argument*/NULL);
		// OnCatalogLoaded(m_ContentCatalogData);
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_5 = __this->get_m_ContentCatalogData_4();
		InternalOp_OnCatalogLoaded_m66156379F9CC35AF9B9C28587DFC7A4BF83A1B17(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::GetTransformedInternalId(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalOp_GetTransformedInternalId_m9EB31E5873ABDFDB23E8868DBEAEFBA815976CDD (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, RuntimeObject* ___loc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (m_ProviderInterface.ResourceManager == null)
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_0 = __this->get_address_of_m_ProviderInterface_3();
		ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * L_1;
		L_1 = ProvideHandle_get_ResourceManager_m05D4E79DEBFDD6BD466CD6A2219958B00C6C3E8E((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return loc.InternalId;
		RuntimeObject* L_3 = ___loc0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_InternalId() */, IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		goto IL_0030;
	}

IL_001c:
	{
		// return m_ProviderInterface.ResourceManager.TransformInternalId(loc);
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_5 = __this->get_address_of_m_ProviderInterface_3();
		ResourceManager_t2B7D001DFDBA91737524A3F22FC8986033B2C037 * L_6;
		L_6 = ProvideHandle_get_ResourceManager_m05D4E79DEBFDD6BD466CD6A2219958B00C6C3E8E((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_5, /*hidden argument*/NULL);
		RuntimeObject* L_7 = ___loc0;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = ResourceManager_TransformInternalId_m99309A473F0354A9A003C8269967FB49300DC06C(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.String UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::DetermineIdToLoad(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.Collections.Generic.IList`1<System.Object>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalOp_DetermineIdToLoad_mF308B5630DA8523B3E0E3867D031D37053F9ADF8 (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, RuntimeObject* ___location0, RuntimeObject* ___dependencyObjects1, bool ___disableCatalogUpdateOnStart2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t11A712125B3862757906E01853A29E53CDBB6B40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t35488BE070734B4C5D136DC1A68CBC9CE507D488_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t5C8A610FDC5FA97482DA32A92661CA24B72CC255_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	String_t* V_7 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// string idToLoad = GetTransformedInternalId(location);
		RuntimeObject* L_0 = ___location0;
		String_t* L_1;
		L_1 = InternalOp_GetTransformedInternalId_m9EB31E5873ABDFDB23E8868DBEAEFBA815976CDD(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (dependencyObjects != null &&
		//     location.Dependencies != null &&
		//     dependencyObjects.Count == (int)DependencyHashIndex.Count &&
		//     location.Dependencies.Count == (int)DependencyHashIndex.Count)
		RuntimeObject* L_2 = ___dependencyObjects1;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_3 = ___location0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_Dependencies() */, IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_5 = ___dependencyObjects1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, ICollection_1_t35488BE070734B4C5D136DC1A68CBC9CE507D488_il2cpp_TypeInfo_var, L_5);
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_7 = ___location0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_Dependencies() */, IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Count() */, ICollection_1_t11A712125B3862757906E01853A29E53CDBB6B40_il2cpp_TypeInfo_var, L_8);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		V_1 = (bool)G_B5_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0165;
		}
	}
	{
		// var remoteHash = dependencyObjects[(int)DependencyHashIndex.Remote] as string;
		RuntimeObject* L_11 = ___dependencyObjects1;
		NullCheck(L_11);
		RuntimeObject * L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_il2cpp_TypeInfo_var, L_11, 0);
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var));
		// m_LocalHashValue = dependencyObjects[(int)DependencyHashIndex.Cache] as string;
		RuntimeObject* L_13 = ___dependencyObjects1;
		NullCheck(L_13);
		RuntimeObject * L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_il2cpp_TypeInfo_var, L_13, 1);
		__this->set_m_LocalHashValue_2(((String_t*)IsInstSealed((RuntimeObject*)L_14, String_t_il2cpp_TypeInfo_var)));
		// if (string.IsNullOrEmpty(remoteHash) || disableCatalogUpdateOnStart) //offline
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_15, /*hidden argument*/NULL);
		bool L_17 = ___disableCatalogUpdateOnStart2;
		V_3 = (bool)((int32_t)((int32_t)L_16|(int32_t)L_17));
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00ca;
		}
	}
	{
		// if (!string.IsNullOrEmpty(m_LocalHashValue) && !m_Retried) //cache exists and not forcing a retry state
		String_t* L_19 = __this->get_m_LocalHashValue_2();
		bool L_20;
		L_20 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_007a;
		}
	}
	{
		bool L_21 = __this->get_m_Retried_7();
		G_B10_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_007b;
	}

IL_007a:
	{
		G_B10_0 = 0;
	}

IL_007b:
	{
		V_4 = (bool)G_B10_0;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_00a7;
		}
	}
	{
		// idToLoad = GetTransformedInternalId(location.Dependencies[(int)DependencyHashIndex.Cache]).Replace(".hash", ".json");
		RuntimeObject* L_23 = ___location0;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_Dependencies() */, IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Item(System.Int32) */, IList_1_t5C8A610FDC5FA97482DA32A92661CA24B72CC255_il2cpp_TypeInfo_var, L_24, 1);
		String_t* L_26;
		L_26 = InternalOp_GetTransformedInternalId_m9EB31E5873ABDFDB23E8868DBEAEFBA815976CDD(__this, L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_26, _stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB, _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742, /*hidden argument*/NULL);
		V_0 = L_27;
		goto IL_00c4;
	}

IL_00a7:
	{
		// m_LocalHashValue = Hash128.Compute(idToLoad).ToString();
		String_t* L_28 = V_0;
		Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  L_29;
		L_29 = Hash128_Compute_m6A62DCDE72D17F89013487150F0D7B469AEDDC6A(L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		String_t* L_30;
		L_30 = Hash128_ToString_mE6E0973B9B42A6AB9BEB8ACC679291CDAD2D03AC((Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A *)(&V_5), /*hidden argument*/NULL);
		__this->set_m_LocalHashValue_2(L_30);
	}

IL_00c4:
	{
		goto IL_0164;
	}

IL_00ca:
	{
		// if (remoteHash == m_LocalHashValue && !m_Retried) //cache of remote is good and not forcing a retry state
		String_t* L_31 = V_2;
		String_t* L_32 = __this->get_m_LocalHashValue_2();
		bool L_33;
		L_33 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_31, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00e4;
		}
	}
	{
		bool L_34 = __this->get_m_Retried_7();
		G_B17_0 = ((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		goto IL_00e5;
	}

IL_00e4:
	{
		G_B17_0 = 0;
	}

IL_00e5:
	{
		V_6 = (bool)G_B17_0;
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_0111;
		}
	}
	{
		// idToLoad = GetTransformedInternalId(location.Dependencies[(int)DependencyHashIndex.Cache]).Replace(".hash", ".json");
		RuntimeObject* L_36 = ___location0;
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_Dependencies() */, IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var, L_36);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Item(System.Int32) */, IList_1_t5C8A610FDC5FA97482DA32A92661CA24B72CC255_il2cpp_TypeInfo_var, L_37, 1);
		String_t* L_39;
		L_39 = InternalOp_GetTransformedInternalId_m9EB31E5873ABDFDB23E8868DBEAEFBA815976CDD(__this, L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		String_t* L_40;
		L_40 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_39, _stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB, _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_0163;
	}

IL_0111:
	{
		// idToLoad = GetTransformedInternalId(location.Dependencies[(int)DependencyHashIndex.Remote]).Replace(".hash", ".json");
		RuntimeObject* L_41 = ___location0;
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_Dependencies() */, IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var, L_41);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Item(System.Int32) */, IList_1_t5C8A610FDC5FA97482DA32A92661CA24B72CC255_il2cpp_TypeInfo_var, L_42, 0);
		String_t* L_44;
		L_44 = InternalOp_GetTransformedInternalId_m9EB31E5873ABDFDB23E8868DBEAEFBA815976CDD(__this, L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_44, _stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB, _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742, /*hidden argument*/NULL);
		V_0 = L_45;
		// m_LocalDataPath = GetTransformedInternalId(location.Dependencies[(int)DependencyHashIndex.Cache]).Replace(".hash", ".json");
		RuntimeObject* L_46 = ___location0;
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_Dependencies() */, IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Item(System.Int32) */, IList_1_t5C8A610FDC5FA97482DA32A92661CA24B72CC255_il2cpp_TypeInfo_var, L_47, 1);
		String_t* L_49;
		L_49 = InternalOp_GetTransformedInternalId_m9EB31E5873ABDFDB23E8868DBEAEFBA815976CDD(__this, L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		String_t* L_50;
		L_50 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_49, _stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB, _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742, /*hidden argument*/NULL);
		__this->set_m_LocalDataPath_0(L_50);
		// m_RemoteHashValue = remoteHash;
		String_t* L_51 = V_2;
		__this->set_m_RemoteHashValue_1(L_51);
	}

IL_0163:
	{
	}

IL_0164:
	{
	}

IL_0165:
	{
		// return idToLoad;
		String_t* L_52 = V_0;
		V_7 = L_52;
		goto IL_016a;
	}

IL_016a:
	{
		// }
		String_t* L_53 = V_7;
		return L_53;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::OnCatalogLoaded(UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_OnCatalogLoaded_m66156379F9CC35AF9B9C28587DFC7A4BF83A1B17 (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * ___ccd0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_LocationName_mD8967A5DA3F690399784433DCB0BA312A0965FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t5C8A610FDC5FA97482DA32A92661CA24B72CC255_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProvideHandle_Complete_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mAA93370DE113F5184E995B0ABE0A7067BFCE661D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral155F0465C23A0C08CB714B866F3FF9FF59CCACD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FE50377B347C1D51DF49731907D92C8915C8CF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6446C10AE56DD6012CC6B817847776314E6C0319);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	bool V_6 = false;
	String_t* V_7 = NULL;
	bool V_8 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (ccd != null)
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_0 = ___ccd0;
		V_0 = (bool)((!(((RuntimeObject*)(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00cc;
		}
	}
	{
		// ccd.location = m_ProviderInterface.Location;
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_2 = ___ccd0;
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_3 = __this->get_address_of_m_ProviderInterface_3();
		RuntimeObject* L_4;
		L_4 = ProvideHandle_get_Location_m5F7540397789E7214F8B9DD88C8E9B8A7A6ABE53((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_location_1(L_4);
		// ccd.localHash = m_LocalHashValue;
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_5 = ___ccd0;
		String_t* L_6 = __this->get_m_LocalHashValue_2();
		NullCheck(L_5);
		L_5->set_localHash_0(L_6);
		// if (!string.IsNullOrEmpty(m_RemoteHashValue) && !string.IsNullOrEmpty(m_LocalDataPath))
		String_t* L_7 = __this->get_m_RemoteHashValue_1();
		bool L_8;
		L_8 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_9 = __this->get_m_LocalDataPath_0();
		bool L_10;
		L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B4_0 = 0;
	}

IL_0048:
	{
		V_1 = (bool)G_B4_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_00b7;
		}
	}
	{
		// var dir = Path.GetDirectoryName(m_LocalDataPath);
		String_t* L_12 = __this->get_m_LocalDataPath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// if (!string.IsNullOrEmpty(dir) && !Directory.Exists(dir))
		String_t* L_14 = V_2;
		bool L_15;
		L_15 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_16, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_006d;
	}

IL_006c:
	{
		G_B8_0 = 0;
	}

IL_006d:
	{
		V_4 = (bool)G_B8_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_007a;
		}
	}
	{
		// Directory.CreateDirectory(dir);
		String_t* L_19 = V_2;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_20;
		L_20 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_19, /*hidden argument*/NULL);
	}

IL_007a:
	{
		// var localCachePath = m_LocalDataPath;
		String_t* L_21 = __this->get_m_LocalDataPath_0();
		V_3 = L_21;
		// File.WriteAllText(localCachePath, JsonUtility.ToJson(ccd));
		String_t* L_22 = V_3;
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_23 = ___ccd0;
		String_t* L_24;
		L_24 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_23, /*hidden argument*/NULL);
		File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C(L_22, L_24, /*hidden argument*/NULL);
		// File.WriteAllText(localCachePath.Replace(".json", ".hash"), m_RemoteHashValue);
		String_t* L_25 = V_3;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_25, _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742, _stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB, /*hidden argument*/NULL);
		String_t* L_27 = __this->get_m_RemoteHashValue_1();
		File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C(L_26, L_27, /*hidden argument*/NULL);
		// ccd.localHash = m_RemoteHashValue;
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_28 = ___ccd0;
		String_t* L_29 = __this->get_m_RemoteHashValue_1();
		NullCheck(L_28);
		L_28->set_localHash_0(L_29);
	}

IL_00b7:
	{
		// m_ProviderInterface.Complete(ccd, true, null);
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_30 = __this->get_address_of_m_ProviderInterface_3();
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_31 = ___ccd0;
		ProvideHandle_Complete_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mAA93370DE113F5184E995B0ABE0A7067BFCE661D((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_30, L_31, (bool)1, (Exception_t *)NULL, /*hidden argument*/ProvideHandle_Complete_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mAA93370DE113F5184E995B0ABE0A7067BFCE661D_RuntimeMethod_var);
		goto IL_01ca;
	}

IL_00cc:
	{
		// var errorMessage = $"Unable to load ContentCatalogData from location {m_ProviderInterface.Location}";
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_32 = __this->get_address_of_m_ProviderInterface_3();
		RuntimeObject* L_33;
		L_33 = ProvideHandle_get_Location_m5F7540397789E7214F8B9DD88C8E9B8A7A6ABE53((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_32, /*hidden argument*/NULL);
		String_t* L_34;
		L_34 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1FE50377B347C1D51DF49731907D92C8915C8CF5, L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		// if (!m_Retried)
		bool L_35 = __this->get_m_Retried_7();
		V_6 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01a8;
		}
	}
	{
		// m_Retried = true;
		__this->set_m_Retried_7((bool)1);
		// var cachePath = GetTransformedInternalId(m_ProviderInterface.Location.Dependencies[(int)DependencyHashIndex.Cache]);
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_37 = __this->get_address_of_m_ProviderInterface_3();
		RuntimeObject* L_38;
		L_38 = ProvideHandle_get_Location_m5F7540397789E7214F8B9DD88C8E9B8A7A6ABE53((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_Dependencies() */, IResourceLocation_t0D201FFF3312C197B7015B9506BADC33B50143AE_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Item(System.Int32) */, IList_1_t5C8A610FDC5FA97482DA32A92661CA24B72CC255_il2cpp_TypeInfo_var, L_39, 1);
		String_t* L_41;
		L_41 = InternalOp_GetTransformedInternalId_m9EB31E5873ABDFDB23E8868DBEAEFBA815976CDD(__this, L_40, /*hidden argument*/NULL);
		V_7 = L_41;
		// if (m_ContentCatalogDataLoadOp.LocationName == cachePath.Replace(".hash", ".json"))
		AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 * L_42 = __this->get_address_of_m_ContentCatalogDataLoadOp_5();
		String_t* L_43;
		L_43 = AsyncOperationHandle_1_get_LocationName_mD8967A5DA3F690399784433DCB0BA312A0965FC9((AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442 *)L_42, /*hidden argument*/AsyncOperationHandle_1_get_LocationName_mD8967A5DA3F690399784433DCB0BA312A0965FC9_RuntimeMethod_var);
		String_t* L_44 = V_7;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_44, _stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB, _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742, /*hidden argument*/NULL);
		bool L_46;
		L_46 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_43, L_45, /*hidden argument*/NULL);
		V_8 = L_46;
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_017a;
		}
	}
	{
	}

IL_0144:
	try
	{ // begin try (depth: 1)
		// File.Delete(cachePath);
		String_t* L_48 = V_7;
		File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_48, /*hidden argument*/NULL);
		goto IL_0179;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0150;
		}
		throw e;
	}

CATCH_0150:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// errorMessage += $". Unable to delete cache data from location {cachePath}";
		String_t* L_49 = V_5;
		String_t* L_50 = V_7;
		String_t* L_51;
		L_51 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_49, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB0BB6911BDAA8D73DD5BBA56D9EAF79D76F35036)), L_50, /*hidden argument*/NULL);
		V_5 = L_51;
		// m_ProviderInterface.Complete(ccd, false, new Exception(errorMessage));
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_52 = __this->get_address_of_m_ProviderInterface_3();
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_53 = ___ccd0;
		String_t* L_54 = V_5;
		Exception_t * L_55 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_55, L_54, /*hidden argument*/NULL);
		ProvideHandle_Complete_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mAA93370DE113F5184E995B0ABE0A7067BFCE661D((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_52, L_53, (bool)0, L_55, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ProvideHandle_Complete_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mAA93370DE113F5184E995B0ABE0A7067BFCE661D_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01ca;
	} // end catch (depth: 1)

IL_0179:
	{
	}

IL_017a:
	{
		// Addressables.LogWarning(errorMessage + ". Attempting to retry...");
		String_t* L_56 = V_5;
		String_t* L_57;
		L_57 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_56, _stringLiteral6446C10AE56DD6012CC6B817847776314E6C0319, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_il2cpp_TypeInfo_var);
		Addressables_LogWarning_m19F95ADA7CB0B069CDCA4EDA34701EEB258BA7D7(L_57, /*hidden argument*/NULL);
		// Start(m_ProviderInterface, m_DisableCatalogUpdateOnStart, m_IsLocalCatalogInBundle);
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D  L_58 = __this->get_m_ProviderInterface_3();
		bool L_59 = __this->get_m_DisableCatalogUpdateOnStart_8();
		bool L_60 = __this->get_m_IsLocalCatalogInBundle_9();
		InternalOp_Start_mBC8FF06EAB326570EC75D1BA9261BB52471A320D(__this, L_58, L_59, L_60, /*hidden argument*/NULL);
		goto IL_01c9;
	}

IL_01a8:
	{
		// m_ProviderInterface.Complete(ccd, false, new Exception(errorMessage + " on second attempt."));
		ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D * L_61 = __this->get_address_of_m_ProviderInterface_3();
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_62 = ___ccd0;
		String_t* L_63 = V_5;
		String_t* L_64;
		L_64 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_63, _stringLiteral155F0465C23A0C08CB714B866F3FF9FF59CCACD8, /*hidden argument*/NULL);
		Exception_t * L_65 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_65, L_64, /*hidden argument*/NULL);
		ProvideHandle_Complete_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mAA93370DE113F5184E995B0ABE0A7067BFCE661D((ProvideHandle_t7E2C4D55BFA0F16A1B53B1BE922FD9857859208D *)L_61, L_62, (bool)0, L_65, /*hidden argument*/ProvideHandle_Complete_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mAA93370DE113F5184E995B0ABE0A7067BFCE661D_RuntimeMethod_var);
	}

IL_01c9:
	{
	}

IL_01ca:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp__ctor_m1B1EAF6C8949869017C97162D5E5A3935CFB818A (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp::<LoadCatalog>b__14_0(UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_U3CLoadCatalogU3Eb__14_0_m9CA7C49E427E908BCF84B42522A3517C9D1E4348 (InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007 * __this, ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * ___ccd0, const RuntimeMethod* method)
{
	{
		// m_ContentCatalogData = ccd;
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_0 = ___ccd0;
		__this->set_m_ContentCatalogData_4(L_0);
		// OnCatalogLoaded(ccd);
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_1 = ___ccd0;
		InternalOp_OnCatalogLoaded_m66156379F9CC35AF9B9C28587DFC7A4BF83A1B17(__this, L_1, /*hidden argument*/NULL);
		// };
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
// System.Void UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA66A7643F01CBBC1B51CDA422878B5B0904D78EA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB * L_0 = (U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB *)il2cpp_codegen_object_new(U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC50250652CAFC8DA6D3059D6A9C2BA267367084E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC50250652CAFC8DA6D3059D6A9C2BA267367084E (U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c::<Execute>b__13_0(UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CExecuteU3Eb__13_0_mD7DFB767AB83F7FC889C36D9881FDE1C63277C76 (U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB * __this, RuntimeObject* ___rp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentCatalogProvider_t9816343589D5F6B669F2194F2D6F4A87EE5C5202_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .FirstOrDefault(rp => rp.GetType() == typeof(ContentCatalogProvider)) as ContentCatalogProvider;
		RuntimeObject* L_0 = ___rp0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (ContentCatalogProvider_t9816343589D5F6B669F2194F2D6F4A87EE5C5202_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m2ECDCE52A040E1ADA8DCD5DFD40622C7D29A4A84 (U3CU3Ec__DisplayClass16_0_tF42A377A5088BDDD9F2C683DAA8C640D1A4D6A2D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass16_0::<LoadContentCatalog>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE  U3CU3Ec__DisplayClass16_0_U3CLoadContentCatalogU3Eb__0_mCFCD38BD58DD192D1CCC573EDCC09D9A5AECB9D7 (U3CU3Ec__DisplayClass16_0_tF42A377A5088BDDD9F2C683DAA8C640D1A4D6A2D * __this, AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442  ___res0, const RuntimeMethod* method)
{
	{
		// var chainOp = addressables.ResourceManager.CreateChainOperation(catalogHandle, res => OnCatalogDataLoaded(addressables, res, providerSuffix, remoteHashLocation));
		AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2 * L_0 = __this->get_addressables_0();
		AsyncOperationHandle_1_tC62B646D978D84BEE617E1BE501DB84504AF7442  L_1 = ___res0;
		String_t* L_2 = __this->get_providerSuffix_1();
		RuntimeObject* L_3 = __this->get_remoteHashLocation_2();
		AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE  L_4;
		L_4 = InitializationOperation_OnCatalogDataLoaded_m0A0B20D7A77016FE1CB4D04266FAD6CBB8DC5DA8(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mC50DE02EEE7B00562FC3513AFD2170517794FBAD (U3CU3Ec__DisplayClass18_0_tE67E92DF82A5AEC1124BF444A40FC210787F25BB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c__DisplayClass18_0::<LoadContentCatalogInternal>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CLoadContentCatalogInternalU3Eb__0_m07AB59DBEB8973BB09BD750957E0D847A203A736 (U3CU3Ec__DisplayClass18_0_tE67E92DF82A5AEC1124BF444A40FC210787F25BB * __this, AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE  ___op0, const RuntimeMethod* method)
{
	{
		// LoadOpComplete(op, catalogs, locMap, index, remoteHashLocation);
		InitializationOperation_t6B5E499738C4AAD0D1566EC00551A0694C8094B0 * L_0 = __this->get_U3CU3E4__this_0();
		AsyncOperationHandle_1_tACBCEBB25FC221B2183225C6276396BB356E14DE  L_1 = ___op0;
		RuntimeObject* L_2 = __this->get_catalogs_1();
		ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8 * L_3 = __this->get_locMap_2();
		int32_t L_4 = __this->get_index_3();
		RuntimeObject* L_5 = __this->get_remoteHashLocation_4();
		NullCheck(L_0);
		InitializationOperation_LoadOpComplete_mAF7C847159E5FFE5797C364A438EE9BFB770615D(L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// };
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
// Conversion methods for marshalling of: PackedPlayModeBuildLogs/RuntimeBuildLog
IL2CPP_EXTERN_C void RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshal_pinvoke(const RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B& unmarshaled, RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshaled_pinvoke& marshaled)
{
	marshaled.___Type_0 = unmarshaled.get_Type_0();
	marshaled.___Message_1 = il2cpp_codegen_marshal_string(unmarshaled.get_Message_1());
}
IL2CPP_EXTERN_C void RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshal_pinvoke_back(const RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshaled_pinvoke& marshaled, RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B& unmarshaled)
{
	int32_t unmarshaled_Type_temp_0 = 0;
	unmarshaled_Type_temp_0 = marshaled.___Type_0;
	unmarshaled.set_Type_0(unmarshaled_Type_temp_0);
	unmarshaled.set_Message_1(il2cpp_codegen_marshal_string_result(marshaled.___Message_1));
}
// Conversion method for clean up from marshalling of: PackedPlayModeBuildLogs/RuntimeBuildLog
IL2CPP_EXTERN_C void RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshal_pinvoke_cleanup(RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Message_1);
	marshaled.___Message_1 = NULL;
}
// Conversion methods for marshalling of: PackedPlayModeBuildLogs/RuntimeBuildLog
IL2CPP_EXTERN_C void RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshal_com(const RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B& unmarshaled, RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshaled_com& marshaled)
{
	marshaled.___Type_0 = unmarshaled.get_Type_0();
	marshaled.___Message_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Message_1());
}
IL2CPP_EXTERN_C void RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshal_com_back(const RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshaled_com& marshaled, RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B& unmarshaled)
{
	int32_t unmarshaled_Type_temp_0 = 0;
	unmarshaled_Type_temp_0 = marshaled.___Type_0;
	unmarshaled.set_Type_0(unmarshaled_Type_temp_0);
	unmarshaled.set_Message_1(il2cpp_codegen_marshal_bstring_result(marshaled.___Message_1));
}
// Conversion method for clean up from marshalling of: PackedPlayModeBuildLogs/RuntimeBuildLog
IL2CPP_EXTERN_C void RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshal_com_cleanup(RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Message_1);
	marshaled.___Message_1 = NULL;
}
// System.Void PackedPlayModeBuildLogs/RuntimeBuildLog::.ctor(UnityEngine.LogType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeBuildLog__ctor_mFF590D784D0F57DF9EFDBE9985E74150C09D3161 (RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B * __this, int32_t ___type0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		// Type = type;
		int32_t L_0 = ___type0;
		__this->set_Type_0(L_0);
		// Message = message;
		String_t* L_1 = ___message1;
		__this->set_Message_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RuntimeBuildLog__ctor_mFF590D784D0F57DF9EFDBE9985E74150C09D3161_AdjustorThunk (RuntimeObject * __this, int32_t ___type0, String_t* ___message1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B * _thisAdjusted = reinterpret_cast<RuntimeBuildLog_t64F1499CFB0484BD89362D5F19C91939FECA0B1B *>(__this + _offset);
	RuntimeBuildLog__ctor_mFF590D784D0F57DF9EFDBE9985E74150C09D3161(_thisAdjusted, ___type0, ___message1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.AddressableAssets.UpdateCatalogsOperation/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD597B9567268B6195C759C97EB58B8889FC19762 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7 * L_0 = (U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7 *)il2cpp_codegen_object_new(U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBC529E048D36019B81CD8B58B628219B7B06201F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.UpdateCatalogsOperation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBC529E048D36019B81CD8B58B628219B7B06201F (U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.AddressableAssets.UpdateCatalogsOperation/<>c::<Start>b__4_0(UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__4_0_m4A2ADA8C4E76D6377AD78A6718B2BCD5E8B61246 (U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7 * __this, RuntimeObject* ___rp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentCatalogProvider_t9816343589D5F6B669F2194F2D6F4A87EE5C5202_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .FirstOrDefault(rp => rp.GetType() == typeof(ContentCatalogProvider)) as ContentCatalogProvider;
		RuntimeObject* L_0 = ___rp0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (ContentCatalogProvider_t9816343589D5F6B669F2194F2D6F4A87EE5C5202_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::add_OnLoaded(System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_add_OnLoaded_mAD3E254385A3C20FD2233B2C6F5F9AAEF5A2DC7A (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * V_0 = NULL;
	Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * V_1 = NULL;
	Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * V_2 = NULL;
	{
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_0 = __this->get_OnLoaded_9();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_2 = V_1;
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747_il2cpp_TypeInfo_var));
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 ** L_5 = __this->get_address_of_OnLoaded_9();
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_6 = V_2;
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_7 = V_1;
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 *>((Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_9 = V_0;
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 *)L_9) == ((RuntimeObject*)(Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::remove_OnLoaded(System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_remove_OnLoaded_mDEFD0B4C9684C80FFAFAAE3355F2A7E0B9E497BD (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * V_0 = NULL;
	Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * V_1 = NULL;
	Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * V_2 = NULL;
	{
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_0 = __this->get_OnLoaded_9();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_2 = V_1;
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747_il2cpp_TypeInfo_var));
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 ** L_5 = __this->get_address_of_OnLoaded_9();
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_6 = V_2;
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_7 = V_1;
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 *>((Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_9 = V_0;
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 *)L_9) == ((RuntimeObject*)(Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::get_OpInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BundledCatalog_get_OpInProgress_mF394BA58EDF2ED2CE688E3D62611BB852A354E16 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, const RuntimeMethod* method)
{
	{
		// public bool OpInProgress => m_OpInProgress;
		bool L_0 = __this->get_m_OpInProgress_1();
		return L_0;
	}
}
// System.Boolean UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::get_OpIsSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BundledCatalog_get_OpIsSuccess_m9D84AF655484537971A320C15D346FD467DAE397 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		// public bool OpIsSuccess => !m_OpInProgress && m_CatalogData != null;
		bool L_0 = __this->get_m_OpInProgress_1();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_1 = __this->get_m_CatalogData_5();
		G_B3_0 = ((!(((RuntimeObject*)(ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog__ctor_m25344A2E9AD17F17DD40F8677B065F0ED783BEA2 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, String_t* ___bundlePath0, int32_t ___webRequestTimeout1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30D6D4CB31ABB242501386F03D1F25DEF9644B8A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// public BundledCatalog(string bundlePath, int webRequestTimeout = 0)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (string.IsNullOrEmpty(bundlePath))
		String_t* L_0 = ___bundlePath0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// throw new ArgumentNullException(nameof(bundlePath), "Catalog bundle path is null.");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral08402675249E13601CD62B2997ED4E6863DB2D59)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF064DF11EFBB17F548B652B554EBD3B8C45A6DC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BundledCatalog__ctor_m25344A2E9AD17F17DD40F8677B065F0ED783BEA2_RuntimeMethod_var)));
	}

IL_0023:
	{
		// else if (!bundlePath.EndsWith(".bundle"))
		String_t* L_4 = ___bundlePath0;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_4, _stringLiteral30D6D4CB31ABB242501386F03D1F25DEF9644B8A, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// throw new ArgumentException("You must supply a valid bundle file path.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral133E86059726B90D6B305988FCC5468765E621FD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BundledCatalog__ctor_m25344A2E9AD17F17DD40F8677B065F0ED783BEA2_RuntimeMethod_var)));
	}

IL_0041:
	{
		// m_BundlePath = bundlePath;
		String_t* L_8 = ___bundlePath0;
		__this->set_m_BundlePath_0(L_8);
		// m_WebRequestTimeout = webRequestTimeout;
		int32_t L_9 = ___webRequestTimeout1;
		__this->set_m_WebRequestTimeout_8(L_9);
		// }
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_Finalize_mF255F26638BE86E3F67559221D8C7C5E98D24733 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		// Unload();
		BundledCatalog_Unload_m55E93756EA10FF87EF7EFFA8846AC76AE55C4AB2(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_Unload_m55E93756EA10FF87EF7EFFA8846AC76AE55C4AB2 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, const RuntimeMethod* method)
{
	AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * G_B2_0 = NULL;
	AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * G_B1_0 = NULL;
	{
		// m_CatalogAssetBundle?.Unload(true);
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_0 = __this->get_m_CatalogAssetBundle_3();
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66(G_B2_0, (bool)1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// m_CatalogAssetBundle = null;
		__this->set_m_CatalogAssetBundle_3((AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 *)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::LoadCatalogFromBundleAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_LoadCatalogFromBundleAsync_m6A83294E1C98AEE474F94F603ABFD74AFFE4DB26 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m9FF563E80CB9F5E48B29071804E6BFC0C55D3571_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BundledCatalog_U3CLoadCatalogFromBundleAsyncU3Eb__19_0_mF553D71A9BD5B7BB7514CCFBC0CC630341FF8187_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BundledCatalog_U3CLoadCatalogFromBundleAsyncU3Eb__19_1_mDB50BF3C73723E967D4E97C57E744C29BA2E5484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BundledCatalog_WebRequestOperationCompleted_mBD80182B7BD5C6A0E5A3BF03CEB3E47A02B3ED1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestQueue_tF61BB018FE0D4E900245AB6612FCDBED34E81D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97BCB0B290372AFF7311E4C38D0CA6CC8124893);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (m_OpInProgress)
		bool L_0 = __this->get_m_OpInProgress_1();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// Addressables.LogError($"Operation in progress : A catalog is already being loaded. Please wait for the operation to complete.");
		IL2CPP_RUNTIME_CLASS_INIT(Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_il2cpp_TypeInfo_var);
		Addressables_LogError_m4BD0C34F80ED89C9CF5F7E9CF26EFC357ACA0453(_stringLiteralD97BCB0B290372AFF7311E4C38D0CA6CC8124893, /*hidden argument*/NULL);
		// return;
		goto IL_011d;
	}

IL_001c:
	{
		// m_OpInProgress = true;
		__this->set_m_OpInProgress_1((bool)1);
		// if (ResourceManagerConfig.ShouldPathUseWebRequest(m_BundlePath))
		String_t* L_2 = __this->get_m_BundlePath_0();
		bool L_3;
		L_3 = ResourceManagerConfig_ShouldPathUseWebRequest_m20ED59B08CD29D311DE947B60B3020B6447EA19A(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00f2;
		}
	}
	{
		// var req = UnityWebRequestAssetBundle.GetAssetBundle(m_BundlePath);
		String_t* L_5 = __this->get_m_BundlePath_0();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6;
		L_6 = UnityWebRequestAssetBundle_GetAssetBundle_m59D1CAF6EBF34A45A33EE4627AFED7109FF99B26(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// if (m_WebRequestTimeout > 0)
		int32_t L_7 = __this->get_m_WebRequestTimeout_8();
		V_3 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// req.timeout = m_WebRequestTimeout;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = V_2;
		int32_t L_10 = __this->get_m_WebRequestTimeout_8();
		NullCheck(L_9);
		UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90(L_9, L_10, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// m_WebRequestQueueOperation = WebRequestQueue.QueueRequest(req);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestQueue_tF61BB018FE0D4E900245AB6612FCDBED34E81D39_il2cpp_TypeInfo_var);
		WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151 * L_12;
		L_12 = WebRequestQueue_QueueRequest_m9E882E5334EC6CB6FB517C1A0DF985B83779B78F(L_11, /*hidden argument*/NULL);
		__this->set_m_WebRequestQueueOperation_6(L_12);
		// if (m_WebRequestQueueOperation.IsDone)
		WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151 * L_13 = __this->get_m_WebRequestQueueOperation_6();
		NullCheck(L_13);
		bool L_14;
		L_14 = WebRequestQueueOperation_get_IsDone_mD60F4EB09496B7A2F86C696815E34491375CC9D0(L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00c6;
		}
	}
	{
		// m_RequestOperation = m_WebRequestQueueOperation.Result;
		WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151 * L_16 = __this->get_m_WebRequestQueueOperation_6();
		NullCheck(L_16);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_17 = L_16->get_Result_1();
		__this->set_m_RequestOperation_7(L_17);
		// if (m_RequestOperation.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_18 = __this->get_m_RequestOperation_7();
		NullCheck(L_18);
		bool L_19;
		L_19 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00ab;
		}
	}
	{
		// WebRequestOperationCompleted(m_RequestOperation);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_21 = __this->get_m_RequestOperation_7();
		BundledCatalog_WebRequestOperationCompleted_mBD80182B7BD5C6A0E5A3BF03CEB3E47A02B3ED1A(__this, L_21, /*hidden argument*/NULL);
		goto IL_00c3;
	}

IL_00ab:
	{
		// m_RequestOperation.completed += WebRequestOperationCompleted;
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_22 = __this->get_m_RequestOperation_7();
		Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * L_23 = (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *)il2cpp_codegen_object_new(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10(L_23, __this, (intptr_t)((intptr_t)BundledCatalog_WebRequestOperationCompleted_mBD80182B7BD5C6A0E5A3BF03CEB3E47A02B3ED1A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		NullCheck(L_22);
		AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8(L_22, L_23, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		goto IL_00ef;
	}

IL_00c6:
	{
		// m_WebRequestQueueOperation.OnComplete += asyncOp =>
		// {
		//     m_RequestOperation = asyncOp;
		//     m_RequestOperation.completed += WebRequestOperationCompleted;
		// };
		WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151 * L_24 = __this->get_m_WebRequestQueueOperation_6();
		WebRequestQueueOperation_tFC444676FD6ECC4D7F23A1C6CA9864124DC0D151 * L_25 = L_24;
		NullCheck(L_25);
		Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696 * L_26 = L_25->get_OnComplete_2();
		Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696 * L_27 = (Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696 *)il2cpp_codegen_object_new(Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696_il2cpp_TypeInfo_var);
		Action_1__ctor_m9FF563E80CB9F5E48B29071804E6BFC0C55D3571(L_27, __this, (intptr_t)((intptr_t)BundledCatalog_U3CLoadCatalogFromBundleAsyncU3Eb__19_1_mDB50BF3C73723E967D4E97C57E744C29BA2E5484_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9FF563E80CB9F5E48B29071804E6BFC0C55D3571_RuntimeMethod_var);
		Delegate_t * L_28;
		L_28 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		L_25->set_OnComplete_2(((Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696 *)CastclassSealed((RuntimeObject*)L_28, Action_1_tB9BFE9047605113DA05289A8C362B9699EBCF696_il2cpp_TypeInfo_var)));
	}

IL_00ef:
	{
		goto IL_011d;
	}

IL_00f2:
	{
		// m_LoadBundleRequest = AssetBundle.LoadFromFileAsync(m_BundlePath);
		String_t* L_29 = __this->get_m_BundlePath_0();
		AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * L_30;
		L_30 = AssetBundle_LoadFromFileAsync_m32FB2B292114D2ED2DCAF0170E9DE16B21E9DAD8(L_29, /*hidden argument*/NULL);
		__this->set_m_LoadBundleRequest_2(L_30);
		// m_LoadBundleRequest.completed += loadOp =>
		// {
		//     if (loadOp is AssetBundleCreateRequest createRequest && createRequest.assetBundle != null)
		//     {
		//         m_CatalogAssetBundle = createRequest.assetBundle;
		//         m_LoadTextAssetRequest = m_CatalogAssetBundle.LoadAllAssetsAsync<TextAsset>();
		//         if (m_LoadTextAssetRequest.isDone)
		//             LoadTextAssetRequestComplete(m_LoadTextAssetRequest);
		//         m_LoadTextAssetRequest.completed += LoadTextAssetRequestComplete;
		//     }
		//     else
		//     {
		//         Addressables.LogError($"Unable to load dependent bundle from location : {m_BundlePath}");
		//         m_OpInProgress = false;
		//     }
		// };
		AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * L_31 = __this->get_m_LoadBundleRequest_2();
		Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * L_32 = (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *)il2cpp_codegen_object_new(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10(L_32, __this, (intptr_t)((intptr_t)BundledCatalog_U3CLoadCatalogFromBundleAsyncU3Eb__19_0_mF553D71A9BD5B7BB7514CCFBC0CC630341FF8187_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		NullCheck(L_31);
		AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8(L_31, L_32, /*hidden argument*/NULL);
	}

IL_011d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::WebRequestOperationCompleted(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_WebRequestOperationCompleted_mBD80182B7BD5C6A0E5A3BF03CEB3E47A02B3ED1A (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___op0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundle_LoadAllAssetsAsync_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mB6BB417BA12FCFF1FF841B17D1EC1B43BFFA6A3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BundledCatalog_LoadTextAssetRequestComplete_m08269CBA1E9DCDFA79F63DD6DA3D4BB78117327A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerAssetBundle_t49C00CF1C75BD0D6DFA01C3C490EBD4ABAAD76F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B5DFFF4F9A9F739F5328FBC36971CADE6ECBA34);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	DownloadHandlerAssetBundle_t49C00CF1C75BD0D6DFA01C3C490EBD4ABAAD76F3 * V_2 = NULL;
	UnityWebRequestResult_t100F520A4720C5527F6534B751FACE43DBB20BA9 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	{
		// UnityWebRequestAsyncOperation remoteReq = op as UnityWebRequestAsyncOperation;
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0 = ___op0;
		V_0 = ((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)IsInstClass((RuntimeObject*)L_0, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var));
		// var webReq = remoteReq.webRequest;
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_1 = V_0;
		NullCheck(L_1);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2;
		L_2 = UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// DownloadHandlerAssetBundle downloadHandler = webReq.downloadHandler as DownloadHandlerAssetBundle;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = V_1;
		NullCheck(L_3);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_4;
		L_4 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_3, /*hidden argument*/NULL);
		V_2 = ((DownloadHandlerAssetBundle_t49C00CF1C75BD0D6DFA01C3C490EBD4ABAAD76F3 *)IsInstSealed((RuntimeObject*)L_4, DownloadHandlerAssetBundle_t49C00CF1C75BD0D6DFA01C3C490EBD4ABAAD76F3_il2cpp_TypeInfo_var));
		// if (!UnityWebRequestUtilities.RequestHasErrors(webReq, out UnityWebRequestResult uwrResult))
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5 = V_1;
		bool L_6;
		L_6 = UnityWebRequestUtilities_RequestHasErrors_mFDB638EBB14B72DDD660D8E23F37A257C1871B4A(L_5, (UnityWebRequestResult_t100F520A4720C5527F6534B751FACE43DBB20BA9 **)(&V_3), /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0083;
		}
	}
	{
		// m_CatalogAssetBundle = downloadHandler.assetBundle;
		DownloadHandlerAssetBundle_t49C00CF1C75BD0D6DFA01C3C490EBD4ABAAD76F3 * L_8 = V_2;
		NullCheck(L_8);
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_9;
		L_9 = DownloadHandlerAssetBundle_get_assetBundle_m083E8230E8A5644AE6176135C86B4E1A6283190D(L_8, /*hidden argument*/NULL);
		__this->set_m_CatalogAssetBundle_3(L_9);
		// m_LoadTextAssetRequest = m_CatalogAssetBundle.LoadAllAssetsAsync<TextAsset>();
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_10 = __this->get_m_CatalogAssetBundle_3();
		NullCheck(L_10);
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_11;
		L_11 = AssetBundle_LoadAllAssetsAsync_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mB6BB417BA12FCFF1FF841B17D1EC1B43BFFA6A3A(L_10, /*hidden argument*/AssetBundle_LoadAllAssetsAsync_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mB6BB417BA12FCFF1FF841B17D1EC1B43BFFA6A3A_RuntimeMethod_var);
		__this->set_m_LoadTextAssetRequest_4(L_11);
		// if (m_LoadTextAssetRequest.isDone)
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_12 = __this->get_m_LoadTextAssetRequest_4();
		NullCheck(L_12);
		bool L_13;
		L_13 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0068;
		}
	}
	{
		// LoadTextAssetRequestComplete(m_LoadTextAssetRequest);
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_15 = __this->get_m_LoadTextAssetRequest_4();
		BundledCatalog_LoadTextAssetRequestComplete_m08269CBA1E9DCDFA79F63DD6DA3D4BB78117327A(__this, L_15, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// m_LoadTextAssetRequest.completed += LoadTextAssetRequestComplete;
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_16 = __this->get_m_LoadTextAssetRequest_4();
		Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * L_17 = (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *)il2cpp_codegen_object_new(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10(L_17, __this, (intptr_t)((intptr_t)BundledCatalog_LoadTextAssetRequestComplete_m08269CBA1E9DCDFA79F63DD6DA3D4BB78117327A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		NullCheck(L_16);
		AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8(L_16, L_17, /*hidden argument*/NULL);
		goto IL_00a2;
	}

IL_0083:
	{
		// Addressables.LogError($"Unable to load dependent bundle from location : {m_BundlePath}");
		String_t* L_18 = __this->get_m_BundlePath_0();
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5B5DFFF4F9A9F739F5328FBC36971CADE6ECBA34, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_il2cpp_TypeInfo_var);
		Addressables_LogError_m4BD0C34F80ED89C9CF5F7E9CF26EFC357ACA0453(L_19, /*hidden argument*/NULL);
		// m_OpInProgress = false;
		__this->set_m_OpInProgress_1((bool)0);
	}

IL_00a2:
	{
		// webReq.Dispose();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_20 = V_1;
		NullCheck(L_20);
		UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8(L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::LoadTextAssetRequestComplete(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_LoadTextAssetRequestComplete_m08269CBA1E9DCDFA79F63DD6DA3D4BB78117327A (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___op0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m772F2F580154DDE72E6E4565DB9CA566FB916B56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mC99A84B95996D4F885A2353ED41667D0D1F818C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D260AA820F6A4564310B4E98067CDAF1039A6B7);
		s_Il2CppMethodInitialized = true;
	}
	AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * V_0 = NULL;
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * G_B7_0 = NULL;
	Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * G_B6_0 = NULL;
	{
		// if (op is AssetBundleRequest loadRequest
		//     && loadRequest.asset is TextAsset textAsset
		//     && textAsset.text != null)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0 = ___op0;
		V_0 = ((AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A *)IsInstClass((RuntimeObject*)L_0, AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_il2cpp_TypeInfo_var));
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_2 = V_0;
		NullCheck(L_2);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = AssetBundleRequest_get_asset_mB0A96FBC026D143638E467DEB37228ACD55F1813(L_2, /*hidden argument*/NULL);
		V_1 = ((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_3, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var));
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(L_5, /*hidden argument*/NULL);
		G_B4_0 = ((!(((RuntimeObject*)(String_t*)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		V_2 = (bool)G_B4_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		// m_CatalogData = JsonUtility.FromJson<ContentCatalogData>(textAsset.text);
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(L_8, /*hidden argument*/NULL);
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_10;
		L_10 = JsonUtility_FromJson_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mC99A84B95996D4F885A2353ED41667D0D1F818C1(L_9, /*hidden argument*/JsonUtility_FromJson_TisContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_mC99A84B95996D4F885A2353ED41667D0D1F818C1_RuntimeMethod_var);
		__this->set_m_CatalogData_5(L_10);
		// OnLoaded?.Invoke(m_CatalogData);
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_11 = __this->get_OnLoaded_9();
		Action_1_t84A5A270A9C6B9D2B219E515F9DE052C0237D747 * L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0048;
		}
	}
	{
		goto IL_0054;
	}

IL_0048:
	{
		ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D * L_13 = __this->get_m_CatalogData_5();
		NullCheck(G_B7_0);
		Action_1_Invoke_m772F2F580154DDE72E6E4565DB9CA566FB916B56(G_B7_0, L_13, /*hidden argument*/Action_1_Invoke_m772F2F580154DDE72E6E4565DB9CA566FB916B56_RuntimeMethod_var);
	}

IL_0054:
	{
		goto IL_006f;
	}

IL_0057:
	{
		// Addressables.LogError($"No catalog text assets where found in bundle {m_BundlePath}");
		String_t* L_14 = __this->get_m_BundlePath_0();
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4D260AA820F6A4564310B4E98067CDAF1039A6B7, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_il2cpp_TypeInfo_var);
		Addressables_LogError_m4BD0C34F80ED89C9CF5F7E9CF26EFC357ACA0453(L_15, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// Unload();
		BundledCatalog_Unload_m55E93756EA10FF87EF7EFFA8846AC76AE55C4AB2(__this, /*hidden argument*/NULL);
		// m_OpInProgress = false;
		__this->set_m_OpInProgress_1((bool)0);
		// }
		return;
	}
}
// System.Boolean UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::WaitForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BundledCatalog_WaitForCompletion_m7E7C816D26846EB1787886F7B339E67A2764D373 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (m_LoadBundleRequest.assetBundle == null)
		AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * L_0 = __this->get_m_LoadBundleRequest_2();
		NullCheck(L_0);
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_1;
		L_1 = AssetBundleCreateRequest_get_assetBundle_m608C1516A7DC8E4B1F9D63EDCF6EE8D6C2CFF013(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0041;
	}

IL_001a:
	{
		// return m_LoadTextAssetRequest.asset != null || m_LoadTextAssetRequest.allAssets != null;
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_4 = __this->get_m_LoadTextAssetRequest_4();
		NullCheck(L_4);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_5;
		L_5 = AssetBundleRequest_get_asset_mB0A96FBC026D143638E467DEB37228ACD55F1813(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_003d;
		}
	}
	{
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_7 = __this->get_m_LoadTextAssetRequest_4();
		NullCheck(L_7);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_8;
		L_8 = AssetBundleRequest_get_allAssets_m77A51D54E51CAECFF0014E4EE90A841B4A0BE15A(L_7, /*hidden argument*/NULL);
		G_B5_0 = ((!(((RuntimeObject*)(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 1;
	}

IL_003e:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::<LoadCatalogFromBundleAsync>b__19_1(UnityEngine.Networking.UnityWebRequestAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_U3CLoadCatalogFromBundleAsyncU3Eb__19_1_mDB50BF3C73723E967D4E97C57E744C29BA2E5484 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * ___asyncOp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BundledCatalog_WebRequestOperationCompleted_mBD80182B7BD5C6A0E5A3BF03CEB3E47A02B3ED1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RequestOperation = asyncOp;
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_0 = ___asyncOp0;
		__this->set_m_RequestOperation_7(L_0);
		// m_RequestOperation.completed += WebRequestOperationCompleted;
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_1 = __this->get_m_RequestOperation_7();
		Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * L_2 = (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *)il2cpp_codegen_object_new(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10(L_2, __this, (intptr_t)((intptr_t)BundledCatalog_WebRequestOperationCompleted_mBD80182B7BD5C6A0E5A3BF03CEB3E47A02B3ED1A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		NullCheck(L_1);
		AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8(L_1, L_2, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog::<LoadCatalogFromBundleAsync>b__19_0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledCatalog_U3CLoadCatalogFromBundleAsyncU3Eb__19_0_mF553D71A9BD5B7BB7514CCFBC0CC630341FF8187 (BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___loadOp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundle_LoadAllAssetsAsync_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mB6BB417BA12FCFF1FF841B17D1EC1B43BFFA6A3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BundledCatalog_LoadTextAssetRequestComplete_m08269CBA1E9DCDFA79F63DD6DA3D4BB78117327A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B5DFFF4F9A9F739F5328FBC36971CADE6ECBA34);
		s_Il2CppMethodInitialized = true;
	}
	AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (loadOp is AssetBundleCreateRequest createRequest && createRequest.assetBundle != null)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0 = ___loadOp0;
		V_0 = ((AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A *)IsInstClass((RuntimeObject*)L_0, AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_il2cpp_TypeInfo_var));
		AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * L_2 = V_0;
		NullCheck(L_2);
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_3;
		L_3 = AssetBundleCreateRequest_get_assetBundle_m608C1516A7DC8E4B1F9D63EDCF6EE8D6C2CFF013(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0073;
		}
	}
	{
		// m_CatalogAssetBundle = createRequest.assetBundle;
		AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * L_6 = V_0;
		NullCheck(L_6);
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_7;
		L_7 = AssetBundleCreateRequest_get_assetBundle_m608C1516A7DC8E4B1F9D63EDCF6EE8D6C2CFF013(L_6, /*hidden argument*/NULL);
		__this->set_m_CatalogAssetBundle_3(L_7);
		// m_LoadTextAssetRequest = m_CatalogAssetBundle.LoadAllAssetsAsync<TextAsset>();
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_8 = __this->get_m_CatalogAssetBundle_3();
		NullCheck(L_8);
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_9;
		L_9 = AssetBundle_LoadAllAssetsAsync_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mB6BB417BA12FCFF1FF841B17D1EC1B43BFFA6A3A(L_8, /*hidden argument*/AssetBundle_LoadAllAssetsAsync_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mB6BB417BA12FCFF1FF841B17D1EC1B43BFFA6A3A_RuntimeMethod_var);
		__this->set_m_LoadTextAssetRequest_4(L_9);
		// if (m_LoadTextAssetRequest.isDone)
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_10 = __this->get_m_LoadTextAssetRequest_4();
		NullCheck(L_10);
		bool L_11;
		L_11 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// LoadTextAssetRequestComplete(m_LoadTextAssetRequest);
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_13 = __this->get_m_LoadTextAssetRequest_4();
		BundledCatalog_LoadTextAssetRequestComplete_m08269CBA1E9DCDFA79F63DD6DA3D4BB78117327A(__this, L_13, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// m_LoadTextAssetRequest.completed += LoadTextAssetRequestComplete;
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_14 = __this->get_m_LoadTextAssetRequest_4();
		Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * L_15 = (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *)il2cpp_codegen_object_new(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10(L_15, __this, (intptr_t)((intptr_t)BundledCatalog_LoadTextAssetRequestComplete_m08269CBA1E9DCDFA79F63DD6DA3D4BB78117327A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		NullCheck(L_14);
		AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8(L_14, L_15, /*hidden argument*/NULL);
		goto IL_0092;
	}

IL_0073:
	{
		// Addressables.LogError($"Unable to load dependent bundle from location : {m_BundlePath}");
		String_t* L_16 = __this->get_m_BundlePath_0();
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5B5DFFF4F9A9F739F5328FBC36971CADE6ECBA34, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_il2cpp_TypeInfo_var);
		Addressables_LogError_m4BD0C34F80ED89C9CF5F7E9CF26EFC357ACA0453(L_17, /*hidden argument*/NULL);
		// m_OpInProgress = false;
		__this->set_m_OpInProgress_1((bool)0);
	}

IL_0092:
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProviderLoadRequestOptions_get_WebRequestTimeout_mA2C845CB3F7ADF3D8C2E92ACE8B763752BCE4434_inline (ProviderLoadRequestOptions_tCCC0F4829479C34B1BC9470658ABCFEB1973D7FF * __this, const RuntimeMethod* method)
{
	{
		// get => m_WebRequestTimeout;
		int32_t L_0 = __this->get_m_WebRequestTimeout_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, const RuntimeMethod* method)
{
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CwebRequestU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
