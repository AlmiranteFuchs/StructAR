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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Xml.Serialization.ClassMap
struct ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Xml.DomNameTable
struct DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB;
// System.Xml.EmptyEnumerator
struct EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Xml.IDtdDefaultAttributeInfo
struct IDtdDefaultAttributeInfo_t8DAB8271F3930199379DF41791AE869365320C92;
// System.Xml.IDtdEntityInfo
struct IDtdEntityInfo_t6CD9881A9EC86BF67CCFD10F64F69D18316D6AFC;
// System.Xml.IDtdInfo
struct IDtdInfo_tE42B4037BF3433A4F16173CE199CFF87E32A07C6;
// System.Xml.IValidationEventHandling
struct IValidationEventHandling_t574D5D59A6C1707DB494A9F8AFB6A3DB3F0B64D1;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_tE715F6572D858174C1BDCF0076B3C6415B226CD0;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_tC697CEDEA24AC6EF87E998BF72B96EDBD84DB229;
// System.Xml.IncrementalReadDecoder
struct IncrementalReadDecoder_t89737691013C036E9386839AE30A43C9721B3984;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Xml.Serialization.ObjectMap
struct ObjectMap_t7A8443346E6A156B8D9173F81BB35A5A23992B5C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5;
// System.Xml.SecureStringHasher
struct SecureStringHasher_t5F3BC4AE212133FAD80F39ED81D0338B8A21A87A;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Xml.Serialization.TypeData
struct TypeData_tB17E29DFB22C7153FB6084744BCE4FC8F91135C2;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Xml.Serialization.XmlAnyAttributeAttribute
struct XmlAnyAttributeAttribute_t425ACE58EEBC7D08A1B23CD06B03CA75B8D5B094;
// System.Xml.Serialization.XmlAnyElementAttributes
struct XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E;
// System.Xml.Serialization.XmlArrayAttribute
struct XmlArrayAttribute_t8016E5E39EDDEC98A198E56BBAA467772E8AE472;
// System.Xml.Serialization.XmlArrayItemAttributes
struct XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB;
// System.Xml.Serialization.XmlAttributeAttribute
struct XmlAttributeAttribute_t96949A5112ABB51E8AEB77CE3A43AF5EB44F5647;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46;
// System.Xml.Serialization.XmlChoiceIdentifierAttribute
struct XmlChoiceIdentifierAttribute_t631E9D90F1B31767C61EEDF899EC5233B57BB067;
// System.Xml.XmlDocument
struct XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F;
// System.Xml.XmlDownloadManager
struct XmlDownloadManager_t28FF2F536CFB5125C74928F7DC706692604D5A9D;
// System.Xml.Serialization.XmlElementAttributes
struct XmlElementAttributes_t58E8742350D62E45ABDA29BF94357D8152490402;
// System.Xml.Serialization.XmlEnumAttribute
struct XmlEnumAttribute_tB7AB030D43502B1DEE005D647CC82265AFFE4D6E;
// System.Xml.XmlException
struct XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918;
// System.Xml.XmlImplementation
struct XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9;
// System.Xml.XmlNameTable
struct XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9;
// System.Xml.XmlParserContext
struct XmlParserContext_tD8B22CA52F41246D7FB94A21A2A5ED605DD4CD28;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905;
// System.Xml.XmlRawWriter
struct XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5;
// System.Xml.XmlRawWriterBase64Encoder
struct XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB;
// System.Xml.XmlReader
struct XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138;
// System.Xml.Serialization.XmlReflectionMember
struct XmlReflectionMember_t2DB532740F4159245F707469F68AEA9BFBDA55CD;
// System.Xml.XmlResolver
struct XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0;
// System.Xml.Serialization.XmlSerializationCollectionFixupCallback
struct XmlSerializationCollectionFixupCallback_t88A34696BDDF37FD897F180858064DF7EF750B1A;
// System.Xml.Serialization.XmlSerializationFixupCallback
struct XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549;
// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_tC7FC61DC6AF3C45A91D27D7642EE41A61E6D3F9D;
// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26;
// System.Xml.Serialization.XmlSerializationWriteCallback
struct XmlSerializationWriteCallback_t913A191AF2181BDB556C809CE9A95D1B5EBF8454;
// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F;
// System.Xml.Serialization.XmlSerializationWriterInterpreter
struct XmlSerializationWriterInterpreter_t5421FAFC8BE8D6DA736DF8A6DC1ADA79770CDB54;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B;
// System.Xml.Serialization.XmlSerializerImplementation
struct XmlSerializerImplementation_t7498815CE092A9B67BE127DCA62F27ABECA6B230;
// System.Xml.Serialization.XmlTextAttribute
struct XmlTextAttribute_t913812A9EC84D070AA3006B1773A6ABC303A5C4E;
// System.Xml.XmlTextReaderImpl
struct XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4;
// System.Xml.Serialization.XmlTypeAttribute
struct XmlTypeAttribute_t8CF0FDD3A7F093717D676F94868FE9ABFB689800;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t41AE3864E379A8FD098C2BFE538CC27990836AFC;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute
struct XmlTypeMapMemberAnyAttribute_tE046B6F71F0626D9CF844E80D385126DD952CDEE;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t8A2AB4A984DDACBEE5837B4ECCCE30B431B832D0;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces
struct XmlTypeMapMemberNamespaces_tAF134E0E65D2095D56C6BDDE1E5A651A7594A38D;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581;
// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1;
// System.Xml.XmlWellFormedWriter
struct XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667;
// System.Xml.XmlWriter
struct XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// System.Xml.XmlQualifiedName/HashCodeOfStringDelegate
struct HashCodeOfStringDelegate_tAE9DAB0A55A64F35CCEE05D71856BAAF6C0B668E;
// System.Xml.Serialization.XmlReflectionImporter/<>c
struct U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE;
// System.Xml.Schema.XmlSchemaParticle/EmptyParticle
struct EmptyParticle_t56BD41298CE124A8F2F4F4426105E1663120F7BF;
// System.Xml.Serialization.XmlSerializationReader/CollectionFixup
struct CollectionFixup_t89B63EF27FF0C97725BA984F06E6C18D67FC482E;
// System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup
struct CollectionItemFixup_t70D993957A8584ED873E7BD74DC98ECE1101DB2D;
// System.Xml.Serialization.XmlSerializationReader/Fixup
struct Fixup_tC29AF2849DF70A12E99CE1ECE316CB1687D4FC5B;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo
struct WriteCallbackInfo_tF12675262DE88D8583DAD677E61DA8D1E81E4C0D;
// System.Xml.Serialization.XmlSerializationReaderInterpreter/FixupCallbackInfo
struct FixupCallbackInfo_tB2AF64AEEA68C8D0EA425052B40E969983CB92D3;
// System.Xml.Serialization.XmlSerializationReaderInterpreter/ReaderCallbackInfo
struct ReaderCallbackInfo_t6D18AED803E1FB284AB8B388FD470CB3BEDD3DB4;
// System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo
struct WriteCallbackInfo_t3F32E130FEEAC3992BCB0CCC059369D4A09B9EEF;
// System.Xml.Serialization.XmlSerializationWriterInterpreter/CallbackInfo
struct CallbackInfo_t142D92C1F8EA1C07621FB4A5E1383F836187E53A;
// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_tE81861A5E031D40D9732A8CF036A091D10F3478D;
// System.Xml.XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer
struct DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC;
// System.Xml.XmlTextReaderImpl/DtdParserProxy
struct DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557;
// System.Xml.XmlTextReaderImpl/LaterInitParam
struct LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF;
// System.Xml.XmlTextReaderImpl/NoNamespaceManager
struct NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2;
// System.Xml.XmlTextReaderImpl/NodeData
struct NodeData_tD504C5A621E7DD546954D87282438662327280EA;
// System.Xml.XmlTextReaderImpl/OnDefaultAttributeUseDelegate
struct OnDefaultAttributeUseDelegate_t3E995824DB2F605D21E74880C851C4C6BB9A1E88;
// System.Xml.XmlTextReaderImpl/XmlContext
struct XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D;
// System.Xml.XmlWellFormedWriter/AttributeValueCache
struct AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D;
// System.Xml.XmlWellFormedWriter/NamespaceResolverProxy
struct NamespaceResolverProxy_tDDE95968AA0C8C13FF8FF3A7A4D25A9B5A4DBD7D;
// System.Xml.XmlNamedNodeMap/SmallXmlNodeList/SingleObjectEnumerator
struct SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E;
// System.Xml.XmlWellFormedWriter/AttributeValueCache/BufferChunk
struct BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E;
// System.Xml.XmlWellFormedWriter/AttributeValueCache/Item
struct Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Comparison`1<System.Xml.Serialization.XmlReflectionMember>
struct Comparison_1_t44AF266C7D621EBE70F2BF21FFA6B7C2C260453A;
// System.Collections.Generic.Dictionary`2<System.Xml.IDtdEntityInfo,System.Xml.IDtdEntityInfo>
struct Dictionary_2_t7E4F75E23B8A710084DDD8B7D9D901F39C24B184;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.IO.Stream>>
struct Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t20C0141C3FEEDAA44BFE8521FEEDDF47289CB40B;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.IO.Stream>
struct TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B;
// System.Threading.Tasks.Task`1<System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>>
struct Task_1_tDC99D8BCBDBB4A01765BBF5823E5764CEC20D642;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Xml.XmlWellFormedWriter/AttrName[]
struct AttrNameU5BU5D_t93631FF3661C3AD12E16E9458DA72C75F802D4D8;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Xml.XmlWellFormedWriter/ElementScope[]
struct ElementScopeU5BU5D_t8F2566B84598956FD809080FEF2285A0C7B87CEB;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Net.ICredentials
struct ICredentials_t7F4F7C8E1E36461DC5388554FF404E2203D30C48;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Net.IWebProxy
struct IWebProxy_t27B6C29F0B62B717A9778AD251E31C21A91C32B3;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Xml.XmlWellFormedWriter/AttributeValueCache/Item[]
struct ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Xml.XmlNamespaceManager/NamespaceDeclaration[]
struct NamespaceDeclarationU5BU5D_t4D11B362C1D22E79294A2F9CB4710B02ED6D03F5;
// System.Xml.XmlWellFormedWriter/Namespace[]
struct NamespaceU5BU5D_t82BF9B8467EDD6AF27BEA8E6F9A7C8AFD2151F12;
// System.Xml.XmlTextReaderImpl/NodeData[]
struct NodeDataU5BU5D_tF52E3FD243752A83F37BFD931C7C13C513A1CAB0;
// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t267F4EB12AC82678B0783ABA92CD54A1503E1259;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Xml.XmlTextReaderImpl/ParsingState[]
struct ParsingStateU5BU5D_t76C574A7045A0E6E9113EF2F2E2B1A863D91376D;
// System.Collections.Queue
struct Queue_t66723C58C7422102C36F8570BE048BD0CC489E52;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Xml.XmlWellFormedWriter/State[]
struct StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Xml.WriteState[]
struct WriteStateU5BU5D_t2A56E7401E9CDE694F35A8072DFD3AAC3516906B;
// System.Xml.Schema.XmlTypeCode[]
struct XmlTypeCodeU5BU5D_t4B53622F8096A3BE4E235382465B2E0FF7B85D6B;
// System.Xml.Serialization.XmlTypeMapMemberAttribute[]
struct XmlTypeMapMemberAttributeU5BU5D_tBD565E2F6F54CCD19C901BAFB18161AF4E540D35;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDtdAttributeInfo_t5B62F2A60E372238F7530B20A85A60723B7AACE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDtdDefaultAttributeInfo_t8DAB8271F3930199379DF41791AE869365320C92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeData_tD504C5A621E7DD546954D87282438662327280EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E____9E31F24F64765FCAA589F589324D17C9FCF6A06D_5_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1710B4477A01FFE20514D8AA61891F364D71C25B;
IL2CPP_EXTERN_C String_t* _stringLiteral1F1BC4D23D8E5661364EBEC728BE303959F6CF91;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2C444E82A2EF8AEC533AC89C8394A988DC706B88;
IL2CPP_EXTERN_C String_t* _stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF4F70676F5F18B8797A6624726002F607BB8DE;
IL2CPP_EXTERN_C String_t* _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral513659CEF285C73478E9829E41D7E4C23DB53E12;
IL2CPP_EXTERN_C String_t* _stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral893D84FF4ED81AC205FBC0C67CBEE1C0C752B406;
IL2CPP_EXTERN_C String_t* _stringLiteral909AA3EFEECF6508CFB6F17EDD057508FF1D7D17;
IL2CPP_EXTERN_C String_t* _stringLiteral96930EC8C6FD5250BB36A5E1040AB06A9588FD62;
IL2CPP_EXTERN_C String_t* _stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6;
IL2CPP_EXTERN_C String_t* _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3;
IL2CPP_EXTERN_C String_t* _stringLiteral9FD9B00B05227B64D8B46A29B6D1B4FEA2C197EF;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD29CA80AA23F62C996542BD3373B35F12EBC874B;
IL2CPP_EXTERN_C String_t* _stringLiteralD4DAA1A26807E1A567D68B161E6A95701A3FD560;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC_TisU3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218_m3B21BB85DA84F2172127634BA0CCA9EF4FFE865F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m4F1ED70E3551027C342566D331FE99EB40F7C076_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mAD154326007808FFD2047A47BD8C312B91A05FCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mB7A99A944FAEF631A2EC109FADBF428D6A12FC0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DtdDefaultAttributeInfoToNodeDataComparer_Compare_mEA6EA939DBD81A2A517B365BE21158E0086F77D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleObjectEnumerator_get_Current_m76C9830F6FA5F3D4B444A13856E438EBDA9E0EDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallXmlNodeList_Insert_m746B9DDFD7B78894075135B2902335F4E6B4465B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallXmlNodeList_RemoveAt_mA3D7ACC3756E6109DBA4F77F83E2AF9A639A0FCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallXmlNodeList_get_Item_mB9359FC058C97EE9AD78BB1131A921616814A90E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m4A6D2565EE9545645B9418B3B2CC34B6A3D260A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEntityAsyncU3Ed__15_MoveNext_m6F75ADBC40411959ECD71C921F282AB4102D208E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AttributeValueCache_Replay_m2CF2F703C0D6D9CD77FB32178BB68B28A1D027A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AttributeValueCache_Trim_mA522BD9E00F36191AA0EB984EA8CA0DD664476DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AttributeValueCache_WriteCharEntity_mF5CF5D0B1FD72D9646547BA04E0A8CF0FE99E988_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AttributeValueCache_WriteChars_m29755C4DA7BBFF025E144B4E2D262940EFA659A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AttributeValueCache_WriteEntityRef_m20D6BE6836719DF501E4BAC53AC7B5A13A5CC117_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AttributeValueCache_WriteRaw_m297BAEA99CFAFAF357FDE71AFD1C98C93A5C49FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AttributeValueCache_WriteSurrogateCharEntity_m849F2BE6F3AF1F013961649206432643B945BEDE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AttributeValueCache__ctor_m98C2253BDD259D380432CE6A1C012D203824C9BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DtdDefaultAttributeInfoToNodeDataComparer_Compare_mEA6EA939DBD81A2A517B365BE21158E0086F77D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DtdDefaultAttributeInfoToNodeDataComparer__cctor_mDCEFB52DD72D09023BF950DBB372392A2B17D40E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DtdDefaultAttributeInfoToNodeDataComparer_get_Instance_m6E411939B185FAEFCEC68568E2BEFA7AEBCA3CFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EmptyParticle__ctor_m4B88D5F7EC79C791A079EC62E9CCD05AB1064C9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Fixup__ctor_m660914A339971116B47794D6B35C0A5F7D8A7519_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HashCodeOfStringDelegate_BeginInvoke_m44C53B41F5B1760F52986020073B0CA59B276DE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Namespace_WriteDecl_mDC2FAE6430835463C87F91004DD93F8695CB714A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NoNamespaceManager_LookupNamespace_mC78AC6A0001820930F0E70988DBDF3C311CF8805_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NoNamespaceManager_get_DefaultNamespace_m5ADD1C30FA9A6D3F3FD1111C9F3A2D0FAEEC090F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeData_ClearName_mC3A98BBF65ABAE00AFE65E1942BB348021D1D0C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeData_Clear_mA1DC123EFEF100E0BAE5D5860DED5C0AC83EAB94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeData_CreateNameWPrefix_mE5F2F6096757CECF6F0C49FB0542EFBF15A9C7C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeData_SetNamedNode_m9FFF683DB8640C8F6F5A053A5C120742C777415A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeData_SetNamedNode_mFE5340CD2CF846E5AADCE3F7D8925BB1780683F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeData_System_IComparable_CompareTo_m83288CF38E9F5552461E72F26954474A9ED6ED50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeData_get_None_mA00726B28E3772621A85CE37F190F028F04D30FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseDate_m23E3A2F31DFAA15C290E80E7D32F8981686A515F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseTime_m8B8F8087006D4BDFE3FF8E239ACE293C68A41339_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_Parse_m4967C6E2F360C1BCAAEDC78816BBADE6F5A6C297_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser__cctor_mF52624EF62C9F87E4BC098307C643E9BB73EAFBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ParsingState_Clear_m23A1DD27BCE9143D4C4E6D5A45C0F4AA1FECA004_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SerializerData_CreateWriter_mE93BD90B14FFE36C2D3D9400517278FC9F7C68EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SingleObjectEnumerator_get_Current_m76C9830F6FA5F3D4B444A13856E438EBDA9E0EDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmallXmlNodeList_Add_m23AA92A77C388F16C324B3DABE2FB17E3DA5DCF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmallXmlNodeList_GetEnumerator_mB22BFB1AD52DA04FA5D10B8C62D996894DF967C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmallXmlNodeList_Insert_m746B9DDFD7B78894075135B2902335F4E6B4465B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmallXmlNodeList_RemoveAt_mA3D7ACC3756E6109DBA4F77F83E2AF9A639A0FCE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmallXmlNodeList_get_Count_m531CBC894FC78314798ED52A184AB776B4C1E482_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmallXmlNodeList_get_Item_mB9359FC058C97EE9AD78BB1131A921616814A90E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEntityAsyncU3Ed__15_MoveNext_m6F75ADBC40411959ECD71C921F282AB4102D208E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEntityAsyncU3Ed__15_SetStateMachine_m9A31F8EDD492D50FFA4F9FCC8F0FBAD9DD1D3E93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mA76BC36DD017B2528E793D9B468C47429BD7E9F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlContext__ctor_m5785549B37BF1B5F5295E45AA99FB8057AA2C120_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlReaderDebuggerDisplayProxy_ToString_m8138337CC447054936F29D1E5ED79BFFD11C0101_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct  ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_4), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
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
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.Text.Decoder
struct  Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::m_fallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___m_fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::m_fallbackBuffer
	DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallback_0)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_m_fallback_0() const { return ___m_fallback_0; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallbackBuffer_1)); }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Xml.EmptyEnumerator
struct  EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13  : public RuntimeObject
{
public:

public:
};


// System.Xml.Schema.XmlSchemaObject
struct  XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3  : public RuntimeObject
{
public:

public:
};


// System.Xml.Serialization.ObjectMap
struct  ObjectMap_t7A8443346E6A156B8D9173F81BB35A5A23992B5C  : public RuntimeObject
{
public:

public:
};


// System.Xml.Serialization.XmlAttributes
struct  XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46  : public RuntimeObject
{
public:
	// System.Xml.Serialization.XmlAnyAttributeAttribute System.Xml.Serialization.XmlAttributes::xmlAnyAttribute
	XmlAnyAttributeAttribute_t425ACE58EEBC7D08A1B23CD06B03CA75B8D5B094 * ___xmlAnyAttribute_0;
	// System.Xml.Serialization.XmlAnyElementAttributes System.Xml.Serialization.XmlAttributes::xmlAnyElements
	XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E * ___xmlAnyElements_1;
	// System.Xml.Serialization.XmlArrayAttribute System.Xml.Serialization.XmlAttributes::xmlArray
	XmlArrayAttribute_t8016E5E39EDDEC98A198E56BBAA467772E8AE472 * ___xmlArray_2;
	// System.Xml.Serialization.XmlArrayItemAttributes System.Xml.Serialization.XmlAttributes::xmlArrayItems
	XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB * ___xmlArrayItems_3;
	// System.Xml.Serialization.XmlAttributeAttribute System.Xml.Serialization.XmlAttributes::xmlAttribute
	XmlAttributeAttribute_t96949A5112ABB51E8AEB77CE3A43AF5EB44F5647 * ___xmlAttribute_4;
	// System.Xml.Serialization.XmlChoiceIdentifierAttribute System.Xml.Serialization.XmlAttributes::xmlChoiceIdentifier
	XmlChoiceIdentifierAttribute_t631E9D90F1B31767C61EEDF899EC5233B57BB067 * ___xmlChoiceIdentifier_5;
	// System.Object System.Xml.Serialization.XmlAttributes::xmlDefaultValue
	RuntimeObject * ___xmlDefaultValue_6;
	// System.Xml.Serialization.XmlElementAttributes System.Xml.Serialization.XmlAttributes::xmlElements
	XmlElementAttributes_t58E8742350D62E45ABDA29BF94357D8152490402 * ___xmlElements_7;
	// System.Xml.Serialization.XmlEnumAttribute System.Xml.Serialization.XmlAttributes::xmlEnum
	XmlEnumAttribute_tB7AB030D43502B1DEE005D647CC82265AFFE4D6E * ___xmlEnum_8;
	// System.Boolean System.Xml.Serialization.XmlAttributes::xmlIgnore
	bool ___xmlIgnore_9;
	// System.Boolean System.Xml.Serialization.XmlAttributes::xmlns
	bool ___xmlns_10;
	// System.Xml.Serialization.XmlRootAttribute System.Xml.Serialization.XmlAttributes::xmlRoot
	XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * ___xmlRoot_11;
	// System.Xml.Serialization.XmlTextAttribute System.Xml.Serialization.XmlAttributes::xmlText
	XmlTextAttribute_t913812A9EC84D070AA3006B1773A6ABC303A5C4E * ___xmlText_12;
	// System.Xml.Serialization.XmlTypeAttribute System.Xml.Serialization.XmlAttributes::xmlType
	XmlTypeAttribute_t8CF0FDD3A7F093717D676F94868FE9ABFB689800 * ___xmlType_13;

public:
	inline static int32_t get_offset_of_xmlAnyAttribute_0() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlAnyAttribute_0)); }
	inline XmlAnyAttributeAttribute_t425ACE58EEBC7D08A1B23CD06B03CA75B8D5B094 * get_xmlAnyAttribute_0() const { return ___xmlAnyAttribute_0; }
	inline XmlAnyAttributeAttribute_t425ACE58EEBC7D08A1B23CD06B03CA75B8D5B094 ** get_address_of_xmlAnyAttribute_0() { return &___xmlAnyAttribute_0; }
	inline void set_xmlAnyAttribute_0(XmlAnyAttributeAttribute_t425ACE58EEBC7D08A1B23CD06B03CA75B8D5B094 * value)
	{
		___xmlAnyAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlAnyAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_xmlAnyElements_1() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlAnyElements_1)); }
	inline XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E * get_xmlAnyElements_1() const { return ___xmlAnyElements_1; }
	inline XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E ** get_address_of_xmlAnyElements_1() { return &___xmlAnyElements_1; }
	inline void set_xmlAnyElements_1(XmlAnyElementAttributes_t0764A8C936570CDDE90E5664A4DF5EC3F10DA79E * value)
	{
		___xmlAnyElements_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlAnyElements_1), (void*)value);
	}

	inline static int32_t get_offset_of_xmlArray_2() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlArray_2)); }
	inline XmlArrayAttribute_t8016E5E39EDDEC98A198E56BBAA467772E8AE472 * get_xmlArray_2() const { return ___xmlArray_2; }
	inline XmlArrayAttribute_t8016E5E39EDDEC98A198E56BBAA467772E8AE472 ** get_address_of_xmlArray_2() { return &___xmlArray_2; }
	inline void set_xmlArray_2(XmlArrayAttribute_t8016E5E39EDDEC98A198E56BBAA467772E8AE472 * value)
	{
		___xmlArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlArray_2), (void*)value);
	}

	inline static int32_t get_offset_of_xmlArrayItems_3() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlArrayItems_3)); }
	inline XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB * get_xmlArrayItems_3() const { return ___xmlArrayItems_3; }
	inline XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB ** get_address_of_xmlArrayItems_3() { return &___xmlArrayItems_3; }
	inline void set_xmlArrayItems_3(XmlArrayItemAttributes_t31129BD0EFD28EFBF3076C3CF12300AED71A31CB * value)
	{
		___xmlArrayItems_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlArrayItems_3), (void*)value);
	}

	inline static int32_t get_offset_of_xmlAttribute_4() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlAttribute_4)); }
	inline XmlAttributeAttribute_t96949A5112ABB51E8AEB77CE3A43AF5EB44F5647 * get_xmlAttribute_4() const { return ___xmlAttribute_4; }
	inline XmlAttributeAttribute_t96949A5112ABB51E8AEB77CE3A43AF5EB44F5647 ** get_address_of_xmlAttribute_4() { return &___xmlAttribute_4; }
	inline void set_xmlAttribute_4(XmlAttributeAttribute_t96949A5112ABB51E8AEB77CE3A43AF5EB44F5647 * value)
	{
		___xmlAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlAttribute_4), (void*)value);
	}

	inline static int32_t get_offset_of_xmlChoiceIdentifier_5() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlChoiceIdentifier_5)); }
	inline XmlChoiceIdentifierAttribute_t631E9D90F1B31767C61EEDF899EC5233B57BB067 * get_xmlChoiceIdentifier_5() const { return ___xmlChoiceIdentifier_5; }
	inline XmlChoiceIdentifierAttribute_t631E9D90F1B31767C61EEDF899EC5233B57BB067 ** get_address_of_xmlChoiceIdentifier_5() { return &___xmlChoiceIdentifier_5; }
	inline void set_xmlChoiceIdentifier_5(XmlChoiceIdentifierAttribute_t631E9D90F1B31767C61EEDF899EC5233B57BB067 * value)
	{
		___xmlChoiceIdentifier_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlChoiceIdentifier_5), (void*)value);
	}

	inline static int32_t get_offset_of_xmlDefaultValue_6() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlDefaultValue_6)); }
	inline RuntimeObject * get_xmlDefaultValue_6() const { return ___xmlDefaultValue_6; }
	inline RuntimeObject ** get_address_of_xmlDefaultValue_6() { return &___xmlDefaultValue_6; }
	inline void set_xmlDefaultValue_6(RuntimeObject * value)
	{
		___xmlDefaultValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlDefaultValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_xmlElements_7() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlElements_7)); }
	inline XmlElementAttributes_t58E8742350D62E45ABDA29BF94357D8152490402 * get_xmlElements_7() const { return ___xmlElements_7; }
	inline XmlElementAttributes_t58E8742350D62E45ABDA29BF94357D8152490402 ** get_address_of_xmlElements_7() { return &___xmlElements_7; }
	inline void set_xmlElements_7(XmlElementAttributes_t58E8742350D62E45ABDA29BF94357D8152490402 * value)
	{
		___xmlElements_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlElements_7), (void*)value);
	}

	inline static int32_t get_offset_of_xmlEnum_8() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlEnum_8)); }
	inline XmlEnumAttribute_tB7AB030D43502B1DEE005D647CC82265AFFE4D6E * get_xmlEnum_8() const { return ___xmlEnum_8; }
	inline XmlEnumAttribute_tB7AB030D43502B1DEE005D647CC82265AFFE4D6E ** get_address_of_xmlEnum_8() { return &___xmlEnum_8; }
	inline void set_xmlEnum_8(XmlEnumAttribute_tB7AB030D43502B1DEE005D647CC82265AFFE4D6E * value)
	{
		___xmlEnum_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlEnum_8), (void*)value);
	}

	inline static int32_t get_offset_of_xmlIgnore_9() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlIgnore_9)); }
	inline bool get_xmlIgnore_9() const { return ___xmlIgnore_9; }
	inline bool* get_address_of_xmlIgnore_9() { return &___xmlIgnore_9; }
	inline void set_xmlIgnore_9(bool value)
	{
		___xmlIgnore_9 = value;
	}

	inline static int32_t get_offset_of_xmlns_10() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlns_10)); }
	inline bool get_xmlns_10() const { return ___xmlns_10; }
	inline bool* get_address_of_xmlns_10() { return &___xmlns_10; }
	inline void set_xmlns_10(bool value)
	{
		___xmlns_10 = value;
	}

	inline static int32_t get_offset_of_xmlRoot_11() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlRoot_11)); }
	inline XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * get_xmlRoot_11() const { return ___xmlRoot_11; }
	inline XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 ** get_address_of_xmlRoot_11() { return &___xmlRoot_11; }
	inline void set_xmlRoot_11(XmlRootAttribute_t509A188575B2B9912E6DBF82CBB9A17715BECB96 * value)
	{
		___xmlRoot_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlRoot_11), (void*)value);
	}

	inline static int32_t get_offset_of_xmlText_12() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlText_12)); }
	inline XmlTextAttribute_t913812A9EC84D070AA3006B1773A6ABC303A5C4E * get_xmlText_12() const { return ___xmlText_12; }
	inline XmlTextAttribute_t913812A9EC84D070AA3006B1773A6ABC303A5C4E ** get_address_of_xmlText_12() { return &___xmlText_12; }
	inline void set_xmlText_12(XmlTextAttribute_t913812A9EC84D070AA3006B1773A6ABC303A5C4E * value)
	{
		___xmlText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlText_12), (void*)value);
	}

	inline static int32_t get_offset_of_xmlType_13() { return static_cast<int32_t>(offsetof(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46, ___xmlType_13)); }
	inline XmlTypeAttribute_t8CF0FDD3A7F093717D676F94868FE9ABFB689800 * get_xmlType_13() const { return ___xmlType_13; }
	inline XmlTypeAttribute_t8CF0FDD3A7F093717D676F94868FE9ABFB689800 ** get_address_of_xmlType_13() { return &___xmlType_13; }
	inline void set_xmlType_13(XmlTypeAttribute_t8CF0FDD3A7F093717D676F94868FE9ABFB689800 * value)
	{
		___xmlType_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlType_13), (void*)value);
	}
};


// System.Xml.Serialization.XmlReflectionImporter_<>c
struct  U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE_StaticFields
{
public:
	// System.Xml.Serialization.XmlReflectionImporter_<>c System.Xml.Serialization.XmlReflectionImporter_<>c::<>9
	U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE * ___U3CU3E9_0;
	// System.Comparison`1<System.Xml.Serialization.XmlReflectionMember> System.Xml.Serialization.XmlReflectionImporter_<>c::<>9__28_0
	Comparison_1_t44AF266C7D621EBE70F2BF21FFA6B7C2C260453A * ___U3CU3E9__28_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE_StaticFields, ___U3CU3E9__28_0_1)); }
	inline Comparison_1_t44AF266C7D621EBE70F2BF21FFA6B7C2C260453A * get_U3CU3E9__28_0_1() const { return ___U3CU3E9__28_0_1; }
	inline Comparison_1_t44AF266C7D621EBE70F2BF21FFA6B7C2C260453A ** get_address_of_U3CU3E9__28_0_1() { return &___U3CU3E9__28_0_1; }
	inline void set_U3CU3E9__28_0_1(Comparison_1_t44AF266C7D621EBE70F2BF21FFA6B7C2C260453A * value)
	{
		___U3CU3E9__28_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_0_1), (void*)value);
	}
};


// System.Xml.Serialization.XmlReflectionMember
struct  XmlReflectionMember_t2DB532740F4159245F707469F68AEA9BFBDA55CD  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.Serialization.XmlReflectionMember::isReturnValue
	bool ___isReturnValue_0;
	// System.String System.Xml.Serialization.XmlReflectionMember::memberName
	String_t* ___memberName_1;
	// System.Type System.Xml.Serialization.XmlReflectionMember::memberType
	Type_t * ___memberType_2;
	// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlReflectionMember::xmlAttributes
	XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46 * ___xmlAttributes_3;
	// System.Type System.Xml.Serialization.XmlReflectionMember::declaringType
	Type_t * ___declaringType_4;

public:
	inline static int32_t get_offset_of_isReturnValue_0() { return static_cast<int32_t>(offsetof(XmlReflectionMember_t2DB532740F4159245F707469F68AEA9BFBDA55CD, ___isReturnValue_0)); }
	inline bool get_isReturnValue_0() const { return ___isReturnValue_0; }
	inline bool* get_address_of_isReturnValue_0() { return &___isReturnValue_0; }
	inline void set_isReturnValue_0(bool value)
	{
		___isReturnValue_0 = value;
	}

	inline static int32_t get_offset_of_memberName_1() { return static_cast<int32_t>(offsetof(XmlReflectionMember_t2DB532740F4159245F707469F68AEA9BFBDA55CD, ___memberName_1)); }
	inline String_t* get_memberName_1() const { return ___memberName_1; }
	inline String_t** get_address_of_memberName_1() { return &___memberName_1; }
	inline void set_memberName_1(String_t* value)
	{
		___memberName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberName_1), (void*)value);
	}

	inline static int32_t get_offset_of_memberType_2() { return static_cast<int32_t>(offsetof(XmlReflectionMember_t2DB532740F4159245F707469F68AEA9BFBDA55CD, ___memberType_2)); }
	inline Type_t * get_memberType_2() const { return ___memberType_2; }
	inline Type_t ** get_address_of_memberType_2() { return &___memberType_2; }
	inline void set_memberType_2(Type_t * value)
	{
		___memberType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberType_2), (void*)value);
	}

	inline static int32_t get_offset_of_xmlAttributes_3() { return static_cast<int32_t>(offsetof(XmlReflectionMember_t2DB532740F4159245F707469F68AEA9BFBDA55CD, ___xmlAttributes_3)); }
	inline XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46 * get_xmlAttributes_3() const { return ___xmlAttributes_3; }
	inline XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46 ** get_address_of_xmlAttributes_3() { return &___xmlAttributes_3; }
	inline void set_xmlAttributes_3(XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46 * value)
	{
		___xmlAttributes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlAttributes_3), (void*)value);
	}

	inline static int32_t get_offset_of_declaringType_4() { return static_cast<int32_t>(offsetof(XmlReflectionMember_t2DB532740F4159245F707469F68AEA9BFBDA55CD, ___declaringType_4)); }
	inline Type_t * get_declaringType_4() const { return ___declaringType_4; }
	inline Type_t ** get_address_of_declaringType_4() { return &___declaringType_4; }
	inline void set_declaringType_4(Type_t * value)
	{
		___declaringType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___declaringType_4), (void*)value);
	}
};


// System.Xml.Serialization.XmlSerializationGeneratedCode
struct  XmlSerializationGeneratedCode_t434CFD8D2AF9FEC58DB65E02599C37182563C638  : public RuntimeObject
{
public:

public:
};


// System.Xml.Serialization.XmlSerializationReader_CollectionFixup
struct  CollectionFixup_t89B63EF27FF0C97725BA984F06E6C18D67FC482E  : public RuntimeObject
{
public:
	// System.Xml.Serialization.XmlSerializationCollectionFixupCallback System.Xml.Serialization.XmlSerializationReader_CollectionFixup::callback
	XmlSerializationCollectionFixupCallback_t88A34696BDDF37FD897F180858064DF7EF750B1A * ___callback_0;
	// System.Object System.Xml.Serialization.XmlSerializationReader_CollectionFixup::collection
	RuntimeObject * ___collection_1;
	// System.Object System.Xml.Serialization.XmlSerializationReader_CollectionFixup::collectionItems
	RuntimeObject * ___collectionItems_2;
	// System.String System.Xml.Serialization.XmlSerializationReader_CollectionFixup::id
	String_t* ___id_3;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(CollectionFixup_t89B63EF27FF0C97725BA984F06E6C18D67FC482E, ___callback_0)); }
	inline XmlSerializationCollectionFixupCallback_t88A34696BDDF37FD897F180858064DF7EF750B1A * get_callback_0() const { return ___callback_0; }
	inline XmlSerializationCollectionFixupCallback_t88A34696BDDF37FD897F180858064DF7EF750B1A ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(XmlSerializationCollectionFixupCallback_t88A34696BDDF37FD897F180858064DF7EF750B1A * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}

	inline static int32_t get_offset_of_collection_1() { return static_cast<int32_t>(offsetof(CollectionFixup_t89B63EF27FF0C97725BA984F06E6C18D67FC482E, ___collection_1)); }
	inline RuntimeObject * get_collection_1() const { return ___collection_1; }
	inline RuntimeObject ** get_address_of_collection_1() { return &___collection_1; }
	inline void set_collection_1(RuntimeObject * value)
	{
		___collection_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collection_1), (void*)value);
	}

	inline static int32_t get_offset_of_collectionItems_2() { return static_cast<int32_t>(offsetof(CollectionFixup_t89B63EF27FF0C97725BA984F06E6C18D67FC482E, ___collectionItems_2)); }
	inline RuntimeObject * get_collectionItems_2() const { return ___collectionItems_2; }
	inline RuntimeObject ** get_address_of_collectionItems_2() { return &___collectionItems_2; }
	inline void set_collectionItems_2(RuntimeObject * value)
	{
		___collectionItems_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectionItems_2), (void*)value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(CollectionFixup_t89B63EF27FF0C97725BA984F06E6C18D67FC482E, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_3), (void*)value);
	}
};


// System.Xml.Serialization.XmlSerializationReader_CollectionItemFixup
struct  CollectionItemFixup_t70D993957A8584ED873E7BD74DC98ECE1101DB2D  : public RuntimeObject
{
public:
	// System.Array System.Xml.Serialization.XmlSerializationReader_CollectionItemFixup::list
	RuntimeArray * ___list_0;
	// System.Int32 System.Xml.Serialization.XmlSerializationReader_CollectionItemFixup::index
	int32_t ___index_1;
	// System.String System.Xml.Serialization.XmlSerializationReader_CollectionItemFixup::id
	String_t* ___id_2;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionItemFixup_t70D993957A8584ED873E7BD74DC98ECE1101DB2D, ___list_0)); }
	inline RuntimeArray * get_list_0() const { return ___list_0; }
	inline RuntimeArray ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeArray * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(CollectionItemFixup_t70D993957A8584ED873E7BD74DC98ECE1101DB2D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(CollectionItemFixup_t70D993957A8584ED873E7BD74DC98ECE1101DB2D, ___id_2)); }
	inline String_t* get_id_2() const { return ___id_2; }
	inline String_t** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(String_t* value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_2), (void*)value);
	}
};


// System.Xml.Serialization.XmlSerializationReader_Fixup
struct  Fixup_tC29AF2849DF70A12E99CE1ECE316CB1687D4FC5B  : public RuntimeObject
{
public:
	// System.Object System.Xml.Serialization.XmlSerializationReader_Fixup::source
	RuntimeObject * ___source_0;
	// System.String[] System.Xml.Serialization.XmlSerializationReader_Fixup::ids
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___ids_1;
	// System.Xml.Serialization.XmlSerializationFixupCallback System.Xml.Serialization.XmlSerializationReader_Fixup::callback
	XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549 * ___callback_2;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(Fixup_tC29AF2849DF70A12E99CE1ECE316CB1687D4FC5B, ___source_0)); }
	inline RuntimeObject * get_source_0() const { return ___source_0; }
	inline RuntimeObject ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_0), (void*)value);
	}

	inline static int32_t get_offset_of_ids_1() { return static_cast<int32_t>(offsetof(Fixup_tC29AF2849DF70A12E99CE1ECE316CB1687D4FC5B, ___ids_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_ids_1() const { return ___ids_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_ids_1() { return &___ids_1; }
	inline void set_ids_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___ids_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ids_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Fixup_tC29AF2849DF70A12E99CE1ECE316CB1687D4FC5B, ___callback_2)); }
	inline XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549 * get_callback_2() const { return ___callback_2; }
	inline XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// System.Xml.Serialization.XmlSerializationReader_WriteCallbackInfo
struct  WriteCallbackInfo_tF12675262DE88D8583DAD677E61DA8D1E81E4C0D  : public RuntimeObject
{
public:
	// System.Type System.Xml.Serialization.XmlSerializationReader_WriteCallbackInfo::Type
	Type_t * ___Type_0;
	// System.String System.Xml.Serialization.XmlSerializationReader_WriteCallbackInfo::TypeName
	String_t* ___TypeName_1;
	// System.String System.Xml.Serialization.XmlSerializationReader_WriteCallbackInfo::TypeNs
	String_t* ___TypeNs_2;
	// System.Xml.Serialization.XmlSerializationReadCallback System.Xml.Serialization.XmlSerializationReader_WriteCallbackInfo::Callback
	XmlSerializationReadCallback_tC7FC61DC6AF3C45A91D27D7642EE41A61E6D3F9D * ___Callback_3;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(WriteCallbackInfo_tF12675262DE88D8583DAD677E61DA8D1E81E4C0D, ___Type_0)); }
	inline Type_t * get_Type_0() const { return ___Type_0; }
	inline Type_t ** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(Type_t * value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(WriteCallbackInfo_tF12675262DE88D8583DAD677E61DA8D1E81E4C0D, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeName_1), (void*)value);
	}

	inline static int32_t get_offset_of_TypeNs_2() { return static_cast<int32_t>(offsetof(WriteCallbackInfo_tF12675262DE88D8583DAD677E61DA8D1E81E4C0D, ___TypeNs_2)); }
	inline String_t* get_TypeNs_2() const { return ___TypeNs_2; }
	inline String_t** get_address_of_TypeNs_2() { return &___TypeNs_2; }
	inline void set_TypeNs_2(String_t* value)
	{
		___TypeNs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeNs_2), (void*)value);
	}

	inline static int32_t get_offset_of_Callback_3() { return static_cast<int32_t>(offsetof(WriteCallbackInfo_tF12675262DE88D8583DAD677E61DA8D1E81E4C0D, ___Callback_3)); }
	inline XmlSerializationReadCallback_tC7FC61DC6AF3C45A91D27D7642EE41A61E6D3F9D * get_Callback_3() const { return ___Callback_3; }
	inline XmlSerializationReadCallback_tC7FC61DC6AF3C45A91D27D7642EE41A61E6D3F9D ** get_address_of_Callback_3() { return &___Callback_3; }
	inline void set_Callback_3(XmlSerializationReadCallback_tC7FC61DC6AF3C45A91D27D7642EE41A61E6D3F9D * value)
	{
		___Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_3), (void*)value);
	}
};


// System.Xml.Serialization.XmlSerializationReaderInterpreter_FixupCallbackInfo
struct  FixupCallbackInfo_tB2AF64AEEA68C8D0EA425052B40E969983CB92D3  : public RuntimeObject
{
public:
	// System.Xml.Serialization.XmlSerializationReaderInterpreter System.Xml.Serialization.XmlSerializationReaderInterpreter_FixupCallbackInfo::_sri
	XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * ____sri_0;
	// System.Xml.Serialization.ClassMap System.Xml.Serialization.XmlSerializationReaderInterpreter_FixupCallbackInfo::_map
	ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB * ____map_1;
	// System.Boolean System.Xml.Serialization.XmlSerializationReaderInterpreter_FixupCallbackInfo::_isValueList
	bool ____isValueList_2;

public:
	inline static int32_t get_offset_of__sri_0() { return static_cast<int32_t>(offsetof(FixupCallbackInfo_tB2AF64AEEA68C8D0EA425052B40E969983CB92D3, ____sri_0)); }
	inline XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * get__sri_0() const { return ____sri_0; }
	inline XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 ** get_address_of__sri_0() { return &____sri_0; }
	inline void set__sri_0(XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * value)
	{
		____sri_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sri_0), (void*)value);
	}

	inline static int32_t get_offset_of__map_1() { return static_cast<int32_t>(offsetof(FixupCallbackInfo_tB2AF64AEEA68C8D0EA425052B40E969983CB92D3, ____map_1)); }
	inline ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB * get__map_1() const { return ____map_1; }
	inline ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB ** get_address_of__map_1() { return &____map_1; }
	inline void set__map_1(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB * value)
	{
		____map_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____map_1), (void*)value);
	}

	inline static int32_t get_offset_of__isValueList_2() { return static_cast<int32_t>(offsetof(FixupCallbackInfo_tB2AF64AEEA68C8D0EA425052B40E969983CB92D3, ____isValueList_2)); }
	inline bool get__isValueList_2() const { return ____isValueList_2; }
	inline bool* get_address_of__isValueList_2() { return &____isValueList_2; }
	inline void set__isValueList_2(bool value)
	{
		____isValueList_2 = value;
	}
};


// System.Xml.Serialization.XmlSerializationReaderInterpreter_ReaderCallbackInfo
struct  ReaderCallbackInfo_t6D18AED803E1FB284AB8B388FD470CB3BEDD3DB4  : public RuntimeObject
{
public:
	// System.Xml.Serialization.XmlSerializationReaderInterpreter System.Xml.Serialization.XmlSerializationReaderInterpreter_ReaderCallbackInfo::_sri
	XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * ____sri_0;
	// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlSerializationReaderInterpreter_ReaderCallbackInfo::_typeMap
	XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * ____typeMap_1;

public:
	inline static int32_t get_offset_of__sri_0() { return static_cast<int32_t>(offsetof(ReaderCallbackInfo_t6D18AED803E1FB284AB8B388FD470CB3BEDD3DB4, ____sri_0)); }
	inline XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * get__sri_0() const { return ____sri_0; }
	inline XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 ** get_address_of__sri_0() { return &____sri_0; }
	inline void set__sri_0(XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * value)
	{
		____sri_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sri_0), (void*)value);
	}

	inline static int32_t get_offset_of__typeMap_1() { return static_cast<int32_t>(offsetof(ReaderCallbackInfo_t6D18AED803E1FB284AB8B388FD470CB3BEDD3DB4, ____typeMap_1)); }
	inline XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * get__typeMap_1() const { return ____typeMap_1; }
	inline XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 ** get_address_of__typeMap_1() { return &____typeMap_1; }
	inline void set__typeMap_1(XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * value)
	{
		____typeMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typeMap_1), (void*)value);
	}
};


// System.Xml.Serialization.XmlSerializationWriter_WriteCallbackInfo
struct  WriteCallbackInfo_t3F32E130FEEAC3992BCB0CCC059369D4A09B9EEF  : public RuntimeObject
{
public:
	// System.Type System.Xml.Serialization.XmlSerializationWriter_WriteCallbackInfo::Type
	Type_t * ___Type_0;
	// System.String System.Xml.Serialization.XmlSerializationWriter_WriteCallbackInfo::TypeName
	String_t* ___TypeName_1;
	// System.String System.Xml.Serialization.XmlSerializationWriter_WriteCallbackInfo::TypeNs
	String_t* ___TypeNs_2;
	// System.Xml.Serialization.XmlSerializationWriteCallback System.Xml.Serialization.XmlSerializationWriter_WriteCallbackInfo::Callback
	XmlSerializationWriteCallback_t913A191AF2181BDB556C809CE9A95D1B5EBF8454 * ___Callback_3;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(WriteCallbackInfo_t3F32E130FEEAC3992BCB0CCC059369D4A09B9EEF, ___Type_0)); }
	inline Type_t * get_Type_0() const { return ___Type_0; }
	inline Type_t ** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(Type_t * value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(WriteCallbackInfo_t3F32E130FEEAC3992BCB0CCC059369D4A09B9EEF, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeName_1), (void*)value);
	}

	inline static int32_t get_offset_of_TypeNs_2() { return static_cast<int32_t>(offsetof(WriteCallbackInfo_t3F32E130FEEAC3992BCB0CCC059369D4A09B9EEF, ___TypeNs_2)); }
	inline String_t* get_TypeNs_2() const { return ___TypeNs_2; }
	inline String_t** get_address_of_TypeNs_2() { return &___TypeNs_2; }
	inline void set_TypeNs_2(String_t* value)
	{
		___TypeNs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeNs_2), (void*)value);
	}

	inline static int32_t get_offset_of_Callback_3() { return static_cast<int32_t>(offsetof(WriteCallbackInfo_t3F32E130FEEAC3992BCB0CCC059369D4A09B9EEF, ___Callback_3)); }
	inline XmlSerializationWriteCallback_t913A191AF2181BDB556C809CE9A95D1B5EBF8454 * get_Callback_3() const { return ___Callback_3; }
	inline XmlSerializationWriteCallback_t913A191AF2181BDB556C809CE9A95D1B5EBF8454 ** get_address_of_Callback_3() { return &___Callback_3; }
	inline void set_Callback_3(XmlSerializationWriteCallback_t913A191AF2181BDB556C809CE9A95D1B5EBF8454 * value)
	{
		___Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_3), (void*)value);
	}
};


// System.Xml.Serialization.XmlSerializationWriterInterpreter_CallbackInfo
struct  CallbackInfo_t142D92C1F8EA1C07621FB4A5E1383F836187E53A  : public RuntimeObject
{
public:
	// System.Xml.Serialization.XmlSerializationWriterInterpreter System.Xml.Serialization.XmlSerializationWriterInterpreter_CallbackInfo::_swi
	XmlSerializationWriterInterpreter_t5421FAFC8BE8D6DA736DF8A6DC1ADA79770CDB54 * ____swi_0;
	// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlSerializationWriterInterpreter_CallbackInfo::_typeMap
	XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * ____typeMap_1;

public:
	inline static int32_t get_offset_of__swi_0() { return static_cast<int32_t>(offsetof(CallbackInfo_t142D92C1F8EA1C07621FB4A5E1383F836187E53A, ____swi_0)); }
	inline XmlSerializationWriterInterpreter_t5421FAFC8BE8D6DA736DF8A6DC1ADA79770CDB54 * get__swi_0() const { return ____swi_0; }
	inline XmlSerializationWriterInterpreter_t5421FAFC8BE8D6DA736DF8A6DC1ADA79770CDB54 ** get_address_of__swi_0() { return &____swi_0; }
	inline void set__swi_0(XmlSerializationWriterInterpreter_t5421FAFC8BE8D6DA736DF8A6DC1ADA79770CDB54 * value)
	{
		____swi_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____swi_0), (void*)value);
	}

	inline static int32_t get_offset_of__typeMap_1() { return static_cast<int32_t>(offsetof(CallbackInfo_t142D92C1F8EA1C07621FB4A5E1383F836187E53A, ____typeMap_1)); }
	inline XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * get__typeMap_1() const { return ____typeMap_1; }
	inline XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 ** get_address_of__typeMap_1() { return &____typeMap_1; }
	inline void set__typeMap_1(XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * value)
	{
		____typeMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typeMap_1), (void*)value);
	}
};


// System.Xml.Serialization.XmlSerializer_SerializerData
struct  SerializerData_tE81861A5E031D40D9732A8CF036A091D10F3478D  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo System.Xml.Serialization.XmlSerializer_SerializerData::ReaderMethod
	MethodInfo_t * ___ReaderMethod_0;
	// System.Type System.Xml.Serialization.XmlSerializer_SerializerData::WriterType
	Type_t * ___WriterType_1;
	// System.Reflection.MethodInfo System.Xml.Serialization.XmlSerializer_SerializerData::WriterMethod
	MethodInfo_t * ___WriterMethod_2;
	// System.Xml.Serialization.XmlSerializerImplementation System.Xml.Serialization.XmlSerializer_SerializerData::Implementation
	XmlSerializerImplementation_t7498815CE092A9B67BE127DCA62F27ABECA6B230 * ___Implementation_3;

public:
	inline static int32_t get_offset_of_ReaderMethod_0() { return static_cast<int32_t>(offsetof(SerializerData_tE81861A5E031D40D9732A8CF036A091D10F3478D, ___ReaderMethod_0)); }
	inline MethodInfo_t * get_ReaderMethod_0() const { return ___ReaderMethod_0; }
	inline MethodInfo_t ** get_address_of_ReaderMethod_0() { return &___ReaderMethod_0; }
	inline void set_ReaderMethod_0(MethodInfo_t * value)
	{
		___ReaderMethod_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReaderMethod_0), (void*)value);
	}

	inline static int32_t get_offset_of_WriterType_1() { return static_cast<int32_t>(offsetof(SerializerData_tE81861A5E031D40D9732A8CF036A091D10F3478D, ___WriterType_1)); }
	inline Type_t * get_WriterType_1() const { return ___WriterType_1; }
	inline Type_t ** get_address_of_WriterType_1() { return &___WriterType_1; }
	inline void set_WriterType_1(Type_t * value)
	{
		___WriterType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriterType_1), (void*)value);
	}

	inline static int32_t get_offset_of_WriterMethod_2() { return static_cast<int32_t>(offsetof(SerializerData_tE81861A5E031D40D9732A8CF036A091D10F3478D, ___WriterMethod_2)); }
	inline MethodInfo_t * get_WriterMethod_2() const { return ___WriterMethod_2; }
	inline MethodInfo_t ** get_address_of_WriterMethod_2() { return &___WriterMethod_2; }
	inline void set_WriterMethod_2(MethodInfo_t * value)
	{
		___WriterMethod_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriterMethod_2), (void*)value);
	}

	inline static int32_t get_offset_of_Implementation_3() { return static_cast<int32_t>(offsetof(SerializerData_tE81861A5E031D40D9732A8CF036A091D10F3478D, ___Implementation_3)); }
	inline XmlSerializerImplementation_t7498815CE092A9B67BE127DCA62F27ABECA6B230 * get_Implementation_3() const { return ___Implementation_3; }
	inline XmlSerializerImplementation_t7498815CE092A9B67BE127DCA62F27ABECA6B230 ** get_address_of_Implementation_3() { return &___Implementation_3; }
	inline void set_Implementation_3(XmlSerializerImplementation_t7498815CE092A9B67BE127DCA62F27ABECA6B230 * value)
	{
		___Implementation_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Implementation_3), (void*)value);
	}
};


// System.Xml.Serialization.XmlSerializerImplementation
struct  XmlSerializerImplementation_t7498815CE092A9B67BE127DCA62F27ABECA6B230  : public RuntimeObject
{
public:

public:
};


// System.Xml.XmlDownloadManager
struct  XmlDownloadManager_t28FF2F536CFB5125C74928F7DC706692604D5A9D  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Xml.XmlDownloadManager::connections
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___connections_0;

public:
	inline static int32_t get_offset_of_connections_0() { return static_cast<int32_t>(offsetof(XmlDownloadManager_t28FF2F536CFB5125C74928F7DC706692604D5A9D, ___connections_0)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_connections_0() const { return ___connections_0; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_connections_0() { return &___connections_0; }
	inline void set_connections_0(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___connections_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_0), (void*)value);
	}
};


// System.Xml.XmlNameTable
struct  XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280  : public RuntimeObject
{
public:

public:
};


// System.Xml.XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator
struct  SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E  : public RuntimeObject
{
public:
	// System.Object System.Xml.XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator::loneValue
	RuntimeObject * ___loneValue_0;
	// System.Int32 System.Xml.XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator::position
	int32_t ___position_1;

public:
	inline static int32_t get_offset_of_loneValue_0() { return static_cast<int32_t>(offsetof(SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E, ___loneValue_0)); }
	inline RuntimeObject * get_loneValue_0() const { return ___loneValue_0; }
	inline RuntimeObject ** get_address_of_loneValue_0() { return &___loneValue_0; }
	inline void set_loneValue_0(RuntimeObject * value)
	{
		___loneValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loneValue_0), (void*)value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E, ___position_1)); }
	inline int32_t get_position_1() const { return ___position_1; }
	inline int32_t* get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(int32_t value)
	{
		___position_1 = value;
	}
};


// System.Xml.XmlNamespaceManager
struct  XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465  : public RuntimeObject
{
public:
	// System.Xml.XmlNamespaceManager_NamespaceDeclaration[] System.Xml.XmlNamespaceManager::nsdecls
	NamespaceDeclarationU5BU5D_t4D11B362C1D22E79294A2F9CB4710B02ED6D03F5* ___nsdecls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::lastDecl
	int32_t ___lastDecl_1;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * ___nameTable_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopeId
	int32_t ___scopeId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::hashTable
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___hashTable_4;
	// System.Boolean System.Xml.XmlNamespaceManager::useHashtable
	bool ___useHashtable_5;
	// System.String System.Xml.XmlNamespaceManager::xml
	String_t* ___xml_6;
	// System.String System.Xml.XmlNamespaceManager::xmlNs
	String_t* ___xmlNs_7;

public:
	inline static int32_t get_offset_of_nsdecls_0() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___nsdecls_0)); }
	inline NamespaceDeclarationU5BU5D_t4D11B362C1D22E79294A2F9CB4710B02ED6D03F5* get_nsdecls_0() const { return ___nsdecls_0; }
	inline NamespaceDeclarationU5BU5D_t4D11B362C1D22E79294A2F9CB4710B02ED6D03F5** get_address_of_nsdecls_0() { return &___nsdecls_0; }
	inline void set_nsdecls_0(NamespaceDeclarationU5BU5D_t4D11B362C1D22E79294A2F9CB4710B02ED6D03F5* value)
	{
		___nsdecls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nsdecls_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastDecl_1() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___lastDecl_1)); }
	inline int32_t get_lastDecl_1() const { return ___lastDecl_1; }
	inline int32_t* get_address_of_lastDecl_1() { return &___lastDecl_1; }
	inline void set_lastDecl_1(int32_t value)
	{
		___lastDecl_1 = value;
	}

	inline static int32_t get_offset_of_nameTable_2() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___nameTable_2)); }
	inline XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * get_nameTable_2() const { return ___nameTable_2; }
	inline XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 ** get_address_of_nameTable_2() { return &___nameTable_2; }
	inline void set_nameTable_2(XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * value)
	{
		___nameTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameTable_2), (void*)value);
	}

	inline static int32_t get_offset_of_scopeId_3() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___scopeId_3)); }
	inline int32_t get_scopeId_3() const { return ___scopeId_3; }
	inline int32_t* get_address_of_scopeId_3() { return &___scopeId_3; }
	inline void set_scopeId_3(int32_t value)
	{
		___scopeId_3 = value;
	}

	inline static int32_t get_offset_of_hashTable_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___hashTable_4)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_hashTable_4() const { return ___hashTable_4; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_hashTable_4() { return &___hashTable_4; }
	inline void set_hashTable_4(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___hashTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hashTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_useHashtable_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___useHashtable_5)); }
	inline bool get_useHashtable_5() const { return ___useHashtable_5; }
	inline bool* get_address_of_useHashtable_5() { return &___useHashtable_5; }
	inline void set_useHashtable_5(bool value)
	{
		___useHashtable_5 = value;
	}

	inline static int32_t get_offset_of_xml_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___xml_6)); }
	inline String_t* get_xml_6() const { return ___xml_6; }
	inline String_t** get_address_of_xml_6() { return &___xml_6; }
	inline void set_xml_6(String_t* value)
	{
		___xml_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xml_6), (void*)value);
	}

	inline static int32_t get_offset_of_xmlNs_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465, ___xmlNs_7)); }
	inline String_t* get_xmlNs_7() const { return ___xmlNs_7; }
	inline String_t** get_address_of_xmlNs_7() { return &___xmlNs_7; }
	inline void set_xmlNs_7(String_t* value)
	{
		___xmlNs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlNs_7), (void*)value);
	}
};


// System.Xml.XmlNode
struct  XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___parentNode_0;

public:
	inline static int32_t get_offset_of_parentNode_0() { return static_cast<int32_t>(offsetof(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1, ___parentNode_0)); }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * get_parentNode_0() const { return ___parentNode_0; }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 ** get_address_of_parentNode_0() { return &___parentNode_0; }
	inline void set_parentNode_0(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * value)
	{
		___parentNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentNode_0), (void*)value);
	}
};


// System.Xml.XmlReader
struct  XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138  : public RuntimeObject
{
public:

public:
};

struct XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields
{
public:
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;

public:
	inline static int32_t get_offset_of_IsTextualNodeBitmap_0() { return static_cast<int32_t>(offsetof(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields, ___IsTextualNodeBitmap_0)); }
	inline uint32_t get_IsTextualNodeBitmap_0() const { return ___IsTextualNodeBitmap_0; }
	inline uint32_t* get_address_of_IsTextualNodeBitmap_0() { return &___IsTextualNodeBitmap_0; }
	inline void set_IsTextualNodeBitmap_0(uint32_t value)
	{
		___IsTextualNodeBitmap_0 = value;
	}

	inline static int32_t get_offset_of_CanReadContentAsBitmap_1() { return static_cast<int32_t>(offsetof(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields, ___CanReadContentAsBitmap_1)); }
	inline uint32_t get_CanReadContentAsBitmap_1() const { return ___CanReadContentAsBitmap_1; }
	inline uint32_t* get_address_of_CanReadContentAsBitmap_1() { return &___CanReadContentAsBitmap_1; }
	inline void set_CanReadContentAsBitmap_1(uint32_t value)
	{
		___CanReadContentAsBitmap_1 = value;
	}

	inline static int32_t get_offset_of_HasValueBitmap_2() { return static_cast<int32_t>(offsetof(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields, ___HasValueBitmap_2)); }
	inline uint32_t get_HasValueBitmap_2() const { return ___HasValueBitmap_2; }
	inline uint32_t* get_address_of_HasValueBitmap_2() { return &___HasValueBitmap_2; }
	inline void set_HasValueBitmap_2(uint32_t value)
	{
		___HasValueBitmap_2 = value;
	}
};


// System.Xml.XmlResolver
struct  XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A  : public RuntimeObject
{
public:

public:
};


// System.Xml.XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer
struct  DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC  : public RuntimeObject
{
public:

public:
};

struct DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC_StaticFields
{
public:
	// System.Collections.Generic.IComparer`1<System.Object> System.Xml.XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer::s_instance
	RuntimeObject* ___s_instance_0;

public:
	inline static int32_t get_offset_of_s_instance_0() { return static_cast<int32_t>(offsetof(DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC_StaticFields, ___s_instance_0)); }
	inline RuntimeObject* get_s_instance_0() const { return ___s_instance_0; }
	inline RuntimeObject** get_address_of_s_instance_0() { return &___s_instance_0; }
	inline void set_s_instance_0(RuntimeObject* value)
	{
		___s_instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_instance_0), (void*)value);
	}
};


// System.Xml.XmlTextReaderImpl_DtdParserProxy
struct  DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557  : public RuntimeObject
{
public:
	// System.Xml.XmlTextReaderImpl System.Xml.XmlTextReaderImpl_DtdParserProxy::reader
	XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * ___reader_0;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557, ___reader_0)); }
	inline XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * get_reader_0() const { return ___reader_0; }
	inline XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}
};


// System.Xml.XmlWellFormedWriter_AttributeValueCache
struct  AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D  : public RuntimeObject
{
public:
	// System.Text.StringBuilder System.Xml.XmlWellFormedWriter_AttributeValueCache::stringValue
	StringBuilder_t * ___stringValue_0;
	// System.String System.Xml.XmlWellFormedWriter_AttributeValueCache::singleStringValue
	String_t* ___singleStringValue_1;
	// System.Xml.XmlWellFormedWriter_AttributeValueCache_Item[] System.Xml.XmlWellFormedWriter_AttributeValueCache::items
	ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* ___items_2;
	// System.Int32 System.Xml.XmlWellFormedWriter_AttributeValueCache::firstItem
	int32_t ___firstItem_3;
	// System.Int32 System.Xml.XmlWellFormedWriter_AttributeValueCache::lastItem
	int32_t ___lastItem_4;

public:
	inline static int32_t get_offset_of_stringValue_0() { return static_cast<int32_t>(offsetof(AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D, ___stringValue_0)); }
	inline StringBuilder_t * get_stringValue_0() const { return ___stringValue_0; }
	inline StringBuilder_t ** get_address_of_stringValue_0() { return &___stringValue_0; }
	inline void set_stringValue_0(StringBuilder_t * value)
	{
		___stringValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringValue_0), (void*)value);
	}

	inline static int32_t get_offset_of_singleStringValue_1() { return static_cast<int32_t>(offsetof(AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D, ___singleStringValue_1)); }
	inline String_t* get_singleStringValue_1() const { return ___singleStringValue_1; }
	inline String_t** get_address_of_singleStringValue_1() { return &___singleStringValue_1; }
	inline void set_singleStringValue_1(String_t* value)
	{
		___singleStringValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___singleStringValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_items_2() { return static_cast<int32_t>(offsetof(AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D, ___items_2)); }
	inline ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* get_items_2() const { return ___items_2; }
	inline ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0** get_address_of_items_2() { return &___items_2; }
	inline void set_items_2(ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* value)
	{
		___items_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_2), (void*)value);
	}

	inline static int32_t get_offset_of_firstItem_3() { return static_cast<int32_t>(offsetof(AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D, ___firstItem_3)); }
	inline int32_t get_firstItem_3() const { return ___firstItem_3; }
	inline int32_t* get_address_of_firstItem_3() { return &___firstItem_3; }
	inline void set_firstItem_3(int32_t value)
	{
		___firstItem_3 = value;
	}

	inline static int32_t get_offset_of_lastItem_4() { return static_cast<int32_t>(offsetof(AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D, ___lastItem_4)); }
	inline int32_t get_lastItem_4() const { return ___lastItem_4; }
	inline int32_t* get_address_of_lastItem_4() { return &___lastItem_4; }
	inline void set_lastItem_4(int32_t value)
	{
		___lastItem_4 = value;
	}
};


// System.Xml.XmlWellFormedWriter_AttributeValueCache_BufferChunk
struct  BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E  : public RuntimeObject
{
public:
	// System.Char[] System.Xml.XmlWellFormedWriter_AttributeValueCache_BufferChunk::buffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer_0;
	// System.Int32 System.Xml.XmlWellFormedWriter_AttributeValueCache_BufferChunk::index
	int32_t ___index_1;
	// System.Int32 System.Xml.XmlWellFormedWriter_AttributeValueCache_BufferChunk::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E, ___buffer_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_buffer_0() const { return ___buffer_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};


// System.Xml.XmlWellFormedWriter_NamespaceResolverProxy
struct  NamespaceResolverProxy_tDDE95968AA0C8C13FF8FF3A7A4D25A9B5A4DBD7D  : public RuntimeObject
{
public:
	// System.Xml.XmlWellFormedWriter System.Xml.XmlWellFormedWriter_NamespaceResolverProxy::wfWriter
	XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667 * ___wfWriter_0;

public:
	inline static int32_t get_offset_of_wfWriter_0() { return static_cast<int32_t>(offsetof(NamespaceResolverProxy_tDDE95968AA0C8C13FF8FF3A7A4D25A9B5A4DBD7D, ___wfWriter_0)); }
	inline XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667 * get_wfWriter_0() const { return ___wfWriter_0; }
	inline XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667 ** get_address_of_wfWriter_0() { return &___wfWriter_0; }
	inline void set_wfWriter_0(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667 * value)
	{
		___wfWriter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wfWriter_0), (void*)value);
	}
};


// System.Xml.XmlWriter
struct  XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D  : public RuntimeObject
{
public:

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D1212
struct  __StaticArrayInitTypeSizeU3D1212_t91E860D8C2A662B4AF3C1E8EAC2229E84184C805 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1212_t91E860D8C2A662B4AF3C1E8EAC2229E84184C805__padding[1212];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20
struct  __StaticArrayInitTypeSizeU3D20_tAFFC768CAAB023FF7786175A0F64F7EAE4B35A87 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tAFFC768CAAB023FF7786175A0F64F7EAE4B35A87__padding[20];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D28
struct  __StaticArrayInitTypeSizeU3D28_t3F2DFB0DEB57463B3BDB1DF1D66831340706BC7E 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t3F2DFB0DEB57463B3BDB1DF1D66831340706BC7E__padding[28];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D32
struct  __StaticArrayInitTypeSizeU3D32_t32451FC0FFB07E790AB1831670F4480B70832CF2 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t32451FC0FFB07E790AB1831670F4480B70832CF2__padding[32];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D40
struct  __StaticArrayInitTypeSizeU3D40_t3257F2DBB1018E8BB659AC40CD3038ED1EA19B48 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t3257F2DBB1018E8BB659AC40CD3038ED1EA19B48__padding[40];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D6
struct  __StaticArrayInitTypeSizeU3D6_tDF2537259373F423B466710F7B6BCCCCB9F570AB 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tDF2537259373F423B466710F7B6BCCCCB9F570AB__padding[6];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D64
struct  __StaticArrayInitTypeSizeU3D64_t5A1623F8A98BA91292FD3395CC69302605E97DFD 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t5A1623F8A98BA91292FD3395CC69302605E97DFD__padding[64];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D664
struct  __StaticArrayInitTypeSizeU3D664_t43B28E2D56A4D823FF013967C731BA1EC63293E0 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D664_t43B28E2D56A4D823FF013967C731BA1EC63293E0__padding[664];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D68
struct  __StaticArrayInitTypeSizeU3D68_t9FD699743C05C335C7FE75AC04876AF17F2D2E7A 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t9FD699743C05C335C7FE75AC04876AF17F2D2E7A__padding[68];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D960
struct  __StaticArrayInitTypeSizeU3D960_tB4E309A51BC2D32355045825120D252D37C95146 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D960_tB4E309A51BC2D32355045825120D252D37C95146__padding[960];
	};

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
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


// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.IO.Stream>
struct  ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC, ___m_task_0)); }
	inline Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Object>
struct  ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Xml.LineInfo
struct  LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE 
{
public:
	// System.Int32 System.Xml.LineInfo::lineNo
	int32_t ___lineNo_0;
	// System.Int32 System.Xml.LineInfo::linePos
	int32_t ___linePos_1;

public:
	inline static int32_t get_offset_of_lineNo_0() { return static_cast<int32_t>(offsetof(LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE, ___lineNo_0)); }
	inline int32_t get_lineNo_0() const { return ___lineNo_0; }
	inline int32_t* get_address_of_lineNo_0() { return &___lineNo_0; }
	inline void set_lineNo_0(int32_t value)
	{
		___lineNo_0 = value;
	}

	inline static int32_t get_offset_of_linePos_1() { return static_cast<int32_t>(offsetof(LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE, ___linePos_1)); }
	inline int32_t get_linePos_1() const { return ___linePos_1; }
	inline int32_t* get_address_of_linePos_1() { return &___linePos_1; }
	inline void set_linePos_1(int32_t value)
	{
		___linePos_1 = value;
	}
};


// System.Xml.Schema.XmlSchemaAnnotated
struct  XmlSchemaAnnotated_t68F13E739330186883290FF723E752BD26F2E3A7  : public XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3
{
public:

public:
};


// System.Xml.Serialization.XmlSerializationReader
struct  XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD  : public XmlSerializationGeneratedCode_t434CFD8D2AF9FEC58DB65E02599C37182563C638
{
public:
	// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::document
	XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F * ___document_0;
	// System.Xml.XmlReader System.Xml.Serialization.XmlSerializationReader::reader
	XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader_1;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::fixups
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___fixups_2;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::collFixups
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___collFixups_3;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::collItemFixups
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___collItemFixups_4;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::typesCallbacks
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___typesCallbacks_5;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::noIDTargets
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___noIDTargets_6;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::targets
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___targets_7;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::delayedListFixups
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___delayedListFixups_8;
	// System.Xml.Serialization.XmlSerializer System.Xml.Serialization.XmlSerializationReader::eventSource
	XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B * ___eventSource_9;
	// System.Int32 System.Xml.Serialization.XmlSerializationReader::delayedFixupId
	int32_t ___delayedFixupId_10;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::referencedObjects
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___referencedObjects_11;
	// System.Int32 System.Xml.Serialization.XmlSerializationReader::readCount
	int32_t ___readCount_12;
	// System.Int32 System.Xml.Serialization.XmlSerializationReader::whileIterationCount
	int32_t ___whileIterationCount_13;
	// System.String System.Xml.Serialization.XmlSerializationReader::w3SchemaNS
	String_t* ___w3SchemaNS_14;
	// System.String System.Xml.Serialization.XmlSerializationReader::w3InstanceNS
	String_t* ___w3InstanceNS_15;
	// System.String System.Xml.Serialization.XmlSerializationReader::w3InstanceNS2000
	String_t* ___w3InstanceNS2000_16;
	// System.String System.Xml.Serialization.XmlSerializationReader::w3InstanceNS1999
	String_t* ___w3InstanceNS1999_17;
	// System.String System.Xml.Serialization.XmlSerializationReader::soapNS
	String_t* ___soapNS_18;
	// System.String System.Xml.Serialization.XmlSerializationReader::wsdlNS
	String_t* ___wsdlNS_19;
	// System.String System.Xml.Serialization.XmlSerializationReader::nullX
	String_t* ___nullX_20;
	// System.String System.Xml.Serialization.XmlSerializationReader::nil
	String_t* ___nil_21;
	// System.String System.Xml.Serialization.XmlSerializationReader::typeX
	String_t* ___typeX_22;
	// System.String System.Xml.Serialization.XmlSerializationReader::arrayType
	String_t* ___arrayType_23;
	// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::arrayQName
	XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * ___arrayQName_24;

public:
	inline static int32_t get_offset_of_document_0() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___document_0)); }
	inline XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F * get_document_0() const { return ___document_0; }
	inline XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F ** get_address_of_document_0() { return &___document_0; }
	inline void set_document_0(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F * value)
	{
		___document_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___document_0), (void*)value);
	}

	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___reader_1)); }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * get_reader_1() const { return ___reader_1; }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_1), (void*)value);
	}

	inline static int32_t get_offset_of_fixups_2() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___fixups_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_fixups_2() const { return ___fixups_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_fixups_2() { return &___fixups_2; }
	inline void set_fixups_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___fixups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixups_2), (void*)value);
	}

	inline static int32_t get_offset_of_collFixups_3() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___collFixups_3)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_collFixups_3() const { return ___collFixups_3; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_collFixups_3() { return &___collFixups_3; }
	inline void set_collFixups_3(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___collFixups_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collFixups_3), (void*)value);
	}

	inline static int32_t get_offset_of_collItemFixups_4() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___collItemFixups_4)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_collItemFixups_4() const { return ___collItemFixups_4; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_collItemFixups_4() { return &___collItemFixups_4; }
	inline void set_collItemFixups_4(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___collItemFixups_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collItemFixups_4), (void*)value);
	}

	inline static int32_t get_offset_of_typesCallbacks_5() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___typesCallbacks_5)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_typesCallbacks_5() const { return ___typesCallbacks_5; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_typesCallbacks_5() { return &___typesCallbacks_5; }
	inline void set_typesCallbacks_5(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___typesCallbacks_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typesCallbacks_5), (void*)value);
	}

	inline static int32_t get_offset_of_noIDTargets_6() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___noIDTargets_6)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_noIDTargets_6() const { return ___noIDTargets_6; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_noIDTargets_6() { return &___noIDTargets_6; }
	inline void set_noIDTargets_6(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___noIDTargets_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___noIDTargets_6), (void*)value);
	}

	inline static int32_t get_offset_of_targets_7() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___targets_7)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_targets_7() const { return ___targets_7; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_targets_7() { return &___targets_7; }
	inline void set_targets_7(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___targets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targets_7), (void*)value);
	}

	inline static int32_t get_offset_of_delayedListFixups_8() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___delayedListFixups_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_delayedListFixups_8() const { return ___delayedListFixups_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_delayedListFixups_8() { return &___delayedListFixups_8; }
	inline void set_delayedListFixups_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___delayedListFixups_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delayedListFixups_8), (void*)value);
	}

	inline static int32_t get_offset_of_eventSource_9() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___eventSource_9)); }
	inline XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B * get_eventSource_9() const { return ___eventSource_9; }
	inline XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B ** get_address_of_eventSource_9() { return &___eventSource_9; }
	inline void set_eventSource_9(XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B * value)
	{
		___eventSource_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSource_9), (void*)value);
	}

	inline static int32_t get_offset_of_delayedFixupId_10() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___delayedFixupId_10)); }
	inline int32_t get_delayedFixupId_10() const { return ___delayedFixupId_10; }
	inline int32_t* get_address_of_delayedFixupId_10() { return &___delayedFixupId_10; }
	inline void set_delayedFixupId_10(int32_t value)
	{
		___delayedFixupId_10 = value;
	}

	inline static int32_t get_offset_of_referencedObjects_11() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___referencedObjects_11)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_referencedObjects_11() const { return ___referencedObjects_11; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_referencedObjects_11() { return &___referencedObjects_11; }
	inline void set_referencedObjects_11(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___referencedObjects_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___referencedObjects_11), (void*)value);
	}

	inline static int32_t get_offset_of_readCount_12() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___readCount_12)); }
	inline int32_t get_readCount_12() const { return ___readCount_12; }
	inline int32_t* get_address_of_readCount_12() { return &___readCount_12; }
	inline void set_readCount_12(int32_t value)
	{
		___readCount_12 = value;
	}

	inline static int32_t get_offset_of_whileIterationCount_13() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___whileIterationCount_13)); }
	inline int32_t get_whileIterationCount_13() const { return ___whileIterationCount_13; }
	inline int32_t* get_address_of_whileIterationCount_13() { return &___whileIterationCount_13; }
	inline void set_whileIterationCount_13(int32_t value)
	{
		___whileIterationCount_13 = value;
	}

	inline static int32_t get_offset_of_w3SchemaNS_14() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___w3SchemaNS_14)); }
	inline String_t* get_w3SchemaNS_14() const { return ___w3SchemaNS_14; }
	inline String_t** get_address_of_w3SchemaNS_14() { return &___w3SchemaNS_14; }
	inline void set_w3SchemaNS_14(String_t* value)
	{
		___w3SchemaNS_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___w3SchemaNS_14), (void*)value);
	}

	inline static int32_t get_offset_of_w3InstanceNS_15() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___w3InstanceNS_15)); }
	inline String_t* get_w3InstanceNS_15() const { return ___w3InstanceNS_15; }
	inline String_t** get_address_of_w3InstanceNS_15() { return &___w3InstanceNS_15; }
	inline void set_w3InstanceNS_15(String_t* value)
	{
		___w3InstanceNS_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___w3InstanceNS_15), (void*)value);
	}

	inline static int32_t get_offset_of_w3InstanceNS2000_16() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___w3InstanceNS2000_16)); }
	inline String_t* get_w3InstanceNS2000_16() const { return ___w3InstanceNS2000_16; }
	inline String_t** get_address_of_w3InstanceNS2000_16() { return &___w3InstanceNS2000_16; }
	inline void set_w3InstanceNS2000_16(String_t* value)
	{
		___w3InstanceNS2000_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___w3InstanceNS2000_16), (void*)value);
	}

	inline static int32_t get_offset_of_w3InstanceNS1999_17() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___w3InstanceNS1999_17)); }
	inline String_t* get_w3InstanceNS1999_17() const { return ___w3InstanceNS1999_17; }
	inline String_t** get_address_of_w3InstanceNS1999_17() { return &___w3InstanceNS1999_17; }
	inline void set_w3InstanceNS1999_17(String_t* value)
	{
		___w3InstanceNS1999_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___w3InstanceNS1999_17), (void*)value);
	}

	inline static int32_t get_offset_of_soapNS_18() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___soapNS_18)); }
	inline String_t* get_soapNS_18() const { return ___soapNS_18; }
	inline String_t** get_address_of_soapNS_18() { return &___soapNS_18; }
	inline void set_soapNS_18(String_t* value)
	{
		___soapNS_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soapNS_18), (void*)value);
	}

	inline static int32_t get_offset_of_wsdlNS_19() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___wsdlNS_19)); }
	inline String_t* get_wsdlNS_19() const { return ___wsdlNS_19; }
	inline String_t** get_address_of_wsdlNS_19() { return &___wsdlNS_19; }
	inline void set_wsdlNS_19(String_t* value)
	{
		___wsdlNS_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wsdlNS_19), (void*)value);
	}

	inline static int32_t get_offset_of_nullX_20() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___nullX_20)); }
	inline String_t* get_nullX_20() const { return ___nullX_20; }
	inline String_t** get_address_of_nullX_20() { return &___nullX_20; }
	inline void set_nullX_20(String_t* value)
	{
		___nullX_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullX_20), (void*)value);
	}

	inline static int32_t get_offset_of_nil_21() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___nil_21)); }
	inline String_t* get_nil_21() const { return ___nil_21; }
	inline String_t** get_address_of_nil_21() { return &___nil_21; }
	inline void set_nil_21(String_t* value)
	{
		___nil_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nil_21), (void*)value);
	}

	inline static int32_t get_offset_of_typeX_22() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___typeX_22)); }
	inline String_t* get_typeX_22() const { return ___typeX_22; }
	inline String_t** get_address_of_typeX_22() { return &___typeX_22; }
	inline void set_typeX_22(String_t* value)
	{
		___typeX_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeX_22), (void*)value);
	}

	inline static int32_t get_offset_of_arrayType_23() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___arrayType_23)); }
	inline String_t* get_arrayType_23() const { return ___arrayType_23; }
	inline String_t** get_address_of_arrayType_23() { return &___arrayType_23; }
	inline void set_arrayType_23(String_t* value)
	{
		___arrayType_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrayType_23), (void*)value);
	}

	inline static int32_t get_offset_of_arrayQName_24() { return static_cast<int32_t>(offsetof(XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD, ___arrayQName_24)); }
	inline XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * get_arrayQName_24() const { return ___arrayQName_24; }
	inline XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 ** get_address_of_arrayQName_24() { return &___arrayQName_24; }
	inline void set_arrayQName_24(XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * value)
	{
		___arrayQName_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrayQName_24), (void*)value);
	}
};


// System.Xml.Serialization.XmlSerializationWriter
struct  XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F  : public XmlSerializationGeneratedCode_t434CFD8D2AF9FEC58DB65E02599C37182563C638
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator System.Xml.Serialization.XmlSerializationWriter::idGenerator
	ObjectIDGenerator_t267F4EB12AC82678B0783ABA92CD54A1503E1259 * ___idGenerator_0;
	// System.Int32 System.Xml.Serialization.XmlSerializationWriter::qnameCount
	int32_t ___qnameCount_1;
	// System.Boolean System.Xml.Serialization.XmlSerializationWriter::topLevelElement
	bool ___topLevelElement_2;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationWriter::namespaces
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___namespaces_3;
	// System.Xml.XmlWriter System.Xml.Serialization.XmlSerializationWriter::writer
	XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer_4;
	// System.Collections.Queue System.Xml.Serialization.XmlSerializationWriter::referencedElements
	Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * ___referencedElements_5;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationWriter::callbacks
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___callbacks_6;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationWriter::serializedObjects
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___serializedObjects_7;

public:
	inline static int32_t get_offset_of_idGenerator_0() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F, ___idGenerator_0)); }
	inline ObjectIDGenerator_t267F4EB12AC82678B0783ABA92CD54A1503E1259 * get_idGenerator_0() const { return ___idGenerator_0; }
	inline ObjectIDGenerator_t267F4EB12AC82678B0783ABA92CD54A1503E1259 ** get_address_of_idGenerator_0() { return &___idGenerator_0; }
	inline void set_idGenerator_0(ObjectIDGenerator_t267F4EB12AC82678B0783ABA92CD54A1503E1259 * value)
	{
		___idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idGenerator_0), (void*)value);
	}

	inline static int32_t get_offset_of_qnameCount_1() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F, ___qnameCount_1)); }
	inline int32_t get_qnameCount_1() const { return ___qnameCount_1; }
	inline int32_t* get_address_of_qnameCount_1() { return &___qnameCount_1; }
	inline void set_qnameCount_1(int32_t value)
	{
		___qnameCount_1 = value;
	}

	inline static int32_t get_offset_of_topLevelElement_2() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F, ___topLevelElement_2)); }
	inline bool get_topLevelElement_2() const { return ___topLevelElement_2; }
	inline bool* get_address_of_topLevelElement_2() { return &___topLevelElement_2; }
	inline void set_topLevelElement_2(bool value)
	{
		___topLevelElement_2 = value;
	}

	inline static int32_t get_offset_of_namespaces_3() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F, ___namespaces_3)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_namespaces_3() const { return ___namespaces_3; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_namespaces_3() { return &___namespaces_3; }
	inline void set_namespaces_3(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___namespaces_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaces_3), (void*)value);
	}

	inline static int32_t get_offset_of_writer_4() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F, ___writer_4)); }
	inline XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * get_writer_4() const { return ___writer_4; }
	inline XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D ** get_address_of_writer_4() { return &___writer_4; }
	inline void set_writer_4(XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * value)
	{
		___writer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_4), (void*)value);
	}

	inline static int32_t get_offset_of_referencedElements_5() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F, ___referencedElements_5)); }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * get_referencedElements_5() const { return ___referencedElements_5; }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 ** get_address_of_referencedElements_5() { return &___referencedElements_5; }
	inline void set_referencedElements_5(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * value)
	{
		___referencedElements_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___referencedElements_5), (void*)value);
	}

	inline static int32_t get_offset_of_callbacks_6() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F, ___callbacks_6)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_callbacks_6() const { return ___callbacks_6; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_callbacks_6() { return &___callbacks_6; }
	inline void set_callbacks_6(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___callbacks_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbacks_6), (void*)value);
	}

	inline static int32_t get_offset_of_serializedObjects_7() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F, ___serializedObjects_7)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_serializedObjects_7() const { return ___serializedObjects_7; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_serializedObjects_7() { return &___serializedObjects_7; }
	inline void set_serializedObjects_7(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___serializedObjects_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedObjects_7), (void*)value);
	}
};


// System.Xml.XmlCharType
struct  XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA 
{
public:
	// System.Byte[] System.Xml.XmlCharType::charProperties
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___charProperties_2;

public:
	inline static int32_t get_offset_of_charProperties_2() { return static_cast<int32_t>(offsetof(XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA, ___charProperties_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_charProperties_2() const { return ___charProperties_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_charProperties_2() { return &___charProperties_2; }
	inline void set_charProperties_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___charProperties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charProperties_2), (void*)value);
	}
};

struct XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA_StaticFields
{
public:
	// System.Object System.Xml.XmlCharType::s_Lock
	RuntimeObject * ___s_Lock_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.XmlCharType::s_CharProperties
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_CharProperties_1;

public:
	inline static int32_t get_offset_of_s_Lock_0() { return static_cast<int32_t>(offsetof(XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA_StaticFields, ___s_Lock_0)); }
	inline RuntimeObject * get_s_Lock_0() const { return ___s_Lock_0; }
	inline RuntimeObject ** get_address_of_s_Lock_0() { return &___s_Lock_0; }
	inline void set_s_Lock_0(RuntimeObject * value)
	{
		___s_Lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Lock_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_CharProperties_1() { return static_cast<int32_t>(offsetof(XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA_StaticFields, ___s_CharProperties_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_CharProperties_1() const { return ___s_CharProperties_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_CharProperties_1() { return &___s_CharProperties_1; }
	inline void set_s_CharProperties_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_CharProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CharProperties_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlCharType
struct XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};
// Native definition for COM marshalling of System.Xml.XmlCharType
struct XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};

// System.Xml.XmlDocument
struct  XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F  : public XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1
{
public:
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59 * ___implementation_1;
	// System.Xml.DomNameTable System.Xml.XmlDocument::domNameTable
	DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB * ___domNameTable_2;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastChild
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___lastChild_3;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocument::entities
	XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * ___entities_4;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIdMap
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___htElementIdMap_5;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIDAttrDecl
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___htElementIDAttrDecl_6;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocument::schemaInfo
	SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * ___schemaInfo_7;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0 * ___schemas_8;
	// System.Boolean System.Xml.XmlDocument::reportValidity
	bool ___reportValidity_9;
	// System.Boolean System.Xml.XmlDocument::actualLoadingStatus
	bool ___actualLoadingStatus_10;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertingDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeInsertingDelegate_11;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertedDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeInsertedDelegate_12;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovingDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeRemovingDelegate_13;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovedDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeRemovedDelegate_14;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangingDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeChangingDelegate_15;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangedDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeChangedDelegate_16;
	// System.Boolean System.Xml.XmlDocument::fEntRefNodesPresent
	bool ___fEntRefNodesPresent_17;
	// System.Boolean System.Xml.XmlDocument::fCDataNodesPresent
	bool ___fCDataNodesPresent_18;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_19;
	// System.Boolean System.Xml.XmlDocument::isLoading
	bool ___isLoading_20;
	// System.String System.Xml.XmlDocument::strDocumentName
	String_t* ___strDocumentName_21;
	// System.String System.Xml.XmlDocument::strDocumentFragmentName
	String_t* ___strDocumentFragmentName_22;
	// System.String System.Xml.XmlDocument::strCommentName
	String_t* ___strCommentName_23;
	// System.String System.Xml.XmlDocument::strTextName
	String_t* ___strTextName_24;
	// System.String System.Xml.XmlDocument::strCDataSectionName
	String_t* ___strCDataSectionName_25;
	// System.String System.Xml.XmlDocument::strEntityName
	String_t* ___strEntityName_26;
	// System.String System.Xml.XmlDocument::strID
	String_t* ___strID_27;
	// System.String System.Xml.XmlDocument::strXmlns
	String_t* ___strXmlns_28;
	// System.String System.Xml.XmlDocument::strXml
	String_t* ___strXml_29;
	// System.String System.Xml.XmlDocument::strSpace
	String_t* ___strSpace_30;
	// System.String System.Xml.XmlDocument::strLang
	String_t* ___strLang_31;
	// System.String System.Xml.XmlDocument::strEmpty
	String_t* ___strEmpty_32;
	// System.String System.Xml.XmlDocument::strNonSignificantWhitespaceName
	String_t* ___strNonSignificantWhitespaceName_33;
	// System.String System.Xml.XmlDocument::strSignificantWhitespaceName
	String_t* ___strSignificantWhitespaceName_34;
	// System.String System.Xml.XmlDocument::strReservedXmlns
	String_t* ___strReservedXmlns_35;
	// System.String System.Xml.XmlDocument::strReservedXml
	String_t* ___strReservedXml_36;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_37;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * ___resolver_38;
	// System.Boolean System.Xml.XmlDocument::bSetResolver
	bool ___bSetResolver_39;
	// System.Object System.Xml.XmlDocument::objLock
	RuntimeObject * ___objLock_40;

public:
	inline static int32_t get_offset_of_implementation_1() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___implementation_1)); }
	inline XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59 * get_implementation_1() const { return ___implementation_1; }
	inline XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59 ** get_address_of_implementation_1() { return &___implementation_1; }
	inline void set_implementation_1(XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59 * value)
	{
		___implementation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementation_1), (void*)value);
	}

	inline static int32_t get_offset_of_domNameTable_2() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___domNameTable_2)); }
	inline DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB * get_domNameTable_2() const { return ___domNameTable_2; }
	inline DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB ** get_address_of_domNameTable_2() { return &___domNameTable_2; }
	inline void set_domNameTable_2(DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB * value)
	{
		___domNameTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___domNameTable_2), (void*)value);
	}

	inline static int32_t get_offset_of_lastChild_3() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___lastChild_3)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_lastChild_3() const { return ___lastChild_3; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_lastChild_3() { return &___lastChild_3; }
	inline void set_lastChild_3(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___lastChild_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastChild_3), (void*)value);
	}

	inline static int32_t get_offset_of_entities_4() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___entities_4)); }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * get_entities_4() const { return ___entities_4; }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 ** get_address_of_entities_4() { return &___entities_4; }
	inline void set_entities_4(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * value)
	{
		___entities_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_4), (void*)value);
	}

	inline static int32_t get_offset_of_htElementIdMap_5() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___htElementIdMap_5)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_htElementIdMap_5() const { return ___htElementIdMap_5; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_htElementIdMap_5() { return &___htElementIdMap_5; }
	inline void set_htElementIdMap_5(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___htElementIdMap_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___htElementIdMap_5), (void*)value);
	}

	inline static int32_t get_offset_of_htElementIDAttrDecl_6() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___htElementIDAttrDecl_6)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_htElementIDAttrDecl_6() const { return ___htElementIDAttrDecl_6; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_htElementIDAttrDecl_6() { return &___htElementIDAttrDecl_6; }
	inline void set_htElementIDAttrDecl_6(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___htElementIDAttrDecl_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___htElementIDAttrDecl_6), (void*)value);
	}

	inline static int32_t get_offset_of_schemaInfo_7() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___schemaInfo_7)); }
	inline SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * get_schemaInfo_7() const { return ___schemaInfo_7; }
	inline SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 ** get_address_of_schemaInfo_7() { return &___schemaInfo_7; }
	inline void set_schemaInfo_7(SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * value)
	{
		___schemaInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_schemas_8() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___schemas_8)); }
	inline XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0 * get_schemas_8() const { return ___schemas_8; }
	inline XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0 ** get_address_of_schemas_8() { return &___schemas_8; }
	inline void set_schemas_8(XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0 * value)
	{
		___schemas_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemas_8), (void*)value);
	}

	inline static int32_t get_offset_of_reportValidity_9() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___reportValidity_9)); }
	inline bool get_reportValidity_9() const { return ___reportValidity_9; }
	inline bool* get_address_of_reportValidity_9() { return &___reportValidity_9; }
	inline void set_reportValidity_9(bool value)
	{
		___reportValidity_9 = value;
	}

	inline static int32_t get_offset_of_actualLoadingStatus_10() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___actualLoadingStatus_10)); }
	inline bool get_actualLoadingStatus_10() const { return ___actualLoadingStatus_10; }
	inline bool* get_address_of_actualLoadingStatus_10() { return &___actualLoadingStatus_10; }
	inline void set_actualLoadingStatus_10(bool value)
	{
		___actualLoadingStatus_10 = value;
	}

	inline static int32_t get_offset_of_onNodeInsertingDelegate_11() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeInsertingDelegate_11)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeInsertingDelegate_11() const { return ___onNodeInsertingDelegate_11; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeInsertingDelegate_11() { return &___onNodeInsertingDelegate_11; }
	inline void set_onNodeInsertingDelegate_11(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeInsertingDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeInsertingDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeInsertedDelegate_12() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeInsertedDelegate_12)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeInsertedDelegate_12() const { return ___onNodeInsertedDelegate_12; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeInsertedDelegate_12() { return &___onNodeInsertedDelegate_12; }
	inline void set_onNodeInsertedDelegate_12(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeInsertedDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeInsertedDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeRemovingDelegate_13() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeRemovingDelegate_13)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeRemovingDelegate_13() const { return ___onNodeRemovingDelegate_13; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeRemovingDelegate_13() { return &___onNodeRemovingDelegate_13; }
	inline void set_onNodeRemovingDelegate_13(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeRemovingDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeRemovingDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeRemovedDelegate_14() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeRemovedDelegate_14)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeRemovedDelegate_14() const { return ___onNodeRemovedDelegate_14; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeRemovedDelegate_14() { return &___onNodeRemovedDelegate_14; }
	inline void set_onNodeRemovedDelegate_14(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeRemovedDelegate_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeRemovedDelegate_14), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeChangingDelegate_15() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeChangingDelegate_15)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeChangingDelegate_15() const { return ___onNodeChangingDelegate_15; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeChangingDelegate_15() { return &___onNodeChangingDelegate_15; }
	inline void set_onNodeChangingDelegate_15(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeChangingDelegate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeChangingDelegate_15), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeChangedDelegate_16() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeChangedDelegate_16)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeChangedDelegate_16() const { return ___onNodeChangedDelegate_16; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeChangedDelegate_16() { return &___onNodeChangedDelegate_16; }
	inline void set_onNodeChangedDelegate_16(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeChangedDelegate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeChangedDelegate_16), (void*)value);
	}

	inline static int32_t get_offset_of_fEntRefNodesPresent_17() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___fEntRefNodesPresent_17)); }
	inline bool get_fEntRefNodesPresent_17() const { return ___fEntRefNodesPresent_17; }
	inline bool* get_address_of_fEntRefNodesPresent_17() { return &___fEntRefNodesPresent_17; }
	inline void set_fEntRefNodesPresent_17(bool value)
	{
		___fEntRefNodesPresent_17 = value;
	}

	inline static int32_t get_offset_of_fCDataNodesPresent_18() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___fCDataNodesPresent_18)); }
	inline bool get_fCDataNodesPresent_18() const { return ___fCDataNodesPresent_18; }
	inline bool* get_address_of_fCDataNodesPresent_18() { return &___fCDataNodesPresent_18; }
	inline void set_fCDataNodesPresent_18(bool value)
	{
		___fCDataNodesPresent_18 = value;
	}

	inline static int32_t get_offset_of_preserveWhitespace_19() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___preserveWhitespace_19)); }
	inline bool get_preserveWhitespace_19() const { return ___preserveWhitespace_19; }
	inline bool* get_address_of_preserveWhitespace_19() { return &___preserveWhitespace_19; }
	inline void set_preserveWhitespace_19(bool value)
	{
		___preserveWhitespace_19 = value;
	}

	inline static int32_t get_offset_of_isLoading_20() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___isLoading_20)); }
	inline bool get_isLoading_20() const { return ___isLoading_20; }
	inline bool* get_address_of_isLoading_20() { return &___isLoading_20; }
	inline void set_isLoading_20(bool value)
	{
		___isLoading_20 = value;
	}

	inline static int32_t get_offset_of_strDocumentName_21() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strDocumentName_21)); }
	inline String_t* get_strDocumentName_21() const { return ___strDocumentName_21; }
	inline String_t** get_address_of_strDocumentName_21() { return &___strDocumentName_21; }
	inline void set_strDocumentName_21(String_t* value)
	{
		___strDocumentName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDocumentName_21), (void*)value);
	}

	inline static int32_t get_offset_of_strDocumentFragmentName_22() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strDocumentFragmentName_22)); }
	inline String_t* get_strDocumentFragmentName_22() const { return ___strDocumentFragmentName_22; }
	inline String_t** get_address_of_strDocumentFragmentName_22() { return &___strDocumentFragmentName_22; }
	inline void set_strDocumentFragmentName_22(String_t* value)
	{
		___strDocumentFragmentName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDocumentFragmentName_22), (void*)value);
	}

	inline static int32_t get_offset_of_strCommentName_23() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strCommentName_23)); }
	inline String_t* get_strCommentName_23() const { return ___strCommentName_23; }
	inline String_t** get_address_of_strCommentName_23() { return &___strCommentName_23; }
	inline void set_strCommentName_23(String_t* value)
	{
		___strCommentName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strCommentName_23), (void*)value);
	}

	inline static int32_t get_offset_of_strTextName_24() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strTextName_24)); }
	inline String_t* get_strTextName_24() const { return ___strTextName_24; }
	inline String_t** get_address_of_strTextName_24() { return &___strTextName_24; }
	inline void set_strTextName_24(String_t* value)
	{
		___strTextName_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strTextName_24), (void*)value);
	}

	inline static int32_t get_offset_of_strCDataSectionName_25() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strCDataSectionName_25)); }
	inline String_t* get_strCDataSectionName_25() const { return ___strCDataSectionName_25; }
	inline String_t** get_address_of_strCDataSectionName_25() { return &___strCDataSectionName_25; }
	inline void set_strCDataSectionName_25(String_t* value)
	{
		___strCDataSectionName_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strCDataSectionName_25), (void*)value);
	}

	inline static int32_t get_offset_of_strEntityName_26() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strEntityName_26)); }
	inline String_t* get_strEntityName_26() const { return ___strEntityName_26; }
	inline String_t** get_address_of_strEntityName_26() { return &___strEntityName_26; }
	inline void set_strEntityName_26(String_t* value)
	{
		___strEntityName_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strEntityName_26), (void*)value);
	}

	inline static int32_t get_offset_of_strID_27() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strID_27)); }
	inline String_t* get_strID_27() const { return ___strID_27; }
	inline String_t** get_address_of_strID_27() { return &___strID_27; }
	inline void set_strID_27(String_t* value)
	{
		___strID_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strID_27), (void*)value);
	}

	inline static int32_t get_offset_of_strXmlns_28() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strXmlns_28)); }
	inline String_t* get_strXmlns_28() const { return ___strXmlns_28; }
	inline String_t** get_address_of_strXmlns_28() { return &___strXmlns_28; }
	inline void set_strXmlns_28(String_t* value)
	{
		___strXmlns_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strXmlns_28), (void*)value);
	}

	inline static int32_t get_offset_of_strXml_29() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strXml_29)); }
	inline String_t* get_strXml_29() const { return ___strXml_29; }
	inline String_t** get_address_of_strXml_29() { return &___strXml_29; }
	inline void set_strXml_29(String_t* value)
	{
		___strXml_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strXml_29), (void*)value);
	}

	inline static int32_t get_offset_of_strSpace_30() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strSpace_30)); }
	inline String_t* get_strSpace_30() const { return ___strSpace_30; }
	inline String_t** get_address_of_strSpace_30() { return &___strSpace_30; }
	inline void set_strSpace_30(String_t* value)
	{
		___strSpace_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strSpace_30), (void*)value);
	}

	inline static int32_t get_offset_of_strLang_31() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strLang_31)); }
	inline String_t* get_strLang_31() const { return ___strLang_31; }
	inline String_t** get_address_of_strLang_31() { return &___strLang_31; }
	inline void set_strLang_31(String_t* value)
	{
		___strLang_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strLang_31), (void*)value);
	}

	inline static int32_t get_offset_of_strEmpty_32() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strEmpty_32)); }
	inline String_t* get_strEmpty_32() const { return ___strEmpty_32; }
	inline String_t** get_address_of_strEmpty_32() { return &___strEmpty_32; }
	inline void set_strEmpty_32(String_t* value)
	{
		___strEmpty_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strEmpty_32), (void*)value);
	}

	inline static int32_t get_offset_of_strNonSignificantWhitespaceName_33() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strNonSignificantWhitespaceName_33)); }
	inline String_t* get_strNonSignificantWhitespaceName_33() const { return ___strNonSignificantWhitespaceName_33; }
	inline String_t** get_address_of_strNonSignificantWhitespaceName_33() { return &___strNonSignificantWhitespaceName_33; }
	inline void set_strNonSignificantWhitespaceName_33(String_t* value)
	{
		___strNonSignificantWhitespaceName_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strNonSignificantWhitespaceName_33), (void*)value);
	}

	inline static int32_t get_offset_of_strSignificantWhitespaceName_34() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strSignificantWhitespaceName_34)); }
	inline String_t* get_strSignificantWhitespaceName_34() const { return ___strSignificantWhitespaceName_34; }
	inline String_t** get_address_of_strSignificantWhitespaceName_34() { return &___strSignificantWhitespaceName_34; }
	inline void set_strSignificantWhitespaceName_34(String_t* value)
	{
		___strSignificantWhitespaceName_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strSignificantWhitespaceName_34), (void*)value);
	}

	inline static int32_t get_offset_of_strReservedXmlns_35() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strReservedXmlns_35)); }
	inline String_t* get_strReservedXmlns_35() const { return ___strReservedXmlns_35; }
	inline String_t** get_address_of_strReservedXmlns_35() { return &___strReservedXmlns_35; }
	inline void set_strReservedXmlns_35(String_t* value)
	{
		___strReservedXmlns_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strReservedXmlns_35), (void*)value);
	}

	inline static int32_t get_offset_of_strReservedXml_36() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strReservedXml_36)); }
	inline String_t* get_strReservedXml_36() const { return ___strReservedXml_36; }
	inline String_t** get_address_of_strReservedXml_36() { return &___strReservedXml_36; }
	inline void set_strReservedXml_36(String_t* value)
	{
		___strReservedXml_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strReservedXml_36), (void*)value);
	}

	inline static int32_t get_offset_of_baseURI_37() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___baseURI_37)); }
	inline String_t* get_baseURI_37() const { return ___baseURI_37; }
	inline String_t** get_address_of_baseURI_37() { return &___baseURI_37; }
	inline void set_baseURI_37(String_t* value)
	{
		___baseURI_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseURI_37), (void*)value);
	}

	inline static int32_t get_offset_of_resolver_38() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___resolver_38)); }
	inline XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * get_resolver_38() const { return ___resolver_38; }
	inline XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A ** get_address_of_resolver_38() { return &___resolver_38; }
	inline void set_resolver_38(XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * value)
	{
		___resolver_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolver_38), (void*)value);
	}

	inline static int32_t get_offset_of_bSetResolver_39() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___bSetResolver_39)); }
	inline bool get_bSetResolver_39() const { return ___bSetResolver_39; }
	inline bool* get_address_of_bSetResolver_39() { return &___bSetResolver_39; }
	inline void set_bSetResolver_39(bool value)
	{
		___bSetResolver_39 = value;
	}

	inline static int32_t get_offset_of_objLock_40() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___objLock_40)); }
	inline RuntimeObject * get_objLock_40() const { return ___objLock_40; }
	inline RuntimeObject ** get_address_of_objLock_40() { return &___objLock_40; }
	inline void set_objLock_40(RuntimeObject * value)
	{
		___objLock_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objLock_40), (void*)value);
	}
};

struct XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields
{
public:
	// System.Xml.EmptyEnumerator System.Xml.XmlDocument::EmptyEnumerator
	EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 * ___EmptyEnumerator_41;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::NotKnownSchemaInfo
	RuntimeObject* ___NotKnownSchemaInfo_42;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::ValidSchemaInfo
	RuntimeObject* ___ValidSchemaInfo_43;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::InvalidSchemaInfo
	RuntimeObject* ___InvalidSchemaInfo_44;

public:
	inline static int32_t get_offset_of_EmptyEnumerator_41() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields, ___EmptyEnumerator_41)); }
	inline EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 * get_EmptyEnumerator_41() const { return ___EmptyEnumerator_41; }
	inline EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 ** get_address_of_EmptyEnumerator_41() { return &___EmptyEnumerator_41; }
	inline void set_EmptyEnumerator_41(EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 * value)
	{
		___EmptyEnumerator_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyEnumerator_41), (void*)value);
	}

	inline static int32_t get_offset_of_NotKnownSchemaInfo_42() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields, ___NotKnownSchemaInfo_42)); }
	inline RuntimeObject* get_NotKnownSchemaInfo_42() const { return ___NotKnownSchemaInfo_42; }
	inline RuntimeObject** get_address_of_NotKnownSchemaInfo_42() { return &___NotKnownSchemaInfo_42; }
	inline void set_NotKnownSchemaInfo_42(RuntimeObject* value)
	{
		___NotKnownSchemaInfo_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NotKnownSchemaInfo_42), (void*)value);
	}

	inline static int32_t get_offset_of_ValidSchemaInfo_43() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields, ___ValidSchemaInfo_43)); }
	inline RuntimeObject* get_ValidSchemaInfo_43() const { return ___ValidSchemaInfo_43; }
	inline RuntimeObject** get_address_of_ValidSchemaInfo_43() { return &___ValidSchemaInfo_43; }
	inline void set_ValidSchemaInfo_43(RuntimeObject* value)
	{
		___ValidSchemaInfo_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValidSchemaInfo_43), (void*)value);
	}

	inline static int32_t get_offset_of_InvalidSchemaInfo_44() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields, ___InvalidSchemaInfo_44)); }
	inline RuntimeObject* get_InvalidSchemaInfo_44() const { return ___InvalidSchemaInfo_44; }
	inline RuntimeObject** get_address_of_InvalidSchemaInfo_44() { return &___InvalidSchemaInfo_44; }
	inline void set_InvalidSchemaInfo_44(RuntimeObject* value)
	{
		___InvalidSchemaInfo_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidSchemaInfo_44), (void*)value);
	}
};


// System.Xml.XmlNamedNodeMap_SmallXmlNodeList
struct  SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE 
{
public:
	// System.Object System.Xml.XmlNamedNodeMap_SmallXmlNodeList::field
	RuntimeObject * ___field_0;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE, ___field_0)); }
	inline RuntimeObject * get_field_0() const { return ___field_0; }
	inline RuntimeObject ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(RuntimeObject * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___field_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_pinvoke
{
	Il2CppIUnknown* ___field_0;
};
// Native definition for COM marshalling of System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_com
{
	Il2CppIUnknown* ___field_0;
};

// System.Xml.XmlNamespaceManager_NamespaceDeclaration
struct  NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48 
{
public:
	// System.String System.Xml.XmlNamespaceManager_NamespaceDeclaration::prefix
	String_t* ___prefix_0;
	// System.String System.Xml.XmlNamespaceManager_NamespaceDeclaration::uri
	String_t* ___uri_1;
	// System.Int32 System.Xml.XmlNamespaceManager_NamespaceDeclaration::scopeId
	int32_t ___scopeId_2;
	// System.Int32 System.Xml.XmlNamespaceManager_NamespaceDeclaration::previousNsIndex
	int32_t ___previousNsIndex_3;

public:
	inline static int32_t get_offset_of_prefix_0() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48, ___prefix_0)); }
	inline String_t* get_prefix_0() const { return ___prefix_0; }
	inline String_t** get_address_of_prefix_0() { return &___prefix_0; }
	inline void set_prefix_0(String_t* value)
	{
		___prefix_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_0), (void*)value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48, ___uri_1)); }
	inline String_t* get_uri_1() const { return ___uri_1; }
	inline String_t** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(String_t* value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_1), (void*)value);
	}

	inline static int32_t get_offset_of_scopeId_2() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48, ___scopeId_2)); }
	inline int32_t get_scopeId_2() const { return ___scopeId_2; }
	inline int32_t* get_address_of_scopeId_2() { return &___scopeId_2; }
	inline void set_scopeId_2(int32_t value)
	{
		___scopeId_2 = value;
	}

	inline static int32_t get_offset_of_previousNsIndex_3() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48, ___previousNsIndex_3)); }
	inline int32_t get_previousNsIndex_3() const { return ___previousNsIndex_3; }
	inline int32_t* get_address_of_previousNsIndex_3() { return &___previousNsIndex_3; }
	inline void set_previousNsIndex_3(int32_t value)
	{
		___previousNsIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlNamespaceManager/NamespaceDeclaration
struct NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___uri_1;
	int32_t ___scopeId_2;
	int32_t ___previousNsIndex_3;
};
// Native definition for COM marshalling of System.Xml.XmlNamespaceManager/NamespaceDeclaration
struct NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___uri_1;
	int32_t ___scopeId_2;
	int32_t ___previousNsIndex_3;
};

// System.Xml.XmlRawWriter
struct  XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5  : public XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D
{
public:
	// System.Xml.XmlRawWriterBase64Encoder System.Xml.XmlRawWriter::base64Encoder
	XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB * ___base64Encoder_0;
	// System.Xml.IXmlNamespaceResolver System.Xml.XmlRawWriter::resolver
	RuntimeObject* ___resolver_1;

public:
	inline static int32_t get_offset_of_base64Encoder_0() { return static_cast<int32_t>(offsetof(XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5, ___base64Encoder_0)); }
	inline XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB * get_base64Encoder_0() const { return ___base64Encoder_0; }
	inline XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB ** get_address_of_base64Encoder_0() { return &___base64Encoder_0; }
	inline void set_base64Encoder_0(XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB * value)
	{
		___base64Encoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Encoder_0), (void*)value);
	}

	inline static int32_t get_offset_of_resolver_1() { return static_cast<int32_t>(offsetof(XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5, ___resolver_1)); }
	inline RuntimeObject* get_resolver_1() const { return ___resolver_1; }
	inline RuntimeObject** get_address_of_resolver_1() { return &___resolver_1; }
	inline void set_resolver_1(RuntimeObject* value)
	{
		___resolver_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolver_1), (void*)value);
	}
};


// System.Xml.XmlReader_XmlReaderDebuggerDisplayProxy
struct  XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E 
{
public:
	// System.Xml.XmlReader System.Xml.XmlReader_XmlReaderDebuggerDisplayProxy::reader
	XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader_0;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E, ___reader_0)); }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * get_reader_0() const { return ___reader_0; }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlReader/XmlReaderDebuggerDisplayProxy
struct XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshaled_pinvoke
{
	XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader_0;
};
// Native definition for COM marshalling of System.Xml.XmlReader/XmlReaderDebuggerDisplayProxy
struct XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshaled_com
{
	XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader_0;
};

// System.Xml.XmlTextReaderImpl_NoNamespaceManager
struct  NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2  : public XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465
{
public:

public:
};


// System.Xml.XmlTextReaderImpl_ParsingState
struct  ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF 
{
public:
	// System.Char[] System.Xml.XmlTextReaderImpl_ParsingState::chars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars_0;
	// System.Int32 System.Xml.XmlTextReaderImpl_ParsingState::charPos
	int32_t ___charPos_1;
	// System.Int32 System.Xml.XmlTextReaderImpl_ParsingState::charsUsed
	int32_t ___charsUsed_2;
	// System.Text.Encoding System.Xml.XmlTextReaderImpl_ParsingState::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_3;
	// System.Boolean System.Xml.XmlTextReaderImpl_ParsingState::appendMode
	bool ___appendMode_4;
	// System.IO.Stream System.Xml.XmlTextReaderImpl_ParsingState::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Decoder System.Xml.XmlTextReaderImpl_ParsingState::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_6;
	// System.Byte[] System.Xml.XmlTextReaderImpl_ParsingState::bytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes_7;
	// System.Int32 System.Xml.XmlTextReaderImpl_ParsingState::bytePos
	int32_t ___bytePos_8;
	// System.Int32 System.Xml.XmlTextReaderImpl_ParsingState::bytesUsed
	int32_t ___bytesUsed_9;
	// System.IO.TextReader System.Xml.XmlTextReaderImpl_ParsingState::textReader
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___textReader_10;
	// System.Int32 System.Xml.XmlTextReaderImpl_ParsingState::lineNo
	int32_t ___lineNo_11;
	// System.Int32 System.Xml.XmlTextReaderImpl_ParsingState::lineStartPos
	int32_t ___lineStartPos_12;
	// System.String System.Xml.XmlTextReaderImpl_ParsingState::baseUriStr
	String_t* ___baseUriStr_13;
	// System.Uri System.Xml.XmlTextReaderImpl_ParsingState::baseUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri_14;
	// System.Boolean System.Xml.XmlTextReaderImpl_ParsingState::isEof
	bool ___isEof_15;
	// System.Boolean System.Xml.XmlTextReaderImpl_ParsingState::isStreamEof
	bool ___isStreamEof_16;
	// System.Xml.IDtdEntityInfo System.Xml.XmlTextReaderImpl_ParsingState::entity
	RuntimeObject* ___entity_17;
	// System.Int32 System.Xml.XmlTextReaderImpl_ParsingState::entityId
	int32_t ___entityId_18;
	// System.Boolean System.Xml.XmlTextReaderImpl_ParsingState::eolNormalized
	bool ___eolNormalized_19;
	// System.Boolean System.Xml.XmlTextReaderImpl_ParsingState::entityResolvedManually
	bool ___entityResolvedManually_20;

public:
	inline static int32_t get_offset_of_chars_0() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___chars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_chars_0() const { return ___chars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_chars_0() { return &___chars_0; }
	inline void set_chars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___chars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chars_0), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_1() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___charPos_1)); }
	inline int32_t get_charPos_1() const { return ___charPos_1; }
	inline int32_t* get_address_of_charPos_1() { return &___charPos_1; }
	inline void set_charPos_1(int32_t value)
	{
		___charPos_1 = value;
	}

	inline static int32_t get_offset_of_charsUsed_2() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___charsUsed_2)); }
	inline int32_t get_charsUsed_2() const { return ___charsUsed_2; }
	inline int32_t* get_address_of_charsUsed_2() { return &___charsUsed_2; }
	inline void set_charsUsed_2(int32_t value)
	{
		___charsUsed_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_3() const { return ___encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_appendMode_4() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___appendMode_4)); }
	inline bool get_appendMode_4() const { return ___appendMode_4; }
	inline bool* get_address_of_appendMode_4() { return &___appendMode_4; }
	inline void set_appendMode_4(bool value)
	{
		___appendMode_4 = value;
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_6() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___decoder_6)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_6() const { return ___decoder_6; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_6() { return &___decoder_6; }
	inline void set_decoder_6(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_6), (void*)value);
	}

	inline static int32_t get_offset_of_bytes_7() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___bytes_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bytes_7() const { return ___bytes_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bytes_7() { return &___bytes_7; }
	inline void set_bytes_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bytes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytes_7), (void*)value);
	}

	inline static int32_t get_offset_of_bytePos_8() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___bytePos_8)); }
	inline int32_t get_bytePos_8() const { return ___bytePos_8; }
	inline int32_t* get_address_of_bytePos_8() { return &___bytePos_8; }
	inline void set_bytePos_8(int32_t value)
	{
		___bytePos_8 = value;
	}

	inline static int32_t get_offset_of_bytesUsed_9() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___bytesUsed_9)); }
	inline int32_t get_bytesUsed_9() const { return ___bytesUsed_9; }
	inline int32_t* get_address_of_bytesUsed_9() { return &___bytesUsed_9; }
	inline void set_bytesUsed_9(int32_t value)
	{
		___bytesUsed_9 = value;
	}

	inline static int32_t get_offset_of_textReader_10() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___textReader_10)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_textReader_10() const { return ___textReader_10; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_textReader_10() { return &___textReader_10; }
	inline void set_textReader_10(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___textReader_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textReader_10), (void*)value);
	}

	inline static int32_t get_offset_of_lineNo_11() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___lineNo_11)); }
	inline int32_t get_lineNo_11() const { return ___lineNo_11; }
	inline int32_t* get_address_of_lineNo_11() { return &___lineNo_11; }
	inline void set_lineNo_11(int32_t value)
	{
		___lineNo_11 = value;
	}

	inline static int32_t get_offset_of_lineStartPos_12() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___lineStartPos_12)); }
	inline int32_t get_lineStartPos_12() const { return ___lineStartPos_12; }
	inline int32_t* get_address_of_lineStartPos_12() { return &___lineStartPos_12; }
	inline void set_lineStartPos_12(int32_t value)
	{
		___lineStartPos_12 = value;
	}

	inline static int32_t get_offset_of_baseUriStr_13() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___baseUriStr_13)); }
	inline String_t* get_baseUriStr_13() const { return ___baseUriStr_13; }
	inline String_t** get_address_of_baseUriStr_13() { return &___baseUriStr_13; }
	inline void set_baseUriStr_13(String_t* value)
	{
		___baseUriStr_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseUriStr_13), (void*)value);
	}

	inline static int32_t get_offset_of_baseUri_14() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___baseUri_14)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_baseUri_14() const { return ___baseUri_14; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_baseUri_14() { return &___baseUri_14; }
	inline void set_baseUri_14(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___baseUri_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseUri_14), (void*)value);
	}

	inline static int32_t get_offset_of_isEof_15() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___isEof_15)); }
	inline bool get_isEof_15() const { return ___isEof_15; }
	inline bool* get_address_of_isEof_15() { return &___isEof_15; }
	inline void set_isEof_15(bool value)
	{
		___isEof_15 = value;
	}

	inline static int32_t get_offset_of_isStreamEof_16() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___isStreamEof_16)); }
	inline bool get_isStreamEof_16() const { return ___isStreamEof_16; }
	inline bool* get_address_of_isStreamEof_16() { return &___isStreamEof_16; }
	inline void set_isStreamEof_16(bool value)
	{
		___isStreamEof_16 = value;
	}

	inline static int32_t get_offset_of_entity_17() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___entity_17)); }
	inline RuntimeObject* get_entity_17() const { return ___entity_17; }
	inline RuntimeObject** get_address_of_entity_17() { return &___entity_17; }
	inline void set_entity_17(RuntimeObject* value)
	{
		___entity_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entity_17), (void*)value);
	}

	inline static int32_t get_offset_of_entityId_18() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___entityId_18)); }
	inline int32_t get_entityId_18() const { return ___entityId_18; }
	inline int32_t* get_address_of_entityId_18() { return &___entityId_18; }
	inline void set_entityId_18(int32_t value)
	{
		___entityId_18 = value;
	}

	inline static int32_t get_offset_of_eolNormalized_19() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___eolNormalized_19)); }
	inline bool get_eolNormalized_19() const { return ___eolNormalized_19; }
	inline bool* get_address_of_eolNormalized_19() { return &___eolNormalized_19; }
	inline void set_eolNormalized_19(bool value)
	{
		___eolNormalized_19 = value;
	}

	inline static int32_t get_offset_of_entityResolvedManually_20() { return static_cast<int32_t>(offsetof(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF, ___entityResolvedManually_20)); }
	inline bool get_entityResolvedManually_20() const { return ___entityResolvedManually_20; }
	inline bool* get_address_of_entityResolvedManually_20() { return &___entityResolvedManually_20; }
	inline void set_entityResolvedManually_20(bool value)
	{
		___entityResolvedManually_20 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlTextReaderImpl/ParsingState
struct ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshaled_pinvoke
{
	uint8_t* ___chars_0;
	int32_t ___charPos_1;
	int32_t ___charsUsed_2;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_3;
	int32_t ___appendMode_4;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_6;
	Il2CppSafeArray/*NONE*/* ___bytes_7;
	int32_t ___bytePos_8;
	int32_t ___bytesUsed_9;
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___textReader_10;
	int32_t ___lineNo_11;
	int32_t ___lineStartPos_12;
	char* ___baseUriStr_13;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri_14;
	int32_t ___isEof_15;
	int32_t ___isStreamEof_16;
	RuntimeObject* ___entity_17;
	int32_t ___entityId_18;
	int32_t ___eolNormalized_19;
	int32_t ___entityResolvedManually_20;
};
// Native definition for COM marshalling of System.Xml.XmlTextReaderImpl/ParsingState
struct ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshaled_com
{
	uint8_t* ___chars_0;
	int32_t ___charPos_1;
	int32_t ___charsUsed_2;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_3;
	int32_t ___appendMode_4;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_6;
	Il2CppSafeArray/*NONE*/* ___bytes_7;
	int32_t ___bytePos_8;
	int32_t ___bytesUsed_9;
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___textReader_10;
	int32_t ___lineNo_11;
	int32_t ___lineStartPos_12;
	Il2CppChar* ___baseUriStr_13;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri_14;
	int32_t ___isEof_15;
	int32_t ___isStreamEof_16;
	RuntimeObject* ___entity_17;
	int32_t ___entityId_18;
	int32_t ___eolNormalized_19;
	int32_t ___entityResolvedManually_20;
};

// System.Xml.XmlUrlResolver
struct  XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1  : public XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A
{
public:
	// System.Net.ICredentials System.Xml.XmlUrlResolver::_credentials
	RuntimeObject* ____credentials_1;
	// System.Net.IWebProxy System.Xml.XmlUrlResolver::_proxy
	RuntimeObject* ____proxy_2;
	// System.Net.Cache.RequestCachePolicy System.Xml.XmlUrlResolver::_cachePolicy
	RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED * ____cachePolicy_3;

public:
	inline static int32_t get_offset_of__credentials_1() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1, ____credentials_1)); }
	inline RuntimeObject* get__credentials_1() const { return ____credentials_1; }
	inline RuntimeObject** get_address_of__credentials_1() { return &____credentials_1; }
	inline void set__credentials_1(RuntimeObject* value)
	{
		____credentials_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____credentials_1), (void*)value);
	}

	inline static int32_t get_offset_of__proxy_2() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1, ____proxy_2)); }
	inline RuntimeObject* get__proxy_2() const { return ____proxy_2; }
	inline RuntimeObject** get_address_of__proxy_2() { return &____proxy_2; }
	inline void set__proxy_2(RuntimeObject* value)
	{
		____proxy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____proxy_2), (void*)value);
	}

	inline static int32_t get_offset_of__cachePolicy_3() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1, ____cachePolicy_3)); }
	inline RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED * get__cachePolicy_3() const { return ____cachePolicy_3; }
	inline RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED ** get_address_of__cachePolicy_3() { return &____cachePolicy_3; }
	inline void set__cachePolicy_3(RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED * value)
	{
		____cachePolicy_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachePolicy_3), (void*)value);
	}
};

struct XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1_StaticFields
{
public:
	// System.Object System.Xml.XmlUrlResolver::s_DownloadManager
	RuntimeObject * ___s_DownloadManager_0;

public:
	inline static int32_t get_offset_of_s_DownloadManager_0() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1_StaticFields, ___s_DownloadManager_0)); }
	inline RuntimeObject * get_s_DownloadManager_0() const { return ___s_DownloadManager_0; }
	inline RuntimeObject ** get_address_of_s_DownloadManager_0() { return &___s_DownloadManager_0; }
	inline void set_s_DownloadManager_0(RuntimeObject * value)
	{
		___s_DownloadManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DownloadManager_0), (void*)value);
	}
};


// System.Xml.XmlWellFormedWriter_AttrName
struct  AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C 
{
public:
	// System.String System.Xml.XmlWellFormedWriter_AttrName::prefix
	String_t* ___prefix_0;
	// System.String System.Xml.XmlWellFormedWriter_AttrName::namespaceUri
	String_t* ___namespaceUri_1;
	// System.String System.Xml.XmlWellFormedWriter_AttrName::localName
	String_t* ___localName_2;
	// System.Int32 System.Xml.XmlWellFormedWriter_AttrName::prev
	int32_t ___prev_3;

public:
	inline static int32_t get_offset_of_prefix_0() { return static_cast<int32_t>(offsetof(AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C, ___prefix_0)); }
	inline String_t* get_prefix_0() const { return ___prefix_0; }
	inline String_t** get_address_of_prefix_0() { return &___prefix_0; }
	inline void set_prefix_0(String_t* value)
	{
		___prefix_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_0), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceUri_1() { return static_cast<int32_t>(offsetof(AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C, ___namespaceUri_1)); }
	inline String_t* get_namespaceUri_1() const { return ___namespaceUri_1; }
	inline String_t** get_address_of_namespaceUri_1() { return &___namespaceUri_1; }
	inline void set_namespaceUri_1(String_t* value)
	{
		___namespaceUri_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceUri_1), (void*)value);
	}

	inline static int32_t get_offset_of_localName_2() { return static_cast<int32_t>(offsetof(AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C, ___localName_2)); }
	inline String_t* get_localName_2() const { return ___localName_2; }
	inline String_t** get_address_of_localName_2() { return &___localName_2; }
	inline void set_localName_2(String_t* value)
	{
		___localName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_2), (void*)value);
	}

	inline static int32_t get_offset_of_prev_3() { return static_cast<int32_t>(offsetof(AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C, ___prev_3)); }
	inline int32_t get_prev_3() const { return ___prev_3; }
	inline int32_t* get_address_of_prev_3() { return &___prev_3; }
	inline void set_prev_3(int32_t value)
	{
		___prev_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlWellFormedWriter/AttrName
struct AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___namespaceUri_1;
	char* ___localName_2;
	int32_t ___prev_3;
};
// Native definition for COM marshalling of System.Xml.XmlWellFormedWriter/AttrName
struct AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___namespaceUri_1;
	Il2CppChar* ___localName_2;
	int32_t ___prev_3;
};

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D960 <PrivateImplementationDetails>::553E235E202D57C9F1156E7D232E02BBDC920165
	__StaticArrayInitTypeSizeU3D960_tB4E309A51BC2D32355045825120D252D37C95146  ___553E235E202D57C9F1156E7D232E02BBDC920165_0;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D6 <PrivateImplementationDetails>::5D100A87B697F3AE2015A5D3B2A7B5419E1BCA98
	__StaticArrayInitTypeSizeU3D6_tDF2537259373F423B466710F7B6BCCCCB9F570AB  ___5D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_1;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D664 <PrivateImplementationDetails>::68D0F86889D5D656483EEE829BCEECDFEC91D8EA
	__StaticArrayInitTypeSizeU3D664_t43B28E2D56A4D823FF013967C731BA1EC63293E0  ___68D0F86889D5D656483EEE829BCEECDFEC91D8EA_2;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D32 <PrivateImplementationDetails>::7A32E1A19C182315E4263A65A72066492550D8CD
	__StaticArrayInitTypeSizeU3D32_t32451FC0FFB07E790AB1831670F4480B70832CF2  ___7A32E1A19C182315E4263A65A72066492550D8CD_3;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D960 <PrivateImplementationDetails>::977375E4E1ED54F588076ACA36CC17E6C2195CB9
	__StaticArrayInitTypeSizeU3D960_tB4E309A51BC2D32355045825120D252D37C95146  ___977375E4E1ED54F588076ACA36CC17E6C2195CB9_4;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D28 <PrivateImplementationDetails>::9E31F24F64765FCAA589F589324D17C9FCF6A06D
	__StaticArrayInitTypeSizeU3D28_t3F2DFB0DEB57463B3BDB1DF1D66831340706BC7E  ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_5;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D68 <PrivateImplementationDetails>::A933F173482FF50754B4942AF8DFC584EF14A45B
	__StaticArrayInitTypeSizeU3D68_t9FD699743C05C335C7FE75AC04876AF17F2D2E7A  ___A933F173482FF50754B4942AF8DFC584EF14A45B_6;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D40 <PrivateImplementationDetails>::B9F0004E3873FDDCABFDA6174EA18F0859B637B4
	__StaticArrayInitTypeSizeU3D40_t3257F2DBB1018E8BB659AC40CD3038ED1EA19B48  ___B9F0004E3873FDDCABFDA6174EA18F0859B637B4_7;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20 <PrivateImplementationDetails>::BAD037B714E1CD1052149B51238A3D4351DD10B5
	__StaticArrayInitTypeSizeU3D20_tAFFC768CAAB023FF7786175A0F64F7EAE4B35A87  ___BAD037B714E1CD1052149B51238A3D4351DD10B5_8;
	// System.Int64 <PrivateImplementationDetails>::EBC658B067B5C785A3F0BB67D73755F6FEE7F70C
	int64_t ___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_9;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D64 <PrivateImplementationDetails>::EE3413A2C088FF9432054D6E60A7CB6A498D25F0
	__StaticArrayInitTypeSizeU3D64_t5A1623F8A98BA91292FD3395CC69302605E97DFD  ___EE3413A2C088FF9432054D6E60A7CB6A498D25F0_10;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D1212 <PrivateImplementationDetails>::FB0C58D8B3094F018764CC6E3094B9576DB08069
	__StaticArrayInitTypeSizeU3D1212_t91E860D8C2A662B4AF3C1E8EAC2229E84184C805  ___FB0C58D8B3094F018764CC6E3094B9576DB08069_11;

public:
	inline static int32_t get_offset_of_U3553E235E202D57C9F1156E7D232E02BBDC920165_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields, ___553E235E202D57C9F1156E7D232E02BBDC920165_0)); }
	inline __StaticArrayInitTypeSizeU3D960_tB4E309A51BC2D32355045825120D252D37C95146  get_U3553E235E202D57C9F1156E7D232E02BBDC920165_0() const { return ___553E235E202D57C9F1156E7D232E02BBDC920165_0; }
	inline __StaticArrayInitTypeSizeU3D960_tB4E309A51BC2D32355045825120D252D37C95146 * get_address_of_U3553E235E202D57C9F1156E7D232E02BBDC920165_0() { return &___553E235E202D57C9F1156E7D232E02BBDC920165_0; }
	inline void set_U3553E235E202D57C9F1156E7D232E02BBDC920165_0(__StaticArrayInitTypeSizeU3D960_tB4E309A51BC2D32355045825120D252D37C95146  value)
	{
		___553E235E202D57C9F1156E7D232E02BBDC920165_0 = value;
	}

	inline static int32_t get_offset_of_U35D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields, ___5D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_1)); }
	inline __StaticArrayInitTypeSizeU3D6_tDF2537259373F423B466710F7B6BCCCCB9F570AB  get_U35D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_1() const { return ___5D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_1; }
	inline __StaticArrayInitTypeSizeU3D6_tDF2537259373F423B466710F7B6BCCCCB9F570AB * get_address_of_U35D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_1() { return &___5D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_1; }
	inline void set_U35D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_1(__StaticArrayInitTypeSizeU3D6_tDF2537259373F423B466710F7B6BCCCCB9F570AB  value)
	{
		___5D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_1 = value;
	}

	inline static int32_t get_offset_of_U368D0F86889D5D656483EEE829BCEECDFEC91D8EA_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields, ___68D0F86889D5D656483EEE829BCEECDFEC91D8EA_2)); }
	inline __StaticArrayInitTypeSizeU3D664_t43B28E2D56A4D823FF013967C731BA1EC63293E0  get_U368D0F86889D5D656483EEE829BCEECDFEC91D8EA_2() const { return ___68D0F86889D5D656483EEE829BCEECDFEC91D8EA_2; }
	inline __StaticArrayInitTypeSizeU3D664_t43B28E2D56A4D823FF013967C731BA1EC63293E0 * get_address_of_U368D0F86889D5D656483EEE829BCEECDFEC91D8EA_2() { return &___68D0F86889D5D656483EEE829BCEECDFEC91D8EA_2; }
	inline void set_U368D0F86889D5D656483EEE829BCEECDFEC91D8EA_2(__StaticArrayInitTypeSizeU3D664_t43B28E2D56A4D823FF013967C731BA1EC63293E0  value)
	{
		___68D0F86889D5D656483EEE829BCEECDFEC91D8EA_2 = value;
	}

	inline static int32_t get_offset_of_U37A32E1A19C182315E4263A65A72066492550D8CD_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields, ___7A32E1A19C182315E4263A65A72066492550D8CD_3)); }
	inline __StaticArrayInitTypeSizeU3D32_t32451FC0FFB07E790AB1831670F4480B70832CF2  get_U37A32E1A19C182315E4263A65A72066492550D8CD_3() const { return ___7A32E1A19C182315E4263A65A72066492550D8CD_3; }
	inline __StaticArrayInitTypeSizeU3D32_t32451FC0FFB07E790AB1831670F4480B70832CF2 * get_address_of_U37A32E1A19C182315E4263A65A72066492550D8CD_3() { return &___7A32E1A19C182315E4263A65A72066492550D8CD_3; }
	inline void set_U37A32E1A19C182315E4263A65A72066492550D8CD_3(__StaticArrayInitTypeSizeU3D32_t32451FC0FFB07E790AB1831670F4480B70832CF2  value)
	{
		___7A32E1A19C182315E4263A65A72066492550D8CD_3 = value;
	}

	inline static int32_t get_offset_of_U3977375E4E1ED54F588076ACA36CC17E6C2195CB9_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields, ___977375E4E1ED54F588076ACA36CC17E6C2195CB9_4)); }
	inline __StaticArrayInitTypeSizeU3D960_tB4E309A51BC2D32355045825120D252D37C95146  get_U3977375E4E1ED54F588076ACA36CC17E6C2195CB9_4() const { return ___977375E4E1ED54F588076ACA36CC17E6C2195CB9_4; }
	inline __StaticArrayInitTypeSizeU3D960_tB4E309A51BC2D32355045825120D252D37C95146 * get_address_of_U3977375E4E1ED54F588076ACA36CC17E6C2195CB9_4() { return &___977375E4E1ED54F588076ACA36CC17E6C2195CB9_4; }
	inline void set_U3977375E4E1ED54F588076ACA36CC17E6C2195CB9_4(__StaticArrayInitTypeSizeU3D960_tB4E309A51BC2D32355045825120D252D37C95146  value)
	{
		___977375E4E1ED54F588076ACA36CC17E6C2195CB9_4 = value;
	}

	inline static int32_t get_offset_of_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields, ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_5)); }
	inline __StaticArrayInitTypeSizeU3D28_t3F2DFB0DEB57463B3BDB1DF1D66831340706BC7E  get_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_5() const { return ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_5; }
	inline __StaticArrayInitTypeSizeU3D28_t3F2DFB0DEB57463B3BDB1DF1D66831340706BC7E * get_address_of_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_5() { return &___9E31F24F64765FCAA589F589324D17C9FCF6A06D_5; }
	inline void set_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_5(__StaticArrayInitTypeSizeU3D28_t3F2DFB0DEB57463B3BDB1DF1D66831340706BC7E  value)
	{
		___9E31F24F64765FCAA589F589324D17C9FCF6A06D_5 = value;
	}

	inline static int32_t get_offset_of_A933F173482FF50754B4942AF8DFC584EF14A45B_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields, ___A933F173482FF50754B4942AF8DFC584EF14A45B_6)); }
	inline __StaticArrayInitTypeSizeU3D68_t9FD699743C05C335C7FE75AC04876AF17F2D2E7A  get_A933F173482FF50754B4942AF8DFC584EF14A45B_6() const { return ___A933F173482FF50754B4942AF8DFC584EF14A45B_6; }
	inline __StaticArrayInitTypeSizeU3D68_t9FD699743C05C335C7FE75AC04876AF17F2D2E7A * get_address_of_A933F173482FF50754B4942AF8DFC584EF14A45B_6() { return &___A933F173482FF50754B4942AF8DFC584EF14A45B_6; }
	inline void set_A933F173482FF50754B4942AF8DFC584EF14A45B_6(__StaticArrayInitTypeSizeU3D68_t9FD699743C05C335C7FE75AC04876AF17F2D2E7A  value)
	{
		___A933F173482FF50754B4942AF8DFC584EF14A45B_6 = value;
	}

	inline static int32_t get_offset_of_B9F0004E3873FDDCABFDA6174EA18F0859B637B4_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields, ___B9F0004E3873FDDCABFDA6174EA18F0859B637B4_7)); }
	inline __StaticArrayInitTypeSizeU3D40_t3257F2DBB1018E8BB659AC40CD3038ED1EA19B48  get_B9F0004E3873FDDCABFDA6174EA18F0859B637B4_7() const { return ___B9F0004E3873FDDCABFDA6174EA18F0859B637B4_7; }
	inline __StaticArrayInitTypeSizeU3D40_t3257F2DBB1018E8BB659AC40CD3038ED1EA19B48 * get_address_of_B9F0004E3873FDDCABFDA6174EA18F0859B637B4_7() { return &___B9F0004E3873FDDCABFDA6174EA18F0859B637B4_7; }
	inline void set_B9F0004E3873FDDCABFDA6174EA18F0859B637B4_7(__StaticArrayInitTypeSizeU3D40_t3257F2DBB1018E8BB659AC40CD3038ED1EA19B48  value)
	{
		___B9F0004E3873FDDCABFDA6174EA18F0859B637B4_7 = value;
	}

	inline static int32_t get_offset_of_BAD037B714E1CD1052149B51238A3D4351DD10B5_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields, ___BAD037B714E1CD1052149B51238A3D4351DD10B5_8)); }
	inline __StaticArrayInitTypeSizeU3D20_tAFFC768CAAB023FF7786175A0F64F7EAE4B35A87  get_BAD037B714E1CD1052149B51238A3D4351DD10B5_8() const { return ___BAD037B714E1CD1052149B51238A3D4351DD10B5_8; }
	inline __StaticArrayInitTypeSizeU3D20_tAFFC768CAAB023FF7786175A0F64F7EAE4B35A87 * get_address_of_BAD037B714E1CD1052149B51238A3D4351DD10B5_8() { return &___BAD037B714E1CD1052149B51238A3D4351DD10B5_8; }
	inline void set_BAD037B714E1CD1052149B51238A3D4351DD10B5_8(__StaticArrayInitTypeSizeU3D20_tAFFC768CAAB023FF7786175A0F64F7EAE4B35A87  value)
	{
		___BAD037B714E1CD1052149B51238A3D4351DD10B5_8 = value;
	}

	inline static int32_t get_offset_of_EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields, ___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_9)); }
	inline int64_t get_EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_9() const { return ___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_9; }
	inline int64_t* get_address_of_EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_9() { return &___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_9; }
	inline void set_EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_9(int64_t value)
	{
		___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_9 = value;
	}

	inline static int32_t get_offset_of_EE3413A2C088FF9432054D6E60A7CB6A498D25F0_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields, ___EE3413A2C088FF9432054D6E60A7CB6A498D25F0_10)); }
	inline __StaticArrayInitTypeSizeU3D64_t5A1623F8A98BA91292FD3395CC69302605E97DFD  get_EE3413A2C088FF9432054D6E60A7CB6A498D25F0_10() const { return ___EE3413A2C088FF9432054D6E60A7CB6A498D25F0_10; }
	inline __StaticArrayInitTypeSizeU3D64_t5A1623F8A98BA91292FD3395CC69302605E97DFD * get_address_of_EE3413A2C088FF9432054D6E60A7CB6A498D25F0_10() { return &___EE3413A2C088FF9432054D6E60A7CB6A498D25F0_10; }
	inline void set_EE3413A2C088FF9432054D6E60A7CB6A498D25F0_10(__StaticArrayInitTypeSizeU3D64_t5A1623F8A98BA91292FD3395CC69302605E97DFD  value)
	{
		___EE3413A2C088FF9432054D6E60A7CB6A498D25F0_10 = value;
	}

	inline static int32_t get_offset_of_FB0C58D8B3094F018764CC6E3094B9576DB08069_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E_StaticFields, ___FB0C58D8B3094F018764CC6E3094B9576DB08069_11)); }
	inline __StaticArrayInitTypeSizeU3D1212_t91E860D8C2A662B4AF3C1E8EAC2229E84184C805  get_FB0C58D8B3094F018764CC6E3094B9576DB08069_11() const { return ___FB0C58D8B3094F018764CC6E3094B9576DB08069_11; }
	inline __StaticArrayInitTypeSizeU3D1212_t91E860D8C2A662B4AF3C1E8EAC2229E84184C805 * get_address_of_FB0C58D8B3094F018764CC6E3094B9576DB08069_11() { return &___FB0C58D8B3094F018764CC6E3094B9576DB08069_11; }
	inline void set_FB0C58D8B3094F018764CC6E3094B9576DB08069_11(__StaticArrayInitTypeSizeU3D1212_t91E860D8C2A662B4AF3C1E8EAC2229E84184C805  value)
	{
		___FB0C58D8B3094F018764CC6E3094B9576DB08069_11 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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

// System.Exception
struct  Exception_t  : public RuntimeObject
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

// System.Net.Cache.RequestCacheLevel
struct  RequestCacheLevel_t26F97AE5EF38C0C115B2B4DF0DE3B73CA1B2ADF4 
{
public:
	// System.Int32 System.Net.Cache.RequestCacheLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RequestCacheLevel_t26F97AE5EF38C0C115B2B4DF0DE3B73CA1B2ADF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.IO.Stream>
struct  ConfiguredTaskAwaitable_1_t7EA81BB95AB4DBB79ADF06E9518D55B0721DC03C 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t7EA81BB95AB4DBB79ADF06E9518D55B0721DC03C, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct  ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// System.StringComparison
struct  StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Uri_Flags
struct  Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.ConformanceLevel
struct  ConformanceLevel_tDDD7A5E189C7A150AB656A9070173CD8C2A5B653 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConformanceLevel_tDDD7A5E189C7A150AB656A9070173CD8C2A5B653, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.DtdProcessing
struct  DtdProcessing_t25005AA22D71FA607D010E88CBB7299378A455F5 
{
public:
	// System.Int32 System.Xml.DtdProcessing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DtdProcessing_t25005AA22D71FA607D010E88CBB7299378A455F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.EntityHandling
struct  EntityHandling_t0675E831FDCD3EBD42A6E4EDEE14C32C58F74B90 
{
public:
	// System.Int32 System.Xml.EntityHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EntityHandling_t0675E831FDCD3EBD42A6E4EDEE14C32C58F74B90, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.ReadState
struct  ReadState_tD89BBF06656CA45737179919236BDA5EC69D2FEF 
{
public:
	// System.Int32 System.Xml.ReadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReadState_tD89BBF06656CA45737179919236BDA5EC69D2FEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XmlSchemaParticle_Occurs
struct  Occurs_tE1D41715FC55ECA460AB8AE9C68E39DF0ED1747F 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaParticle_Occurs::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Occurs_tE1D41715FC55ECA460AB8AE9C68E39DF0ED1747F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XsdDateTime
struct  XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D 
{
public:
	// System.DateTime System.Xml.Schema.XsdDateTime::dt
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dt_0;
	// System.UInt32 System.Xml.Schema.XsdDateTime::extra
	uint32_t ___extra_1;

public:
	inline static int32_t get_offset_of_dt_0() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D, ___dt_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_dt_0() const { return ___dt_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_dt_0() { return &___dt_0; }
	inline void set_dt_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___dt_0 = value;
	}

	inline static int32_t get_offset_of_extra_1() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D, ___extra_1)); }
	inline uint32_t get_extra_1() const { return ___extra_1; }
	inline uint32_t* get_address_of_extra_1() { return &___extra_1; }
	inline void set_extra_1(uint32_t value)
	{
		___extra_1 = value;
	}
};

struct XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields
{
public:
	// System.Int32 System.Xml.Schema.XsdDateTime::Lzyyyy
	int32_t ___Lzyyyy_2;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lzyyyy_
	int32_t ___Lzyyyy__3;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lzyyyy_MM
	int32_t ___Lzyyyy_MM_4;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lzyyyy_MM_
	int32_t ___Lzyyyy_MM__5;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lzyyyy_MM_dd
	int32_t ___Lzyyyy_MM_dd_6;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lzyyyy_MM_ddT
	int32_t ___Lzyyyy_MM_ddT_7;
	// System.Int32 System.Xml.Schema.XsdDateTime::LzHH
	int32_t ___LzHH_8;
	// System.Int32 System.Xml.Schema.XsdDateTime::LzHH_
	int32_t ___LzHH__9;
	// System.Int32 System.Xml.Schema.XsdDateTime::LzHH_mm
	int32_t ___LzHH_mm_10;
	// System.Int32 System.Xml.Schema.XsdDateTime::LzHH_mm_
	int32_t ___LzHH_mm__11;
	// System.Int32 System.Xml.Schema.XsdDateTime::LzHH_mm_ss
	int32_t ___LzHH_mm_ss_12;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz_
	int32_t ___Lz__13;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz_zz
	int32_t ___Lz_zz_14;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz_zz_
	int32_t ___Lz_zz__15;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz_zz_zz
	int32_t ___Lz_zz_zz_16;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz__
	int32_t ___Lz___17;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz__mm
	int32_t ___Lz__mm_18;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz__mm_
	int32_t ___Lz__mm__19;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz__mm__
	int32_t ___Lz__mm___20;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz__mm_dd
	int32_t ___Lz__mm_dd_21;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz___
	int32_t ___Lz____22;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz___dd
	int32_t ___Lz___dd_23;
	// System.Xml.Schema.XmlTypeCode[] System.Xml.Schema.XsdDateTime::typeCodes
	XmlTypeCodeU5BU5D_t4B53622F8096A3BE4E235382465B2E0FF7B85D6B* ___typeCodes_24;

public:
	inline static int32_t get_offset_of_Lzyyyy_2() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lzyyyy_2)); }
	inline int32_t get_Lzyyyy_2() const { return ___Lzyyyy_2; }
	inline int32_t* get_address_of_Lzyyyy_2() { return &___Lzyyyy_2; }
	inline void set_Lzyyyy_2(int32_t value)
	{
		___Lzyyyy_2 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy__3() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lzyyyy__3)); }
	inline int32_t get_Lzyyyy__3() const { return ___Lzyyyy__3; }
	inline int32_t* get_address_of_Lzyyyy__3() { return &___Lzyyyy__3; }
	inline void set_Lzyyyy__3(int32_t value)
	{
		___Lzyyyy__3 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy_MM_4() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lzyyyy_MM_4)); }
	inline int32_t get_Lzyyyy_MM_4() const { return ___Lzyyyy_MM_4; }
	inline int32_t* get_address_of_Lzyyyy_MM_4() { return &___Lzyyyy_MM_4; }
	inline void set_Lzyyyy_MM_4(int32_t value)
	{
		___Lzyyyy_MM_4 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy_MM__5() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lzyyyy_MM__5)); }
	inline int32_t get_Lzyyyy_MM__5() const { return ___Lzyyyy_MM__5; }
	inline int32_t* get_address_of_Lzyyyy_MM__5() { return &___Lzyyyy_MM__5; }
	inline void set_Lzyyyy_MM__5(int32_t value)
	{
		___Lzyyyy_MM__5 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy_MM_dd_6() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lzyyyy_MM_dd_6)); }
	inline int32_t get_Lzyyyy_MM_dd_6() const { return ___Lzyyyy_MM_dd_6; }
	inline int32_t* get_address_of_Lzyyyy_MM_dd_6() { return &___Lzyyyy_MM_dd_6; }
	inline void set_Lzyyyy_MM_dd_6(int32_t value)
	{
		___Lzyyyy_MM_dd_6 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy_MM_ddT_7() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lzyyyy_MM_ddT_7)); }
	inline int32_t get_Lzyyyy_MM_ddT_7() const { return ___Lzyyyy_MM_ddT_7; }
	inline int32_t* get_address_of_Lzyyyy_MM_ddT_7() { return &___Lzyyyy_MM_ddT_7; }
	inline void set_Lzyyyy_MM_ddT_7(int32_t value)
	{
		___Lzyyyy_MM_ddT_7 = value;
	}

	inline static int32_t get_offset_of_LzHH_8() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___LzHH_8)); }
	inline int32_t get_LzHH_8() const { return ___LzHH_8; }
	inline int32_t* get_address_of_LzHH_8() { return &___LzHH_8; }
	inline void set_LzHH_8(int32_t value)
	{
		___LzHH_8 = value;
	}

	inline static int32_t get_offset_of_LzHH__9() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___LzHH__9)); }
	inline int32_t get_LzHH__9() const { return ___LzHH__9; }
	inline int32_t* get_address_of_LzHH__9() { return &___LzHH__9; }
	inline void set_LzHH__9(int32_t value)
	{
		___LzHH__9 = value;
	}

	inline static int32_t get_offset_of_LzHH_mm_10() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___LzHH_mm_10)); }
	inline int32_t get_LzHH_mm_10() const { return ___LzHH_mm_10; }
	inline int32_t* get_address_of_LzHH_mm_10() { return &___LzHH_mm_10; }
	inline void set_LzHH_mm_10(int32_t value)
	{
		___LzHH_mm_10 = value;
	}

	inline static int32_t get_offset_of_LzHH_mm__11() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___LzHH_mm__11)); }
	inline int32_t get_LzHH_mm__11() const { return ___LzHH_mm__11; }
	inline int32_t* get_address_of_LzHH_mm__11() { return &___LzHH_mm__11; }
	inline void set_LzHH_mm__11(int32_t value)
	{
		___LzHH_mm__11 = value;
	}

	inline static int32_t get_offset_of_LzHH_mm_ss_12() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___LzHH_mm_ss_12)); }
	inline int32_t get_LzHH_mm_ss_12() const { return ___LzHH_mm_ss_12; }
	inline int32_t* get_address_of_LzHH_mm_ss_12() { return &___LzHH_mm_ss_12; }
	inline void set_LzHH_mm_ss_12(int32_t value)
	{
		___LzHH_mm_ss_12 = value;
	}

	inline static int32_t get_offset_of_Lz__13() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lz__13)); }
	inline int32_t get_Lz__13() const { return ___Lz__13; }
	inline int32_t* get_address_of_Lz__13() { return &___Lz__13; }
	inline void set_Lz__13(int32_t value)
	{
		___Lz__13 = value;
	}

	inline static int32_t get_offset_of_Lz_zz_14() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lz_zz_14)); }
	inline int32_t get_Lz_zz_14() const { return ___Lz_zz_14; }
	inline int32_t* get_address_of_Lz_zz_14() { return &___Lz_zz_14; }
	inline void set_Lz_zz_14(int32_t value)
	{
		___Lz_zz_14 = value;
	}

	inline static int32_t get_offset_of_Lz_zz__15() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lz_zz__15)); }
	inline int32_t get_Lz_zz__15() const { return ___Lz_zz__15; }
	inline int32_t* get_address_of_Lz_zz__15() { return &___Lz_zz__15; }
	inline void set_Lz_zz__15(int32_t value)
	{
		___Lz_zz__15 = value;
	}

	inline static int32_t get_offset_of_Lz_zz_zz_16() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lz_zz_zz_16)); }
	inline int32_t get_Lz_zz_zz_16() const { return ___Lz_zz_zz_16; }
	inline int32_t* get_address_of_Lz_zz_zz_16() { return &___Lz_zz_zz_16; }
	inline void set_Lz_zz_zz_16(int32_t value)
	{
		___Lz_zz_zz_16 = value;
	}

	inline static int32_t get_offset_of_Lz___17() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lz___17)); }
	inline int32_t get_Lz___17() const { return ___Lz___17; }
	inline int32_t* get_address_of_Lz___17() { return &___Lz___17; }
	inline void set_Lz___17(int32_t value)
	{
		___Lz___17 = value;
	}

	inline static int32_t get_offset_of_Lz__mm_18() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lz__mm_18)); }
	inline int32_t get_Lz__mm_18() const { return ___Lz__mm_18; }
	inline int32_t* get_address_of_Lz__mm_18() { return &___Lz__mm_18; }
	inline void set_Lz__mm_18(int32_t value)
	{
		___Lz__mm_18 = value;
	}

	inline static int32_t get_offset_of_Lz__mm__19() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lz__mm__19)); }
	inline int32_t get_Lz__mm__19() const { return ___Lz__mm__19; }
	inline int32_t* get_address_of_Lz__mm__19() { return &___Lz__mm__19; }
	inline void set_Lz__mm__19(int32_t value)
	{
		___Lz__mm__19 = value;
	}

	inline static int32_t get_offset_of_Lz__mm___20() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lz__mm___20)); }
	inline int32_t get_Lz__mm___20() const { return ___Lz__mm___20; }
	inline int32_t* get_address_of_Lz__mm___20() { return &___Lz__mm___20; }
	inline void set_Lz__mm___20(int32_t value)
	{
		___Lz__mm___20 = value;
	}

	inline static int32_t get_offset_of_Lz__mm_dd_21() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lz__mm_dd_21)); }
	inline int32_t get_Lz__mm_dd_21() const { return ___Lz__mm_dd_21; }
	inline int32_t* get_address_of_Lz__mm_dd_21() { return &___Lz__mm_dd_21; }
	inline void set_Lz__mm_dd_21(int32_t value)
	{
		___Lz__mm_dd_21 = value;
	}

	inline static int32_t get_offset_of_Lz____22() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lz____22)); }
	inline int32_t get_Lz____22() const { return ___Lz____22; }
	inline int32_t* get_address_of_Lz____22() { return &___Lz____22; }
	inline void set_Lz____22(int32_t value)
	{
		___Lz____22 = value;
	}

	inline static int32_t get_offset_of_Lz___dd_23() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___Lz___dd_23)); }
	inline int32_t get_Lz___dd_23() const { return ___Lz___dd_23; }
	inline int32_t* get_address_of_Lz___dd_23() { return &___Lz___dd_23; }
	inline void set_Lz___dd_23(int32_t value)
	{
		___Lz___dd_23 = value;
	}

	inline static int32_t get_offset_of_typeCodes_24() { return static_cast<int32_t>(offsetof(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields, ___typeCodes_24)); }
	inline XmlTypeCodeU5BU5D_t4B53622F8096A3BE4E235382465B2E0FF7B85D6B* get_typeCodes_24() const { return ___typeCodes_24; }
	inline XmlTypeCodeU5BU5D_t4B53622F8096A3BE4E235382465B2E0FF7B85D6B** get_address_of_typeCodes_24() { return &___typeCodes_24; }
	inline void set_typeCodes_24(XmlTypeCodeU5BU5D_t4B53622F8096A3BE4E235382465B2E0FF7B85D6B* value)
	{
		___typeCodes_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeCodes_24), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.Schema.XsdDateTime
struct XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_marshaled_pinvoke
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dt_0;
	uint32_t ___extra_1;
};
// Native definition for COM marshalling of System.Xml.Schema.XsdDateTime
struct XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_marshaled_com
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dt_0;
	uint32_t ___extra_1;
};

// System.Xml.Schema.XsdDateTime_DateTimeTypeCode
struct  DateTimeTypeCode_t353D9085254551686D334B4873F0B3FD820F0276 
{
public:
	// System.Int32 System.Xml.Schema.XsdDateTime_DateTimeTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeTypeCode_t353D9085254551686D334B4873F0B3FD820F0276, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XsdDateTime_XsdDateTimeKind
struct  XsdDateTimeKind_tF6642210478B887764F3AE8116FC3C5A6EB3E3F0 
{
public:
	// System.Int32 System.Xml.Schema.XsdDateTime_XsdDateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XsdDateTimeKind_tF6642210478B887764F3AE8116FC3C5A6EB3E3F0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XsdDateTimeFlags
struct  XsdDateTimeFlags_tA0CFF619A2C537BD8E65672DA641CF4B2405156C 
{
public:
	// System.Int32 System.Xml.Schema.XsdDateTimeFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XsdDateTimeFlags_tA0CFF619A2C537BD8E65672DA641CF4B2405156C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XsdDuration_DurationType
struct  DurationType_t2686B055AE0909D5E46CA3ED100ADB6919FB95B1 
{
public:
	// System.Int32 System.Xml.Schema.XsdDuration_DurationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DurationType_t2686B055AE0909D5E46CA3ED100ADB6919FB95B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XsdDuration_Parts
struct  Parts_tCBD7D6EC6CB2F727B8F238AD2EB467DBBF1EE2A9 
{
public:
	// System.Int32 System.Xml.Schema.XsdDuration_Parts::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Parts_tCBD7D6EC6CB2F727B8F238AD2EB467DBBF1EE2A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Serialization.ClassMap
struct  ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB  : public ObjectMap_t7A8443346E6A156B8D9173F81BB35A5A23992B5C
{
public:
	// System.Collections.Hashtable System.Xml.Serialization.ClassMap::_elements
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____elements_0;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_elementMembers
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____elementMembers_1;
	// System.Collections.Hashtable System.Xml.Serialization.ClassMap::_attributeMembers
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____attributeMembers_2;
	// System.Xml.Serialization.XmlTypeMapMemberAttribute[] System.Xml.Serialization.ClassMap::_attributeMembersArray
	XmlTypeMapMemberAttributeU5BU5D_tBD565E2F6F54CCD19C901BAFB18161AF4E540D35* ____attributeMembersArray_3;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_flatLists
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____flatLists_4;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_allMembers
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____allMembers_5;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_membersWithDefault
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____membersWithDefault_6;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_listMembers
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____listMembers_7;
	// System.Xml.Serialization.XmlTypeMapMemberAnyElement System.Xml.Serialization.ClassMap::_defaultAnyElement
	XmlTypeMapMemberAnyElement_t8A2AB4A984DDACBEE5837B4ECCCE30B431B832D0 * ____defaultAnyElement_8;
	// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute System.Xml.Serialization.ClassMap::_defaultAnyAttribute
	XmlTypeMapMemberAnyAttribute_tE046B6F71F0626D9CF844E80D385126DD952CDEE * ____defaultAnyAttribute_9;
	// System.Xml.Serialization.XmlTypeMapMemberNamespaces System.Xml.Serialization.ClassMap::_namespaceDeclarations
	XmlTypeMapMemberNamespaces_tAF134E0E65D2095D56C6BDDE1E5A651A7594A38D * ____namespaceDeclarations_10;
	// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::_xmlTextCollector
	XmlTypeMapMember_t41AE3864E379A8FD098C2BFE538CC27990836AFC * ____xmlTextCollector_11;
	// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::_returnMember
	XmlTypeMapMember_t41AE3864E379A8FD098C2BFE538CC27990836AFC * ____returnMember_12;
	// System.Boolean System.Xml.Serialization.ClassMap::_ignoreMemberNamespace
	bool ____ignoreMemberNamespace_13;
	// System.Boolean System.Xml.Serialization.ClassMap::_canBeSimpleType
	bool ____canBeSimpleType_14;
	// System.Nullable`1<System.Boolean> System.Xml.Serialization.ClassMap::_isOrderDependentMap
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____isOrderDependentMap_15;

public:
	inline static int32_t get_offset_of__elements_0() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____elements_0)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__elements_0() const { return ____elements_0; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__elements_0() { return &____elements_0; }
	inline void set__elements_0(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____elements_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elements_0), (void*)value);
	}

	inline static int32_t get_offset_of__elementMembers_1() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____elementMembers_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__elementMembers_1() const { return ____elementMembers_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__elementMembers_1() { return &____elementMembers_1; }
	inline void set__elementMembers_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____elementMembers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elementMembers_1), (void*)value);
	}

	inline static int32_t get_offset_of__attributeMembers_2() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____attributeMembers_2)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__attributeMembers_2() const { return ____attributeMembers_2; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__attributeMembers_2() { return &____attributeMembers_2; }
	inline void set__attributeMembers_2(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____attributeMembers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____attributeMembers_2), (void*)value);
	}

	inline static int32_t get_offset_of__attributeMembersArray_3() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____attributeMembersArray_3)); }
	inline XmlTypeMapMemberAttributeU5BU5D_tBD565E2F6F54CCD19C901BAFB18161AF4E540D35* get__attributeMembersArray_3() const { return ____attributeMembersArray_3; }
	inline XmlTypeMapMemberAttributeU5BU5D_tBD565E2F6F54CCD19C901BAFB18161AF4E540D35** get_address_of__attributeMembersArray_3() { return &____attributeMembersArray_3; }
	inline void set__attributeMembersArray_3(XmlTypeMapMemberAttributeU5BU5D_tBD565E2F6F54CCD19C901BAFB18161AF4E540D35* value)
	{
		____attributeMembersArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____attributeMembersArray_3), (void*)value);
	}

	inline static int32_t get_offset_of__flatLists_4() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____flatLists_4)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__flatLists_4() const { return ____flatLists_4; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__flatLists_4() { return &____flatLists_4; }
	inline void set__flatLists_4(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____flatLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____flatLists_4), (void*)value);
	}

	inline static int32_t get_offset_of__allMembers_5() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____allMembers_5)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__allMembers_5() const { return ____allMembers_5; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__allMembers_5() { return &____allMembers_5; }
	inline void set__allMembers_5(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____allMembers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allMembers_5), (void*)value);
	}

	inline static int32_t get_offset_of__membersWithDefault_6() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____membersWithDefault_6)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__membersWithDefault_6() const { return ____membersWithDefault_6; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__membersWithDefault_6() { return &____membersWithDefault_6; }
	inline void set__membersWithDefault_6(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____membersWithDefault_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____membersWithDefault_6), (void*)value);
	}

	inline static int32_t get_offset_of__listMembers_7() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____listMembers_7)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__listMembers_7() const { return ____listMembers_7; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__listMembers_7() { return &____listMembers_7; }
	inline void set__listMembers_7(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____listMembers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listMembers_7), (void*)value);
	}

	inline static int32_t get_offset_of__defaultAnyElement_8() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____defaultAnyElement_8)); }
	inline XmlTypeMapMemberAnyElement_t8A2AB4A984DDACBEE5837B4ECCCE30B431B832D0 * get__defaultAnyElement_8() const { return ____defaultAnyElement_8; }
	inline XmlTypeMapMemberAnyElement_t8A2AB4A984DDACBEE5837B4ECCCE30B431B832D0 ** get_address_of__defaultAnyElement_8() { return &____defaultAnyElement_8; }
	inline void set__defaultAnyElement_8(XmlTypeMapMemberAnyElement_t8A2AB4A984DDACBEE5837B4ECCCE30B431B832D0 * value)
	{
		____defaultAnyElement_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultAnyElement_8), (void*)value);
	}

	inline static int32_t get_offset_of__defaultAnyAttribute_9() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____defaultAnyAttribute_9)); }
	inline XmlTypeMapMemberAnyAttribute_tE046B6F71F0626D9CF844E80D385126DD952CDEE * get__defaultAnyAttribute_9() const { return ____defaultAnyAttribute_9; }
	inline XmlTypeMapMemberAnyAttribute_tE046B6F71F0626D9CF844E80D385126DD952CDEE ** get_address_of__defaultAnyAttribute_9() { return &____defaultAnyAttribute_9; }
	inline void set__defaultAnyAttribute_9(XmlTypeMapMemberAnyAttribute_tE046B6F71F0626D9CF844E80D385126DD952CDEE * value)
	{
		____defaultAnyAttribute_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultAnyAttribute_9), (void*)value);
	}

	inline static int32_t get_offset_of__namespaceDeclarations_10() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____namespaceDeclarations_10)); }
	inline XmlTypeMapMemberNamespaces_tAF134E0E65D2095D56C6BDDE1E5A651A7594A38D * get__namespaceDeclarations_10() const { return ____namespaceDeclarations_10; }
	inline XmlTypeMapMemberNamespaces_tAF134E0E65D2095D56C6BDDE1E5A651A7594A38D ** get_address_of__namespaceDeclarations_10() { return &____namespaceDeclarations_10; }
	inline void set__namespaceDeclarations_10(XmlTypeMapMemberNamespaces_tAF134E0E65D2095D56C6BDDE1E5A651A7594A38D * value)
	{
		____namespaceDeclarations_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____namespaceDeclarations_10), (void*)value);
	}

	inline static int32_t get_offset_of__xmlTextCollector_11() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____xmlTextCollector_11)); }
	inline XmlTypeMapMember_t41AE3864E379A8FD098C2BFE538CC27990836AFC * get__xmlTextCollector_11() const { return ____xmlTextCollector_11; }
	inline XmlTypeMapMember_t41AE3864E379A8FD098C2BFE538CC27990836AFC ** get_address_of__xmlTextCollector_11() { return &____xmlTextCollector_11; }
	inline void set__xmlTextCollector_11(XmlTypeMapMember_t41AE3864E379A8FD098C2BFE538CC27990836AFC * value)
	{
		____xmlTextCollector_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____xmlTextCollector_11), (void*)value);
	}

	inline static int32_t get_offset_of__returnMember_12() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____returnMember_12)); }
	inline XmlTypeMapMember_t41AE3864E379A8FD098C2BFE538CC27990836AFC * get__returnMember_12() const { return ____returnMember_12; }
	inline XmlTypeMapMember_t41AE3864E379A8FD098C2BFE538CC27990836AFC ** get_address_of__returnMember_12() { return &____returnMember_12; }
	inline void set__returnMember_12(XmlTypeMapMember_t41AE3864E379A8FD098C2BFE538CC27990836AFC * value)
	{
		____returnMember_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____returnMember_12), (void*)value);
	}

	inline static int32_t get_offset_of__ignoreMemberNamespace_13() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____ignoreMemberNamespace_13)); }
	inline bool get__ignoreMemberNamespace_13() const { return ____ignoreMemberNamespace_13; }
	inline bool* get_address_of__ignoreMemberNamespace_13() { return &____ignoreMemberNamespace_13; }
	inline void set__ignoreMemberNamespace_13(bool value)
	{
		____ignoreMemberNamespace_13 = value;
	}

	inline static int32_t get_offset_of__canBeSimpleType_14() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____canBeSimpleType_14)); }
	inline bool get__canBeSimpleType_14() const { return ____canBeSimpleType_14; }
	inline bool* get_address_of__canBeSimpleType_14() { return &____canBeSimpleType_14; }
	inline void set__canBeSimpleType_14(bool value)
	{
		____canBeSimpleType_14 = value;
	}

	inline static int32_t get_offset_of__isOrderDependentMap_15() { return static_cast<int32_t>(offsetof(ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB, ____isOrderDependentMap_15)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get__isOrderDependentMap_15() const { return ____isOrderDependentMap_15; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of__isOrderDependentMap_15() { return &____isOrderDependentMap_15; }
	inline void set__isOrderDependentMap_15(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		____isOrderDependentMap_15 = value;
	}
};


// System.Xml.Serialization.SerializationFormat
struct  SerializationFormat_tAA809018F2717CCC5D0D99A37DE4542612D2CFA3 
{
public:
	// System.Int32 System.Xml.Serialization.SerializationFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationFormat_tAA809018F2717CCC5D0D99A37DE4542612D2CFA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.WhitespaceHandling
struct  WhitespaceHandling_t5B5D7F564E2C68D609D844ADC3D68F931DA5F034 
{
public:
	// System.Int32 System.Xml.WhitespaceHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WhitespaceHandling_t5B5D7F564E2C68D609D844ADC3D68F931DA5F034, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlEventCache_XmlEventType
struct  XmlEventType_t138BCDD49AC4660058C13E24EAE70C2FA7FDEB70 
{
public:
	// System.Int32 System.Xml.XmlEventCache_XmlEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlEventType_t138BCDD49AC4660058C13E24EAE70C2FA7FDEB70, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlNodeType
struct  XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlSpace
struct  XmlSpace_t16F1125FF443A131844086CD412753BFE485A047 
{
public:
	// System.Int32 System.Xml.XmlSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSpace_t16F1125FF443A131844086CD412753BFE485A047, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlTextReaderImpl_EntityExpandType
struct  EntityExpandType_tCEEA49C1F079AC09AED865BC20335712253F05CA 
{
public:
	// System.Int32 System.Xml.XmlTextReaderImpl_EntityExpandType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EntityExpandType_tCEEA49C1F079AC09AED865BC20335712253F05CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlTextReaderImpl_EntityType
struct  EntityType_t58AEEE9C0FA245DE0D2D51EAA0B0932A9E925C22 
{
public:
	// System.Int32 System.Xml.XmlTextReaderImpl_EntityType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EntityType_t58AEEE9C0FA245DE0D2D51EAA0B0932A9E925C22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlTextReaderImpl_IncrementalReadState
struct  IncrementalReadState_t72BEC479C21012EC24863F561F0BFFFCE52DB97A 
{
public:
	// System.Int32 System.Xml.XmlTextReaderImpl_IncrementalReadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IncrementalReadState_t72BEC479C21012EC24863F561F0BFFFCE52DB97A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlTextReaderImpl_InitInputType
struct  InitInputType_tC848B5C5FB2C66B2A21B54C201684DDCC9385ABE 
{
public:
	// System.Int32 System.Xml.XmlTextReaderImpl_InitInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitInputType_tC848B5C5FB2C66B2A21B54C201684DDCC9385ABE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlTextReaderImpl_ParsingFunction
struct  ParsingFunction_t742546E1DF71A6992EAA17FC90B6C8BC7EB7642C 
{
public:
	// System.Int32 System.Xml.XmlTextReaderImpl_ParsingFunction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParsingFunction_t742546E1DF71A6992EAA17FC90B6C8BC7EB7642C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlTextReaderImpl_ParsingMode
struct  ParsingMode_tA0CAD5F0C6A7A4BD87DAC17C5DD3A6E4DF3A4939 
{
public:
	// System.Int32 System.Xml.XmlTextReaderImpl_ParsingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParsingMode_tA0CAD5F0C6A7A4BD87DAC17C5DD3A6E4DF3A4939, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlWellFormedWriter_AttributeValueCache_ItemType
struct  ItemType_tB1E3A2FA752D676E0E73EC00CBF1A73D78C2F327 
{
public:
	// System.Int32 System.Xml.XmlWellFormedWriter_AttributeValueCache_ItemType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ItemType_tB1E3A2FA752D676E0E73EC00CBF1A73D78C2F327, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlWellFormedWriter_NamespaceKind
struct  NamespaceKind_t97A70AC8EF0DDB1B8CDE7E4AFEB6EA96532D14E9 
{
public:
	// System.Int32 System.Xml.XmlWellFormedWriter_NamespaceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NamespaceKind_t97A70AC8EF0DDB1B8CDE7E4AFEB6EA96532D14E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlWellFormedWriter_SpecialAttribute
struct  SpecialAttribute_t1F59A2D53F5B098BA7CF754300157CDEDC6FB5C8 
{
public:
	// System.Int32 System.Xml.XmlWellFormedWriter_SpecialAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialAttribute_t1F59A2D53F5B098BA7CF754300157CDEDC6FB5C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlWellFormedWriter_State
struct  State_t58AD22E78CE1BC9C431F14A1033D8BD71B673C34 
{
public:
	// System.Int32 System.Xml.XmlWellFormedWriter_State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t58AD22E78CE1BC9C431F14A1033D8BD71B673C34, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlWellFormedWriter_Token
struct  Token_t27D3DFEFCD1C1BD434D0191A87E543E5A8A8C0EF 
{
public:
	// System.Int32 System.Xml.XmlWellFormedWriter_Token::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Token_t27D3DFEFCD1C1BD434D0191A87E543E5A8A8C0EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.Net.Cache.RequestCachePolicy
struct  RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCacheLevel System.Net.Cache.RequestCachePolicy::m_Level
	int32_t ___m_Level_0;

public:
	inline static int32_t get_offset_of_m_Level_0() { return static_cast<int32_t>(offsetof(RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED, ___m_Level_0)); }
	inline int32_t get_m_Level_0() const { return ___m_Level_0; }
	inline int32_t* get_address_of_m_Level_0() { return &___m_Level_0; }
	inline void set_m_Level_0(int32_t value)
	{
		___m_Level_0 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.Task`1<System.IO.Stream>
struct  Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602, ___m_result_22)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_result_22() const { return ___m_result_22; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// System.Uri
struct  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_18)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// System.Xml.Schema.XmlSchemaParticle
struct  XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789  : public XmlSchemaAnnotated_t68F13E739330186883290FF723E752BD26F2E3A7
{
public:
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::minOccurs
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___minOccurs_0;
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::maxOccurs
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___maxOccurs_1;
	// System.Xml.Schema.XmlSchemaParticle_Occurs System.Xml.Schema.XmlSchemaParticle::flags
	int32_t ___flags_2;

public:
	inline static int32_t get_offset_of_minOccurs_0() { return static_cast<int32_t>(offsetof(XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789, ___minOccurs_0)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_minOccurs_0() const { return ___minOccurs_0; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_minOccurs_0() { return &___minOccurs_0; }
	inline void set_minOccurs_0(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___minOccurs_0 = value;
	}

	inline static int32_t get_offset_of_maxOccurs_1() { return static_cast<int32_t>(offsetof(XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789, ___maxOccurs_1)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_maxOccurs_1() const { return ___maxOccurs_1; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_maxOccurs_1() { return &___maxOccurs_1; }
	inline void set_maxOccurs_1(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___maxOccurs_1 = value;
	}

	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789, ___flags_2)); }
	inline int32_t get_flags_2() const { return ___flags_2; }
	inline int32_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(int32_t value)
	{
		___flags_2 = value;
	}
};

struct XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::Empty
	XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789 * ___Empty_3;

public:
	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789_StaticFields, ___Empty_3)); }
	inline XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789 * get_Empty_3() const { return ___Empty_3; }
	inline XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789 ** get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789 * value)
	{
		___Empty_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_3), (void*)value);
	}
};


// System.Xml.Schema.XsdDateTime_Parser
struct  Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 
{
public:
	// System.Xml.Schema.XsdDateTime_DateTimeTypeCode System.Xml.Schema.XsdDateTime_Parser::typeCode
	int32_t ___typeCode_0;
	// System.Int32 System.Xml.Schema.XsdDateTime_Parser::year
	int32_t ___year_1;
	// System.Int32 System.Xml.Schema.XsdDateTime_Parser::month
	int32_t ___month_2;
	// System.Int32 System.Xml.Schema.XsdDateTime_Parser::day
	int32_t ___day_3;
	// System.Int32 System.Xml.Schema.XsdDateTime_Parser::hour
	int32_t ___hour_4;
	// System.Int32 System.Xml.Schema.XsdDateTime_Parser::minute
	int32_t ___minute_5;
	// System.Int32 System.Xml.Schema.XsdDateTime_Parser::second
	int32_t ___second_6;
	// System.Int32 System.Xml.Schema.XsdDateTime_Parser::fraction
	int32_t ___fraction_7;
	// System.Xml.Schema.XsdDateTime_XsdDateTimeKind System.Xml.Schema.XsdDateTime_Parser::kind
	int32_t ___kind_8;
	// System.Int32 System.Xml.Schema.XsdDateTime_Parser::zoneHour
	int32_t ___zoneHour_9;
	// System.Int32 System.Xml.Schema.XsdDateTime_Parser::zoneMinute
	int32_t ___zoneMinute_10;
	// System.String System.Xml.Schema.XsdDateTime_Parser::text
	String_t* ___text_11;
	// System.Int32 System.Xml.Schema.XsdDateTime_Parser::length
	int32_t ___length_12;

public:
	inline static int32_t get_offset_of_typeCode_0() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___typeCode_0)); }
	inline int32_t get_typeCode_0() const { return ___typeCode_0; }
	inline int32_t* get_address_of_typeCode_0() { return &___typeCode_0; }
	inline void set_typeCode_0(int32_t value)
	{
		___typeCode_0 = value;
	}

	inline static int32_t get_offset_of_year_1() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___year_1)); }
	inline int32_t get_year_1() const { return ___year_1; }
	inline int32_t* get_address_of_year_1() { return &___year_1; }
	inline void set_year_1(int32_t value)
	{
		___year_1 = value;
	}

	inline static int32_t get_offset_of_month_2() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___month_2)); }
	inline int32_t get_month_2() const { return ___month_2; }
	inline int32_t* get_address_of_month_2() { return &___month_2; }
	inline void set_month_2(int32_t value)
	{
		___month_2 = value;
	}

	inline static int32_t get_offset_of_day_3() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___day_3)); }
	inline int32_t get_day_3() const { return ___day_3; }
	inline int32_t* get_address_of_day_3() { return &___day_3; }
	inline void set_day_3(int32_t value)
	{
		___day_3 = value;
	}

	inline static int32_t get_offset_of_hour_4() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___hour_4)); }
	inline int32_t get_hour_4() const { return ___hour_4; }
	inline int32_t* get_address_of_hour_4() { return &___hour_4; }
	inline void set_hour_4(int32_t value)
	{
		___hour_4 = value;
	}

	inline static int32_t get_offset_of_minute_5() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___minute_5)); }
	inline int32_t get_minute_5() const { return ___minute_5; }
	inline int32_t* get_address_of_minute_5() { return &___minute_5; }
	inline void set_minute_5(int32_t value)
	{
		___minute_5 = value;
	}

	inline static int32_t get_offset_of_second_6() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___second_6)); }
	inline int32_t get_second_6() const { return ___second_6; }
	inline int32_t* get_address_of_second_6() { return &___second_6; }
	inline void set_second_6(int32_t value)
	{
		___second_6 = value;
	}

	inline static int32_t get_offset_of_fraction_7() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___fraction_7)); }
	inline int32_t get_fraction_7() const { return ___fraction_7; }
	inline int32_t* get_address_of_fraction_7() { return &___fraction_7; }
	inline void set_fraction_7(int32_t value)
	{
		___fraction_7 = value;
	}

	inline static int32_t get_offset_of_kind_8() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___kind_8)); }
	inline int32_t get_kind_8() const { return ___kind_8; }
	inline int32_t* get_address_of_kind_8() { return &___kind_8; }
	inline void set_kind_8(int32_t value)
	{
		___kind_8 = value;
	}

	inline static int32_t get_offset_of_zoneHour_9() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___zoneHour_9)); }
	inline int32_t get_zoneHour_9() const { return ___zoneHour_9; }
	inline int32_t* get_address_of_zoneHour_9() { return &___zoneHour_9; }
	inline void set_zoneHour_9(int32_t value)
	{
		___zoneHour_9 = value;
	}

	inline static int32_t get_offset_of_zoneMinute_10() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___zoneMinute_10)); }
	inline int32_t get_zoneMinute_10() const { return ___zoneMinute_10; }
	inline int32_t* get_address_of_zoneMinute_10() { return &___zoneMinute_10; }
	inline void set_zoneMinute_10(int32_t value)
	{
		___zoneMinute_10 = value;
	}

	inline static int32_t get_offset_of_text_11() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___text_11)); }
	inline String_t* get_text_11() const { return ___text_11; }
	inline String_t** get_address_of_text_11() { return &___text_11; }
	inline void set_text_11(String_t* value)
	{
		___text_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_11), (void*)value);
	}

	inline static int32_t get_offset_of_length_12() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855, ___length_12)); }
	inline int32_t get_length_12() const { return ___length_12; }
	inline int32_t* get_address_of_length_12() { return &___length_12; }
	inline void set_length_12(int32_t value)
	{
		___length_12 = value;
	}
};

struct Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_StaticFields
{
public:
	// System.Int32[] System.Xml.Schema.XsdDateTime_Parser::Power10
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Power10_13;

public:
	inline static int32_t get_offset_of_Power10_13() { return static_cast<int32_t>(offsetof(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_StaticFields, ___Power10_13)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Power10_13() const { return ___Power10_13; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Power10_13() { return &___Power10_13; }
	inline void set_Power10_13(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Power10_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Power10_13), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.Schema.XsdDateTime/Parser
struct Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshaled_pinvoke
{
	int32_t ___typeCode_0;
	int32_t ___year_1;
	int32_t ___month_2;
	int32_t ___day_3;
	int32_t ___hour_4;
	int32_t ___minute_5;
	int32_t ___second_6;
	int32_t ___fraction_7;
	int32_t ___kind_8;
	int32_t ___zoneHour_9;
	int32_t ___zoneMinute_10;
	char* ___text_11;
	int32_t ___length_12;
};
// Native definition for COM marshalling of System.Xml.Schema.XsdDateTime/Parser
struct Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshaled_com
{
	int32_t ___typeCode_0;
	int32_t ___year_1;
	int32_t ___month_2;
	int32_t ___day_3;
	int32_t ___hour_4;
	int32_t ___minute_5;
	int32_t ___second_6;
	int32_t ___fraction_7;
	int32_t ___kind_8;
	int32_t ___zoneHour_9;
	int32_t ___zoneMinute_10;
	Il2CppChar* ___text_11;
	int32_t ___length_12;
};

// System.Xml.Serialization.XmlMapping
struct  XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9  : public RuntimeObject
{
public:
	// System.Xml.Serialization.ObjectMap System.Xml.Serialization.XmlMapping::map
	ObjectMap_t7A8443346E6A156B8D9173F81BB35A5A23992B5C * ___map_0;
	// System.Collections.ArrayList System.Xml.Serialization.XmlMapping::relatedMaps
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___relatedMaps_1;
	// System.Xml.Serialization.SerializationFormat System.Xml.Serialization.XmlMapping::format
	int32_t ___format_2;
	// System.String System.Xml.Serialization.XmlMapping::_elementName
	String_t* ____elementName_3;
	// System.String System.Xml.Serialization.XmlMapping::_namespace
	String_t* ____namespace_4;
	// System.String System.Xml.Serialization.XmlMapping::key
	String_t* ___key_5;

public:
	inline static int32_t get_offset_of_map_0() { return static_cast<int32_t>(offsetof(XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9, ___map_0)); }
	inline ObjectMap_t7A8443346E6A156B8D9173F81BB35A5A23992B5C * get_map_0() const { return ___map_0; }
	inline ObjectMap_t7A8443346E6A156B8D9173F81BB35A5A23992B5C ** get_address_of_map_0() { return &___map_0; }
	inline void set_map_0(ObjectMap_t7A8443346E6A156B8D9173F81BB35A5A23992B5C * value)
	{
		___map_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_0), (void*)value);
	}

	inline static int32_t get_offset_of_relatedMaps_1() { return static_cast<int32_t>(offsetof(XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9, ___relatedMaps_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_relatedMaps_1() const { return ___relatedMaps_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_relatedMaps_1() { return &___relatedMaps_1; }
	inline void set_relatedMaps_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___relatedMaps_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___relatedMaps_1), (void*)value);
	}

	inline static int32_t get_offset_of_format_2() { return static_cast<int32_t>(offsetof(XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9, ___format_2)); }
	inline int32_t get_format_2() const { return ___format_2; }
	inline int32_t* get_address_of_format_2() { return &___format_2; }
	inline void set_format_2(int32_t value)
	{
		___format_2 = value;
	}

	inline static int32_t get_offset_of__elementName_3() { return static_cast<int32_t>(offsetof(XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9, ____elementName_3)); }
	inline String_t* get__elementName_3() const { return ____elementName_3; }
	inline String_t** get_address_of__elementName_3() { return &____elementName_3; }
	inline void set__elementName_3(String_t* value)
	{
		____elementName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elementName_3), (void*)value);
	}

	inline static int32_t get_offset_of__namespace_4() { return static_cast<int32_t>(offsetof(XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9, ____namespace_4)); }
	inline String_t* get__namespace_4() const { return ____namespace_4; }
	inline String_t** get_address_of__namespace_4() { return &____namespace_4; }
	inline void set__namespace_4(String_t* value)
	{
		____namespace_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____namespace_4), (void*)value);
	}

	inline static int32_t get_offset_of_key_5() { return static_cast<int32_t>(offsetof(XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9, ___key_5)); }
	inline String_t* get_key_5() const { return ___key_5; }
	inline String_t** get_address_of_key_5() { return &___key_5; }
	inline void set_key_5(String_t* value)
	{
		___key_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_5), (void*)value);
	}
};


// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct  XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26  : public XmlSerializationReader_t6E81B5E062BBB91CE09BB405F96E262A2D2893CD
{
public:
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializationReaderInterpreter::_typeMap
	XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9 * ____typeMap_25;
	// System.Xml.Serialization.SerializationFormat System.Xml.Serialization.XmlSerializationReaderInterpreter::_format
	int32_t ____format_26;

public:
	inline static int32_t get_offset_of__typeMap_25() { return static_cast<int32_t>(offsetof(XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26, ____typeMap_25)); }
	inline XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9 * get__typeMap_25() const { return ____typeMap_25; }
	inline XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9 ** get_address_of__typeMap_25() { return &____typeMap_25; }
	inline void set__typeMap_25(XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9 * value)
	{
		____typeMap_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typeMap_25), (void*)value);
	}

	inline static int32_t get_offset_of__format_26() { return static_cast<int32_t>(offsetof(XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26, ____format_26)); }
	inline int32_t get__format_26() const { return ____format_26; }
	inline int32_t* get_address_of__format_26() { return &____format_26; }
	inline void set__format_26(int32_t value)
	{
		____format_26 = value;
	}
};

struct XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26_StaticFields
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReaderInterpreter::AnyType
	XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * ___AnyType_27;
	// System.Object[] System.Xml.Serialization.XmlSerializationReaderInterpreter::empty_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___empty_array_28;

public:
	inline static int32_t get_offset_of_AnyType_27() { return static_cast<int32_t>(offsetof(XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26_StaticFields, ___AnyType_27)); }
	inline XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * get_AnyType_27() const { return ___AnyType_27; }
	inline XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 ** get_address_of_AnyType_27() { return &___AnyType_27; }
	inline void set_AnyType_27(XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * value)
	{
		___AnyType_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnyType_27), (void*)value);
	}

	inline static int32_t get_offset_of_empty_array_28() { return static_cast<int32_t>(offsetof(XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26_StaticFields, ___empty_array_28)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_empty_array_28() const { return ___empty_array_28; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_empty_array_28() { return &___empty_array_28; }
	inline void set_empty_array_28(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___empty_array_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_array_28), (void*)value);
	}
};


// System.Xml.Serialization.XmlSerializationWriterInterpreter
struct  XmlSerializationWriterInterpreter_t5421FAFC8BE8D6DA736DF8A6DC1ADA79770CDB54  : public XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F
{
public:
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializationWriterInterpreter::_typeMap
	XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9 * ____typeMap_8;
	// System.Xml.Serialization.SerializationFormat System.Xml.Serialization.XmlSerializationWriterInterpreter::_format
	int32_t ____format_9;

public:
	inline static int32_t get_offset_of__typeMap_8() { return static_cast<int32_t>(offsetof(XmlSerializationWriterInterpreter_t5421FAFC8BE8D6DA736DF8A6DC1ADA79770CDB54, ____typeMap_8)); }
	inline XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9 * get__typeMap_8() const { return ____typeMap_8; }
	inline XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9 ** get_address_of__typeMap_8() { return &____typeMap_8; }
	inline void set__typeMap_8(XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9 * value)
	{
		____typeMap_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typeMap_8), (void*)value);
	}

	inline static int32_t get_offset_of__format_9() { return static_cast<int32_t>(offsetof(XmlSerializationWriterInterpreter_t5421FAFC8BE8D6DA736DF8A6DC1ADA79770CDB54, ____format_9)); }
	inline int32_t get__format_9() const { return ____format_9; }
	inline int32_t* get_address_of__format_9() { return &____format_9; }
	inline void set__format_9(int32_t value)
	{
		____format_9 = value;
	}
};


// System.Xml.XmlEventCache_XmlEvent
struct  XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 
{
public:
	// System.Xml.XmlEventCache_XmlEventType System.Xml.XmlEventCache_XmlEvent::eventType
	int32_t ___eventType_0;
	// System.String System.Xml.XmlEventCache_XmlEvent::s1
	String_t* ___s1_1;
	// System.String System.Xml.XmlEventCache_XmlEvent::s2
	String_t* ___s2_2;
	// System.String System.Xml.XmlEventCache_XmlEvent::s3
	String_t* ___s3_3;
	// System.Object System.Xml.XmlEventCache_XmlEvent::o
	RuntimeObject * ___o_4;

public:
	inline static int32_t get_offset_of_eventType_0() { return static_cast<int32_t>(offsetof(XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8, ___eventType_0)); }
	inline int32_t get_eventType_0() const { return ___eventType_0; }
	inline int32_t* get_address_of_eventType_0() { return &___eventType_0; }
	inline void set_eventType_0(int32_t value)
	{
		___eventType_0 = value;
	}

	inline static int32_t get_offset_of_s1_1() { return static_cast<int32_t>(offsetof(XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8, ___s1_1)); }
	inline String_t* get_s1_1() const { return ___s1_1; }
	inline String_t** get_address_of_s1_1() { return &___s1_1; }
	inline void set_s1_1(String_t* value)
	{
		___s1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s1_1), (void*)value);
	}

	inline static int32_t get_offset_of_s2_2() { return static_cast<int32_t>(offsetof(XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8, ___s2_2)); }
	inline String_t* get_s2_2() const { return ___s2_2; }
	inline String_t** get_address_of_s2_2() { return &___s2_2; }
	inline void set_s2_2(String_t* value)
	{
		___s2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s2_2), (void*)value);
	}

	inline static int32_t get_offset_of_s3_3() { return static_cast<int32_t>(offsetof(XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8, ___s3_3)); }
	inline String_t* get_s3_3() const { return ___s3_3; }
	inline String_t** get_address_of_s3_3() { return &___s3_3; }
	inline void set_s3_3(String_t* value)
	{
		___s3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s3_3), (void*)value);
	}

	inline static int32_t get_offset_of_o_4() { return static_cast<int32_t>(offsetof(XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8, ___o_4)); }
	inline RuntimeObject * get_o_4() const { return ___o_4; }
	inline RuntimeObject ** get_address_of_o_4() { return &___o_4; }
	inline void set_o_4(RuntimeObject * value)
	{
		___o_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___o_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlEventCache/XmlEvent
struct XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshaled_pinvoke
{
	int32_t ___eventType_0;
	char* ___s1_1;
	char* ___s2_2;
	char* ___s3_3;
	Il2CppIUnknown* ___o_4;
};
// Native definition for COM marshalling of System.Xml.XmlEventCache/XmlEvent
struct XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshaled_com
{
	int32_t ___eventType_0;
	Il2CppChar* ___s1_1;
	Il2CppChar* ___s2_2;
	Il2CppChar* ___s3_3;
	Il2CppIUnknown* ___o_4;
};

// System.Xml.XmlTextReaderImpl
struct  XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4  : public XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138
{
public:
	// System.Xml.XmlTextReaderImpl_LaterInitParam System.Xml.XmlTextReaderImpl::laterInitParam
	LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF * ___laterInitParam_3;
	// System.Xml.XmlCharType System.Xml.XmlTextReaderImpl::xmlCharType
	XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  ___xmlCharType_4;
	// System.Xml.XmlTextReaderImpl_ParsingState System.Xml.XmlTextReaderImpl::ps
	ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF  ___ps_5;
	// System.Xml.XmlTextReaderImpl_ParsingFunction System.Xml.XmlTextReaderImpl::parsingFunction
	int32_t ___parsingFunction_6;
	// System.Xml.XmlTextReaderImpl_ParsingFunction System.Xml.XmlTextReaderImpl::nextParsingFunction
	int32_t ___nextParsingFunction_7;
	// System.Xml.XmlTextReaderImpl_ParsingFunction System.Xml.XmlTextReaderImpl::nextNextParsingFunction
	int32_t ___nextNextParsingFunction_8;
	// System.Xml.XmlTextReaderImpl_NodeData[] System.Xml.XmlTextReaderImpl::nodes
	NodeDataU5BU5D_tF52E3FD243752A83F37BFD931C7C13C513A1CAB0* ___nodes_9;
	// System.Xml.XmlTextReaderImpl_NodeData System.Xml.XmlTextReaderImpl::curNode
	NodeData_tD504C5A621E7DD546954D87282438662327280EA * ___curNode_10;
	// System.Int32 System.Xml.XmlTextReaderImpl::index
	int32_t ___index_11;
	// System.Int32 System.Xml.XmlTextReaderImpl::curAttrIndex
	int32_t ___curAttrIndex_12;
	// System.Int32 System.Xml.XmlTextReaderImpl::attrCount
	int32_t ___attrCount_13;
	// System.Int32 System.Xml.XmlTextReaderImpl::attrHashtable
	int32_t ___attrHashtable_14;
	// System.Int32 System.Xml.XmlTextReaderImpl::attrDuplWalkCount
	int32_t ___attrDuplWalkCount_15;
	// System.Boolean System.Xml.XmlTextReaderImpl::attrNeedNamespaceLookup
	bool ___attrNeedNamespaceLookup_16;
	// System.Boolean System.Xml.XmlTextReaderImpl::fullAttrCleanup
	bool ___fullAttrCleanup_17;
	// System.Xml.XmlTextReaderImpl_NodeData[] System.Xml.XmlTextReaderImpl::attrDuplSortingArray
	NodeDataU5BU5D_tF52E3FD243752A83F37BFD931C7C13C513A1CAB0* ___attrDuplSortingArray_18;
	// System.Xml.XmlNameTable System.Xml.XmlTextReaderImpl::nameTable
	XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * ___nameTable_19;
	// System.Boolean System.Xml.XmlTextReaderImpl::nameTableFromSettings
	bool ___nameTableFromSettings_20;
	// System.Xml.XmlResolver System.Xml.XmlTextReaderImpl::xmlResolver
	XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * ___xmlResolver_21;
	// System.String System.Xml.XmlTextReaderImpl::url
	String_t* ___url_22;
	// System.Boolean System.Xml.XmlTextReaderImpl::normalize
	bool ___normalize_23;
	// System.Boolean System.Xml.XmlTextReaderImpl::supportNamespaces
	bool ___supportNamespaces_24;
	// System.Xml.WhitespaceHandling System.Xml.XmlTextReaderImpl::whitespaceHandling
	int32_t ___whitespaceHandling_25;
	// System.Xml.DtdProcessing System.Xml.XmlTextReaderImpl::dtdProcessing
	int32_t ___dtdProcessing_26;
	// System.Xml.EntityHandling System.Xml.XmlTextReaderImpl::entityHandling
	int32_t ___entityHandling_27;
	// System.Boolean System.Xml.XmlTextReaderImpl::ignorePIs
	bool ___ignorePIs_28;
	// System.Boolean System.Xml.XmlTextReaderImpl::ignoreComments
	bool ___ignoreComments_29;
	// System.Boolean System.Xml.XmlTextReaderImpl::checkCharacters
	bool ___checkCharacters_30;
	// System.Int32 System.Xml.XmlTextReaderImpl::lineNumberOffset
	int32_t ___lineNumberOffset_31;
	// System.Int32 System.Xml.XmlTextReaderImpl::linePositionOffset
	int32_t ___linePositionOffset_32;
	// System.Boolean System.Xml.XmlTextReaderImpl::closeInput
	bool ___closeInput_33;
	// System.Int64 System.Xml.XmlTextReaderImpl::maxCharactersInDocument
	int64_t ___maxCharactersInDocument_34;
	// System.Int64 System.Xml.XmlTextReaderImpl::maxCharactersFromEntities
	int64_t ___maxCharactersFromEntities_35;
	// System.Boolean System.Xml.XmlTextReaderImpl::v1Compat
	bool ___v1Compat_36;
	// System.Xml.XmlNamespaceManager System.Xml.XmlTextReaderImpl::namespaceManager
	XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 * ___namespaceManager_37;
	// System.String System.Xml.XmlTextReaderImpl::lastPrefix
	String_t* ___lastPrefix_38;
	// System.Xml.XmlTextReaderImpl_XmlContext System.Xml.XmlTextReaderImpl::xmlContext
	XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * ___xmlContext_39;
	// System.Xml.XmlTextReaderImpl_ParsingState[] System.Xml.XmlTextReaderImpl::parsingStatesStack
	ParsingStateU5BU5D_t76C574A7045A0E6E9113EF2F2E2B1A863D91376D* ___parsingStatesStack_40;
	// System.Int32 System.Xml.XmlTextReaderImpl::parsingStatesStackTop
	int32_t ___parsingStatesStackTop_41;
	// System.String System.Xml.XmlTextReaderImpl::reportedBaseUri
	String_t* ___reportedBaseUri_42;
	// System.Text.Encoding System.Xml.XmlTextReaderImpl::reportedEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___reportedEncoding_43;
	// System.Xml.IDtdInfo System.Xml.XmlTextReaderImpl::dtdInfo
	RuntimeObject* ___dtdInfo_44;
	// System.Xml.XmlNodeType System.Xml.XmlTextReaderImpl::fragmentType
	int32_t ___fragmentType_45;
	// System.Xml.XmlParserContext System.Xml.XmlTextReaderImpl::fragmentParserContext
	XmlParserContext_tD8B22CA52F41246D7FB94A21A2A5ED605DD4CD28 * ___fragmentParserContext_46;
	// System.Boolean System.Xml.XmlTextReaderImpl::fragment
	bool ___fragment_47;
	// System.Xml.IncrementalReadDecoder System.Xml.XmlTextReaderImpl::incReadDecoder
	IncrementalReadDecoder_t89737691013C036E9386839AE30A43C9721B3984 * ___incReadDecoder_48;
	// System.Xml.XmlTextReaderImpl_IncrementalReadState System.Xml.XmlTextReaderImpl::incReadState
	int32_t ___incReadState_49;
	// System.Xml.LineInfo System.Xml.XmlTextReaderImpl::incReadLineInfo
	LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  ___incReadLineInfo_50;
	// System.Int32 System.Xml.XmlTextReaderImpl::incReadDepth
	int32_t ___incReadDepth_51;
	// System.Int32 System.Xml.XmlTextReaderImpl::incReadLeftStartPos
	int32_t ___incReadLeftStartPos_52;
	// System.Int32 System.Xml.XmlTextReaderImpl::incReadLeftEndPos
	int32_t ___incReadLeftEndPos_53;
	// System.Int32 System.Xml.XmlTextReaderImpl::attributeValueBaseEntityId
	int32_t ___attributeValueBaseEntityId_54;
	// System.Boolean System.Xml.XmlTextReaderImpl::emptyEntityInAttributeResolved
	bool ___emptyEntityInAttributeResolved_55;
	// System.Xml.IValidationEventHandling System.Xml.XmlTextReaderImpl::validationEventHandling
	RuntimeObject* ___validationEventHandling_56;
	// System.Xml.XmlTextReaderImpl_OnDefaultAttributeUseDelegate System.Xml.XmlTextReaderImpl::onDefaultAttributeUse
	OnDefaultAttributeUseDelegate_t3E995824DB2F605D21E74880C851C4C6BB9A1E88 * ___onDefaultAttributeUse_57;
	// System.Boolean System.Xml.XmlTextReaderImpl::validatingReaderCompatFlag
	bool ___validatingReaderCompatFlag_58;
	// System.Boolean System.Xml.XmlTextReaderImpl::addDefaultAttributesAndNormalize
	bool ___addDefaultAttributesAndNormalize_59;
	// System.Text.StringBuilder System.Xml.XmlTextReaderImpl::stringBuilder
	StringBuilder_t * ___stringBuilder_60;
	// System.Boolean System.Xml.XmlTextReaderImpl::rootElementParsed
	bool ___rootElementParsed_61;
	// System.Boolean System.Xml.XmlTextReaderImpl::standalone
	bool ___standalone_62;
	// System.Int32 System.Xml.XmlTextReaderImpl::nextEntityId
	int32_t ___nextEntityId_63;
	// System.Xml.XmlTextReaderImpl_ParsingMode System.Xml.XmlTextReaderImpl::parsingMode
	int32_t ___parsingMode_64;
	// System.Xml.ReadState System.Xml.XmlTextReaderImpl::readState
	int32_t ___readState_65;
	// System.Xml.IDtdEntityInfo System.Xml.XmlTextReaderImpl::lastEntity
	RuntimeObject* ___lastEntity_66;
	// System.Boolean System.Xml.XmlTextReaderImpl::afterResetState
	bool ___afterResetState_67;
	// System.Int32 System.Xml.XmlTextReaderImpl::documentStartBytePos
	int32_t ___documentStartBytePos_68;
	// System.Int32 System.Xml.XmlTextReaderImpl::readValueOffset
	int32_t ___readValueOffset_69;
	// System.Int64 System.Xml.XmlTextReaderImpl::charactersInDocument
	int64_t ___charactersInDocument_70;
	// System.Int64 System.Xml.XmlTextReaderImpl::charactersFromEntities
	int64_t ___charactersFromEntities_71;
	// System.Collections.Generic.Dictionary`2<System.Xml.IDtdEntityInfo,System.Xml.IDtdEntityInfo> System.Xml.XmlTextReaderImpl::currentEntities
	Dictionary_2_t7E4F75E23B8A710084DDD8B7D9D901F39C24B184 * ___currentEntities_72;
	// System.Boolean System.Xml.XmlTextReaderImpl::disableUndeclaredEntityCheck
	bool ___disableUndeclaredEntityCheck_73;
	// System.Xml.XmlReader System.Xml.XmlTextReaderImpl::outerReader
	XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___outerReader_74;
	// System.Boolean System.Xml.XmlTextReaderImpl::xmlResolverIsSet
	bool ___xmlResolverIsSet_75;
	// System.String System.Xml.XmlTextReaderImpl::Xml
	String_t* ___Xml_76;
	// System.String System.Xml.XmlTextReaderImpl::XmlNs
	String_t* ___XmlNs_77;
	// System.Threading.Tasks.Task`1<System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>> System.Xml.XmlTextReaderImpl::parseText_dummyTask
	Task_1_tDC99D8BCBDBB4A01765BBF5823E5764CEC20D642 * ___parseText_dummyTask_78;

public:
	inline static int32_t get_offset_of_laterInitParam_3() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___laterInitParam_3)); }
	inline LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF * get_laterInitParam_3() const { return ___laterInitParam_3; }
	inline LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF ** get_address_of_laterInitParam_3() { return &___laterInitParam_3; }
	inline void set_laterInitParam_3(LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF * value)
	{
		___laterInitParam_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laterInitParam_3), (void*)value);
	}

	inline static int32_t get_offset_of_xmlCharType_4() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___xmlCharType_4)); }
	inline XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  get_xmlCharType_4() const { return ___xmlCharType_4; }
	inline XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA * get_address_of_xmlCharType_4() { return &___xmlCharType_4; }
	inline void set_xmlCharType_4(XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  value)
	{
		___xmlCharType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___xmlCharType_4))->___charProperties_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_ps_5() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___ps_5)); }
	inline ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF  get_ps_5() const { return ___ps_5; }
	inline ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * get_address_of_ps_5() { return &___ps_5; }
	inline void set_ps_5(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF  value)
	{
		___ps_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ps_5))->___chars_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ps_5))->___encoding_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ps_5))->___stream_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ps_5))->___decoder_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ps_5))->___bytes_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ps_5))->___textReader_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ps_5))->___baseUriStr_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ps_5))->___baseUri_14), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ps_5))->___entity_17), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_parsingFunction_6() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___parsingFunction_6)); }
	inline int32_t get_parsingFunction_6() const { return ___parsingFunction_6; }
	inline int32_t* get_address_of_parsingFunction_6() { return &___parsingFunction_6; }
	inline void set_parsingFunction_6(int32_t value)
	{
		___parsingFunction_6 = value;
	}

	inline static int32_t get_offset_of_nextParsingFunction_7() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___nextParsingFunction_7)); }
	inline int32_t get_nextParsingFunction_7() const { return ___nextParsingFunction_7; }
	inline int32_t* get_address_of_nextParsingFunction_7() { return &___nextParsingFunction_7; }
	inline void set_nextParsingFunction_7(int32_t value)
	{
		___nextParsingFunction_7 = value;
	}

	inline static int32_t get_offset_of_nextNextParsingFunction_8() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___nextNextParsingFunction_8)); }
	inline int32_t get_nextNextParsingFunction_8() const { return ___nextNextParsingFunction_8; }
	inline int32_t* get_address_of_nextNextParsingFunction_8() { return &___nextNextParsingFunction_8; }
	inline void set_nextNextParsingFunction_8(int32_t value)
	{
		___nextNextParsingFunction_8 = value;
	}

	inline static int32_t get_offset_of_nodes_9() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___nodes_9)); }
	inline NodeDataU5BU5D_tF52E3FD243752A83F37BFD931C7C13C513A1CAB0* get_nodes_9() const { return ___nodes_9; }
	inline NodeDataU5BU5D_tF52E3FD243752A83F37BFD931C7C13C513A1CAB0** get_address_of_nodes_9() { return &___nodes_9; }
	inline void set_nodes_9(NodeDataU5BU5D_tF52E3FD243752A83F37BFD931C7C13C513A1CAB0* value)
	{
		___nodes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodes_9), (void*)value);
	}

	inline static int32_t get_offset_of_curNode_10() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___curNode_10)); }
	inline NodeData_tD504C5A621E7DD546954D87282438662327280EA * get_curNode_10() const { return ___curNode_10; }
	inline NodeData_tD504C5A621E7DD546954D87282438662327280EA ** get_address_of_curNode_10() { return &___curNode_10; }
	inline void set_curNode_10(NodeData_tD504C5A621E7DD546954D87282438662327280EA * value)
	{
		___curNode_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curNode_10), (void*)value);
	}

	inline static int32_t get_offset_of_index_11() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___index_11)); }
	inline int32_t get_index_11() const { return ___index_11; }
	inline int32_t* get_address_of_index_11() { return &___index_11; }
	inline void set_index_11(int32_t value)
	{
		___index_11 = value;
	}

	inline static int32_t get_offset_of_curAttrIndex_12() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___curAttrIndex_12)); }
	inline int32_t get_curAttrIndex_12() const { return ___curAttrIndex_12; }
	inline int32_t* get_address_of_curAttrIndex_12() { return &___curAttrIndex_12; }
	inline void set_curAttrIndex_12(int32_t value)
	{
		___curAttrIndex_12 = value;
	}

	inline static int32_t get_offset_of_attrCount_13() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___attrCount_13)); }
	inline int32_t get_attrCount_13() const { return ___attrCount_13; }
	inline int32_t* get_address_of_attrCount_13() { return &___attrCount_13; }
	inline void set_attrCount_13(int32_t value)
	{
		___attrCount_13 = value;
	}

	inline static int32_t get_offset_of_attrHashtable_14() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___attrHashtable_14)); }
	inline int32_t get_attrHashtable_14() const { return ___attrHashtable_14; }
	inline int32_t* get_address_of_attrHashtable_14() { return &___attrHashtable_14; }
	inline void set_attrHashtable_14(int32_t value)
	{
		___attrHashtable_14 = value;
	}

	inline static int32_t get_offset_of_attrDuplWalkCount_15() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___attrDuplWalkCount_15)); }
	inline int32_t get_attrDuplWalkCount_15() const { return ___attrDuplWalkCount_15; }
	inline int32_t* get_address_of_attrDuplWalkCount_15() { return &___attrDuplWalkCount_15; }
	inline void set_attrDuplWalkCount_15(int32_t value)
	{
		___attrDuplWalkCount_15 = value;
	}

	inline static int32_t get_offset_of_attrNeedNamespaceLookup_16() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___attrNeedNamespaceLookup_16)); }
	inline bool get_attrNeedNamespaceLookup_16() const { return ___attrNeedNamespaceLookup_16; }
	inline bool* get_address_of_attrNeedNamespaceLookup_16() { return &___attrNeedNamespaceLookup_16; }
	inline void set_attrNeedNamespaceLookup_16(bool value)
	{
		___attrNeedNamespaceLookup_16 = value;
	}

	inline static int32_t get_offset_of_fullAttrCleanup_17() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___fullAttrCleanup_17)); }
	inline bool get_fullAttrCleanup_17() const { return ___fullAttrCleanup_17; }
	inline bool* get_address_of_fullAttrCleanup_17() { return &___fullAttrCleanup_17; }
	inline void set_fullAttrCleanup_17(bool value)
	{
		___fullAttrCleanup_17 = value;
	}

	inline static int32_t get_offset_of_attrDuplSortingArray_18() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___attrDuplSortingArray_18)); }
	inline NodeDataU5BU5D_tF52E3FD243752A83F37BFD931C7C13C513A1CAB0* get_attrDuplSortingArray_18() const { return ___attrDuplSortingArray_18; }
	inline NodeDataU5BU5D_tF52E3FD243752A83F37BFD931C7C13C513A1CAB0** get_address_of_attrDuplSortingArray_18() { return &___attrDuplSortingArray_18; }
	inline void set_attrDuplSortingArray_18(NodeDataU5BU5D_tF52E3FD243752A83F37BFD931C7C13C513A1CAB0* value)
	{
		___attrDuplSortingArray_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attrDuplSortingArray_18), (void*)value);
	}

	inline static int32_t get_offset_of_nameTable_19() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___nameTable_19)); }
	inline XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * get_nameTable_19() const { return ___nameTable_19; }
	inline XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 ** get_address_of_nameTable_19() { return &___nameTable_19; }
	inline void set_nameTable_19(XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * value)
	{
		___nameTable_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameTable_19), (void*)value);
	}

	inline static int32_t get_offset_of_nameTableFromSettings_20() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___nameTableFromSettings_20)); }
	inline bool get_nameTableFromSettings_20() const { return ___nameTableFromSettings_20; }
	inline bool* get_address_of_nameTableFromSettings_20() { return &___nameTableFromSettings_20; }
	inline void set_nameTableFromSettings_20(bool value)
	{
		___nameTableFromSettings_20 = value;
	}

	inline static int32_t get_offset_of_xmlResolver_21() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___xmlResolver_21)); }
	inline XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * get_xmlResolver_21() const { return ___xmlResolver_21; }
	inline XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A ** get_address_of_xmlResolver_21() { return &___xmlResolver_21; }
	inline void set_xmlResolver_21(XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * value)
	{
		___xmlResolver_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlResolver_21), (void*)value);
	}

	inline static int32_t get_offset_of_url_22() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___url_22)); }
	inline String_t* get_url_22() const { return ___url_22; }
	inline String_t** get_address_of_url_22() { return &___url_22; }
	inline void set_url_22(String_t* value)
	{
		___url_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_22), (void*)value);
	}

	inline static int32_t get_offset_of_normalize_23() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___normalize_23)); }
	inline bool get_normalize_23() const { return ___normalize_23; }
	inline bool* get_address_of_normalize_23() { return &___normalize_23; }
	inline void set_normalize_23(bool value)
	{
		___normalize_23 = value;
	}

	inline static int32_t get_offset_of_supportNamespaces_24() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___supportNamespaces_24)); }
	inline bool get_supportNamespaces_24() const { return ___supportNamespaces_24; }
	inline bool* get_address_of_supportNamespaces_24() { return &___supportNamespaces_24; }
	inline void set_supportNamespaces_24(bool value)
	{
		___supportNamespaces_24 = value;
	}

	inline static int32_t get_offset_of_whitespaceHandling_25() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___whitespaceHandling_25)); }
	inline int32_t get_whitespaceHandling_25() const { return ___whitespaceHandling_25; }
	inline int32_t* get_address_of_whitespaceHandling_25() { return &___whitespaceHandling_25; }
	inline void set_whitespaceHandling_25(int32_t value)
	{
		___whitespaceHandling_25 = value;
	}

	inline static int32_t get_offset_of_dtdProcessing_26() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___dtdProcessing_26)); }
	inline int32_t get_dtdProcessing_26() const { return ___dtdProcessing_26; }
	inline int32_t* get_address_of_dtdProcessing_26() { return &___dtdProcessing_26; }
	inline void set_dtdProcessing_26(int32_t value)
	{
		___dtdProcessing_26 = value;
	}

	inline static int32_t get_offset_of_entityHandling_27() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___entityHandling_27)); }
	inline int32_t get_entityHandling_27() const { return ___entityHandling_27; }
	inline int32_t* get_address_of_entityHandling_27() { return &___entityHandling_27; }
	inline void set_entityHandling_27(int32_t value)
	{
		___entityHandling_27 = value;
	}

	inline static int32_t get_offset_of_ignorePIs_28() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___ignorePIs_28)); }
	inline bool get_ignorePIs_28() const { return ___ignorePIs_28; }
	inline bool* get_address_of_ignorePIs_28() { return &___ignorePIs_28; }
	inline void set_ignorePIs_28(bool value)
	{
		___ignorePIs_28 = value;
	}

	inline static int32_t get_offset_of_ignoreComments_29() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___ignoreComments_29)); }
	inline bool get_ignoreComments_29() const { return ___ignoreComments_29; }
	inline bool* get_address_of_ignoreComments_29() { return &___ignoreComments_29; }
	inline void set_ignoreComments_29(bool value)
	{
		___ignoreComments_29 = value;
	}

	inline static int32_t get_offset_of_checkCharacters_30() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___checkCharacters_30)); }
	inline bool get_checkCharacters_30() const { return ___checkCharacters_30; }
	inline bool* get_address_of_checkCharacters_30() { return &___checkCharacters_30; }
	inline void set_checkCharacters_30(bool value)
	{
		___checkCharacters_30 = value;
	}

	inline static int32_t get_offset_of_lineNumberOffset_31() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___lineNumberOffset_31)); }
	inline int32_t get_lineNumberOffset_31() const { return ___lineNumberOffset_31; }
	inline int32_t* get_address_of_lineNumberOffset_31() { return &___lineNumberOffset_31; }
	inline void set_lineNumberOffset_31(int32_t value)
	{
		___lineNumberOffset_31 = value;
	}

	inline static int32_t get_offset_of_linePositionOffset_32() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___linePositionOffset_32)); }
	inline int32_t get_linePositionOffset_32() const { return ___linePositionOffset_32; }
	inline int32_t* get_address_of_linePositionOffset_32() { return &___linePositionOffset_32; }
	inline void set_linePositionOffset_32(int32_t value)
	{
		___linePositionOffset_32 = value;
	}

	inline static int32_t get_offset_of_closeInput_33() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___closeInput_33)); }
	inline bool get_closeInput_33() const { return ___closeInput_33; }
	inline bool* get_address_of_closeInput_33() { return &___closeInput_33; }
	inline void set_closeInput_33(bool value)
	{
		___closeInput_33 = value;
	}

	inline static int32_t get_offset_of_maxCharactersInDocument_34() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___maxCharactersInDocument_34)); }
	inline int64_t get_maxCharactersInDocument_34() const { return ___maxCharactersInDocument_34; }
	inline int64_t* get_address_of_maxCharactersInDocument_34() { return &___maxCharactersInDocument_34; }
	inline void set_maxCharactersInDocument_34(int64_t value)
	{
		___maxCharactersInDocument_34 = value;
	}

	inline static int32_t get_offset_of_maxCharactersFromEntities_35() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___maxCharactersFromEntities_35)); }
	inline int64_t get_maxCharactersFromEntities_35() const { return ___maxCharactersFromEntities_35; }
	inline int64_t* get_address_of_maxCharactersFromEntities_35() { return &___maxCharactersFromEntities_35; }
	inline void set_maxCharactersFromEntities_35(int64_t value)
	{
		___maxCharactersFromEntities_35 = value;
	}

	inline static int32_t get_offset_of_v1Compat_36() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___v1Compat_36)); }
	inline bool get_v1Compat_36() const { return ___v1Compat_36; }
	inline bool* get_address_of_v1Compat_36() { return &___v1Compat_36; }
	inline void set_v1Compat_36(bool value)
	{
		___v1Compat_36 = value;
	}

	inline static int32_t get_offset_of_namespaceManager_37() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___namespaceManager_37)); }
	inline XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 * get_namespaceManager_37() const { return ___namespaceManager_37; }
	inline XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 ** get_address_of_namespaceManager_37() { return &___namespaceManager_37; }
	inline void set_namespaceManager_37(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 * value)
	{
		___namespaceManager_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceManager_37), (void*)value);
	}

	inline static int32_t get_offset_of_lastPrefix_38() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___lastPrefix_38)); }
	inline String_t* get_lastPrefix_38() const { return ___lastPrefix_38; }
	inline String_t** get_address_of_lastPrefix_38() { return &___lastPrefix_38; }
	inline void set_lastPrefix_38(String_t* value)
	{
		___lastPrefix_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastPrefix_38), (void*)value);
	}

	inline static int32_t get_offset_of_xmlContext_39() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___xmlContext_39)); }
	inline XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * get_xmlContext_39() const { return ___xmlContext_39; }
	inline XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D ** get_address_of_xmlContext_39() { return &___xmlContext_39; }
	inline void set_xmlContext_39(XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * value)
	{
		___xmlContext_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlContext_39), (void*)value);
	}

	inline static int32_t get_offset_of_parsingStatesStack_40() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___parsingStatesStack_40)); }
	inline ParsingStateU5BU5D_t76C574A7045A0E6E9113EF2F2E2B1A863D91376D* get_parsingStatesStack_40() const { return ___parsingStatesStack_40; }
	inline ParsingStateU5BU5D_t76C574A7045A0E6E9113EF2F2E2B1A863D91376D** get_address_of_parsingStatesStack_40() { return &___parsingStatesStack_40; }
	inline void set_parsingStatesStack_40(ParsingStateU5BU5D_t76C574A7045A0E6E9113EF2F2E2B1A863D91376D* value)
	{
		___parsingStatesStack_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parsingStatesStack_40), (void*)value);
	}

	inline static int32_t get_offset_of_parsingStatesStackTop_41() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___parsingStatesStackTop_41)); }
	inline int32_t get_parsingStatesStackTop_41() const { return ___parsingStatesStackTop_41; }
	inline int32_t* get_address_of_parsingStatesStackTop_41() { return &___parsingStatesStackTop_41; }
	inline void set_parsingStatesStackTop_41(int32_t value)
	{
		___parsingStatesStackTop_41 = value;
	}

	inline static int32_t get_offset_of_reportedBaseUri_42() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___reportedBaseUri_42)); }
	inline String_t* get_reportedBaseUri_42() const { return ___reportedBaseUri_42; }
	inline String_t** get_address_of_reportedBaseUri_42() { return &___reportedBaseUri_42; }
	inline void set_reportedBaseUri_42(String_t* value)
	{
		___reportedBaseUri_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reportedBaseUri_42), (void*)value);
	}

	inline static int32_t get_offset_of_reportedEncoding_43() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___reportedEncoding_43)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_reportedEncoding_43() const { return ___reportedEncoding_43; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_reportedEncoding_43() { return &___reportedEncoding_43; }
	inline void set_reportedEncoding_43(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___reportedEncoding_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reportedEncoding_43), (void*)value);
	}

	inline static int32_t get_offset_of_dtdInfo_44() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___dtdInfo_44)); }
	inline RuntimeObject* get_dtdInfo_44() const { return ___dtdInfo_44; }
	inline RuntimeObject** get_address_of_dtdInfo_44() { return &___dtdInfo_44; }
	inline void set_dtdInfo_44(RuntimeObject* value)
	{
		___dtdInfo_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dtdInfo_44), (void*)value);
	}

	inline static int32_t get_offset_of_fragmentType_45() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___fragmentType_45)); }
	inline int32_t get_fragmentType_45() const { return ___fragmentType_45; }
	inline int32_t* get_address_of_fragmentType_45() { return &___fragmentType_45; }
	inline void set_fragmentType_45(int32_t value)
	{
		___fragmentType_45 = value;
	}

	inline static int32_t get_offset_of_fragmentParserContext_46() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___fragmentParserContext_46)); }
	inline XmlParserContext_tD8B22CA52F41246D7FB94A21A2A5ED605DD4CD28 * get_fragmentParserContext_46() const { return ___fragmentParserContext_46; }
	inline XmlParserContext_tD8B22CA52F41246D7FB94A21A2A5ED605DD4CD28 ** get_address_of_fragmentParserContext_46() { return &___fragmentParserContext_46; }
	inline void set_fragmentParserContext_46(XmlParserContext_tD8B22CA52F41246D7FB94A21A2A5ED605DD4CD28 * value)
	{
		___fragmentParserContext_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fragmentParserContext_46), (void*)value);
	}

	inline static int32_t get_offset_of_fragment_47() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___fragment_47)); }
	inline bool get_fragment_47() const { return ___fragment_47; }
	inline bool* get_address_of_fragment_47() { return &___fragment_47; }
	inline void set_fragment_47(bool value)
	{
		___fragment_47 = value;
	}

	inline static int32_t get_offset_of_incReadDecoder_48() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___incReadDecoder_48)); }
	inline IncrementalReadDecoder_t89737691013C036E9386839AE30A43C9721B3984 * get_incReadDecoder_48() const { return ___incReadDecoder_48; }
	inline IncrementalReadDecoder_t89737691013C036E9386839AE30A43C9721B3984 ** get_address_of_incReadDecoder_48() { return &___incReadDecoder_48; }
	inline void set_incReadDecoder_48(IncrementalReadDecoder_t89737691013C036E9386839AE30A43C9721B3984 * value)
	{
		___incReadDecoder_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___incReadDecoder_48), (void*)value);
	}

	inline static int32_t get_offset_of_incReadState_49() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___incReadState_49)); }
	inline int32_t get_incReadState_49() const { return ___incReadState_49; }
	inline int32_t* get_address_of_incReadState_49() { return &___incReadState_49; }
	inline void set_incReadState_49(int32_t value)
	{
		___incReadState_49 = value;
	}

	inline static int32_t get_offset_of_incReadLineInfo_50() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___incReadLineInfo_50)); }
	inline LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  get_incReadLineInfo_50() const { return ___incReadLineInfo_50; }
	inline LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE * get_address_of_incReadLineInfo_50() { return &___incReadLineInfo_50; }
	inline void set_incReadLineInfo_50(LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  value)
	{
		___incReadLineInfo_50 = value;
	}

	inline static int32_t get_offset_of_incReadDepth_51() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___incReadDepth_51)); }
	inline int32_t get_incReadDepth_51() const { return ___incReadDepth_51; }
	inline int32_t* get_address_of_incReadDepth_51() { return &___incReadDepth_51; }
	inline void set_incReadDepth_51(int32_t value)
	{
		___incReadDepth_51 = value;
	}

	inline static int32_t get_offset_of_incReadLeftStartPos_52() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___incReadLeftStartPos_52)); }
	inline int32_t get_incReadLeftStartPos_52() const { return ___incReadLeftStartPos_52; }
	inline int32_t* get_address_of_incReadLeftStartPos_52() { return &___incReadLeftStartPos_52; }
	inline void set_incReadLeftStartPos_52(int32_t value)
	{
		___incReadLeftStartPos_52 = value;
	}

	inline static int32_t get_offset_of_incReadLeftEndPos_53() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___incReadLeftEndPos_53)); }
	inline int32_t get_incReadLeftEndPos_53() const { return ___incReadLeftEndPos_53; }
	inline int32_t* get_address_of_incReadLeftEndPos_53() { return &___incReadLeftEndPos_53; }
	inline void set_incReadLeftEndPos_53(int32_t value)
	{
		___incReadLeftEndPos_53 = value;
	}

	inline static int32_t get_offset_of_attributeValueBaseEntityId_54() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___attributeValueBaseEntityId_54)); }
	inline int32_t get_attributeValueBaseEntityId_54() const { return ___attributeValueBaseEntityId_54; }
	inline int32_t* get_address_of_attributeValueBaseEntityId_54() { return &___attributeValueBaseEntityId_54; }
	inline void set_attributeValueBaseEntityId_54(int32_t value)
	{
		___attributeValueBaseEntityId_54 = value;
	}

	inline static int32_t get_offset_of_emptyEntityInAttributeResolved_55() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___emptyEntityInAttributeResolved_55)); }
	inline bool get_emptyEntityInAttributeResolved_55() const { return ___emptyEntityInAttributeResolved_55; }
	inline bool* get_address_of_emptyEntityInAttributeResolved_55() { return &___emptyEntityInAttributeResolved_55; }
	inline void set_emptyEntityInAttributeResolved_55(bool value)
	{
		___emptyEntityInAttributeResolved_55 = value;
	}

	inline static int32_t get_offset_of_validationEventHandling_56() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___validationEventHandling_56)); }
	inline RuntimeObject* get_validationEventHandling_56() const { return ___validationEventHandling_56; }
	inline RuntimeObject** get_address_of_validationEventHandling_56() { return &___validationEventHandling_56; }
	inline void set_validationEventHandling_56(RuntimeObject* value)
	{
		___validationEventHandling_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___validationEventHandling_56), (void*)value);
	}

	inline static int32_t get_offset_of_onDefaultAttributeUse_57() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___onDefaultAttributeUse_57)); }
	inline OnDefaultAttributeUseDelegate_t3E995824DB2F605D21E74880C851C4C6BB9A1E88 * get_onDefaultAttributeUse_57() const { return ___onDefaultAttributeUse_57; }
	inline OnDefaultAttributeUseDelegate_t3E995824DB2F605D21E74880C851C4C6BB9A1E88 ** get_address_of_onDefaultAttributeUse_57() { return &___onDefaultAttributeUse_57; }
	inline void set_onDefaultAttributeUse_57(OnDefaultAttributeUseDelegate_t3E995824DB2F605D21E74880C851C4C6BB9A1E88 * value)
	{
		___onDefaultAttributeUse_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDefaultAttributeUse_57), (void*)value);
	}

	inline static int32_t get_offset_of_validatingReaderCompatFlag_58() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___validatingReaderCompatFlag_58)); }
	inline bool get_validatingReaderCompatFlag_58() const { return ___validatingReaderCompatFlag_58; }
	inline bool* get_address_of_validatingReaderCompatFlag_58() { return &___validatingReaderCompatFlag_58; }
	inline void set_validatingReaderCompatFlag_58(bool value)
	{
		___validatingReaderCompatFlag_58 = value;
	}

	inline static int32_t get_offset_of_addDefaultAttributesAndNormalize_59() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___addDefaultAttributesAndNormalize_59)); }
	inline bool get_addDefaultAttributesAndNormalize_59() const { return ___addDefaultAttributesAndNormalize_59; }
	inline bool* get_address_of_addDefaultAttributesAndNormalize_59() { return &___addDefaultAttributesAndNormalize_59; }
	inline void set_addDefaultAttributesAndNormalize_59(bool value)
	{
		___addDefaultAttributesAndNormalize_59 = value;
	}

	inline static int32_t get_offset_of_stringBuilder_60() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___stringBuilder_60)); }
	inline StringBuilder_t * get_stringBuilder_60() const { return ___stringBuilder_60; }
	inline StringBuilder_t ** get_address_of_stringBuilder_60() { return &___stringBuilder_60; }
	inline void set_stringBuilder_60(StringBuilder_t * value)
	{
		___stringBuilder_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringBuilder_60), (void*)value);
	}

	inline static int32_t get_offset_of_rootElementParsed_61() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___rootElementParsed_61)); }
	inline bool get_rootElementParsed_61() const { return ___rootElementParsed_61; }
	inline bool* get_address_of_rootElementParsed_61() { return &___rootElementParsed_61; }
	inline void set_rootElementParsed_61(bool value)
	{
		___rootElementParsed_61 = value;
	}

	inline static int32_t get_offset_of_standalone_62() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___standalone_62)); }
	inline bool get_standalone_62() const { return ___standalone_62; }
	inline bool* get_address_of_standalone_62() { return &___standalone_62; }
	inline void set_standalone_62(bool value)
	{
		___standalone_62 = value;
	}

	inline static int32_t get_offset_of_nextEntityId_63() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___nextEntityId_63)); }
	inline int32_t get_nextEntityId_63() const { return ___nextEntityId_63; }
	inline int32_t* get_address_of_nextEntityId_63() { return &___nextEntityId_63; }
	inline void set_nextEntityId_63(int32_t value)
	{
		___nextEntityId_63 = value;
	}

	inline static int32_t get_offset_of_parsingMode_64() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___parsingMode_64)); }
	inline int32_t get_parsingMode_64() const { return ___parsingMode_64; }
	inline int32_t* get_address_of_parsingMode_64() { return &___parsingMode_64; }
	inline void set_parsingMode_64(int32_t value)
	{
		___parsingMode_64 = value;
	}

	inline static int32_t get_offset_of_readState_65() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___readState_65)); }
	inline int32_t get_readState_65() const { return ___readState_65; }
	inline int32_t* get_address_of_readState_65() { return &___readState_65; }
	inline void set_readState_65(int32_t value)
	{
		___readState_65 = value;
	}

	inline static int32_t get_offset_of_lastEntity_66() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___lastEntity_66)); }
	inline RuntimeObject* get_lastEntity_66() const { return ___lastEntity_66; }
	inline RuntimeObject** get_address_of_lastEntity_66() { return &___lastEntity_66; }
	inline void set_lastEntity_66(RuntimeObject* value)
	{
		___lastEntity_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastEntity_66), (void*)value);
	}

	inline static int32_t get_offset_of_afterResetState_67() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___afterResetState_67)); }
	inline bool get_afterResetState_67() const { return ___afterResetState_67; }
	inline bool* get_address_of_afterResetState_67() { return &___afterResetState_67; }
	inline void set_afterResetState_67(bool value)
	{
		___afterResetState_67 = value;
	}

	inline static int32_t get_offset_of_documentStartBytePos_68() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___documentStartBytePos_68)); }
	inline int32_t get_documentStartBytePos_68() const { return ___documentStartBytePos_68; }
	inline int32_t* get_address_of_documentStartBytePos_68() { return &___documentStartBytePos_68; }
	inline void set_documentStartBytePos_68(int32_t value)
	{
		___documentStartBytePos_68 = value;
	}

	inline static int32_t get_offset_of_readValueOffset_69() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___readValueOffset_69)); }
	inline int32_t get_readValueOffset_69() const { return ___readValueOffset_69; }
	inline int32_t* get_address_of_readValueOffset_69() { return &___readValueOffset_69; }
	inline void set_readValueOffset_69(int32_t value)
	{
		___readValueOffset_69 = value;
	}

	inline static int32_t get_offset_of_charactersInDocument_70() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___charactersInDocument_70)); }
	inline int64_t get_charactersInDocument_70() const { return ___charactersInDocument_70; }
	inline int64_t* get_address_of_charactersInDocument_70() { return &___charactersInDocument_70; }
	inline void set_charactersInDocument_70(int64_t value)
	{
		___charactersInDocument_70 = value;
	}

	inline static int32_t get_offset_of_charactersFromEntities_71() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___charactersFromEntities_71)); }
	inline int64_t get_charactersFromEntities_71() const { return ___charactersFromEntities_71; }
	inline int64_t* get_address_of_charactersFromEntities_71() { return &___charactersFromEntities_71; }
	inline void set_charactersFromEntities_71(int64_t value)
	{
		___charactersFromEntities_71 = value;
	}

	inline static int32_t get_offset_of_currentEntities_72() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___currentEntities_72)); }
	inline Dictionary_2_t7E4F75E23B8A710084DDD8B7D9D901F39C24B184 * get_currentEntities_72() const { return ___currentEntities_72; }
	inline Dictionary_2_t7E4F75E23B8A710084DDD8B7D9D901F39C24B184 ** get_address_of_currentEntities_72() { return &___currentEntities_72; }
	inline void set_currentEntities_72(Dictionary_2_t7E4F75E23B8A710084DDD8B7D9D901F39C24B184 * value)
	{
		___currentEntities_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentEntities_72), (void*)value);
	}

	inline static int32_t get_offset_of_disableUndeclaredEntityCheck_73() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___disableUndeclaredEntityCheck_73)); }
	inline bool get_disableUndeclaredEntityCheck_73() const { return ___disableUndeclaredEntityCheck_73; }
	inline bool* get_address_of_disableUndeclaredEntityCheck_73() { return &___disableUndeclaredEntityCheck_73; }
	inline void set_disableUndeclaredEntityCheck_73(bool value)
	{
		___disableUndeclaredEntityCheck_73 = value;
	}

	inline static int32_t get_offset_of_outerReader_74() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___outerReader_74)); }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * get_outerReader_74() const { return ___outerReader_74; }
	inline XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 ** get_address_of_outerReader_74() { return &___outerReader_74; }
	inline void set_outerReader_74(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * value)
	{
		___outerReader_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outerReader_74), (void*)value);
	}

	inline static int32_t get_offset_of_xmlResolverIsSet_75() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___xmlResolverIsSet_75)); }
	inline bool get_xmlResolverIsSet_75() const { return ___xmlResolverIsSet_75; }
	inline bool* get_address_of_xmlResolverIsSet_75() { return &___xmlResolverIsSet_75; }
	inline void set_xmlResolverIsSet_75(bool value)
	{
		___xmlResolverIsSet_75 = value;
	}

	inline static int32_t get_offset_of_Xml_76() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___Xml_76)); }
	inline String_t* get_Xml_76() const { return ___Xml_76; }
	inline String_t** get_address_of_Xml_76() { return &___Xml_76; }
	inline void set_Xml_76(String_t* value)
	{
		___Xml_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Xml_76), (void*)value);
	}

	inline static int32_t get_offset_of_XmlNs_77() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___XmlNs_77)); }
	inline String_t* get_XmlNs_77() const { return ___XmlNs_77; }
	inline String_t** get_address_of_XmlNs_77() { return &___XmlNs_77; }
	inline void set_XmlNs_77(String_t* value)
	{
		___XmlNs_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XmlNs_77), (void*)value);
	}

	inline static int32_t get_offset_of_parseText_dummyTask_78() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4, ___parseText_dummyTask_78)); }
	inline Task_1_tDC99D8BCBDBB4A01765BBF5823E5764CEC20D642 * get_parseText_dummyTask_78() const { return ___parseText_dummyTask_78; }
	inline Task_1_tDC99D8BCBDBB4A01765BBF5823E5764CEC20D642 ** get_address_of_parseText_dummyTask_78() { return &___parseText_dummyTask_78; }
	inline void set_parseText_dummyTask_78(Task_1_tDC99D8BCBDBB4A01765BBF5823E5764CEC20D642 * value)
	{
		___parseText_dummyTask_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parseText_dummyTask_78), (void*)value);
	}
};


// System.Xml.XmlTextReaderImpl_LaterInitParam
struct  LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlTextReaderImpl_LaterInitParam::useAsync
	bool ___useAsync_0;
	// System.IO.Stream System.Xml.XmlTextReaderImpl_LaterInitParam::inputStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___inputStream_1;
	// System.Byte[] System.Xml.XmlTextReaderImpl_LaterInitParam::inputBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inputBytes_2;
	// System.Int32 System.Xml.XmlTextReaderImpl_LaterInitParam::inputByteCount
	int32_t ___inputByteCount_3;
	// System.Uri System.Xml.XmlTextReaderImpl_LaterInitParam::inputbaseUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___inputbaseUri_4;
	// System.String System.Xml.XmlTextReaderImpl_LaterInitParam::inputUriStr
	String_t* ___inputUriStr_5;
	// System.Xml.XmlResolver System.Xml.XmlTextReaderImpl_LaterInitParam::inputUriResolver
	XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * ___inputUriResolver_6;
	// System.Xml.XmlParserContext System.Xml.XmlTextReaderImpl_LaterInitParam::inputContext
	XmlParserContext_tD8B22CA52F41246D7FB94A21A2A5ED605DD4CD28 * ___inputContext_7;
	// System.IO.TextReader System.Xml.XmlTextReaderImpl_LaterInitParam::inputTextReader
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___inputTextReader_8;
	// System.Xml.XmlTextReaderImpl_InitInputType System.Xml.XmlTextReaderImpl_LaterInitParam::initType
	int32_t ___initType_9;

public:
	inline static int32_t get_offset_of_useAsync_0() { return static_cast<int32_t>(offsetof(LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF, ___useAsync_0)); }
	inline bool get_useAsync_0() const { return ___useAsync_0; }
	inline bool* get_address_of_useAsync_0() { return &___useAsync_0; }
	inline void set_useAsync_0(bool value)
	{
		___useAsync_0 = value;
	}

	inline static int32_t get_offset_of_inputStream_1() { return static_cast<int32_t>(offsetof(LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF, ___inputStream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_inputStream_1() const { return ___inputStream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_inputStream_1() { return &___inputStream_1; }
	inline void set_inputStream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___inputStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputStream_1), (void*)value);
	}

	inline static int32_t get_offset_of_inputBytes_2() { return static_cast<int32_t>(offsetof(LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF, ___inputBytes_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_inputBytes_2() const { return ___inputBytes_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_inputBytes_2() { return &___inputBytes_2; }
	inline void set_inputBytes_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___inputBytes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputBytes_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputByteCount_3() { return static_cast<int32_t>(offsetof(LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF, ___inputByteCount_3)); }
	inline int32_t get_inputByteCount_3() const { return ___inputByteCount_3; }
	inline int32_t* get_address_of_inputByteCount_3() { return &___inputByteCount_3; }
	inline void set_inputByteCount_3(int32_t value)
	{
		___inputByteCount_3 = value;
	}

	inline static int32_t get_offset_of_inputbaseUri_4() { return static_cast<int32_t>(offsetof(LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF, ___inputbaseUri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_inputbaseUri_4() const { return ___inputbaseUri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_inputbaseUri_4() { return &___inputbaseUri_4; }
	inline void set_inputbaseUri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___inputbaseUri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputbaseUri_4), (void*)value);
	}

	inline static int32_t get_offset_of_inputUriStr_5() { return static_cast<int32_t>(offsetof(LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF, ___inputUriStr_5)); }
	inline String_t* get_inputUriStr_5() const { return ___inputUriStr_5; }
	inline String_t** get_address_of_inputUriStr_5() { return &___inputUriStr_5; }
	inline void set_inputUriStr_5(String_t* value)
	{
		___inputUriStr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputUriStr_5), (void*)value);
	}

	inline static int32_t get_offset_of_inputUriResolver_6() { return static_cast<int32_t>(offsetof(LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF, ___inputUriResolver_6)); }
	inline XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * get_inputUriResolver_6() const { return ___inputUriResolver_6; }
	inline XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A ** get_address_of_inputUriResolver_6() { return &___inputUriResolver_6; }
	inline void set_inputUriResolver_6(XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * value)
	{
		___inputUriResolver_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputUriResolver_6), (void*)value);
	}

	inline static int32_t get_offset_of_inputContext_7() { return static_cast<int32_t>(offsetof(LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF, ___inputContext_7)); }
	inline XmlParserContext_tD8B22CA52F41246D7FB94A21A2A5ED605DD4CD28 * get_inputContext_7() const { return ___inputContext_7; }
	inline XmlParserContext_tD8B22CA52F41246D7FB94A21A2A5ED605DD4CD28 ** get_address_of_inputContext_7() { return &___inputContext_7; }
	inline void set_inputContext_7(XmlParserContext_tD8B22CA52F41246D7FB94A21A2A5ED605DD4CD28 * value)
	{
		___inputContext_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputContext_7), (void*)value);
	}

	inline static int32_t get_offset_of_inputTextReader_8() { return static_cast<int32_t>(offsetof(LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF, ___inputTextReader_8)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_inputTextReader_8() const { return ___inputTextReader_8; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_inputTextReader_8() { return &___inputTextReader_8; }
	inline void set_inputTextReader_8(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___inputTextReader_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputTextReader_8), (void*)value);
	}

	inline static int32_t get_offset_of_initType_9() { return static_cast<int32_t>(offsetof(LaterInitParam_t6670C77CB75356E7E47BBE3177DB78D355B0EFBF, ___initType_9)); }
	inline int32_t get_initType_9() const { return ___initType_9; }
	inline int32_t* get_address_of_initType_9() { return &___initType_9; }
	inline void set_initType_9(int32_t value)
	{
		___initType_9 = value;
	}
};


// System.Xml.XmlTextReaderImpl_NodeData
struct  NodeData_tD504C5A621E7DD546954D87282438662327280EA  : public RuntimeObject
{
public:
	// System.Xml.XmlNodeType System.Xml.XmlTextReaderImpl_NodeData::type
	int32_t ___type_1;
	// System.String System.Xml.XmlTextReaderImpl_NodeData::localName
	String_t* ___localName_2;
	// System.String System.Xml.XmlTextReaderImpl_NodeData::prefix
	String_t* ___prefix_3;
	// System.String System.Xml.XmlTextReaderImpl_NodeData::ns
	String_t* ___ns_4;
	// System.String System.Xml.XmlTextReaderImpl_NodeData::nameWPrefix
	String_t* ___nameWPrefix_5;
	// System.String System.Xml.XmlTextReaderImpl_NodeData::value
	String_t* ___value_6;
	// System.Char[] System.Xml.XmlTextReaderImpl_NodeData::chars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars_7;
	// System.Int32 System.Xml.XmlTextReaderImpl_NodeData::valueStartPos
	int32_t ___valueStartPos_8;
	// System.Int32 System.Xml.XmlTextReaderImpl_NodeData::valueLength
	int32_t ___valueLength_9;
	// System.Xml.LineInfo System.Xml.XmlTextReaderImpl_NodeData::lineInfo
	LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  ___lineInfo_10;
	// System.Xml.LineInfo System.Xml.XmlTextReaderImpl_NodeData::lineInfo2
	LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  ___lineInfo2_11;
	// System.Char System.Xml.XmlTextReaderImpl_NodeData::quoteChar
	Il2CppChar ___quoteChar_12;
	// System.Int32 System.Xml.XmlTextReaderImpl_NodeData::depth
	int32_t ___depth_13;
	// System.Boolean System.Xml.XmlTextReaderImpl_NodeData::isEmptyOrDefault
	bool ___isEmptyOrDefault_14;
	// System.Int32 System.Xml.XmlTextReaderImpl_NodeData::entityId
	int32_t ___entityId_15;
	// System.Boolean System.Xml.XmlTextReaderImpl_NodeData::xmlContextPushed
	bool ___xmlContextPushed_16;
	// System.Xml.XmlTextReaderImpl_NodeData System.Xml.XmlTextReaderImpl_NodeData::nextAttrValueChunk
	NodeData_tD504C5A621E7DD546954D87282438662327280EA * ___nextAttrValueChunk_17;
	// System.Object System.Xml.XmlTextReaderImpl_NodeData::schemaType
	RuntimeObject * ___schemaType_18;
	// System.Object System.Xml.XmlTextReaderImpl_NodeData::typedValue
	RuntimeObject * ___typedValue_19;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_localName_2() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___localName_2)); }
	inline String_t* get_localName_2() const { return ___localName_2; }
	inline String_t** get_address_of_localName_2() { return &___localName_2; }
	inline void set_localName_2(String_t* value)
	{
		___localName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_2), (void*)value);
	}

	inline static int32_t get_offset_of_prefix_3() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___prefix_3)); }
	inline String_t* get_prefix_3() const { return ___prefix_3; }
	inline String_t** get_address_of_prefix_3() { return &___prefix_3; }
	inline void set_prefix_3(String_t* value)
	{
		___prefix_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_3), (void*)value);
	}

	inline static int32_t get_offset_of_ns_4() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___ns_4)); }
	inline String_t* get_ns_4() const { return ___ns_4; }
	inline String_t** get_address_of_ns_4() { return &___ns_4; }
	inline void set_ns_4(String_t* value)
	{
		___ns_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ns_4), (void*)value);
	}

	inline static int32_t get_offset_of_nameWPrefix_5() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___nameWPrefix_5)); }
	inline String_t* get_nameWPrefix_5() const { return ___nameWPrefix_5; }
	inline String_t** get_address_of_nameWPrefix_5() { return &___nameWPrefix_5; }
	inline void set_nameWPrefix_5(String_t* value)
	{
		___nameWPrefix_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameWPrefix_5), (void*)value);
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___value_6)); }
	inline String_t* get_value_6() const { return ___value_6; }
	inline String_t** get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(String_t* value)
	{
		___value_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_6), (void*)value);
	}

	inline static int32_t get_offset_of_chars_7() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___chars_7)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_chars_7() const { return ___chars_7; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_chars_7() { return &___chars_7; }
	inline void set_chars_7(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___chars_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chars_7), (void*)value);
	}

	inline static int32_t get_offset_of_valueStartPos_8() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___valueStartPos_8)); }
	inline int32_t get_valueStartPos_8() const { return ___valueStartPos_8; }
	inline int32_t* get_address_of_valueStartPos_8() { return &___valueStartPos_8; }
	inline void set_valueStartPos_8(int32_t value)
	{
		___valueStartPos_8 = value;
	}

	inline static int32_t get_offset_of_valueLength_9() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___valueLength_9)); }
	inline int32_t get_valueLength_9() const { return ___valueLength_9; }
	inline int32_t* get_address_of_valueLength_9() { return &___valueLength_9; }
	inline void set_valueLength_9(int32_t value)
	{
		___valueLength_9 = value;
	}

	inline static int32_t get_offset_of_lineInfo_10() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___lineInfo_10)); }
	inline LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  get_lineInfo_10() const { return ___lineInfo_10; }
	inline LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE * get_address_of_lineInfo_10() { return &___lineInfo_10; }
	inline void set_lineInfo_10(LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  value)
	{
		___lineInfo_10 = value;
	}

	inline static int32_t get_offset_of_lineInfo2_11() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___lineInfo2_11)); }
	inline LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  get_lineInfo2_11() const { return ___lineInfo2_11; }
	inline LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE * get_address_of_lineInfo2_11() { return &___lineInfo2_11; }
	inline void set_lineInfo2_11(LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  value)
	{
		___lineInfo2_11 = value;
	}

	inline static int32_t get_offset_of_quoteChar_12() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___quoteChar_12)); }
	inline Il2CppChar get_quoteChar_12() const { return ___quoteChar_12; }
	inline Il2CppChar* get_address_of_quoteChar_12() { return &___quoteChar_12; }
	inline void set_quoteChar_12(Il2CppChar value)
	{
		___quoteChar_12 = value;
	}

	inline static int32_t get_offset_of_depth_13() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___depth_13)); }
	inline int32_t get_depth_13() const { return ___depth_13; }
	inline int32_t* get_address_of_depth_13() { return &___depth_13; }
	inline void set_depth_13(int32_t value)
	{
		___depth_13 = value;
	}

	inline static int32_t get_offset_of_isEmptyOrDefault_14() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___isEmptyOrDefault_14)); }
	inline bool get_isEmptyOrDefault_14() const { return ___isEmptyOrDefault_14; }
	inline bool* get_address_of_isEmptyOrDefault_14() { return &___isEmptyOrDefault_14; }
	inline void set_isEmptyOrDefault_14(bool value)
	{
		___isEmptyOrDefault_14 = value;
	}

	inline static int32_t get_offset_of_entityId_15() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___entityId_15)); }
	inline int32_t get_entityId_15() const { return ___entityId_15; }
	inline int32_t* get_address_of_entityId_15() { return &___entityId_15; }
	inline void set_entityId_15(int32_t value)
	{
		___entityId_15 = value;
	}

	inline static int32_t get_offset_of_xmlContextPushed_16() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___xmlContextPushed_16)); }
	inline bool get_xmlContextPushed_16() const { return ___xmlContextPushed_16; }
	inline bool* get_address_of_xmlContextPushed_16() { return &___xmlContextPushed_16; }
	inline void set_xmlContextPushed_16(bool value)
	{
		___xmlContextPushed_16 = value;
	}

	inline static int32_t get_offset_of_nextAttrValueChunk_17() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___nextAttrValueChunk_17)); }
	inline NodeData_tD504C5A621E7DD546954D87282438662327280EA * get_nextAttrValueChunk_17() const { return ___nextAttrValueChunk_17; }
	inline NodeData_tD504C5A621E7DD546954D87282438662327280EA ** get_address_of_nextAttrValueChunk_17() { return &___nextAttrValueChunk_17; }
	inline void set_nextAttrValueChunk_17(NodeData_tD504C5A621E7DD546954D87282438662327280EA * value)
	{
		___nextAttrValueChunk_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextAttrValueChunk_17), (void*)value);
	}

	inline static int32_t get_offset_of_schemaType_18() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___schemaType_18)); }
	inline RuntimeObject * get_schemaType_18() const { return ___schemaType_18; }
	inline RuntimeObject ** get_address_of_schemaType_18() { return &___schemaType_18; }
	inline void set_schemaType_18(RuntimeObject * value)
	{
		___schemaType_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaType_18), (void*)value);
	}

	inline static int32_t get_offset_of_typedValue_19() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA, ___typedValue_19)); }
	inline RuntimeObject * get_typedValue_19() const { return ___typedValue_19; }
	inline RuntimeObject ** get_address_of_typedValue_19() { return &___typedValue_19; }
	inline void set_typedValue_19(RuntimeObject * value)
	{
		___typedValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typedValue_19), (void*)value);
	}
};

struct NodeData_tD504C5A621E7DD546954D87282438662327280EA_StaticFields
{
public:
	// System.Xml.XmlTextReaderImpl_NodeData modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.XmlTextReaderImpl_NodeData::s_None
	NodeData_tD504C5A621E7DD546954D87282438662327280EA * ___s_None_0;

public:
	inline static int32_t get_offset_of_s_None_0() { return static_cast<int32_t>(offsetof(NodeData_tD504C5A621E7DD546954D87282438662327280EA_StaticFields, ___s_None_0)); }
	inline NodeData_tD504C5A621E7DD546954D87282438662327280EA * get_s_None_0() const { return ___s_None_0; }
	inline NodeData_tD504C5A621E7DD546954D87282438662327280EA ** get_address_of_s_None_0() { return &___s_None_0; }
	inline void set_s_None_0(NodeData_tD504C5A621E7DD546954D87282438662327280EA * value)
	{
		___s_None_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_0), (void*)value);
	}
};


// System.Xml.XmlTextReaderImpl_XmlContext
struct  XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D  : public RuntimeObject
{
public:
	// System.Xml.XmlSpace System.Xml.XmlTextReaderImpl_XmlContext::xmlSpace
	int32_t ___xmlSpace_0;
	// System.String System.Xml.XmlTextReaderImpl_XmlContext::xmlLang
	String_t* ___xmlLang_1;
	// System.String System.Xml.XmlTextReaderImpl_XmlContext::defaultNamespace
	String_t* ___defaultNamespace_2;
	// System.Xml.XmlTextReaderImpl_XmlContext System.Xml.XmlTextReaderImpl_XmlContext::previousContext
	XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * ___previousContext_3;

public:
	inline static int32_t get_offset_of_xmlSpace_0() { return static_cast<int32_t>(offsetof(XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D, ___xmlSpace_0)); }
	inline int32_t get_xmlSpace_0() const { return ___xmlSpace_0; }
	inline int32_t* get_address_of_xmlSpace_0() { return &___xmlSpace_0; }
	inline void set_xmlSpace_0(int32_t value)
	{
		___xmlSpace_0 = value;
	}

	inline static int32_t get_offset_of_xmlLang_1() { return static_cast<int32_t>(offsetof(XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D, ___xmlLang_1)); }
	inline String_t* get_xmlLang_1() const { return ___xmlLang_1; }
	inline String_t** get_address_of_xmlLang_1() { return &___xmlLang_1; }
	inline void set_xmlLang_1(String_t* value)
	{
		___xmlLang_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlLang_1), (void*)value);
	}

	inline static int32_t get_offset_of_defaultNamespace_2() { return static_cast<int32_t>(offsetof(XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D, ___defaultNamespace_2)); }
	inline String_t* get_defaultNamespace_2() const { return ___defaultNamespace_2; }
	inline String_t** get_address_of_defaultNamespace_2() { return &___defaultNamespace_2; }
	inline void set_defaultNamespace_2(String_t* value)
	{
		___defaultNamespace_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultNamespace_2), (void*)value);
	}

	inline static int32_t get_offset_of_previousContext_3() { return static_cast<int32_t>(offsetof(XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D, ___previousContext_3)); }
	inline XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * get_previousContext_3() const { return ___previousContext_3; }
	inline XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D ** get_address_of_previousContext_3() { return &___previousContext_3; }
	inline void set_previousContext_3(XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * value)
	{
		___previousContext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousContext_3), (void*)value);
	}
};


// System.Xml.XmlUrlResolver_<GetEntityAsync>d__15
struct  U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 
{
public:
	// System.Int32 System.Xml.XmlUrlResolver_<GetEntityAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object> System.Xml.XmlUrlResolver_<GetEntityAsync>d__15::<>t__builder
	AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  ___U3CU3Et__builder_1;
	// System.Type System.Xml.XmlUrlResolver_<GetEntityAsync>d__15::ofObjectToReturn
	Type_t * ___ofObjectToReturn_2;
	// System.Uri System.Xml.XmlUrlResolver_<GetEntityAsync>d__15::absoluteUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___absoluteUri_3;
	// System.Xml.XmlUrlResolver System.Xml.XmlUrlResolver_<GetEntityAsync>d__15::<>4__this
	XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1 * ___U3CU3E4__this_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.IO.Stream> System.Xml.XmlUrlResolver_<GetEntityAsync>d__15::<>u__1
	ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ofObjectToReturn_2() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218, ___ofObjectToReturn_2)); }
	inline Type_t * get_ofObjectToReturn_2() const { return ___ofObjectToReturn_2; }
	inline Type_t ** get_address_of_ofObjectToReturn_2() { return &___ofObjectToReturn_2; }
	inline void set_ofObjectToReturn_2(Type_t * value)
	{
		___ofObjectToReturn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ofObjectToReturn_2), (void*)value);
	}

	inline static int32_t get_offset_of_absoluteUri_3() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218, ___absoluteUri_3)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_absoluteUri_3() const { return ___absoluteUri_3; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_absoluteUri_3() { return &___absoluteUri_3; }
	inline void set_absoluteUri_3(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___absoluteUri_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___absoluteUri_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218, ___U3CU3E4__this_4)); }
	inline XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// System.Xml.XmlWellFormedWriter
struct  XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667  : public XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D
{
public:
	// System.Xml.XmlWriter System.Xml.XmlWellFormedWriter::writer
	XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer_0;
	// System.Xml.XmlRawWriter System.Xml.XmlWellFormedWriter::rawWriter
	XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * ___rawWriter_1;
	// System.Xml.IXmlNamespaceResolver System.Xml.XmlWellFormedWriter::predefinedNamespaces
	RuntimeObject* ___predefinedNamespaces_2;
	// System.Xml.XmlWellFormedWriter_Namespace[] System.Xml.XmlWellFormedWriter::nsStack
	NamespaceU5BU5D_t82BF9B8467EDD6AF27BEA8E6F9A7C8AFD2151F12* ___nsStack_3;
	// System.Int32 System.Xml.XmlWellFormedWriter::nsTop
	int32_t ___nsTop_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlWellFormedWriter::nsHashtable
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___nsHashtable_5;
	// System.Boolean System.Xml.XmlWellFormedWriter::useNsHashtable
	bool ___useNsHashtable_6;
	// System.Xml.XmlWellFormedWriter_ElementScope[] System.Xml.XmlWellFormedWriter::elemScopeStack
	ElementScopeU5BU5D_t8F2566B84598956FD809080FEF2285A0C7B87CEB* ___elemScopeStack_7;
	// System.Int32 System.Xml.XmlWellFormedWriter::elemTop
	int32_t ___elemTop_8;
	// System.Xml.XmlWellFormedWriter_AttrName[] System.Xml.XmlWellFormedWriter::attrStack
	AttrNameU5BU5D_t93631FF3661C3AD12E16E9458DA72C75F802D4D8* ___attrStack_9;
	// System.Int32 System.Xml.XmlWellFormedWriter::attrCount
	int32_t ___attrCount_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlWellFormedWriter::attrHashTable
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___attrHashTable_11;
	// System.Xml.XmlWellFormedWriter_SpecialAttribute System.Xml.XmlWellFormedWriter::specAttr
	int32_t ___specAttr_12;
	// System.Xml.XmlWellFormedWriter_AttributeValueCache System.Xml.XmlWellFormedWriter::attrValueCache
	AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * ___attrValueCache_13;
	// System.String System.Xml.XmlWellFormedWriter::curDeclPrefix
	String_t* ___curDeclPrefix_14;
	// System.Xml.XmlWellFormedWriter_State[] System.Xml.XmlWellFormedWriter::stateTable
	StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047* ___stateTable_15;
	// System.Xml.XmlWellFormedWriter_State System.Xml.XmlWellFormedWriter::currentState
	int32_t ___currentState_16;
	// System.Boolean System.Xml.XmlWellFormedWriter::checkCharacters
	bool ___checkCharacters_17;
	// System.Boolean System.Xml.XmlWellFormedWriter::omitDuplNamespaces
	bool ___omitDuplNamespaces_18;
	// System.Boolean System.Xml.XmlWellFormedWriter::writeEndDocumentOnClose
	bool ___writeEndDocumentOnClose_19;
	// System.Xml.ConformanceLevel System.Xml.XmlWellFormedWriter::conformanceLevel
	int32_t ___conformanceLevel_20;
	// System.Boolean System.Xml.XmlWellFormedWriter::dtdWritten
	bool ___dtdWritten_21;
	// System.Boolean System.Xml.XmlWellFormedWriter::xmlDeclFollows
	bool ___xmlDeclFollows_22;
	// System.Xml.XmlCharType System.Xml.XmlWellFormedWriter::xmlCharType
	XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  ___xmlCharType_23;
	// System.Xml.SecureStringHasher System.Xml.XmlWellFormedWriter::hasher
	SecureStringHasher_t5F3BC4AE212133FAD80F39ED81D0338B8A21A87A * ___hasher_24;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___writer_0)); }
	inline XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * get_writer_0() const { return ___writer_0; }
	inline XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_0), (void*)value);
	}

	inline static int32_t get_offset_of_rawWriter_1() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___rawWriter_1)); }
	inline XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * get_rawWriter_1() const { return ___rawWriter_1; }
	inline XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 ** get_address_of_rawWriter_1() { return &___rawWriter_1; }
	inline void set_rawWriter_1(XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * value)
	{
		___rawWriter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawWriter_1), (void*)value);
	}

	inline static int32_t get_offset_of_predefinedNamespaces_2() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___predefinedNamespaces_2)); }
	inline RuntimeObject* get_predefinedNamespaces_2() const { return ___predefinedNamespaces_2; }
	inline RuntimeObject** get_address_of_predefinedNamespaces_2() { return &___predefinedNamespaces_2; }
	inline void set_predefinedNamespaces_2(RuntimeObject* value)
	{
		___predefinedNamespaces_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predefinedNamespaces_2), (void*)value);
	}

	inline static int32_t get_offset_of_nsStack_3() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___nsStack_3)); }
	inline NamespaceU5BU5D_t82BF9B8467EDD6AF27BEA8E6F9A7C8AFD2151F12* get_nsStack_3() const { return ___nsStack_3; }
	inline NamespaceU5BU5D_t82BF9B8467EDD6AF27BEA8E6F9A7C8AFD2151F12** get_address_of_nsStack_3() { return &___nsStack_3; }
	inline void set_nsStack_3(NamespaceU5BU5D_t82BF9B8467EDD6AF27BEA8E6F9A7C8AFD2151F12* value)
	{
		___nsStack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nsStack_3), (void*)value);
	}

	inline static int32_t get_offset_of_nsTop_4() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___nsTop_4)); }
	inline int32_t get_nsTop_4() const { return ___nsTop_4; }
	inline int32_t* get_address_of_nsTop_4() { return &___nsTop_4; }
	inline void set_nsTop_4(int32_t value)
	{
		___nsTop_4 = value;
	}

	inline static int32_t get_offset_of_nsHashtable_5() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___nsHashtable_5)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_nsHashtable_5() const { return ___nsHashtable_5; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_nsHashtable_5() { return &___nsHashtable_5; }
	inline void set_nsHashtable_5(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___nsHashtable_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nsHashtable_5), (void*)value);
	}

	inline static int32_t get_offset_of_useNsHashtable_6() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___useNsHashtable_6)); }
	inline bool get_useNsHashtable_6() const { return ___useNsHashtable_6; }
	inline bool* get_address_of_useNsHashtable_6() { return &___useNsHashtable_6; }
	inline void set_useNsHashtable_6(bool value)
	{
		___useNsHashtable_6 = value;
	}

	inline static int32_t get_offset_of_elemScopeStack_7() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___elemScopeStack_7)); }
	inline ElementScopeU5BU5D_t8F2566B84598956FD809080FEF2285A0C7B87CEB* get_elemScopeStack_7() const { return ___elemScopeStack_7; }
	inline ElementScopeU5BU5D_t8F2566B84598956FD809080FEF2285A0C7B87CEB** get_address_of_elemScopeStack_7() { return &___elemScopeStack_7; }
	inline void set_elemScopeStack_7(ElementScopeU5BU5D_t8F2566B84598956FD809080FEF2285A0C7B87CEB* value)
	{
		___elemScopeStack_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elemScopeStack_7), (void*)value);
	}

	inline static int32_t get_offset_of_elemTop_8() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___elemTop_8)); }
	inline int32_t get_elemTop_8() const { return ___elemTop_8; }
	inline int32_t* get_address_of_elemTop_8() { return &___elemTop_8; }
	inline void set_elemTop_8(int32_t value)
	{
		___elemTop_8 = value;
	}

	inline static int32_t get_offset_of_attrStack_9() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___attrStack_9)); }
	inline AttrNameU5BU5D_t93631FF3661C3AD12E16E9458DA72C75F802D4D8* get_attrStack_9() const { return ___attrStack_9; }
	inline AttrNameU5BU5D_t93631FF3661C3AD12E16E9458DA72C75F802D4D8** get_address_of_attrStack_9() { return &___attrStack_9; }
	inline void set_attrStack_9(AttrNameU5BU5D_t93631FF3661C3AD12E16E9458DA72C75F802D4D8* value)
	{
		___attrStack_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attrStack_9), (void*)value);
	}

	inline static int32_t get_offset_of_attrCount_10() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___attrCount_10)); }
	inline int32_t get_attrCount_10() const { return ___attrCount_10; }
	inline int32_t* get_address_of_attrCount_10() { return &___attrCount_10; }
	inline void set_attrCount_10(int32_t value)
	{
		___attrCount_10 = value;
	}

	inline static int32_t get_offset_of_attrHashTable_11() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___attrHashTable_11)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_attrHashTable_11() const { return ___attrHashTable_11; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_attrHashTable_11() { return &___attrHashTable_11; }
	inline void set_attrHashTable_11(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___attrHashTable_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attrHashTable_11), (void*)value);
	}

	inline static int32_t get_offset_of_specAttr_12() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___specAttr_12)); }
	inline int32_t get_specAttr_12() const { return ___specAttr_12; }
	inline int32_t* get_address_of_specAttr_12() { return &___specAttr_12; }
	inline void set_specAttr_12(int32_t value)
	{
		___specAttr_12 = value;
	}

	inline static int32_t get_offset_of_attrValueCache_13() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___attrValueCache_13)); }
	inline AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * get_attrValueCache_13() const { return ___attrValueCache_13; }
	inline AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D ** get_address_of_attrValueCache_13() { return &___attrValueCache_13; }
	inline void set_attrValueCache_13(AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * value)
	{
		___attrValueCache_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attrValueCache_13), (void*)value);
	}

	inline static int32_t get_offset_of_curDeclPrefix_14() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___curDeclPrefix_14)); }
	inline String_t* get_curDeclPrefix_14() const { return ___curDeclPrefix_14; }
	inline String_t** get_address_of_curDeclPrefix_14() { return &___curDeclPrefix_14; }
	inline void set_curDeclPrefix_14(String_t* value)
	{
		___curDeclPrefix_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curDeclPrefix_14), (void*)value);
	}

	inline static int32_t get_offset_of_stateTable_15() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___stateTable_15)); }
	inline StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047* get_stateTable_15() const { return ___stateTable_15; }
	inline StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047** get_address_of_stateTable_15() { return &___stateTable_15; }
	inline void set_stateTable_15(StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047* value)
	{
		___stateTable_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateTable_15), (void*)value);
	}

	inline static int32_t get_offset_of_currentState_16() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___currentState_16)); }
	inline int32_t get_currentState_16() const { return ___currentState_16; }
	inline int32_t* get_address_of_currentState_16() { return &___currentState_16; }
	inline void set_currentState_16(int32_t value)
	{
		___currentState_16 = value;
	}

	inline static int32_t get_offset_of_checkCharacters_17() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___checkCharacters_17)); }
	inline bool get_checkCharacters_17() const { return ___checkCharacters_17; }
	inline bool* get_address_of_checkCharacters_17() { return &___checkCharacters_17; }
	inline void set_checkCharacters_17(bool value)
	{
		___checkCharacters_17 = value;
	}

	inline static int32_t get_offset_of_omitDuplNamespaces_18() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___omitDuplNamespaces_18)); }
	inline bool get_omitDuplNamespaces_18() const { return ___omitDuplNamespaces_18; }
	inline bool* get_address_of_omitDuplNamespaces_18() { return &___omitDuplNamespaces_18; }
	inline void set_omitDuplNamespaces_18(bool value)
	{
		___omitDuplNamespaces_18 = value;
	}

	inline static int32_t get_offset_of_writeEndDocumentOnClose_19() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___writeEndDocumentOnClose_19)); }
	inline bool get_writeEndDocumentOnClose_19() const { return ___writeEndDocumentOnClose_19; }
	inline bool* get_address_of_writeEndDocumentOnClose_19() { return &___writeEndDocumentOnClose_19; }
	inline void set_writeEndDocumentOnClose_19(bool value)
	{
		___writeEndDocumentOnClose_19 = value;
	}

	inline static int32_t get_offset_of_conformanceLevel_20() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___conformanceLevel_20)); }
	inline int32_t get_conformanceLevel_20() const { return ___conformanceLevel_20; }
	inline int32_t* get_address_of_conformanceLevel_20() { return &___conformanceLevel_20; }
	inline void set_conformanceLevel_20(int32_t value)
	{
		___conformanceLevel_20 = value;
	}

	inline static int32_t get_offset_of_dtdWritten_21() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___dtdWritten_21)); }
	inline bool get_dtdWritten_21() const { return ___dtdWritten_21; }
	inline bool* get_address_of_dtdWritten_21() { return &___dtdWritten_21; }
	inline void set_dtdWritten_21(bool value)
	{
		___dtdWritten_21 = value;
	}

	inline static int32_t get_offset_of_xmlDeclFollows_22() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___xmlDeclFollows_22)); }
	inline bool get_xmlDeclFollows_22() const { return ___xmlDeclFollows_22; }
	inline bool* get_address_of_xmlDeclFollows_22() { return &___xmlDeclFollows_22; }
	inline void set_xmlDeclFollows_22(bool value)
	{
		___xmlDeclFollows_22 = value;
	}

	inline static int32_t get_offset_of_xmlCharType_23() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___xmlCharType_23)); }
	inline XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  get_xmlCharType_23() const { return ___xmlCharType_23; }
	inline XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA * get_address_of_xmlCharType_23() { return &___xmlCharType_23; }
	inline void set_xmlCharType_23(XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  value)
	{
		___xmlCharType_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___xmlCharType_23))->___charProperties_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_hasher_24() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667, ___hasher_24)); }
	inline SecureStringHasher_t5F3BC4AE212133FAD80F39ED81D0338B8A21A87A * get_hasher_24() const { return ___hasher_24; }
	inline SecureStringHasher_t5F3BC4AE212133FAD80F39ED81D0338B8A21A87A ** get_address_of_hasher_24() { return &___hasher_24; }
	inline void set_hasher_24(SecureStringHasher_t5F3BC4AE212133FAD80F39ED81D0338B8A21A87A * value)
	{
		___hasher_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hasher_24), (void*)value);
	}
};

struct XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667_StaticFields
{
public:
	// System.String[] System.Xml.XmlWellFormedWriter::stateName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___stateName_25;
	// System.String[] System.Xml.XmlWellFormedWriter::tokenName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___tokenName_26;
	// System.Xml.WriteState[] System.Xml.XmlWellFormedWriter::state2WriteState
	WriteStateU5BU5D_t2A56E7401E9CDE694F35A8072DFD3AAC3516906B* ___state2WriteState_27;
	// System.Xml.XmlWellFormedWriter_State[] System.Xml.XmlWellFormedWriter::StateTableDocument
	StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047* ___StateTableDocument_28;
	// System.Xml.XmlWellFormedWriter_State[] System.Xml.XmlWellFormedWriter::StateTableAuto
	StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047* ___StateTableAuto_29;

public:
	inline static int32_t get_offset_of_stateName_25() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667_StaticFields, ___stateName_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_stateName_25() const { return ___stateName_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_stateName_25() { return &___stateName_25; }
	inline void set_stateName_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___stateName_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateName_25), (void*)value);
	}

	inline static int32_t get_offset_of_tokenName_26() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667_StaticFields, ___tokenName_26)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_tokenName_26() const { return ___tokenName_26; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_tokenName_26() { return &___tokenName_26; }
	inline void set_tokenName_26(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___tokenName_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenName_26), (void*)value);
	}

	inline static int32_t get_offset_of_state2WriteState_27() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667_StaticFields, ___state2WriteState_27)); }
	inline WriteStateU5BU5D_t2A56E7401E9CDE694F35A8072DFD3AAC3516906B* get_state2WriteState_27() const { return ___state2WriteState_27; }
	inline WriteStateU5BU5D_t2A56E7401E9CDE694F35A8072DFD3AAC3516906B** get_address_of_state2WriteState_27() { return &___state2WriteState_27; }
	inline void set_state2WriteState_27(WriteStateU5BU5D_t2A56E7401E9CDE694F35A8072DFD3AAC3516906B* value)
	{
		___state2WriteState_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state2WriteState_27), (void*)value);
	}

	inline static int32_t get_offset_of_StateTableDocument_28() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667_StaticFields, ___StateTableDocument_28)); }
	inline StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047* get_StateTableDocument_28() const { return ___StateTableDocument_28; }
	inline StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047** get_address_of_StateTableDocument_28() { return &___StateTableDocument_28; }
	inline void set_StateTableDocument_28(StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047* value)
	{
		___StateTableDocument_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateTableDocument_28), (void*)value);
	}

	inline static int32_t get_offset_of_StateTableAuto_29() { return static_cast<int32_t>(offsetof(XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667_StaticFields, ___StateTableAuto_29)); }
	inline StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047* get_StateTableAuto_29() const { return ___StateTableAuto_29; }
	inline StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047** get_address_of_StateTableAuto_29() { return &___StateTableAuto_29; }
	inline void set_StateTableAuto_29(StateU5BU5D_t15C5FAA281FD1423791365F47B39B74472536047* value)
	{
		___StateTableAuto_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateTableAuto_29), (void*)value);
	}
};


// System.Xml.XmlWellFormedWriter_AttributeValueCache_Item
struct  Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE  : public RuntimeObject
{
public:
	// System.Xml.XmlWellFormedWriter_AttributeValueCache_ItemType System.Xml.XmlWellFormedWriter_AttributeValueCache_Item::type
	int32_t ___type_0;
	// System.Object System.Xml.XmlWellFormedWriter_AttributeValueCache_Item::data
	RuntimeObject * ___data_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE, ___data_1)); }
	inline RuntimeObject * get_data_1() const { return ___data_1; }
	inline RuntimeObject ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(RuntimeObject * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}
};


// System.Xml.XmlWellFormedWriter_ElementScope
struct  ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 
{
public:
	// System.Int32 System.Xml.XmlWellFormedWriter_ElementScope::prevNSTop
	int32_t ___prevNSTop_0;
	// System.String System.Xml.XmlWellFormedWriter_ElementScope::prefix
	String_t* ___prefix_1;
	// System.String System.Xml.XmlWellFormedWriter_ElementScope::localName
	String_t* ___localName_2;
	// System.String System.Xml.XmlWellFormedWriter_ElementScope::namespaceUri
	String_t* ___namespaceUri_3;
	// System.Xml.XmlSpace System.Xml.XmlWellFormedWriter_ElementScope::xmlSpace
	int32_t ___xmlSpace_4;
	// System.String System.Xml.XmlWellFormedWriter_ElementScope::xmlLang
	String_t* ___xmlLang_5;

public:
	inline static int32_t get_offset_of_prevNSTop_0() { return static_cast<int32_t>(offsetof(ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474, ___prevNSTop_0)); }
	inline int32_t get_prevNSTop_0() const { return ___prevNSTop_0; }
	inline int32_t* get_address_of_prevNSTop_0() { return &___prevNSTop_0; }
	inline void set_prevNSTop_0(int32_t value)
	{
		___prevNSTop_0 = value;
	}

	inline static int32_t get_offset_of_prefix_1() { return static_cast<int32_t>(offsetof(ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474, ___prefix_1)); }
	inline String_t* get_prefix_1() const { return ___prefix_1; }
	inline String_t** get_address_of_prefix_1() { return &___prefix_1; }
	inline void set_prefix_1(String_t* value)
	{
		___prefix_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_1), (void*)value);
	}

	inline static int32_t get_offset_of_localName_2() { return static_cast<int32_t>(offsetof(ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474, ___localName_2)); }
	inline String_t* get_localName_2() const { return ___localName_2; }
	inline String_t** get_address_of_localName_2() { return &___localName_2; }
	inline void set_localName_2(String_t* value)
	{
		___localName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_2), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceUri_3() { return static_cast<int32_t>(offsetof(ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474, ___namespaceUri_3)); }
	inline String_t* get_namespaceUri_3() const { return ___namespaceUri_3; }
	inline String_t** get_address_of_namespaceUri_3() { return &___namespaceUri_3; }
	inline void set_namespaceUri_3(String_t* value)
	{
		___namespaceUri_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceUri_3), (void*)value);
	}

	inline static int32_t get_offset_of_xmlSpace_4() { return static_cast<int32_t>(offsetof(ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474, ___xmlSpace_4)); }
	inline int32_t get_xmlSpace_4() const { return ___xmlSpace_4; }
	inline int32_t* get_address_of_xmlSpace_4() { return &___xmlSpace_4; }
	inline void set_xmlSpace_4(int32_t value)
	{
		___xmlSpace_4 = value;
	}

	inline static int32_t get_offset_of_xmlLang_5() { return static_cast<int32_t>(offsetof(ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474, ___xmlLang_5)); }
	inline String_t* get_xmlLang_5() const { return ___xmlLang_5; }
	inline String_t** get_address_of_xmlLang_5() { return &___xmlLang_5; }
	inline void set_xmlLang_5(String_t* value)
	{
		___xmlLang_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlLang_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlWellFormedWriter/ElementScope
struct ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshaled_pinvoke
{
	int32_t ___prevNSTop_0;
	char* ___prefix_1;
	char* ___localName_2;
	char* ___namespaceUri_3;
	int32_t ___xmlSpace_4;
	char* ___xmlLang_5;
};
// Native definition for COM marshalling of System.Xml.XmlWellFormedWriter/ElementScope
struct ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshaled_com
{
	int32_t ___prevNSTop_0;
	Il2CppChar* ___prefix_1;
	Il2CppChar* ___localName_2;
	Il2CppChar* ___namespaceUri_3;
	int32_t ___xmlSpace_4;
	Il2CppChar* ___xmlLang_5;
};

// System.Xml.XmlWellFormedWriter_Namespace
struct  Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00 
{
public:
	// System.String System.Xml.XmlWellFormedWriter_Namespace::prefix
	String_t* ___prefix_0;
	// System.String System.Xml.XmlWellFormedWriter_Namespace::namespaceUri
	String_t* ___namespaceUri_1;
	// System.Xml.XmlWellFormedWriter_NamespaceKind System.Xml.XmlWellFormedWriter_Namespace::kind
	int32_t ___kind_2;
	// System.Int32 System.Xml.XmlWellFormedWriter_Namespace::prevNsIndex
	int32_t ___prevNsIndex_3;

public:
	inline static int32_t get_offset_of_prefix_0() { return static_cast<int32_t>(offsetof(Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00, ___prefix_0)); }
	inline String_t* get_prefix_0() const { return ___prefix_0; }
	inline String_t** get_address_of_prefix_0() { return &___prefix_0; }
	inline void set_prefix_0(String_t* value)
	{
		___prefix_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_0), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceUri_1() { return static_cast<int32_t>(offsetof(Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00, ___namespaceUri_1)); }
	inline String_t* get_namespaceUri_1() const { return ___namespaceUri_1; }
	inline String_t** get_address_of_namespaceUri_1() { return &___namespaceUri_1; }
	inline void set_namespaceUri_1(String_t* value)
	{
		___namespaceUri_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceUri_1), (void*)value);
	}

	inline static int32_t get_offset_of_kind_2() { return static_cast<int32_t>(offsetof(Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00, ___kind_2)); }
	inline int32_t get_kind_2() const { return ___kind_2; }
	inline int32_t* get_address_of_kind_2() { return &___kind_2; }
	inline void set_kind_2(int32_t value)
	{
		___kind_2 = value;
	}

	inline static int32_t get_offset_of_prevNsIndex_3() { return static_cast<int32_t>(offsetof(Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00, ___prevNsIndex_3)); }
	inline int32_t get_prevNsIndex_3() const { return ___prevNsIndex_3; }
	inline int32_t* get_address_of_prevNsIndex_3() { return &___prevNsIndex_3; }
	inline void set_prevNsIndex_3(int32_t value)
	{
		___prevNsIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlWellFormedWriter/Namespace
struct Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___namespaceUri_1;
	int32_t ___kind_2;
	int32_t ___prevNsIndex_3;
};
// Native definition for COM marshalling of System.Xml.XmlWellFormedWriter/Namespace
struct Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___namespaceUri_1;
	int32_t ___kind_2;
	int32_t ___prevNsIndex_3;
};

// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Xml.Schema.XmlSchemaParticle_EmptyParticle
struct  EmptyParticle_t56BD41298CE124A8F2F4F4426105E1663120F7BF  : public XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789
{
public:

public:
};


// System.Xml.Serialization.XmlSerializationCollectionFixupCallback
struct  XmlSerializationCollectionFixupCallback_t88A34696BDDF37FD897F180858064DF7EF750B1A  : public MulticastDelegate_t
{
public:

public:
};


// System.Xml.Serialization.XmlSerializationFixupCallback
struct  XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549  : public MulticastDelegate_t
{
public:

public:
};


// System.Xml.Serialization.XmlTypeMapping
struct  XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581  : public XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9
{
public:
	// System.String System.Xml.Serialization.XmlTypeMapping::xmlType
	String_t* ___xmlType_6;
	// System.String System.Xml.Serialization.XmlTypeMapping::xmlTypeNamespace
	String_t* ___xmlTypeNamespace_7;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapping::type
	TypeData_tB17E29DFB22C7153FB6084744BCE4FC8F91135C2 * ___type_8;
	// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::baseMap
	XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * ___baseMap_9;
	// System.Boolean System.Xml.Serialization.XmlTypeMapping::multiReferenceType
	bool ___multiReferenceType_10;
	// System.Boolean System.Xml.Serialization.XmlTypeMapping::includeInSchema
	bool ___includeInSchema_11;
	// System.Boolean System.Xml.Serialization.XmlTypeMapping::isNullable
	bool ___isNullable_12;
	// System.Boolean System.Xml.Serialization.XmlTypeMapping::isAny
	bool ___isAny_13;
	// System.Collections.ArrayList System.Xml.Serialization.XmlTypeMapping::_derivedTypes
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____derivedTypes_14;

public:
	inline static int32_t get_offset_of_xmlType_6() { return static_cast<int32_t>(offsetof(XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581, ___xmlType_6)); }
	inline String_t* get_xmlType_6() const { return ___xmlType_6; }
	inline String_t** get_address_of_xmlType_6() { return &___xmlType_6; }
	inline void set_xmlType_6(String_t* value)
	{
		___xmlType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlType_6), (void*)value);
	}

	inline static int32_t get_offset_of_xmlTypeNamespace_7() { return static_cast<int32_t>(offsetof(XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581, ___xmlTypeNamespace_7)); }
	inline String_t* get_xmlTypeNamespace_7() const { return ___xmlTypeNamespace_7; }
	inline String_t** get_address_of_xmlTypeNamespace_7() { return &___xmlTypeNamespace_7; }
	inline void set_xmlTypeNamespace_7(String_t* value)
	{
		___xmlTypeNamespace_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlTypeNamespace_7), (void*)value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581, ___type_8)); }
	inline TypeData_tB17E29DFB22C7153FB6084744BCE4FC8F91135C2 * get_type_8() const { return ___type_8; }
	inline TypeData_tB17E29DFB22C7153FB6084744BCE4FC8F91135C2 ** get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(TypeData_tB17E29DFB22C7153FB6084744BCE4FC8F91135C2 * value)
	{
		___type_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_8), (void*)value);
	}

	inline static int32_t get_offset_of_baseMap_9() { return static_cast<int32_t>(offsetof(XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581, ___baseMap_9)); }
	inline XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * get_baseMap_9() const { return ___baseMap_9; }
	inline XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 ** get_address_of_baseMap_9() { return &___baseMap_9; }
	inline void set_baseMap_9(XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * value)
	{
		___baseMap_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseMap_9), (void*)value);
	}

	inline static int32_t get_offset_of_multiReferenceType_10() { return static_cast<int32_t>(offsetof(XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581, ___multiReferenceType_10)); }
	inline bool get_multiReferenceType_10() const { return ___multiReferenceType_10; }
	inline bool* get_address_of_multiReferenceType_10() { return &___multiReferenceType_10; }
	inline void set_multiReferenceType_10(bool value)
	{
		___multiReferenceType_10 = value;
	}

	inline static int32_t get_offset_of_includeInSchema_11() { return static_cast<int32_t>(offsetof(XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581, ___includeInSchema_11)); }
	inline bool get_includeInSchema_11() const { return ___includeInSchema_11; }
	inline bool* get_address_of_includeInSchema_11() { return &___includeInSchema_11; }
	inline void set_includeInSchema_11(bool value)
	{
		___includeInSchema_11 = value;
	}

	inline static int32_t get_offset_of_isNullable_12() { return static_cast<int32_t>(offsetof(XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581, ___isNullable_12)); }
	inline bool get_isNullable_12() const { return ___isNullable_12; }
	inline bool* get_address_of_isNullable_12() { return &___isNullable_12; }
	inline void set_isNullable_12(bool value)
	{
		___isNullable_12 = value;
	}

	inline static int32_t get_offset_of_isAny_13() { return static_cast<int32_t>(offsetof(XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581, ___isAny_13)); }
	inline bool get_isAny_13() const { return ___isAny_13; }
	inline bool* get_address_of_isAny_13() { return &___isAny_13; }
	inline void set_isAny_13(bool value)
	{
		___isAny_13 = value;
	}

	inline static int32_t get_offset_of__derivedTypes_14() { return static_cast<int32_t>(offsetof(XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581, ____derivedTypes_14)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__derivedTypes_14() const { return ____derivedTypes_14; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__derivedTypes_14() { return &____derivedTypes_14; }
	inline void set__derivedTypes_14(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____derivedTypes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____derivedTypes_14), (void*)value);
	}
};


// System.Xml.XmlException
struct  XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.Xml.XmlException::res
	String_t* ___res_17;
	// System.String[] System.Xml.XmlException::args
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___args_18;
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_19;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_20;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_21;
	// System.String System.Xml.XmlException::message
	String_t* ___message_22;

public:
	inline static int32_t get_offset_of_res_17() { return static_cast<int32_t>(offsetof(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918, ___res_17)); }
	inline String_t* get_res_17() const { return ___res_17; }
	inline String_t** get_address_of_res_17() { return &___res_17; }
	inline void set_res_17(String_t* value)
	{
		___res_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___res_17), (void*)value);
	}

	inline static int32_t get_offset_of_args_18() { return static_cast<int32_t>(offsetof(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918, ___args_18)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_args_18() const { return ___args_18; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_args_18() { return &___args_18; }
	inline void set_args_18(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___args_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_18), (void*)value);
	}

	inline static int32_t get_offset_of_lineNumber_19() { return static_cast<int32_t>(offsetof(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918, ___lineNumber_19)); }
	inline int32_t get_lineNumber_19() const { return ___lineNumber_19; }
	inline int32_t* get_address_of_lineNumber_19() { return &___lineNumber_19; }
	inline void set_lineNumber_19(int32_t value)
	{
		___lineNumber_19 = value;
	}

	inline static int32_t get_offset_of_linePosition_20() { return static_cast<int32_t>(offsetof(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918, ___linePosition_20)); }
	inline int32_t get_linePosition_20() const { return ___linePosition_20; }
	inline int32_t* get_address_of_linePosition_20() { return &___linePosition_20; }
	inline void set_linePosition_20(int32_t value)
	{
		___linePosition_20 = value;
	}

	inline static int32_t get_offset_of_sourceUri_21() { return static_cast<int32_t>(offsetof(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918, ___sourceUri_21)); }
	inline String_t* get_sourceUri_21() const { return ___sourceUri_21; }
	inline String_t** get_address_of_sourceUri_21() { return &___sourceUri_21; }
	inline void set_sourceUri_21(String_t* value)
	{
		___sourceUri_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceUri_21), (void*)value);
	}

	inline static int32_t get_offset_of_message_22() { return static_cast<int32_t>(offsetof(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918, ___message_22)); }
	inline String_t* get_message_22() const { return ___message_22; }
	inline String_t** get_address_of_message_22() { return &___message_22; }
	inline void set_message_22(String_t* value)
	{
		___message_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_22), (void*)value);
	}
};


// System.Xml.XmlQualifiedName_HashCodeOfStringDelegate
struct  HashCodeOfStringDelegate_tAE9DAB0A55A64F35CCEE05D71856BAAF6C0B668E  : public MulticastDelegate_t
{
public:

public:
};


// System.Xml.XmlTextReaderImpl_OnDefaultAttributeUseDelegate
struct  OnDefaultAttributeUseDelegate_t3E995824DB2F605D21E74880C851C4C6BB9A1E88  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
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
// System.Xml.XmlWellFormedWriter_AttributeValueCache_Item[]
struct ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * m_Items[1];

public:
	inline Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18  Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.Xml.XmlUrlResolver/<GetEntityAsync>d__15>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218_mDAE57A4AFAD3B1106D854AC150240C2D1A344D57_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);

// System.Void System.Xml.XmlEventCache/XmlEvent::InitEvent(System.Xml.XmlEventCache/XmlEventType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_m697F8F1C5FBAEBF07EEEFF5DF39BBB0B3046BC95_inline (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, const RuntimeMethod* method);
// System.Void System.Xml.XmlEventCache/XmlEvent::InitEvent(System.Xml.XmlEventCache/XmlEventType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_m97CBD24760A7B28920D39BFCF894D00562B007C1 (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, String_t* ___s11, const RuntimeMethod* method);
// System.Void System.Xml.XmlEventCache/XmlEvent::InitEvent(System.Xml.XmlEventCache/XmlEventType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_m1F01A7DF45F8CF6EB8A70E7EDD5702DA5CF7E026 (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method);
// System.Void System.Xml.XmlEventCache/XmlEvent::InitEvent(System.Xml.XmlEventCache/XmlEventType,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_m27372226CAE65BD167B245E4636C47406982454E (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, String_t* ___s11, String_t* ___s22, String_t* ___s33, const RuntimeMethod* method);
// System.Void System.Xml.XmlEventCache/XmlEvent::InitEvent(System.Xml.XmlEventCache/XmlEventType,System.String,System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_mC0BABAD00E5DAE5C23EE9D545B7B105DDEB2C4FB (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, String_t* ___s11, String_t* ___s22, String_t* ___s33, RuntimeObject * ___o4, const RuntimeMethod* method);
// System.Void System.Xml.XmlEventCache/XmlEvent::InitEvent(System.Xml.XmlEventCache/XmlEventType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_mB94B972DF8B3C9C759907CD4238EB9CABCE73A9F (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, RuntimeObject * ___o1, const RuntimeMethod* method);
// System.Xml.XmlEventCache/XmlEventType System.Xml.XmlEventCache/XmlEvent::get_EventType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlEvent_get_EventType_m5E1A3D64EE0DF5F7A21C9A18107C0C9C7C1C66C7_inline (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlEventCache/XmlEvent::get_String1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlEvent_get_String1_mDAC92F7047BE968646E4D51C6409D7CD4012DCFB_inline (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlEventCache/XmlEvent::get_String2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlEvent_get_String2_mA958CB1614BFB8F5E3FB01B69A012B3ADDA51EDA_inline (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlEventCache/XmlEvent::get_String3()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlEvent_get_String3_mCFB8894B848A4CAE67E7562D27881348E6B206EF_inline (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method);
// System.Object System.Xml.XmlEventCache/XmlEvent::get_Object()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * XmlEvent_get_Object_m53492BB3E8D7BE92F2B0A3A1230A6833CE1CC71F_inline (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlNamedNodeMap/SmallXmlNodeList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallXmlNodeList_get_Count_m531CBC894FC78314798ED52A184AB776B4C1E482 (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Object System.Xml.XmlNamedNodeMap/SmallXmlNodeList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SmallXmlNodeList_get_Item_mB9359FC058C97EE9AD78BB1131A921616814A90E (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlNamedNodeMap/SmallXmlNodeList::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallXmlNodeList_Add_m23AA92A77C388F16C324B3DABE2FB17E3DA5DCF6 (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlNamedNodeMap/SmallXmlNodeList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallXmlNodeList_RemoveAt_mA3D7ACC3756E6109DBA4F77F83E2AF9A639A0FCE (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Xml.XmlNamedNodeMap/SmallXmlNodeList::Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallXmlNodeList_Insert_m746B9DDFD7B78894075135B2902335F4E6B4465B (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Xml.XmlNamedNodeMap/SmallXmlNodeList/SingleObjectEnumerator::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleObjectEnumerator__ctor_m604B995B6FF07963B203415E5DD1284159E65BA2 (SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap/SmallXmlNodeList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SmallXmlNodeList_GetEnumerator_mB22BFB1AD52DA04FA5D10B8C62D996894DF967C8 (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlNamespaceManager/NamespaceDeclaration::Set(System.String,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceDeclaration_Set_mE6E6F7B98C17F9565B0EF691EA013D0A0CED2A1C (NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48 * __this, String_t* ___prefix0, String_t* ___uri1, int32_t ___scopeId2, int32_t ___previousNsIndex3, const RuntimeMethod* method);
// System.Void System.Xml.XmlReader/XmlReaderDebuggerDisplayProxy::.ctor(System.Xml.XmlReader)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlReaderDebuggerDisplayProxy__ctor_m784E61728FD15306C180AE7EA023511D8704FB0A_inline (XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::EscapeValueForDebuggerDisplay(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_EscapeValueForDebuggerDisplay_mC40B38C8845EA60991107697E06530945FA22382 (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.Xml.XmlReader/XmlReaderDebuggerDisplayProxy::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlReaderDebuggerDisplayProxy_ToString_m8138337CC447054936F29D1E5ED79BFFD11C0101 (XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E * __this, const RuntimeMethod* method);
// System.Void System.Xml.Serialization.XmlReflectionImporter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82577CED5A4420DBD26D37EDC5EB6918E237B233 (U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlReflectionMember::get_XmlAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46 * XmlReflectionMember_get_XmlAttributes_m55C4166601EDBC0C7ABB07EC926485C010F888D1 (XmlReflectionMember_t2DB532740F4159245F707469F68AEA9BFBDA55CD * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.Serialization.XmlAttributes::get_SortableOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlAttributes_get_SortableOrder_m5853D2240F94BC8416A2AA5DA313E05A2AF45EF6 (XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Schema.XmlSchemaParticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaParticle__ctor_m64085D4FE99BD7935AE3E23F5C3BF7EDB5BC1B79 (XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::FixupMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSerializationReaderInterpreter_FixupMembers_mB6792FEAA5D621FE8789D4F1F8D45BB1F9BDE067 (XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * __this, ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB * ___map0, RuntimeObject * ___obfixup1, bool ___isValueList2, const RuntimeMethod* method);
// System.String System.Xml.Serialization.XmlMapping::get_ElementName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlMapping_get_ElementName_m325D48DC1385A3577E5B4948F1F116861A215CEF_inline (XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9 * __this, const RuntimeMethod* method);
// System.String System.Xml.Serialization.XmlMapping::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlMapping_get_Namespace_mC81A8F368DA39CCD355792888D951BE2A8B21835_inline (XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Xml.XmlException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m113008AE4B646E85154C99B3CBB55D536CBEFEB9 (XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918 * __this, String_t* ___res0, String_t* ___arg1, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD (String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdDefaultAttributeInfoToNodeDataComparer__ctor_m327CBD841F71F8D23F89F4BDB1C324CB870DA2D5 (DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC * __this, const RuntimeMethod* method);
// System.Xml.XmlNameTable System.Xml.XmlTextReaderImpl::get_DtdParserProxy_NameTable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * XmlTextReaderImpl_get_DtdParserProxy_NameTable_mA567221B0BD05C6BF365121EF52549079FF67D9B_inline (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Xml.IXmlNamespaceResolver System.Xml.XmlTextReaderImpl::get_DtdParserProxy_NamespaceResolver()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XmlTextReaderImpl_get_DtdParserProxy_NamespaceResolver_m6A9BA136D735089A09CEB096E0D839AAC7E281FC_inline (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Uri System.Xml.XmlTextReaderImpl::get_DtdParserProxy_BaseUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * XmlTextReaderImpl_get_DtdParserProxy_BaseUri_mCE10049FE4A8821152EE99B73D10A209742392CA (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_DtdParserProxy_IsEof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_IsEof_m13733FCF75EDC19FD816AC51941CB8FB962A486B (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Char[] System.Xml.XmlTextReaderImpl::get_DtdParserProxy_ParsingBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* XmlTextReaderImpl_get_DtdParserProxy_ParsingBuffer_mB70D61FBA9AA7A5E313613ACD8B30DCA2B6D2FEB (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::get_DtdParserProxy_ParsingBufferLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_get_DtdParserProxy_ParsingBufferLength_mD5613762191E3EEEA23DA5DE0EF2C8FB21577D0C (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::get_DtdParserProxy_CurrentPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_get_DtdParserProxy_CurrentPosition_m28456EAF24A02277AAF87AB79D712105F244D707 (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::set_DtdParserProxy_CurrentPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextReaderImpl_set_DtdParserProxy_CurrentPosition_m995C56DBAC314FB044B1E49933065BF154D02E9F (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::get_DtdParserProxy_EntityStackLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_get_DtdParserProxy_EntityStackLength_m61FA991027E1A9A410B30BBC69180D6427FE05B0 (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_DtdParserProxy_IsEntityEolNormalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_IsEntityEolNormalized_m11F429D654706C17F9A22ED2FAE2041F98EB8DE1 (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_OnNewLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_OnNewLine_mBFF6E843E6C26A7B60FB1D36E0CAD2F4FB835A00 (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, int32_t ___pos0, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::get_DtdParserProxy_LineNo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_get_DtdParserProxy_LineNo_m129EADD0F6CD778B3DF123FFBC898D3D58D63FCD (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::get_DtdParserProxy_LineStartPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_get_DtdParserProxy_LineStartPosition_m951C51E2CFE3F3C9AB7C3680D3212798DF74BBA9 (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::DtdParserProxy_ReadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_DtdParserProxy_ReadData_m66EB3594B25D28E431F99AC7D95EC6634F7DC526 (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::DtdParserProxy_ParseNumericCharRef(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_DtdParserProxy_ParseNumericCharRef_m39D4CD5F94D141D336EFF548AE1BE5ADB56D078D (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, StringBuilder_t * ___internalSubsetBuilder0, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::DtdParserProxy_ParseNamedCharRef(System.Boolean,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_DtdParserProxy_ParseNamedCharRef_m6534D46BB2CD419139F69B5F11F26B862568DDFB (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, bool ___expand0, StringBuilder_t * ___internalSubsetBuilder1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_ParsePI(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_ParsePI_mAE961B995AF007A4B3FF2401D8E162097C76631F (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_ParseComment(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_ParseComment_mDEE3956D7D181C76831CE94E946E5925659026E6 (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::DtdParserProxy_PushEntity(System.Xml.IDtdEntityInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_DtdParserProxy_PushEntity_m1FE85F4F9604C6B97780EC6DCF42D29C53EE63D7 (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, RuntimeObject* ___entity0, int32_t* ___entityId1, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::DtdParserProxy_PopEntity(System.Xml.IDtdEntityInfo&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_DtdParserProxy_PopEntity_m9E4CC26F8E9B3575B383F54E0B9007894C955122 (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, RuntimeObject** ___oldEntity0, int32_t* ___newEntityId1, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::DtdParserProxy_PushExternalSubset(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_DtdParserProxy_PushExternalSubset_mAC0206AAEC281D0D29148A1064BE53400E0E916D (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, String_t* ___systemId0, String_t* ___publicId1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_PushInternalDtd(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_PushInternalDtd_mF9CDFC87D8E8D1136B0E5723E6A6F6F64116A7E4 (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, String_t* ___baseUri0, String_t* ___internalDtd1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_Throw(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_Throw_m89A969A79E65E0700AEED33390E179E1CB506DBB (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_OnSystemId(System.String,System.Xml.LineInfo,System.Xml.LineInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_OnSystemId_m67D9C87D1E7E5465BA7C9CA6C579599F85850886 (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, String_t* ___systemId0, LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  ___keywordLineInfo1, LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  ___systemLiteralLineInfo2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_OnPublicId(System.String,System.Xml.LineInfo,System.Xml.LineInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_OnPublicId_m92D1DB1D7F1B15CD6B2452E68F3BDD8A262F8D4D (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, String_t* ___publicId0, LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  ___keywordLineInfo1, LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  ___publicLiteralLineInfo2, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_DtdParserProxy_DtdValidation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_DtdValidation_m7D47BC9FB2D5F45ADF4BE7F253AEC4AB943D49F1 (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Xml.IValidationEventHandling System.Xml.XmlTextReaderImpl::get_DtdParserProxy_ValidationEventHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XmlTextReaderImpl_get_DtdParserProxy_ValidationEventHandling_m86F807BDC2BEF934D72F2A65FC7F97262735A219_inline (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_DtdParserProxy_Normalization()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_Normalization_m114C15F2776A94727A5992DB26D65BDC1D670543_inline (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_DtdParserProxy_Namespaces()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_Namespaces_m8D805DAFFE1332B0E23F2D3AE2959A29C8190FD3_inline (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_DtdParserProxy_V1CompatibilityMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_V1CompatibilityMode_m1B3ACC4435FE2768144414FF216E145916403325_inline (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlNamespaceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNamespaceManager__ctor_mA04CAB0559468548EC72C74A2188AB3ACF892D0E (XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/NodeData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData__ctor_m98A61DC61B90E41B17BC4B4ECC19E93DEE2C49D1 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/NodeData::Clear(System.Xml.XmlNodeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_Clear_mA1DC123EFEF100E0BAE5D5860DED5C0AC83EAB94 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, int32_t ___type0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl/NodeData::get_ValueBuffered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeData_get_ValueBuffered_mE5170B30D387085171C045FDAC10C67D4554D39D (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::StripSpaces(System.Char[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextReaderImpl_StripSpaces_m31199178A54A5DFDE4C25A53BA7C30C94ACE21E2 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, int32_t ___index1, int32_t* ___len2, const RuntimeMethod* method);
// System.String System.Xml.XmlTextReaderImpl::StripSpaces(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlTextReaderImpl_StripSpaces_m7E86D065374C4523748953DDCD39D09AF892DACC (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/NodeData::ClearName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_ClearName_mC3A98BBF65ABAE00AFE65E1942BB348021D1D0C9 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method);
// System.Void System.Xml.LineInfo::Set(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfo_Set_mAA6F06BA4463E64A24070063EE26BF665EC28B99 (LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE * __this, int32_t ___lineNo0, int32_t ___linePos1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/NodeData::SetNamedNode(System.Xml.XmlNodeType,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_SetNamedNode_mFE5340CD2CF846E5AADCE3F7D8925BB1780683F9 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, int32_t ___type0, String_t* ___localName1, String_t* ___prefix2, String_t* ___nameWPrefix3, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m4B771D7BFE8A65C9A504EC5847A699EB678B02DB (StringBuilder_t * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17 (StringBuilder_t * __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method);
// System.String System.Xml.XmlTextReaderImpl/NodeData::CreateNameWPrefix(System.Xml.XmlNameTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeData_CreateNameWPrefix_mE5F2F6096757CECF6F0C49FB0542EFBF15A9C7C3 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * ___nt0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.Xml.Ref::Equal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F (String_t* ___strA0, String_t* ___strB1, const RuntimeMethod* method);
// System.Int32 System.String::CompareOrdinal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m1C7F94040504F35C89EBC8826D77FEA81B9C2C0E (String_t* ___strA0, String_t* ___strB1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/ParsingState::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingState_Clear_m23A1DD27BCE9143D4C4E6D5A45C0F4AA1FECA004 (ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/ParsingState::Close(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingState_Close_m689F0D29DA61913B5406B7E42E675DED08CEC10F (ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * __this, bool ___closeInput0, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::get_LineNo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParsingState_get_LineNo_m9C32240CFE61AE19697B7C9EFA5DE9B44D3C9610_inline (ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::get_LinePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParsingState_get_LinePos_mB937EA68EFFA791C24EDC7C1DFFE45732EBFFD5C (ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Xml.XmlDownloadManager System.Xml.XmlUrlResolver::get_DownloadManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlDownloadManager_t28FF2F536CFB5125C74928F7DC706692604D5A9D * XmlUrlResolver_get_DownloadManager_m5A25332CBCCAB9CBC41955E665944D016CE2804E (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.IO.Stream> System.Xml.XmlDownloadManager::GetStreamAsync(System.Uri,System.Net.ICredentials,System.Net.IWebProxy,System.Net.Cache.RequestCachePolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602 * XmlDownloadManager_GetStreamAsync_m8651CC7437004016BCBB9742D71972CBAAB94E62 (XmlDownloadManager_t28FF2F536CFB5125C74928F7DC706692604D5A9D * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, RuntimeObject* ___credentials1, RuntimeObject* ___proxy2, RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED * ___cachePolicy3, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.IO.Stream>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t7EA81BB95AB4DBB79ADF06E9518D55B0721DC03C  Task_1_ConfigureAwait_m4A6D2565EE9545645B9418B3B2CC34B6A3D260A8 (Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t7EA81BB95AB4DBB79ADF06E9518D55B0721DC03C  (*) (Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.IO.Stream>::GetAwaiter()
inline ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC  ConfiguredTaskAwaitable_1_GetAwaiter_m4F1ED70E3551027C342566D331FE99EB40F7C076_inline (ConfiguredTaskAwaitable_1_t7EA81BB95AB4DBB79ADF06E9518D55B0721DC03C * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC  (*) (ConfiguredTaskAwaitable_1_t7EA81BB95AB4DBB79ADF06E9518D55B0721DC03C *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mB7A99A944FAEF631A2EC109FADBF428D6A12FC0F (ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>,System.Xml.XmlUrlResolver/<GetEntityAsync>d__15>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC_TisU3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218_m3B21BB85DA84F2172127634BA0CCA9EF4FFE865F (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC * ___awaiter0, U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC *, U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218_mDAE57A4AFAD3B1106D854AC150240C2D1A344D57_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>::GetResult()
inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ConfiguredTaskAwaiter_GetResult_mAD154326007808FFD2047A47BD8C312B91A05FCD (ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC * __this, const RuntimeMethod* method)
{
	return ((  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * (*) (ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3 (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, RuntimeObject *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEntityAsyncU3Ed__15_MoveNext_m6F75ADBC40411959ECD71C921F282AB4102D208E (U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEntityAsyncU3Ed__15_SetStateMachine_m9A31F8EDD492D50FFA4F9FCC8F0FBAD9DD1D3E93 (U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWellFormedWriter/AttrName::Set(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttrName_Set_m670AC1B21A3697B638023B9FBD1E04DCF9D3052B (AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlWellFormedWriter/AttrName::IsDuplicate(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttrName_IsDuplicate_m4AC75CB7B66F45F9F7442F8B18AD33E251CB4D32 (AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const RuntimeMethod* method);
// System.Void System.Xml.XmlWellFormedWriter/AttributeValueCache::StartComplexValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_StartComplexValue_mABF6AA6F8A30162A6F433CFFCAF0D0BE79311454 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWellFormedWriter/AttributeValueCache::AddItem(System.Xml.XmlWellFormedWriter/AttributeValueCache/ItemType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, int32_t ___type0, RuntimeObject * ___data1, const RuntimeMethod* method);
// System.Void System.Xml.XmlWellFormedWriter/AttributeValueCache/BufferChunk::.ctor(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferChunk__ctor_mA0A1D11DB3A3EFA1671DA5B5BF20ADC05DEB326D (BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::TrimString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_TrimString_mF0E4AC16BD05053538B20B21DBD64447195A2D1B (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Xml.XmlCharType System.Xml.XmlCharType::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  XmlCharType_get_Instance_mA3CFC9BC3797565FD176224C6116F41AC8BA65B5 (const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::TrimStringStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_TrimStringStart_m430B3EFD170D03F58CC8C419D421AEA7AB7FD859 (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlCharType::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsWhiteSpace_m4EE0C544C3C666A6BBAAE63BDD5CFB221655DDA0 (XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA * __this, Il2CppChar ___ch0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::TrimStringEnd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_TrimStringEnd_m49BB2083DDE01A5251215D81D721E315C9270DB0 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Xml.XmlWellFormedWriter/AttributeValueCache/Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m665B675DD337B875403961D152E3727546C08451 (Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWellFormedWriter/AttributeValueCache/Item::Set(System.Xml.XmlWellFormedWriter/AttributeValueCache/ItemType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Set_m681A661CE0DDF8B8BDE87368422863CBE7C4836C (Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * __this, int32_t ___type0, RuntimeObject * ___data1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWellFormedWriter/ElementScope::Set(System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementScope_Set_m3195A84F957C5A3B5C18AF4D9511E8D5638354DC (ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, int32_t ___prevNSTop3, const RuntimeMethod* method);
// System.Void System.Xml.XmlWellFormedWriter/ElementScope::WriteEndElement(System.Xml.XmlRawWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementScope_WriteEndElement_mC36BE0462387942175D03BE353AFCBA993314499 (ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 * __this, XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * ___rawWriter0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWellFormedWriter/ElementScope::WriteFullEndElement(System.Xml.XmlRawWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementScope_WriteFullEndElement_m5DDEA1A5F0728660E314BAFDCD52462E65D34299 (ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 * __this, XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * ___rawWriter0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWellFormedWriter/Namespace::Set(System.String,System.String,System.Xml.XmlWellFormedWriter/NamespaceKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Namespace_Set_mBC3EC65E5DAC5566D507031854355191E8A432CA (Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00 * __this, String_t* ___prefix0, String_t* ___namespaceUri1, int32_t ___kind2, const RuntimeMethod* method);
// System.Void System.Xml.XmlWellFormedWriter/Namespace::WriteDecl(System.Xml.XmlWriter,System.Xml.XmlRawWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Namespace_WriteDecl_mDC2FAE6430835463C87F91004DD93F8695CB714A (Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00 * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * ___rawWriter1, const RuntimeMethod* method);
// System.String System.Xml.XmlWellFormedWriter::LookupNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlWellFormedWriter_LookupNamespace_m97A8F15A380CBCD257CEFF961513A2D433AE34EE (XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667 * __this, String_t* ___prefix0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::Test(System.Xml.Schema.XsdDateTimeFlags,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982 (int32_t ___left0, int32_t ___right1, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseDate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseDate_m23E3A2F31DFAA15C290E80E7D32F8981686A515F (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseChar(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, Il2CppChar ___ch1, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseTimeAndZoneAndWhitespace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseTimeAndZoneAndWhitespace_mD3C814A74159B2A1D9833D62B387855AA750A7D7 (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseZoneAndWhitespace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseTimeAndWhitespace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseTimeAndWhitespace_mBCF164792A47E16B97330955841DCE66BC3EE76F (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::Parse4Dig(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Parse4Dig_m65BF5864AF2DAF8C2C5C4986EF5033E430211E85 (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::Parse2Dig(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581 (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method);
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_DaysInMonth_m64931EEDA4428AD99566FCF0434BA298153E4531 (int32_t ___year0, int32_t ___month1, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::Parse(System.String,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Parse_m4967C6E2F360C1BCAAEDC78816BBADE6F5A6C297 (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, String_t* ___text0, int32_t ___kinds1, const RuntimeMethod* method);
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseTime(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseTime_m8B8F8087006D4BDFE3FF8E239ACE293C68A41339 (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t* ___start0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96 (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Xml.XmlEventCache/XmlEvent
IL2CPP_EXTERN_C void XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshal_pinvoke(const XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8& unmarshaled, XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshaled_pinvoke& marshaled)
{
	marshaled.___eventType_0 = unmarshaled.get_eventType_0();
	marshaled.___s1_1 = il2cpp_codegen_marshal_string(unmarshaled.get_s1_1());
	marshaled.___s2_2 = il2cpp_codegen_marshal_string(unmarshaled.get_s2_2());
	marshaled.___s3_3 = il2cpp_codegen_marshal_string(unmarshaled.get_s3_3());
	if (unmarshaled.get_o_4() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_o_4()))
		{
			marshaled.___o_4 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_o_4()));
			(marshaled.___o_4)->AddRef();
		}
		else
		{
			marshaled.___o_4 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_o_4());
		}
	}
	else
	{
		marshaled.___o_4 = NULL;
	}
}
IL2CPP_EXTERN_C void XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshal_pinvoke_back(const XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshaled_pinvoke& marshaled, XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_eventType_temp_0 = 0;
	unmarshaled_eventType_temp_0 = marshaled.___eventType_0;
	unmarshaled.set_eventType_0(unmarshaled_eventType_temp_0);
	unmarshaled.set_s1_1(il2cpp_codegen_marshal_string_result(marshaled.___s1_1));
	unmarshaled.set_s2_2(il2cpp_codegen_marshal_string_result(marshaled.___s2_2));
	unmarshaled.set_s3_3(il2cpp_codegen_marshal_string_result(marshaled.___s3_3));
	if (marshaled.___o_4 != NULL)
	{
		unmarshaled.set_o_4(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___o_4, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_o_4()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_o_4()), Il2CppIUnknown::IID, marshaled.___o_4);
		}
	}
	else
	{
		unmarshaled.set_o_4(NULL);
	}
}
// Conversion method for clean up from marshalling of: System.Xml.XmlEventCache/XmlEvent
IL2CPP_EXTERN_C void XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshal_pinvoke_cleanup(XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___s1_1);
	marshaled.___s1_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___s2_2);
	marshaled.___s2_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___s3_3);
	marshaled.___s3_3 = NULL;
	if (marshaled.___o_4 != NULL)
	{
		(marshaled.___o_4)->Release();
		marshaled.___o_4 = NULL;
	}
}
// Conversion methods for marshalling of: System.Xml.XmlEventCache/XmlEvent
IL2CPP_EXTERN_C void XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshal_com(const XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8& unmarshaled, XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshaled_com& marshaled)
{
	marshaled.___eventType_0 = unmarshaled.get_eventType_0();
	marshaled.___s1_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_s1_1());
	marshaled.___s2_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_s2_2());
	marshaled.___s3_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_s3_3());
	if (unmarshaled.get_o_4() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_o_4()))
		{
			marshaled.___o_4 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_o_4()));
			(marshaled.___o_4)->AddRef();
		}
		else
		{
			marshaled.___o_4 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_o_4());
		}
	}
	else
	{
		marshaled.___o_4 = NULL;
	}
}
IL2CPP_EXTERN_C void XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshal_com_back(const XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshaled_com& marshaled, XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_eventType_temp_0 = 0;
	unmarshaled_eventType_temp_0 = marshaled.___eventType_0;
	unmarshaled.set_eventType_0(unmarshaled_eventType_temp_0);
	unmarshaled.set_s1_1(il2cpp_codegen_marshal_bstring_result(marshaled.___s1_1));
	unmarshaled.set_s2_2(il2cpp_codegen_marshal_bstring_result(marshaled.___s2_2));
	unmarshaled.set_s3_3(il2cpp_codegen_marshal_bstring_result(marshaled.___s3_3));
	if (marshaled.___o_4 != NULL)
	{
		unmarshaled.set_o_4(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___o_4, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_o_4()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_o_4()), Il2CppIUnknown::IID, marshaled.___o_4);
		}
	}
	else
	{
		unmarshaled.set_o_4(NULL);
	}
}
// Conversion method for clean up from marshalling of: System.Xml.XmlEventCache/XmlEvent
IL2CPP_EXTERN_C void XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshal_com_cleanup(XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___s1_1);
	marshaled.___s1_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___s2_2);
	marshaled.___s2_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___s3_3);
	marshaled.___s3_3 = NULL;
	if (marshaled.___o_4 != NULL)
	{
		(marshaled.___o_4)->Release();
		marshaled.___o_4 = NULL;
	}
}
// System.Void System.Xml.XmlEventCache_XmlEvent::InitEvent(System.Xml.XmlEventCache_XmlEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_m697F8F1C5FBAEBF07EEEFF5DF39BBB0B3046BC95 (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___eventType0;
		__this->set_eventType_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XmlEvent_InitEvent_m697F8F1C5FBAEBF07EEEFF5DF39BBB0B3046BC95_AdjustorThunk (RuntimeObject * __this, int32_t ___eventType0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * _thisAdjusted = reinterpret_cast<XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 *>(__this + _offset);
	XmlEvent_InitEvent_m697F8F1C5FBAEBF07EEEFF5DF39BBB0B3046BC95_inline(_thisAdjusted, ___eventType0, method);
}
// System.Void System.Xml.XmlEventCache_XmlEvent::InitEvent(System.Xml.XmlEventCache_XmlEventType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_m97CBD24760A7B28920D39BFCF894D00562B007C1 (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, String_t* ___s11, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___eventType0;
		__this->set_eventType_0(L_0);
		String_t* L_1 = ___s11;
		__this->set_s1_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void XmlEvent_InitEvent_m97CBD24760A7B28920D39BFCF894D00562B007C1_AdjustorThunk (RuntimeObject * __this, int32_t ___eventType0, String_t* ___s11, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * _thisAdjusted = reinterpret_cast<XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 *>(__this + _offset);
	XmlEvent_InitEvent_m97CBD24760A7B28920D39BFCF894D00562B007C1(_thisAdjusted, ___eventType0, ___s11, method);
}
// System.Void System.Xml.XmlEventCache_XmlEvent::InitEvent(System.Xml.XmlEventCache_XmlEventType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_m1F01A7DF45F8CF6EB8A70E7EDD5702DA5CF7E026 (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___eventType0;
		__this->set_eventType_0(L_0);
		String_t* L_1 = ___s11;
		__this->set_s1_1(L_1);
		String_t* L_2 = ___s22;
		__this->set_s2_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void XmlEvent_InitEvent_m1F01A7DF45F8CF6EB8A70E7EDD5702DA5CF7E026_AdjustorThunk (RuntimeObject * __this, int32_t ___eventType0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * _thisAdjusted = reinterpret_cast<XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 *>(__this + _offset);
	XmlEvent_InitEvent_m1F01A7DF45F8CF6EB8A70E7EDD5702DA5CF7E026(_thisAdjusted, ___eventType0, ___s11, ___s22, method);
}
// System.Void System.Xml.XmlEventCache_XmlEvent::InitEvent(System.Xml.XmlEventCache_XmlEventType,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_m27372226CAE65BD167B245E4636C47406982454E (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, String_t* ___s11, String_t* ___s22, String_t* ___s33, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___eventType0;
		__this->set_eventType_0(L_0);
		String_t* L_1 = ___s11;
		__this->set_s1_1(L_1);
		String_t* L_2 = ___s22;
		__this->set_s2_2(L_2);
		String_t* L_3 = ___s33;
		__this->set_s3_3(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void XmlEvent_InitEvent_m27372226CAE65BD167B245E4636C47406982454E_AdjustorThunk (RuntimeObject * __this, int32_t ___eventType0, String_t* ___s11, String_t* ___s22, String_t* ___s33, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * _thisAdjusted = reinterpret_cast<XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 *>(__this + _offset);
	XmlEvent_InitEvent_m27372226CAE65BD167B245E4636C47406982454E(_thisAdjusted, ___eventType0, ___s11, ___s22, ___s33, method);
}
// System.Void System.Xml.XmlEventCache_XmlEvent::InitEvent(System.Xml.XmlEventCache_XmlEventType,System.String,System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_mC0BABAD00E5DAE5C23EE9D545B7B105DDEB2C4FB (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, String_t* ___s11, String_t* ___s22, String_t* ___s33, RuntimeObject * ___o4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___eventType0;
		__this->set_eventType_0(L_0);
		String_t* L_1 = ___s11;
		__this->set_s1_1(L_1);
		String_t* L_2 = ___s22;
		__this->set_s2_2(L_2);
		String_t* L_3 = ___s33;
		__this->set_s3_3(L_3);
		RuntimeObject * L_4 = ___o4;
		__this->set_o_4(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void XmlEvent_InitEvent_mC0BABAD00E5DAE5C23EE9D545B7B105DDEB2C4FB_AdjustorThunk (RuntimeObject * __this, int32_t ___eventType0, String_t* ___s11, String_t* ___s22, String_t* ___s33, RuntimeObject * ___o4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * _thisAdjusted = reinterpret_cast<XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 *>(__this + _offset);
	XmlEvent_InitEvent_mC0BABAD00E5DAE5C23EE9D545B7B105DDEB2C4FB(_thisAdjusted, ___eventType0, ___s11, ___s22, ___s33, ___o4, method);
}
// System.Void System.Xml.XmlEventCache_XmlEvent::InitEvent(System.Xml.XmlEventCache_XmlEventType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_mB94B972DF8B3C9C759907CD4238EB9CABCE73A9F (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, RuntimeObject * ___o1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___eventType0;
		__this->set_eventType_0(L_0);
		RuntimeObject * L_1 = ___o1;
		__this->set_o_4(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void XmlEvent_InitEvent_mB94B972DF8B3C9C759907CD4238EB9CABCE73A9F_AdjustorThunk (RuntimeObject * __this, int32_t ___eventType0, RuntimeObject * ___o1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * _thisAdjusted = reinterpret_cast<XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 *>(__this + _offset);
	XmlEvent_InitEvent_mB94B972DF8B3C9C759907CD4238EB9CABCE73A9F(_thisAdjusted, ___eventType0, ___o1, method);
}
// System.Xml.XmlEventCache_XmlEventType System.Xml.XmlEventCache_XmlEvent::get_EventType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlEvent_get_EventType_m5E1A3D64EE0DF5F7A21C9A18107C0C9C7C1C66C7 (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_eventType_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XmlEvent_get_EventType_m5E1A3D64EE0DF5F7A21C9A18107C0C9C7C1C66C7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * _thisAdjusted = reinterpret_cast<XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 *>(__this + _offset);
	return XmlEvent_get_EventType_m5E1A3D64EE0DF5F7A21C9A18107C0C9C7C1C66C7_inline(_thisAdjusted, method);
}
// System.String System.Xml.XmlEventCache_XmlEvent::get_String1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlEvent_get_String1_mDAC92F7047BE968646E4D51C6409D7CD4012DCFB (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_s1_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* XmlEvent_get_String1_mDAC92F7047BE968646E4D51C6409D7CD4012DCFB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * _thisAdjusted = reinterpret_cast<XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 *>(__this + _offset);
	return XmlEvent_get_String1_mDAC92F7047BE968646E4D51C6409D7CD4012DCFB_inline(_thisAdjusted, method);
}
// System.String System.Xml.XmlEventCache_XmlEvent::get_String2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlEvent_get_String2_mA958CB1614BFB8F5E3FB01B69A012B3ADDA51EDA (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_s2_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* XmlEvent_get_String2_mA958CB1614BFB8F5E3FB01B69A012B3ADDA51EDA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * _thisAdjusted = reinterpret_cast<XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 *>(__this + _offset);
	return XmlEvent_get_String2_mA958CB1614BFB8F5E3FB01B69A012B3ADDA51EDA_inline(_thisAdjusted, method);
}
// System.String System.Xml.XmlEventCache_XmlEvent::get_String3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlEvent_get_String3_mCFB8894B848A4CAE67E7562D27881348E6B206EF (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_s3_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* XmlEvent_get_String3_mCFB8894B848A4CAE67E7562D27881348E6B206EF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * _thisAdjusted = reinterpret_cast<XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 *>(__this + _offset);
	return XmlEvent_get_String3_mCFB8894B848A4CAE67E7562D27881348E6B206EF_inline(_thisAdjusted, method);
}
// System.Object System.Xml.XmlEventCache_XmlEvent::get_Object()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XmlEvent_get_Object_m53492BB3E8D7BE92F2B0A3A1230A6833CE1CC71F (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_o_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * XmlEvent_get_Object_m53492BB3E8D7BE92F2B0A3A1230A6833CE1CC71F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * _thisAdjusted = reinterpret_cast<XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 *>(__this + _offset);
	return XmlEvent_get_Object_m53492BB3E8D7BE92F2B0A3A1230A6833CE1CC71F_inline(_thisAdjusted, method);
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
// Conversion methods for marshalling of: System.Xml.XmlNamedNodeMap/SmallXmlNodeList
IL2CPP_EXTERN_C void SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshal_pinvoke(const SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE& unmarshaled, SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_field_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_field_0()))
		{
			marshaled.___field_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_field_0()));
			(marshaled.___field_0)->AddRef();
		}
		else
		{
			marshaled.___field_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_field_0());
		}
	}
	else
	{
		marshaled.___field_0 = NULL;
	}
}
IL2CPP_EXTERN_C void SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshal_pinvoke_back(const SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_pinvoke& marshaled, SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___field_0 != NULL)
	{
		unmarshaled.set_field_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___field_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_field_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_field_0()), Il2CppIUnknown::IID, marshaled.___field_0);
		}
	}
	else
	{
		unmarshaled.set_field_0(NULL);
	}
}
// Conversion method for clean up from marshalling of: System.Xml.XmlNamedNodeMap/SmallXmlNodeList
IL2CPP_EXTERN_C void SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshal_pinvoke_cleanup(SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_pinvoke& marshaled)
{
	if (marshaled.___field_0 != NULL)
	{
		(marshaled.___field_0)->Release();
		marshaled.___field_0 = NULL;
	}
}
// Conversion methods for marshalling of: System.Xml.XmlNamedNodeMap/SmallXmlNodeList
IL2CPP_EXTERN_C void SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshal_com(const SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE& unmarshaled, SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_com& marshaled)
{
	if (unmarshaled.get_field_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_field_0()))
		{
			marshaled.___field_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_field_0()));
			(marshaled.___field_0)->AddRef();
		}
		else
		{
			marshaled.___field_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_field_0());
		}
	}
	else
	{
		marshaled.___field_0 = NULL;
	}
}
IL2CPP_EXTERN_C void SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshal_com_back(const SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_com& marshaled, SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___field_0 != NULL)
	{
		unmarshaled.set_field_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___field_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_field_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_field_0()), Il2CppIUnknown::IID, marshaled.___field_0);
		}
	}
	else
	{
		unmarshaled.set_field_0(NULL);
	}
}
// Conversion method for clean up from marshalling of: System.Xml.XmlNamedNodeMap/SmallXmlNodeList
IL2CPP_EXTERN_C void SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshal_com_cleanup(SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_com& marshaled)
{
	if (marshaled.___field_0 != NULL)
	{
		(marshaled.___field_0)->Release();
		marshaled.___field_0 = NULL;
	}
}
// System.Int32 System.Xml.XmlNamedNodeMap_SmallXmlNodeList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallXmlNodeList_get_Count_m531CBC894FC78314798ED52A184AB776B4C1E482 (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmallXmlNodeList_get_Count_m531CBC894FC78314798ED52A184AB776B4C1E482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_field_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = __this->get_field_0();
		V_0 = ((ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)IsInstClass((RuntimeObject*)L_1, ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var));
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
		return L_4;
	}

IL_0020:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  int32_t SmallXmlNodeList_get_Count_m531CBC894FC78314798ED52A184AB776B4C1E482_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * _thisAdjusted = reinterpret_cast<SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE *>(__this + _offset);
	return SmallXmlNodeList_get_Count_m531CBC894FC78314798ED52A184AB776B4C1E482(_thisAdjusted, method);
}
// System.Object System.Xml.XmlNamedNodeMap_SmallXmlNodeList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SmallXmlNodeList_get_Item_mB9359FC058C97EE9AD78BB1131A921616814A90E (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmallXmlNodeList_get_Item_mB9359FC058C97EE9AD78BB1131A921616814A90E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_field_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, SmallXmlNodeList_get_Item_mB9359FC058C97EE9AD78BB1131A921616814A90E_RuntimeMethod_var);
	}

IL_0013:
	{
		RuntimeObject * L_2 = __this->get_field_0();
		V_0 = ((ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)IsInstClass((RuntimeObject*)L_2, ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var));
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_4 = V_0;
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		return L_6;
	}

IL_002a:
	{
		int32_t L_7 = ___index0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_8, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, SmallXmlNodeList_get_Item_mB9359FC058C97EE9AD78BB1131A921616814A90E_RuntimeMethod_var);
	}

IL_0038:
	{
		RuntimeObject * L_9 = __this->get_field_0();
		return L_9;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * SmallXmlNodeList_get_Item_mB9359FC058C97EE9AD78BB1131A921616814A90E_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * _thisAdjusted = reinterpret_cast<SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE *>(__this + _offset);
	return SmallXmlNodeList_get_Item_mB9359FC058C97EE9AD78BB1131A921616814A90E(_thisAdjusted, ___index0, method);
}
// System.Void System.Xml.XmlNamedNodeMap_SmallXmlNodeList::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallXmlNodeList_Add_m23AA92A77C388F16C324B3DABE2FB17E3DA5DCF6 (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmallXmlNodeList_Add_m23AA92A77C388F16C324B3DABE2FB17E3DA5DCF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * V_0 = NULL;
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get_field_0();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject * L_1 = ___value0;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_2 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_3 = V_1;
		NullCheck(L_3);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_3, NULL);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_4 = V_1;
		__this->set_field_0(L_4);
		return;
	}

IL_0021:
	{
		RuntimeObject * L_5 = ___value0;
		__this->set_field_0(L_5);
		return;
	}

IL_0029:
	{
		RuntimeObject * L_6 = __this->get_field_0();
		V_0 = ((ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)IsInstClass((RuntimeObject*)L_6, ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var));
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_8 = V_0;
		RuntimeObject * L_9 = ___value0;
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_9);
		return;
	}

IL_0041:
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_10 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_10, /*hidden argument*/NULL);
		V_0 = L_10;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_11 = V_0;
		RuntimeObject * L_12 = __this->get_field_0();
		NullCheck(L_11);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_11, L_12);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_13 = V_0;
		RuntimeObject * L_14 = ___value0;
		NullCheck(L_13);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_13, L_14);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_15 = V_0;
		__this->set_field_0(L_15);
		return;
	}
}
IL2CPP_EXTERN_C  void SmallXmlNodeList_Add_m23AA92A77C388F16C324B3DABE2FB17E3DA5DCF6_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * _thisAdjusted = reinterpret_cast<SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE *>(__this + _offset);
	SmallXmlNodeList_Add_m23AA92A77C388F16C324B3DABE2FB17E3DA5DCF6(_thisAdjusted, ___value0, method);
}
// System.Void System.Xml.XmlNamedNodeMap_SmallXmlNodeList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallXmlNodeList_RemoveAt_mA3D7ACC3756E6109DBA4F77F83E2AF9A639A0FCE (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmallXmlNodeList_RemoveAt_mA3D7ACC3756E6109DBA4F77F83E2AF9A639A0FCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_field_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, SmallXmlNodeList_RemoveAt_mA3D7ACC3756E6109DBA4F77F83E2AF9A639A0FCE_RuntimeMethod_var);
	}

IL_0013:
	{
		RuntimeObject * L_2 = __this->get_field_0();
		V_0 = ((ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)IsInstClass((RuntimeObject*)L_2, ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var));
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_4 = V_0;
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(40 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_4, L_5);
		return;
	}

IL_002a:
	{
		int32_t L_6 = ___index0;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_7 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_7, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, SmallXmlNodeList_RemoveAt_mA3D7ACC3756E6109DBA4F77F83E2AF9A639A0FCE_RuntimeMethod_var);
	}

IL_0038:
	{
		__this->set_field_0(NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void SmallXmlNodeList_RemoveAt_mA3D7ACC3756E6109DBA4F77F83E2AF9A639A0FCE_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * _thisAdjusted = reinterpret_cast<SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE *>(__this + _offset);
	SmallXmlNodeList_RemoveAt_mA3D7ACC3756E6109DBA4F77F83E2AF9A639A0FCE(_thisAdjusted, ___index0, method);
}
// System.Void System.Xml.XmlNamedNodeMap_SmallXmlNodeList::Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallXmlNodeList_Insert_m746B9DDFD7B78894075135B2902335F4E6B4465B (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmallXmlNodeList_Insert_m746B9DDFD7B78894075135B2902335F4E6B4465B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_field_0();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = ___index0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, SmallXmlNodeList_Insert_m746B9DDFD7B78894075135B2902335F4E6B4465B_RuntimeMethod_var);
	}

IL_0016:
	{
		RuntimeObject * L_3 = ___value1;
		SmallXmlNodeList_Add_m23AA92A77C388F16C324B3DABE2FB17E3DA5DCF6((SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE *)__this, L_3, /*hidden argument*/NULL);
		return;
	}

IL_001e:
	{
		RuntimeObject * L_4 = __this->get_field_0();
		V_0 = ((ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)IsInstClass((RuntimeObject*)L_4, ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var));
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_6 = V_0;
		int32_t L_7 = ___index0;
		RuntimeObject * L_8 = ___value1;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(37 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_6, L_7, L_8);
		return;
	}

IL_0036:
	{
		int32_t L_9 = ___index0;
		if (L_9)
		{
			goto IL_005c;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_10 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_10, /*hidden argument*/NULL);
		V_0 = L_10;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_11 = V_0;
		RuntimeObject * L_12 = ___value1;
		NullCheck(L_11);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_11, L_12);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_13 = V_0;
		RuntimeObject * L_14 = __this->get_field_0();
		NullCheck(L_13);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_13, L_14);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_15 = V_0;
		__this->set_field_0(L_15);
		return;
	}

IL_005c:
	{
		int32_t L_16 = ___index0;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_17 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_17, /*hidden argument*/NULL);
		V_0 = L_17;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_18 = V_0;
		RuntimeObject * L_19 = __this->get_field_0();
		NullCheck(L_18);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_18, L_19);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_20 = V_0;
		RuntimeObject * L_21 = ___value1;
		NullCheck(L_20);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_22 = V_0;
		__this->set_field_0(L_22);
		return;
	}

IL_0083:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_23 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_23, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, SmallXmlNodeList_Insert_m746B9DDFD7B78894075135B2902335F4E6B4465B_RuntimeMethod_var);
	}
}
IL2CPP_EXTERN_C  void SmallXmlNodeList_Insert_m746B9DDFD7B78894075135B2902335F4E6B4465B_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * _thisAdjusted = reinterpret_cast<SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE *>(__this + _offset);
	SmallXmlNodeList_Insert_m746B9DDFD7B78894075135B2902335F4E6B4465B(_thisAdjusted, ___index0, ___value1, method);
}
// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap_SmallXmlNodeList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SmallXmlNodeList_GetEnumerator_mB22BFB1AD52DA04FA5D10B8C62D996894DF967C8 (SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmallXmlNodeList_GetEnumerator_mB22BFB1AD52DA04FA5D10B8C62D996894DF967C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_field_0();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_il2cpp_TypeInfo_var);
		EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 * L_1 = ((XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields*)il2cpp_codegen_static_fields_for(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_il2cpp_TypeInfo_var))->get_EmptyEnumerator_41();
		return L_1;
	}

IL_000e:
	{
		RuntimeObject * L_2 = __this->get_field_0();
		V_0 = ((ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)IsInstClass((RuntimeObject*)L_2, ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var));
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(35 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
		return L_5;
	}

IL_0024:
	{
		RuntimeObject * L_6 = __this->get_field_0();
		SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E * L_7 = (SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E *)il2cpp_codegen_object_new(SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E_il2cpp_TypeInfo_var);
		SingleObjectEnumerator__ctor_m604B995B6FF07963B203415E5DD1284159E65BA2(L_7, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* SmallXmlNodeList_GetEnumerator_mB22BFB1AD52DA04FA5D10B8C62D996894DF967C8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * _thisAdjusted = reinterpret_cast<SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE *>(__this + _offset);
	return SmallXmlNodeList_GetEnumerator_mB22BFB1AD52DA04FA5D10B8C62D996894DF967C8(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Xml.XmlNamespaceManager/NamespaceDeclaration
IL2CPP_EXTERN_C void NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshal_pinvoke(const NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48& unmarshaled, NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshaled_pinvoke& marshaled)
{
	marshaled.___prefix_0 = il2cpp_codegen_marshal_string(unmarshaled.get_prefix_0());
	marshaled.___uri_1 = il2cpp_codegen_marshal_string(unmarshaled.get_uri_1());
	marshaled.___scopeId_2 = unmarshaled.get_scopeId_2();
	marshaled.___previousNsIndex_3 = unmarshaled.get_previousNsIndex_3();
}
IL2CPP_EXTERN_C void NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshal_pinvoke_back(const NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshaled_pinvoke& marshaled, NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48& unmarshaled)
{
	unmarshaled.set_prefix_0(il2cpp_codegen_marshal_string_result(marshaled.___prefix_0));
	unmarshaled.set_uri_1(il2cpp_codegen_marshal_string_result(marshaled.___uri_1));
	int32_t unmarshaled_scopeId_temp_2 = 0;
	unmarshaled_scopeId_temp_2 = marshaled.___scopeId_2;
	unmarshaled.set_scopeId_2(unmarshaled_scopeId_temp_2);
	int32_t unmarshaled_previousNsIndex_temp_3 = 0;
	unmarshaled_previousNsIndex_temp_3 = marshaled.___previousNsIndex_3;
	unmarshaled.set_previousNsIndex_3(unmarshaled_previousNsIndex_temp_3);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlNamespaceManager/NamespaceDeclaration
IL2CPP_EXTERN_C void NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshal_pinvoke_cleanup(NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___prefix_0);
	marshaled.___prefix_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___uri_1);
	marshaled.___uri_1 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlNamespaceManager/NamespaceDeclaration
IL2CPP_EXTERN_C void NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshal_com(const NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48& unmarshaled, NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshaled_com& marshaled)
{
	marshaled.___prefix_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_prefix_0());
	marshaled.___uri_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_uri_1());
	marshaled.___scopeId_2 = unmarshaled.get_scopeId_2();
	marshaled.___previousNsIndex_3 = unmarshaled.get_previousNsIndex_3();
}
IL2CPP_EXTERN_C void NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshal_com_back(const NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshaled_com& marshaled, NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48& unmarshaled)
{
	unmarshaled.set_prefix_0(il2cpp_codegen_marshal_bstring_result(marshaled.___prefix_0));
	unmarshaled.set_uri_1(il2cpp_codegen_marshal_bstring_result(marshaled.___uri_1));
	int32_t unmarshaled_scopeId_temp_2 = 0;
	unmarshaled_scopeId_temp_2 = marshaled.___scopeId_2;
	unmarshaled.set_scopeId_2(unmarshaled_scopeId_temp_2);
	int32_t unmarshaled_previousNsIndex_temp_3 = 0;
	unmarshaled_previousNsIndex_temp_3 = marshaled.___previousNsIndex_3;
	unmarshaled.set_previousNsIndex_3(unmarshaled_previousNsIndex_temp_3);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlNamespaceManager/NamespaceDeclaration
IL2CPP_EXTERN_C void NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshal_com_cleanup(NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___prefix_0);
	marshaled.___prefix_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___uri_1);
	marshaled.___uri_1 = NULL;
}
// System.Void System.Xml.XmlNamespaceManager_NamespaceDeclaration::Set(System.String,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceDeclaration_Set_mE6E6F7B98C17F9565B0EF691EA013D0A0CED2A1C (NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48 * __this, String_t* ___prefix0, String_t* ___uri1, int32_t ___scopeId2, int32_t ___previousNsIndex3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		__this->set_prefix_0(L_0);
		String_t* L_1 = ___uri1;
		__this->set_uri_1(L_1);
		int32_t L_2 = ___scopeId2;
		__this->set_scopeId_2(L_2);
		int32_t L_3 = ___previousNsIndex3;
		__this->set_previousNsIndex_3(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void NamespaceDeclaration_Set_mE6E6F7B98C17F9565B0EF691EA013D0A0CED2A1C_AdjustorThunk (RuntimeObject * __this, String_t* ___prefix0, String_t* ___uri1, int32_t ___scopeId2, int32_t ___previousNsIndex3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48 * _thisAdjusted = reinterpret_cast<NamespaceDeclaration_tA6C088F040DB7BC93B5EAF72BFB90CE3C5D1AF48 *>(__this + _offset);
	NamespaceDeclaration_Set_mE6E6F7B98C17F9565B0EF691EA013D0A0CED2A1C(_thisAdjusted, ___prefix0, ___uri1, ___scopeId2, ___previousNsIndex3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_HashCodeOfStringDelegate_tAE9DAB0A55A64F35CCEE05D71856BAAF6C0B668E (HashCodeOfStringDelegate_tAE9DAB0A55A64F35CCEE05D71856BAAF6C0B668E * __this, String_t* ___s0, int32_t ___sLen1, int64_t ___additionalEntropy2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(char*, int32_t, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___s0' to native representation
	char* ____s0_marshaled = NULL;
	____s0_marshaled = il2cpp_codegen_marshal_string(___s0);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____s0_marshaled, ___sLen1, ___additionalEntropy2);

	// Marshaling cleanup of parameter '___s0' native representation
	il2cpp_codegen_marshal_free(____s0_marshaled);
	____s0_marshaled = NULL;

	return returnValue;
}
// System.Void System.Xml.XmlQualifiedName_HashCodeOfStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeOfStringDelegate__ctor_m844FB602B7099CDD0B3C4CE8849B84110227A8BA (HashCodeOfStringDelegate_tAE9DAB0A55A64F35CCEE05D71856BAAF6C0B668E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Xml.XmlQualifiedName_HashCodeOfStringDelegate::Invoke(System.String,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeOfStringDelegate_Invoke_m87607B71AC70881412D955FBD48211D8DDA64523 (HashCodeOfStringDelegate_tAE9DAB0A55A64F35CCEE05D71856BAAF6C0B668E * __this, String_t* ___s0, int32_t ___sLen1, int64_t ___additionalEntropy2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (String_t*, int32_t, int64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___s0, ___sLen1, ___additionalEntropy2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, String_t*, int32_t, int64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___s0, ___sLen1, ___additionalEntropy2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, int32_t, int64_t >::Invoke(targetMethod, ___s0, ___sLen1, ___additionalEntropy2);
					else
						result = GenericVirtFuncInvoker2< int32_t, int32_t, int64_t >::Invoke(targetMethod, ___s0, ___sLen1, ___additionalEntropy2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, int32_t, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___s0, ___sLen1, ___additionalEntropy2);
					else
						result = VirtFuncInvoker2< int32_t, int32_t, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___s0, ___sLen1, ___additionalEntropy2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, int64_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___sLen1) - 1), ___additionalEntropy2, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (String_t*, int32_t, int64_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___s0, ___sLen1, ___additionalEntropy2, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (String_t*, int32_t, int64_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___s0, ___sLen1, ___additionalEntropy2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< int32_t, String_t*, int32_t, int64_t >::Invoke(targetMethod, targetThis, ___s0, ___sLen1, ___additionalEntropy2);
					else
						result = GenericVirtFuncInvoker3< int32_t, String_t*, int32_t, int64_t >::Invoke(targetMethod, targetThis, ___s0, ___sLen1, ___additionalEntropy2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, String_t*, int32_t, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___s0, ___sLen1, ___additionalEntropy2);
					else
						result = VirtFuncInvoker3< int32_t, String_t*, int32_t, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___s0, ___sLen1, ___additionalEntropy2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, int64_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___s0) - 1), ___sLen1, ___additionalEntropy2, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, String_t*, int32_t, int64_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___s0, ___sLen1, ___additionalEntropy2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Xml.XmlQualifiedName_HashCodeOfStringDelegate::BeginInvoke(System.String,System.Int32,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashCodeOfStringDelegate_BeginInvoke_m44C53B41F5B1760F52986020073B0CA59B276DE7 (HashCodeOfStringDelegate_tAE9DAB0A55A64F35CCEE05D71856BAAF6C0B668E * __this, String_t* ___s0, int32_t ___sLen1, int64_t ___additionalEntropy2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashCodeOfStringDelegate_BeginInvoke_m44C53B41F5B1760F52986020073B0CA59B276DE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___s0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___sLen1);
	__d_args[2] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___additionalEntropy2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 System.Xml.XmlQualifiedName_HashCodeOfStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeOfStringDelegate_EndInvoke_m799EADB6F619D761A8EBAC6BA906279CD9763EA6 (HashCodeOfStringDelegate_tAE9DAB0A55A64F35CCEE05D71856BAAF6C0B668E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Xml.XmlReader/XmlReaderDebuggerDisplayProxy
IL2CPP_EXTERN_C void XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshal_pinvoke(const XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E& unmarshaled, XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___reader_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'reader' of type 'XmlReaderDebuggerDisplayProxy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___reader_0Exception, NULL);
}
IL2CPP_EXTERN_C void XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshal_pinvoke_back(const XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshaled_pinvoke& marshaled, XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E& unmarshaled)
{
	Exception_t* ___reader_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'reader' of type 'XmlReaderDebuggerDisplayProxy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___reader_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlReader/XmlReaderDebuggerDisplayProxy
IL2CPP_EXTERN_C void XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshal_pinvoke_cleanup(XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Xml.XmlReader/XmlReaderDebuggerDisplayProxy
IL2CPP_EXTERN_C void XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshal_com(const XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E& unmarshaled, XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshaled_com& marshaled)
{
	Exception_t* ___reader_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'reader' of type 'XmlReaderDebuggerDisplayProxy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___reader_0Exception, NULL);
}
IL2CPP_EXTERN_C void XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshal_com_back(const XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshaled_com& marshaled, XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E& unmarshaled)
{
	Exception_t* ___reader_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'reader' of type 'XmlReaderDebuggerDisplayProxy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___reader_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlReader/XmlReaderDebuggerDisplayProxy
IL2CPP_EXTERN_C void XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshal_com_cleanup(XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E_marshaled_com& marshaled)
{
}
// System.Void System.Xml.XmlReader_XmlReaderDebuggerDisplayProxy::.ctor(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderDebuggerDisplayProxy__ctor_m784E61728FD15306C180AE7EA023511D8704FB0A (XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader0, const RuntimeMethod* method)
{
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = ___reader0;
		__this->set_reader_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XmlReaderDebuggerDisplayProxy__ctor_m784E61728FD15306C180AE7EA023511D8704FB0A_AdjustorThunk (RuntimeObject * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E * _thisAdjusted = reinterpret_cast<XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E *>(__this + _offset);
	XmlReaderDebuggerDisplayProxy__ctor_m784E61728FD15306C180AE7EA023511D8704FB0A_inline(_thisAdjusted, ___reader0, method);
}
// System.String System.Xml.XmlReader_XmlReaderDebuggerDisplayProxy::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlReaderDebuggerDisplayProxy_ToString_m8138337CC447054936F29D1E5ED79BFFD11C0101 (XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReaderDebuggerDisplayProxy_ToString_m8138337CC447054936F29D1E5ED79BFFD11C0101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_0);
		V_0 = L_1;
		RuntimeObject * L_2 = Box(XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		V_0 = *(int32_t*)UnBox(L_2);
		V_1 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_006b;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_00da;
			}
			case 3:
			{
				goto IL_00da;
			}
			case 4:
			{
				goto IL_006b;
			}
			case 5:
			{
				goto IL_017c;
			}
			case 6:
			{
				goto IL_008c;
			}
			case 7:
			{
				goto IL_00da;
			}
			case 8:
			{
				goto IL_017c;
			}
			case 9:
			{
				goto IL_00fd;
			}
			case 10:
			{
				goto IL_017c;
			}
			case 11:
			{
				goto IL_017c;
			}
			case 12:
			{
				goto IL_00da;
			}
			case 13:
			{
				goto IL_00da;
			}
			case 14:
			{
				goto IL_006b;
			}
			case 15:
			{
				goto IL_006b;
			}
			case 16:
			{
				goto IL_00da;
			}
		}
	}
	{
		goto IL_017c;
	}

IL_006b:
	{
		String_t* L_5 = V_1;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_6 = __this->get_reader_0();
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_6);
		String_t* L_8 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_5, _stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6, L_7, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_017c;
	}

IL_008c:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		String_t* L_11 = V_1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_14 = __this->get_reader_0();
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_14);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3EF4F70676F5F18B8797A6624726002F607BB8DE);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3EF4F70676F5F18B8797A6624726002F607BB8DE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_18 = __this->get_reader_0();
		NullCheck(L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_18);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_20 = XmlConvert_EscapeValueForDebuggerDisplay_mC40B38C8845EA60991107697E06530945FA22382(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_20);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_17;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		String_t* L_22 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		goto IL_017c;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_24 = __this->get_reader_0();
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_26 = XmlConvert_EscapeValueForDebuggerDisplay_mC40B38C8845EA60991107697E06530945FA22382(L_25, /*hidden argument*/NULL);
		String_t* L_27 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_23, _stringLiteral2C444E82A2EF8AEC533AC89C8394A988DC706B88, L_26, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		V_1 = L_27;
		goto IL_017c;
	}

IL_00fd:
	{
		String_t* L_28 = V_1;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_29 = __this->get_reader_0();
		NullCheck(L_29);
		String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_29);
		String_t* L_31 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_28, _stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6, L_30, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		V_1 = L_31;
		String_t* L_32 = V_1;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_33 = __this->get_reader_0();
		NullCheck(L_33);
		String_t* L_34 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_33, _stringLiteralD4DAA1A26807E1A567D68B161E6A95701A3FD560);
		String_t* L_35 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_32, _stringLiteral9FD9B00B05227B64D8B46A29B6D1B4FEA2C197EF, L_34, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		V_1 = L_35;
		String_t* L_36 = V_1;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_37 = __this->get_reader_0();
		NullCheck(L_37);
		String_t* L_38 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_37, _stringLiteral1F1BC4D23D8E5661364EBEC728BE303959F6CF91);
		String_t* L_39 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_36, _stringLiteral909AA3EFEECF6508CFB6F17EDD057508FF1D7D17, L_38, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		V_1 = L_39;
		String_t* L_40 = V_1;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_41 = __this->get_reader_0();
		NullCheck(L_41);
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_41);
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_43 = XmlConvert_EscapeValueForDebuggerDisplay_mC40B38C8845EA60991107697E06530945FA22382(L_42, /*hidden argument*/NULL);
		String_t* L_44 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_40, _stringLiteral2C444E82A2EF8AEC533AC89C8394A988DC706B88, L_43, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		V_1 = L_44;
	}

IL_017c:
	{
		String_t* L_45 = V_1;
		return L_45;
	}
}
IL2CPP_EXTERN_C  String_t* XmlReaderDebuggerDisplayProxy_ToString_m8138337CC447054936F29D1E5ED79BFFD11C0101_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E * _thisAdjusted = reinterpret_cast<XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E *>(__this + _offset);
	return XmlReaderDebuggerDisplayProxy_ToString_m8138337CC447054936F29D1E5ED79BFFD11C0101(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Serialization.XmlReflectionImporter_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA76BC36DD017B2528E793D9B468C47429BD7E9F0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mA76BC36DD017B2528E793D9B468C47429BD7E9F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE * L_0 = (U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE *)il2cpp_codegen_object_new(U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m82577CED5A4420DBD26D37EDC5EB6918E237B233(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Xml.Serialization.XmlReflectionImporter_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82577CED5A4420DBD26D37EDC5EB6918E237B233 (U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.Serialization.XmlReflectionImporter_<>c::<ImportClassMapping>b__28_0(System.Xml.Serialization.XmlReflectionMember,System.Xml.Serialization.XmlReflectionMember)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CImportClassMappingU3Eb__28_0_m211DAF58A0CB5B47332237000FD7E4FC9A26BA09 (U3CU3Ec_tD898F68FF0114208BD496B043E9B1E2F6D126CCE * __this, XmlReflectionMember_t2DB532740F4159245F707469F68AEA9BFBDA55CD * ___m10, XmlReflectionMember_t2DB532740F4159245F707469F68AEA9BFBDA55CD * ___m21, const RuntimeMethod* method)
{
	{
		XmlReflectionMember_t2DB532740F4159245F707469F68AEA9BFBDA55CD * L_0 = ___m10;
		NullCheck(L_0);
		XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46 * L_1 = XmlReflectionMember_get_XmlAttributes_m55C4166601EDBC0C7ABB07EC926485C010F888D1(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = XmlAttributes_get_SortableOrder_m5853D2240F94BC8416A2AA5DA313E05A2AF45EF6(L_1, /*hidden argument*/NULL);
		XmlReflectionMember_t2DB532740F4159245F707469F68AEA9BFBDA55CD * L_3 = ___m21;
		NullCheck(L_3);
		XmlAttributes_t7A1F274475C6BEEADB9D661A6D67BBF644E14B46 * L_4 = XmlReflectionMember_get_XmlAttributes_m55C4166601EDBC0C7ABB07EC926485C010F888D1(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = XmlAttributes_get_SortableOrder_m5853D2240F94BC8416A2AA5DA313E05A2AF45EF6(L_4, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_5));
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
// System.Void System.Xml.Schema.XmlSchemaParticle_EmptyParticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyParticle__ctor_m4B88D5F7EC79C791A079EC62E9CCD05AB1064C9A (EmptyParticle_t56BD41298CE124A8F2F4F4426105E1663120F7BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EmptyParticle__ctor_m4B88D5F7EC79C791A079EC62E9CCD05AB1064C9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlSchemaParticle_tD1A5391DA6279C1028974DFA37BC68C91EFEE789_il2cpp_TypeInfo_var);
		XmlSchemaParticle__ctor_m64085D4FE99BD7935AE3E23F5C3BF7EDB5BC1B79(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Serialization.XmlSerializationReader_CollectionFixup::.ctor(System.Object,System.Xml.Serialization.XmlSerializationCollectionFixupCallback,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionFixup__ctor_mA8B159FD32721350D0E3A4750539B61B436FDE04 (CollectionFixup_t89B63EF27FF0C97725BA984F06E6C18D67FC482E * __this, RuntimeObject * ___collection0, XmlSerializationCollectionFixupCallback_t88A34696BDDF37FD897F180858064DF7EF750B1A * ___callback1, String_t* ___id2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XmlSerializationCollectionFixupCallback_t88A34696BDDF37FD897F180858064DF7EF750B1A * L_0 = ___callback1;
		__this->set_callback_0(L_0);
		RuntimeObject * L_1 = ___collection0;
		__this->set_collection_1(L_1);
		String_t* L_2 = ___id2;
		__this->set_id_3(L_2);
		return;
	}
}
// System.Xml.Serialization.XmlSerializationCollectionFixupCallback System.Xml.Serialization.XmlSerializationReader_CollectionFixup::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSerializationCollectionFixupCallback_t88A34696BDDF37FD897F180858064DF7EF750B1A * CollectionFixup_get_Callback_mBDDBBF6D2CF598A2B5DEC2A332673A5718806083 (CollectionFixup_t89B63EF27FF0C97725BA984F06E6C18D67FC482E * __this, const RuntimeMethod* method)
{
	{
		XmlSerializationCollectionFixupCallback_t88A34696BDDF37FD897F180858064DF7EF750B1A * L_0 = __this->get_callback_0();
		return L_0;
	}
}
// System.Object System.Xml.Serialization.XmlSerializationReader_CollectionFixup::get_Collection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionFixup_get_Collection_m64C85652B2AE1410C9E390E85A237906F6BBEEC0 (CollectionFixup_t89B63EF27FF0C97725BA984F06E6C18D67FC482E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_collection_1();
		return L_0;
	}
}
// System.Object System.Xml.Serialization.XmlSerializationReader_CollectionFixup::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionFixup_get_Id_m47E055D9B1DCC5DFB45D8A72DDB2C836E9779144 (CollectionFixup_t89B63EF27FF0C97725BA984F06E6C18D67FC482E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_id_3();
		return L_0;
	}
}
// System.Object System.Xml.Serialization.XmlSerializationReader_CollectionFixup::get_CollectionItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionFixup_get_CollectionItems_m7B8A225C353E6B6C2639D7086C2FAC03F064D5AB (CollectionFixup_t89B63EF27FF0C97725BA984F06E6C18D67FC482E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_collectionItems_2();
		return L_0;
	}
}
// System.Void System.Xml.Serialization.XmlSerializationReader_CollectionFixup::set_CollectionItems(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionFixup_set_CollectionItems_m4AE94700267923AB9BCCFCE8FBC8BB115B599A8D (CollectionFixup_t89B63EF27FF0C97725BA984F06E6C18D67FC482E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_collectionItems_2(L_0);
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
// System.Void System.Xml.Serialization.XmlSerializationReader_CollectionItemFixup::.ctor(System.Array,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionItemFixup__ctor_m3E2810219F868C9B2741F9D4FA20D809A3245EC4 (CollectionItemFixup_t70D993957A8584ED873E7BD74DC98ECE1101DB2D * __this, RuntimeArray * ___list0, int32_t ___index1, String_t* ___id2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeArray * L_0 = ___list0;
		__this->set_list_0(L_0);
		int32_t L_1 = ___index1;
		__this->set_index_1(L_1);
		String_t* L_2 = ___id2;
		__this->set_id_2(L_2);
		return;
	}
}
// System.Array System.Xml.Serialization.XmlSerializationReader_CollectionItemFixup::get_Collection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * CollectionItemFixup_get_Collection_mFCE4197BDE067DAA25F0BEED5CCFB7DA2594D915 (CollectionItemFixup_t70D993957A8584ED873E7BD74DC98ECE1101DB2D * __this, const RuntimeMethod* method)
{
	{
		RuntimeArray * L_0 = __this->get_list_0();
		return L_0;
	}
}
// System.Int32 System.Xml.Serialization.XmlSerializationReader_CollectionItemFixup::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionItemFixup_get_Index_mBA4CBC3F3781B66DE02F076EC9744AD5141A9641 (CollectionItemFixup_t70D993957A8584ED873E7BD74DC98ECE1101DB2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_index_1();
		return L_0;
	}
}
// System.String System.Xml.Serialization.XmlSerializationReader_CollectionItemFixup::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CollectionItemFixup_get_Id_mC0BCE340A91ABE4A1EFEA23CC3FCC11F814030E4 (CollectionItemFixup_t70D993957A8584ED873E7BD74DC98ECE1101DB2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_id_2();
		return L_0;
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
// System.Void System.Xml.Serialization.XmlSerializationReader_Fixup::.ctor(System.Object,System.Xml.Serialization.XmlSerializationFixupCallback,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fixup__ctor_m660914A339971116B47794D6B35C0A5F7D8A7519 (Fixup_tC29AF2849DF70A12E99CE1ECE316CB1687D4FC5B * __this, RuntimeObject * ___o0, XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549 * ___callback1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Fixup__ctor_m660914A339971116B47794D6B35C0A5F7D8A7519_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___o0;
		__this->set_source_0(L_0);
		XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549 * L_1 = ___callback1;
		__this->set_callback_2(L_1);
		int32_t L_2 = ___count2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_ids_1(L_3);
		return;
	}
}
// System.Xml.Serialization.XmlSerializationFixupCallback System.Xml.Serialization.XmlSerializationReader_Fixup::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549 * Fixup_get_Callback_mF8794F68FBAA9531BB1BC8779DEBEF7720A81C1F (Fixup_tC29AF2849DF70A12E99CE1ECE316CB1687D4FC5B * __this, const RuntimeMethod* method)
{
	{
		XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549 * L_0 = __this->get_callback_2();
		return L_0;
	}
}
// System.String[] System.Xml.Serialization.XmlSerializationReader_Fixup::get_Ids()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Fixup_get_Ids_m114528877A785022716C25DCF1BD03B65AA68C6A (Fixup_tC29AF2849DF70A12E99CE1ECE316CB1687D4FC5B * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_ids_1();
		return L_0;
	}
}
// System.Object System.Xml.Serialization.XmlSerializationReader_Fixup::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Fixup_get_Source_m35271BD8569B8556C5E6971FC3606A0148C68911 (Fixup_tC29AF2849DF70A12E99CE1ECE316CB1687D4FC5B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_source_0();
		return L_0;
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
// System.Void System.Xml.Serialization.XmlSerializationReader_WriteCallbackInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteCallbackInfo__ctor_mBF617A47A85B73B3E04BC58090B9AD158609D48B (WriteCallbackInfo_tF12675262DE88D8583DAD677E61DA8D1E81E4C0D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter_FixupCallbackInfo::.ctor(System.Xml.Serialization.XmlSerializationReaderInterpreter,System.Xml.Serialization.ClassMap,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixupCallbackInfo__ctor_mEF562C2BB172471EEAF9330E6D0795B71E48E504 (FixupCallbackInfo_tB2AF64AEEA68C8D0EA425052B40E969983CB92D3 * __this, XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * ___sri0, ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB * ___map1, bool ___isValueList2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * L_0 = ___sri0;
		__this->set__sri_0(L_0);
		ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB * L_1 = ___map1;
		__this->set__map_1(L_1);
		bool L_2 = ___isValueList2;
		__this->set__isValueList_2(L_2);
		return;
	}
}
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter_FixupCallbackInfo::FixupMembers(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixupCallbackInfo_FixupMembers_m48DAC08B30D6BFCAD219E19469FAA8A46F36B9E1 (FixupCallbackInfo_tB2AF64AEEA68C8D0EA425052B40E969983CB92D3 * __this, RuntimeObject * ___fixup0, const RuntimeMethod* method)
{
	{
		XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * L_0 = __this->get__sri_0();
		ClassMap_t31C7F517155D65EFA77D6F5F9CA82178535F7FCB * L_1 = __this->get__map_1();
		RuntimeObject * L_2 = ___fixup0;
		bool L_3 = __this->get__isValueList_2();
		NullCheck(L_0);
		XmlSerializationReaderInterpreter_FixupMembers_mB6792FEAA5D621FE8789D4F1F8D45BB1F9BDE067(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter_ReaderCallbackInfo::.ctor(System.Xml.Serialization.XmlSerializationReaderInterpreter,System.Xml.Serialization.XmlTypeMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderCallbackInfo__ctor_mACB6E83BB3AE3A088ED0843FC41E6CDE22B39024 (ReaderCallbackInfo_t6D18AED803E1FB284AB8B388FD470CB3BEDD3DB4 * __this, XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * ___sri0, XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * ___typeMap1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * L_0 = ___sri0;
		__this->set__sri_0(L_0);
		XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * L_1 = ___typeMap1;
		__this->set__typeMap_1(L_1);
		return;
	}
}
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter_ReaderCallbackInfo::ReadObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReaderCallbackInfo_ReadObject_m68C4AF6B824F9E9E002195278EF84FE67EB025D1 (ReaderCallbackInfo_t6D18AED803E1FB284AB8B388FD470CB3BEDD3DB4 * __this, const RuntimeMethod* method)
{
	{
		XmlSerializationReaderInterpreter_t356BA05B522A857AC92E223BCE6CE417228D2B26 * L_0 = __this->get__sri_0();
		XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * L_1 = __this->get__typeMap_1();
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker3< RuntimeObject *, XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 *, bool, bool >::Invoke(7 /* System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadObject(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Boolean) */, L_0, L_1, (bool)1, (bool)1);
		return L_2;
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
// System.Void System.Xml.Serialization.XmlSerializationWriter_WriteCallbackInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteCallbackInfo__ctor_m574B89B81622F7C6E5B174C1D3A8E6505371BB65 (WriteCallbackInfo_t3F32E130FEEAC3992BCB0CCC059369D4A09B9EEF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter_CallbackInfo::.ctor(System.Xml.Serialization.XmlSerializationWriterInterpreter,System.Xml.Serialization.XmlTypeMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackInfo__ctor_mF8157E2D8A8717524740E632A79F398F008D3413 (CallbackInfo_t142D92C1F8EA1C07621FB4A5E1383F836187E53A * __this, XmlSerializationWriterInterpreter_t5421FAFC8BE8D6DA736DF8A6DC1ADA79770CDB54 * ___swi0, XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * ___typeMap1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XmlSerializationWriterInterpreter_t5421FAFC8BE8D6DA736DF8A6DC1ADA79770CDB54 * L_0 = ___swi0;
		__this->set__swi_0(L_0);
		XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * L_1 = ___typeMap1;
		__this->set__typeMap_1(L_1);
		return;
	}
}
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter_CallbackInfo::WriteObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackInfo_WriteObject_m534C8A18D8C19727761DA74E2EC09C247C6A59CD (CallbackInfo_t142D92C1F8EA1C07621FB4A5E1383F836187E53A * __this, RuntimeObject * ___ob0, const RuntimeMethod* method)
{
	{
		XmlSerializationWriterInterpreter_t5421FAFC8BE8D6DA736DF8A6DC1ADA79770CDB54 * L_0 = __this->get__swi_0();
		XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * L_1 = __this->get__typeMap_1();
		RuntimeObject * L_2 = ___ob0;
		XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * L_3 = __this->get__typeMap_1();
		NullCheck(L_3);
		String_t* L_4 = XmlMapping_get_ElementName_m325D48DC1385A3577E5B4948F1F116861A215CEF_inline(L_3, /*hidden argument*/NULL);
		XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * L_5 = __this->get__typeMap_1();
		NullCheck(L_5);
		String_t* L_6 = XmlMapping_get_Namespace_mC81A8F368DA39CCD355792888D951BE2A8B21835_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker7< XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 *, RuntimeObject *, String_t*, String_t*, bool, bool, bool >::Invoke(5 /* System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObject(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String,System.Boolean,System.Boolean,System.Boolean) */, L_0, L_1, L_2, L_4, L_6, (bool)0, (bool)0, (bool)0);
		return;
	}
}
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter_CallbackInfo::WriteEnum(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackInfo_WriteEnum_m2DF9A54632D5752D272986FFD1BAC843A3BD1D2B (CallbackInfo_t142D92C1F8EA1C07621FB4A5E1383F836187E53A * __this, RuntimeObject * ___ob0, const RuntimeMethod* method)
{
	{
		XmlSerializationWriterInterpreter_t5421FAFC8BE8D6DA736DF8A6DC1ADA79770CDB54 * L_0 = __this->get__swi_0();
		XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * L_1 = __this->get__typeMap_1();
		RuntimeObject * L_2 = ___ob0;
		XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * L_3 = __this->get__typeMap_1();
		NullCheck(L_3);
		String_t* L_4 = XmlMapping_get_ElementName_m325D48DC1385A3577E5B4948F1F116861A215CEF_inline(L_3, /*hidden argument*/NULL);
		XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 * L_5 = __this->get__typeMap_1();
		NullCheck(L_5);
		String_t* L_6 = XmlMapping_get_Namespace_mC81A8F368DA39CCD355792888D951BE2A8B21835_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker7< XmlTypeMapping_t9036F7EC275C8DEDD6387832CE5C4F83AA6DC581 *, RuntimeObject *, String_t*, String_t*, bool, bool, bool >::Invoke(5 /* System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObject(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String,System.Boolean,System.Boolean,System.Boolean) */, L_0, L_1, L_2, L_4, L_6, (bool)0, (bool)1, (bool)0);
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
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer_SerializerData::CreateWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F * SerializerData_CreateWriter_mE93BD90B14FFE36C2D3D9400517278FC9F7C68EE (SerializerData_tE81861A5E031D40D9732A8CF036A091D10F3478D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializerData_CreateWriter_mE93BD90B14FFE36C2D3D9400517278FC9F7C68EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = __this->get_WriterType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Type_t * L_2 = __this->get_WriterType_1();
		RuntimeObject * L_3 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_2, /*hidden argument*/NULL);
		return ((XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F *)CastclassClass((RuntimeObject*)L_3, XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F_il2cpp_TypeInfo_var));
	}

IL_001f:
	{
		XmlSerializerImplementation_t7498815CE092A9B67BE127DCA62F27ABECA6B230 * L_4 = __this->get_Implementation_3();
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		XmlSerializerImplementation_t7498815CE092A9B67BE127DCA62F27ABECA6B230 * L_5 = __this->get_Implementation_3();
		NullCheck(L_5);
		XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F * L_6 = VirtFuncInvoker0< XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F * >::Invoke(4 /* System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializerImplementation::get_Writer() */, L_5);
		return L_6;
	}

IL_0033:
	{
		return (XmlSerializationWriter_t6B1FD506E5C0AF1E0B6060D1AF58E4CDF6A5272F *)NULL;
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
// System.Collections.Generic.IComparer`1<System.Object> System.Xml.XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DtdDefaultAttributeInfoToNodeDataComparer_get_Instance_m6E411939B185FAEFCEC68568E2BEFA7AEBCA3CFE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DtdDefaultAttributeInfoToNodeDataComparer_get_Instance_m6E411939B185FAEFCEC68568E2BEFA7AEBCA3CFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC_StaticFields*)il2cpp_codegen_static_fields_for(DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC_il2cpp_TypeInfo_var))->get_s_instance_0();
		return L_0;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdDefaultAttributeInfoToNodeDataComparer_Compare_mEA6EA939DBD81A2A517B365BE21158E0086F77D0 (DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DtdDefaultAttributeInfoToNodeDataComparer_Compare_mEA6EA939DBD81A2A517B365BE21158E0086F77D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	NodeData_tD504C5A621E7DD546954D87282438662327280EA * V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
		if (!L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}

IL_0008:
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___y1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		RuntimeObject * L_3 = ___x0;
		V_4 = ((NodeData_tD504C5A621E7DD546954D87282438662327280EA *)IsInstClass((RuntimeObject*)L_3, NodeData_tD504C5A621E7DD546954D87282438662327280EA_il2cpp_TypeInfo_var));
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_4 = V_4;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_5 = V_4;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_localName_2();
		V_0 = L_6;
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_7 = V_4;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_prefix_3();
		V_2 = L_8;
		goto IL_005b;
	}

IL_002d:
	{
		RuntimeObject * L_9 = ___x0;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDtdDefaultAttributeInfo_t8DAB8271F3930199379DF41791AE869365320C92_il2cpp_TypeInfo_var));
		RuntimeObject* L_10 = V_6;
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_11 = V_6;
		NullCheck(L_11);
		String_t* L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.Xml.IDtdAttributeInfo::get_LocalName() */, IDtdAttributeInfo_t5B62F2A60E372238F7530B20A85A60723B7AACE9_il2cpp_TypeInfo_var, L_11);
		V_0 = L_12;
		RuntimeObject* L_13 = V_6;
		NullCheck(L_13);
		String_t* L_14 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Xml.IDtdAttributeInfo::get_Prefix() */, IDtdAttributeInfo_t5B62F2A60E372238F7530B20A85A60723B7AACE9_il2cpp_TypeInfo_var, L_13);
		V_2 = L_14;
		goto IL_005b;
	}

IL_004b:
	{
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918 * L_16 = (XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918 *)il2cpp_codegen_object_new(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918_il2cpp_TypeInfo_var);
		XmlException__ctor_m113008AE4B646E85154C99B3CBB55D536CBEFEB9(L_16, _stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, DtdDefaultAttributeInfoToNodeDataComparer_Compare_mEA6EA939DBD81A2A517B365BE21158E0086F77D0_RuntimeMethod_var);
	}

IL_005b:
	{
		RuntimeObject * L_17 = ___y1;
		V_4 = ((NodeData_tD504C5A621E7DD546954D87282438662327280EA *)IsInstClass((RuntimeObject*)L_17, NodeData_tD504C5A621E7DD546954D87282438662327280EA_il2cpp_TypeInfo_var));
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_18 = V_4;
		if (!L_18)
		{
			goto IL_0079;
		}
	}
	{
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = L_19->get_localName_2();
		V_1 = L_20;
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_21 = V_4;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_prefix_3();
		V_3 = L_22;
		goto IL_00a7;
	}

IL_0079:
	{
		RuntimeObject * L_23 = ___y1;
		V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDtdDefaultAttributeInfo_t8DAB8271F3930199379DF41791AE869365320C92_il2cpp_TypeInfo_var));
		RuntimeObject* L_24 = V_7;
		if (!L_24)
		{
			goto IL_0097;
		}
	}
	{
		RuntimeObject* L_25 = V_7;
		NullCheck(L_25);
		String_t* L_26 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.Xml.IDtdAttributeInfo::get_LocalName() */, IDtdAttributeInfo_t5B62F2A60E372238F7530B20A85A60723B7AACE9_il2cpp_TypeInfo_var, L_25);
		V_1 = L_26;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_27);
		String_t* L_28 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Xml.IDtdAttributeInfo::get_Prefix() */, IDtdAttributeInfo_t5B62F2A60E372238F7530B20A85A60723B7AACE9_il2cpp_TypeInfo_var, L_27);
		V_3 = L_28;
		goto IL_00a7;
	}

IL_0097:
	{
		String_t* L_29 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918 * L_30 = (XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918 *)il2cpp_codegen_object_new(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918_il2cpp_TypeInfo_var);
		XmlException__ctor_m113008AE4B646E85154C99B3CBB55D536CBEFEB9(L_30, _stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, DtdDefaultAttributeInfoToNodeDataComparer_Compare_mEA6EA939DBD81A2A517B365BE21158E0086F77D0_RuntimeMethod_var);
	}

IL_00a7:
	{
		String_t* L_31 = V_0;
		String_t* L_32 = V_1;
		int32_t L_33 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_31, L_32, 4, /*hidden argument*/NULL);
		V_5 = L_33;
		int32_t L_34 = V_5;
		if (!L_34)
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_35 = V_5;
		return L_35;
	}

IL_00b8:
	{
		String_t* L_36 = V_2;
		String_t* L_37 = V_3;
		int32_t L_38 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_36, L_37, 4, /*hidden argument*/NULL);
		return L_38;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdDefaultAttributeInfoToNodeDataComparer__ctor_m327CBD841F71F8D23F89F4BDB1C324CB870DA2D5 (DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdDefaultAttributeInfoToNodeDataComparer__cctor_mDCEFB52DD72D09023BF950DBB372392A2B17D40E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DtdDefaultAttributeInfoToNodeDataComparer__cctor_mDCEFB52DD72D09023BF950DBB372392A2B17D40E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC * L_0 = (DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC *)il2cpp_codegen_object_new(DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC_il2cpp_TypeInfo_var);
		DtdDefaultAttributeInfoToNodeDataComparer__ctor_m327CBD841F71F8D23F89F4BDB1C324CB870DA2D5(L_0, /*hidden argument*/NULL);
		((DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC_StaticFields*)il2cpp_codegen_static_fields_for(DtdDefaultAttributeInfoToNodeDataComparer_t8D053B72BDEEEBBA9DFF9497C99EE79EA11607FC_il2cpp_TypeInfo_var))->set_s_instance_0(L_0);
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
// System.Void System.Xml.XmlTextReaderImpl_DtdParserProxy::.ctor(System.Xml.XmlTextReaderImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParserProxy__ctor_m080E199E77CE80BF8AB44E5AE23D9AB3D1C5755C (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * ___reader0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = ___reader0;
		__this->set_reader_0(L_0);
		return;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.get_NameTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * DtdParserProxy_System_Xml_IDtdParserAdapter_get_NameTable_m36AFA7B21BDD76A7D834131EF8246AC711D803C2 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * L_1 = XmlTextReaderImpl_get_DtdParserProxy_NameTable_mA567221B0BD05C6BF365121EF52549079FF67D9B_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.IXmlNamespaceResolver System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.get_NamespaceResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DtdParserProxy_System_Xml_IDtdParserAdapter_get_NamespaceResolver_mCB00D1F63B35802DD1D11E00C659E3CB492A4E50 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = XmlTextReaderImpl_get_DtdParserProxy_NamespaceResolver_m6A9BA136D735089A09CEB096E0D839AAC7E281FC_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Uri System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.get_BaseUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * DtdParserProxy_System_Xml_IDtdParserAdapter_get_BaseUri_mF3A86A81EF097D0789215F2DD4798F7BCD95655C (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = XmlTextReaderImpl_get_DtdParserProxy_BaseUri_mCE10049FE4A8821152EE99B73D10A209742392CA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.get_IsEof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapter_get_IsEof_mA8B2D05047CC681FD35A016FFB8F6D8A228D88E2 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_DtdParserProxy_IsEof_m13733FCF75EDC19FD816AC51941CB8FB962A486B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Char[] System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.get_ParsingBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* DtdParserProxy_System_Xml_IDtdParserAdapter_get_ParsingBuffer_m7BA766C98DB7E7B07992F425A4591B7F8B6DE39F (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = XmlTextReaderImpl_get_DtdParserProxy_ParsingBuffer_mB70D61FBA9AA7A5E313613ACD8B30DCA2B6D2FEB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.get_ParsingBufferLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_get_ParsingBufferLength_mEF7F24FAF0027AB179B42DA6C62ED94F71467596 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReaderImpl_get_DtdParserProxy_ParsingBufferLength_mD5613762191E3EEEA23DA5DE0EF2C8FB21577D0C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.get_CurrentPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_get_CurrentPosition_mD93CB0C0E794392451AF8ABD9BD281CDE7470CF1 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReaderImpl_get_DtdParserProxy_CurrentPosition_m28456EAF24A02277AAF87AB79D712105F244D707(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.set_CurrentPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_set_CurrentPosition_m47B1C61DDC63E1446100960E4A919F08C77D2F6A (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		XmlTextReaderImpl_set_DtdParserProxy_CurrentPosition_m995C56DBAC314FB044B1E49933065BF154D02E9F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.get_EntityStackLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_get_EntityStackLength_m7B3A999AC62D42920CF902FA937136AF5AC2B2F3 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReaderImpl_get_DtdParserProxy_EntityStackLength_m61FA991027E1A9A410B30BBC69180D6427FE05B0(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized_m7BB876316470BE2240291BB182119DF09E89DC58 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_DtdParserProxy_IsEntityEolNormalized_m11F429D654706C17F9A22ED2FAE2041F98EB8DE1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.OnNewLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_OnNewLine_m9C8B404D56AFE862B26B39B2D4107B2E5FC14024 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, int32_t ___pos0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		int32_t L_1 = ___pos0;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_OnNewLine_mBFF6E843E6C26A7B60FB1D36E0CAD2F4FB835A00(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.get_LineNo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_get_LineNo_m01FC13D0F9D152591AA7092445D10D7D572AC264 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReaderImpl_get_DtdParserProxy_LineNo_m129EADD0F6CD778B3DF123FFBC898D3D58D63FCD(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.get_LineStartPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_get_LineStartPosition_m482CFFE0CF14D95935C3D6D440EE073C3CC4B076 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReaderImpl_get_DtdParserProxy_LineStartPosition_m951C51E2CFE3F3C9AB7C3680D3212798DF74BBA9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.ReadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_ReadData_mD77B4F9D5D06B17E0CE4962FB47B52D95056E29A (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReaderImpl_DtdParserProxy_ReadData_m66EB3594B25D28E431F99AC7D95EC6634F7DC526(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.ParseNumericCharRef(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_ParseNumericCharRef_m95F43B6345D9A9DF7D2941E30A59C75CD7A4116C (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, StringBuilder_t * ___internalSubsetBuilder0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		StringBuilder_t * L_1 = ___internalSubsetBuilder0;
		NullCheck(L_0);
		int32_t L_2 = XmlTextReaderImpl_DtdParserProxy_ParseNumericCharRef_m39D4CD5F94D141D336EFF548AE1BE5ADB56D078D(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.ParseNamedCharRef(System.Boolean,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_ParseNamedCharRef_m3A65DB13DB3D77106927C04B03CD23EA1E2A6508 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, bool ___expand0, StringBuilder_t * ___internalSubsetBuilder1, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		bool L_1 = ___expand0;
		StringBuilder_t * L_2 = ___internalSubsetBuilder1;
		NullCheck(L_0);
		int32_t L_3 = XmlTextReaderImpl_DtdParserProxy_ParseNamedCharRef_m6534D46BB2CD419139F69B5F11F26B862568DDFB(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.ParsePI(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_ParsePI_mE73888A5B84CBFC5DD1C229A4EF4FFD8C95211F4 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		StringBuilder_t * L_1 = ___sb0;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_ParsePI_mAE961B995AF007A4B3FF2401D8E162097C76631F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.ParseComment(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_ParseComment_m70F23C03229BD0D22D2D1357AECB911A76B0949C (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		StringBuilder_t * L_1 = ___sb0;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_ParseComment_mDEE3956D7D181C76831CE94E946E5925659026E6(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.PushEntity(System.Xml.IDtdEntityInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapter_PushEntity_m354A455A588992A13AD1207E18CE059D6830C211 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, RuntimeObject* ___entity0, int32_t* ___entityId1, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		RuntimeObject* L_1 = ___entity0;
		int32_t* L_2 = ___entityId1;
		NullCheck(L_0);
		bool L_3 = XmlTextReaderImpl_DtdParserProxy_PushEntity_m1FE85F4F9604C6B97780EC6DCF42D29C53EE63D7(L_0, L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.PopEntity(System.Xml.IDtdEntityInfo&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapter_PopEntity_mDC531B51718B48105D2A0A8F24F7D536ED35400E (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, RuntimeObject** ___oldEntity0, int32_t* ___newEntityId1, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		RuntimeObject** L_1 = ___oldEntity0;
		int32_t* L_2 = ___newEntityId1;
		NullCheck(L_0);
		bool L_3 = XmlTextReaderImpl_DtdParserProxy_PopEntity_m9E4CC26F8E9B3575B383F54E0B9007894C955122(L_0, (RuntimeObject**)L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.PushExternalSubset(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapter_PushExternalSubset_mD9DE439CF90DD04A62301FCD188DA562DCDAC997 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, String_t* ___systemId0, String_t* ___publicId1, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		String_t* L_1 = ___systemId0;
		String_t* L_2 = ___publicId1;
		NullCheck(L_0);
		bool L_3 = XmlTextReaderImpl_DtdParserProxy_PushExternalSubset_mAC0206AAEC281D0D29148A1064BE53400E0E916D(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.PushInternalDtd(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_PushInternalDtd_mBAC5CEEE8175FAA21CA7B00F3817EC0B93C614E3 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, String_t* ___baseUri0, String_t* ___internalDtd1, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		String_t* L_1 = ___baseUri0;
		String_t* L_2 = ___internalDtd1;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_PushInternalDtd_mF9CDFC87D8E8D1136B0E5723E6A6F6F64116A7E4(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.Throw(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_Throw_mC3031F350BEB06305FB81306EB82B9073891A89D (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		Exception_t * L_1 = ___e0;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_Throw_m89A969A79E65E0700AEED33390E179E1CB506DBB(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.OnSystemId(System.String,System.Xml.LineInfo,System.Xml.LineInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_OnSystemId_m324C34AE49C28683CBFF35820FFCADBB2839B5B3 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, String_t* ___systemId0, LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  ___keywordLineInfo1, LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  ___systemLiteralLineInfo2, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		String_t* L_1 = ___systemId0;
		LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  L_2 = ___keywordLineInfo1;
		LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  L_3 = ___systemLiteralLineInfo2;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_OnSystemId_m67D9C87D1E7E5465BA7C9CA6C579599F85850886(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapter.OnPublicId(System.String,System.Xml.LineInfo,System.Xml.LineInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_OnPublicId_mCAF346E21EF35D09EAD7A9CC9C70AADFB41C045F (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, String_t* ___publicId0, LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  ___keywordLineInfo1, LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  ___publicLiteralLineInfo2, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		String_t* L_1 = ___publicId0;
		LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  L_2 = ___keywordLineInfo1;
		LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE  L_3 = ___publicLiteralLineInfo2;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_OnPublicId_m92D1DB1D7F1B15CD6B2452E68F3BDD8A262F8D4D(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation_mCEF6A11DA019175B774BA1CFD1036254A710DECD (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_DtdParserProxy_DtdValidation_m7D47BC9FB2D5F45ADF4BE7F253AEC4AB943D49F1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.IValidationEventHandling System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DtdParserProxy_System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling_m94CE1A3AED0E3A4D0AF75E9B23CF00112A475F9B (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = XmlTextReaderImpl_get_DtdParserProxy_ValidationEventHandling_m86F807BDC2BEF934D72F2A65FC7F97262735A219_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapterV1.get_Normalization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapterV1_get_Normalization_m9BFC81A74059C8D2A979D2327B0C3BF53CD7B154 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_DtdParserProxy_Normalization_m114C15F2776A94727A5992DB26D65BDC1D670543_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapterV1.get_Namespaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapterV1_get_Namespaces_mE3468583D30C4E9E16EEE5E3E327BDA0FC2E42A3 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_DtdParserProxy_Namespaces_m8D805DAFFE1332B0E23F2D3AE2959A29C8190FD3_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_DtdParserProxy::System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode_mD8376630014CFE05FE636F755AC7DAC4EFAEB172 (DtdParserProxy_t2577A62EB66A77D9533689C64F0F41F47C19F557 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_DtdParserProxy_V1CompatibilityMode_m1B3ACC4435FE2768144414FF216E145916403325_inline(L_0, /*hidden argument*/NULL);
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextReaderImpl_NoNamespaceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoNamespaceManager__ctor_mF90CFA0693B9ED4995F2F9BFFF7219E9936974D7 (NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2 * __this, const RuntimeMethod* method)
{
	{
		XmlNamespaceManager__ctor_mA04CAB0559468548EC72C74A2188AB3ACF892D0E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlTextReaderImpl_NoNamespaceManager::get_DefaultNamespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NoNamespaceManager_get_DefaultNamespace_m5ADD1C30FA9A6D3F3FD1111C9F3A2D0FAEEC090F (NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NoNamespaceManager_get_DefaultNamespace_m5ADD1C30FA9A6D3F3FD1111C9F3A2D0FAEEC090F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NoNamespaceManager::PushScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoNamespaceManager_PushScope_m3D82346C48B4C86AB6CCAE3491F1179EE93BCD90 (NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_NoNamespaceManager::PopScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NoNamespaceManager_PopScope_m8833E04494CC7886910D8F5B0525F7C74FC877E0 (NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NoNamespaceManager::AddNamespace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoNamespaceManager_AddNamespace_mBD793DB3925F7577E22EF1BA702B5D72B38FEE17 (NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2 * __this, String_t* ___prefix0, String_t* ___uri1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NoNamespaceManager::RemoveNamespace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoNamespaceManager_RemoveNamespace_mCB3283A4CCD3596BA479E701908F7F55E4669168 (NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2 * __this, String_t* ___prefix0, String_t* ___uri1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Collections.IEnumerator System.Xml.XmlTextReaderImpl_NoNamespaceManager::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NoNamespaceManager_GetEnumerator_mB69F64109D37FD7FB0BFDE4F3045094067342A3C (NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2 * __this, const RuntimeMethod* method)
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.String System.Xml.XmlTextReaderImpl_NoNamespaceManager::LookupNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NoNamespaceManager_LookupNamespace_mC78AC6A0001820930F0E70988DBDF3C311CF8805 (NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NoNamespaceManager_LookupNamespace_mC78AC6A0001820930F0E70988DBDF3C311CF8805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.String System.Xml.XmlTextReaderImpl_NoNamespaceManager::LookupPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NoNamespaceManager_LookupPrefix_m67B5F13F9E520C9374F76155214AE28B4F6ACC54 (NoNamespaceManager_t9CD68D8449B828A860ED290316BEAF94CCB165E2 * __this, String_t* ___uri0, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
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
// System.Xml.XmlTextReaderImpl_NodeData System.Xml.XmlTextReaderImpl_NodeData::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeData_tD504C5A621E7DD546954D87282438662327280EA * NodeData_get_None_mA00726B28E3772621A85CE37F190F028F04D30FB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_get_None_mA00726B28E3772621A85CE37F190F028F04D30FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_0 = ((NodeData_tD504C5A621E7DD546954D87282438662327280EA_StaticFields*)il2cpp_codegen_static_fields_for(NodeData_tD504C5A621E7DD546954D87282438662327280EA_il2cpp_TypeInfo_var))->get_s_None_0();
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_1 = (NodeData_tD504C5A621E7DD546954D87282438662327280EA *)il2cpp_codegen_object_new(NodeData_tD504C5A621E7DD546954D87282438662327280EA_il2cpp_TypeInfo_var);
		NodeData__ctor_m98A61DC61B90E41B17BC4B4ECC19E93DEE2C49D1(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_memory_barrier();
		((NodeData_tD504C5A621E7DD546954D87282438662327280EA_StaticFields*)il2cpp_codegen_static_fields_for(NodeData_tD504C5A621E7DD546954D87282438662327280EA_il2cpp_TypeInfo_var))->set_s_None_0(L_1);
	}

IL_0015:
	{
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_2 = ((NodeData_tD504C5A621E7DD546954D87282438662327280EA_StaticFields*)il2cpp_codegen_static_fields_for(NodeData_tD504C5A621E7DD546954D87282438662327280EA_il2cpp_TypeInfo_var))->get_s_None_0();
		il2cpp_codegen_memory_barrier();
		return L_2;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData__ctor_m98A61DC61B90E41B17BC4B4ECC19E93DEE2C49D1 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		NodeData_Clear_mA1DC123EFEF100E0BAE5D5860DED5C0AC83EAB94(__this, 0, /*hidden argument*/NULL);
		__this->set_xmlContextPushed_16((bool)0);
		return;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl_NodeData::get_LineNo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeData_get_LineNo_mAD78D708B5D663CD4024335C0783C96B494726BF (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method)
{
	{
		LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE * L_0 = __this->get_address_of_lineInfo_10();
		int32_t L_1 = L_0->get_lineNo_0();
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl_NodeData::get_LinePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeData_get_LinePos_m461F0A5A81925A63A436973A01EF33C70DFD265A (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method)
{
	{
		LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE * L_0 = __this->get_address_of_lineInfo_10();
		int32_t L_1 = L_0->get_linePos_1();
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_NodeData::get_IsEmptyElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeData_get_IsEmptyElement_mED36D29FD0ACC537153A3A3D9FF002712DD01C45 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_isEmptyOrDefault_14();
		return L_1;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::set_IsEmptyElement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_set_IsEmptyElement_mD35C4A93F811F5F2C904B0EB1DEF2DE56460D7FD (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_isEmptyOrDefault_14(L_0);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_NodeData::get_IsDefaultAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeData_get_IsDefaultAttribute_m5E8F521D1295E84885505AB7D7FDF3FFE4FB1B98 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_isEmptyOrDefault_14();
		return L_1;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::set_IsDefaultAttribute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_set_IsDefaultAttribute_m0092BEA88010B3D807E9EF4799102A5AD66E52FD (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_isEmptyOrDefault_14(L_0);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl_NodeData::get_ValueBuffered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeData_get_ValueBuffered_mE5170B30D387085171C045FDAC10C67D4554D39D (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_6();
		return (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
// System.String System.Xml.XmlTextReaderImpl_NodeData::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeData_get_StringValue_m32820CD659C0A0D408D80BA40338AEDC3196BD58 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_6();
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = __this->get_chars_7();
		int32_t L_2 = __this->get_valueStartPos_8();
		int32_t L_3 = __this->get_valueLength_9();
		String_t* L_4 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_value_6(L_4);
	}

IL_0025:
	{
		String_t* L_5 = __this->get_value_6();
		return L_5;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::TrimSpacesInValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_TrimSpacesInValue_mD2A50648D93AE619CA038A75B4F7B7C487DFDF83 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = NodeData_get_ValueBuffered_mE5170B30D387085171C045FDAC10C67D4554D39D(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = __this->get_chars_7();
		int32_t L_2 = __this->get_valueStartPos_8();
		int32_t* L_3 = __this->get_address_of_valueLength_9();
		XmlTextReaderImpl_StripSpaces_m31199178A54A5DFDE4C25A53BA7C30C94ACE21E2(L_1, L_2, (int32_t*)L_3, /*hidden argument*/NULL);
		return;
	}

IL_0020:
	{
		String_t* L_4 = __this->get_value_6();
		String_t* L_5 = XmlTextReaderImpl_StripSpaces_m7E86D065374C4523748953DDCD39D09AF892DACC(L_4, /*hidden argument*/NULL);
		__this->set_value_6(L_5);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::Clear(System.Xml.XmlNodeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_Clear_mA1DC123EFEF100E0BAE5D5860DED5C0AC83EAB94 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_Clear_mA1DC123EFEF100E0BAE5D5860DED5C0AC83EAB94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		__this->set_type_1(L_0);
		NodeData_ClearName_mC3A98BBF65ABAE00AFE65E1942BB348021D1D0C9(__this, /*hidden argument*/NULL);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_value_6(L_1);
		__this->set_valueStartPos_8((-1));
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_nameWPrefix_5(L_2);
		__this->set_schemaType_18(NULL);
		__this->set_typedValue_19(NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::ClearName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_ClearName_mC3A98BBF65ABAE00AFE65E1942BB348021D1D0C9 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_ClearName_mC3A98BBF65ABAE00AFE65E1942BB348021D1D0C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_localName_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_prefix_3(L_1);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_ns_4(L_2);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_nameWPrefix_5(L_3);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::SetLineInfo(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_SetLineInfo_mE0EAA0129B2C2DAB2C92AF78FBB2D5DA90A581E4 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, int32_t ___lineNo0, int32_t ___linePos1, const RuntimeMethod* method)
{
	{
		LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE * L_0 = __this->get_address_of_lineInfo_10();
		int32_t L_1 = ___lineNo0;
		int32_t L_2 = ___linePos1;
		LineInfo_Set_mAA6F06BA4463E64A24070063EE26BF665EC28B99((LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE *)L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::SetLineInfo2(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_SetLineInfo2_mDB7B87916CC83F5FB632712C43B1EA0AC2DB66D4 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, int32_t ___lineNo0, int32_t ___linePos1, const RuntimeMethod* method)
{
	{
		LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE * L_0 = __this->get_address_of_lineInfo2_11();
		int32_t L_1 = ___lineNo0;
		int32_t L_2 = ___linePos1;
		LineInfo_Set_mAA6F06BA4463E64A24070063EE26BF665EC28B99((LineInfo_t89285C74EC1BF626F2481BBE5E5A9F65C0BA51BE *)L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::SetValueNode(System.Xml.XmlNodeType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_SetValueNode_m5D0E6BD089647F4DC22608DB2B63F0CE58522F3E (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, int32_t ___type0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___type0;
		__this->set_type_1(L_0);
		NodeData_ClearName_mC3A98BBF65ABAE00AFE65E1942BB348021D1D0C9(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		__this->set_value_6(L_1);
		__this->set_valueStartPos_8((-1));
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::SetValueNode(System.Xml.XmlNodeType,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_SetValueNode_mFEF92AABBC3BC1D99196E955C969E344CA8E233B (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, int32_t ___type0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars1, int32_t ___startPos2, int32_t ___len3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___type0;
		__this->set_type_1(L_0);
		NodeData_ClearName_mC3A98BBF65ABAE00AFE65E1942BB348021D1D0C9(__this, /*hidden argument*/NULL);
		__this->set_value_6((String_t*)NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars1;
		__this->set_chars_7(L_1);
		int32_t L_2 = ___startPos2;
		__this->set_valueStartPos_8(L_2);
		int32_t L_3 = ___len3;
		__this->set_valueLength_9(L_3);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::SetNamedNode(System.Xml.XmlNodeType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_SetNamedNode_m9FFF683DB8640C8F6F5A053A5C120742C777415A (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, int32_t ___type0, String_t* ___localName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_SetNamedNode_m9FFF683DB8640C8F6F5A053A5C120742C777415A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		String_t* L_1 = ___localName1;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		String_t* L_3 = ___localName1;
		NodeData_SetNamedNode_mFE5340CD2CF846E5AADCE3F7D8925BB1780683F9(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::SetNamedNode(System.Xml.XmlNodeType,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_SetNamedNode_mFE5340CD2CF846E5AADCE3F7D8925BB1780683F9 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, int32_t ___type0, String_t* ___localName1, String_t* ___prefix2, String_t* ___nameWPrefix3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_SetNamedNode_mFE5340CD2CF846E5AADCE3F7D8925BB1780683F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		__this->set_type_1(L_0);
		String_t* L_1 = ___localName1;
		__this->set_localName_2(L_1);
		String_t* L_2 = ___prefix2;
		__this->set_prefix_3(L_2);
		String_t* L_3 = ___nameWPrefix3;
		__this->set_nameWPrefix_5(L_3);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_ns_4(L_4);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_value_6(L_5);
		__this->set_valueStartPos_8((-1));
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::SetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_SetValue_m813BE9ED3C10352169BBA67B7A251A13E6F95FBE (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		__this->set_valueStartPos_8((-1));
		String_t* L_0 = ___value0;
		__this->set_value_6(L_0);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::SetValue(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_SetValue_mB62C0FF3ED5D43D329073953E461E562EA63DDCA (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___startPos1, int32_t ___len2, const RuntimeMethod* method)
{
	{
		__this->set_value_6((String_t*)NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___chars0;
		__this->set_chars_7(L_0);
		int32_t L_1 = ___startPos1;
		__this->set_valueStartPos_8(L_1);
		int32_t L_2 = ___len2;
		__this->set_valueLength_9(L_2);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::OnBufferInvalidated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_OnBufferInvalidated_mEEEE0281931302FBB671D325CAA784D52F1C1543 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_6();
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = __this->get_chars_7();
		int32_t L_2 = __this->get_valueStartPos_8();
		int32_t L_3 = __this->get_valueLength_9();
		String_t* L_4 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_value_6(L_4);
	}

IL_0025:
	{
		__this->set_valueStartPos_8((-1));
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_NodeData::CopyTo(System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeData_CopyTo_mB825A2E0DFF0CD37A592DE70E3E4A040AE896EA9 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, int32_t ___valueOffset0, StringBuilder_t * ___sb1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_6();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		StringBuilder_t * L_1 = ___sb1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = __this->get_chars_7();
		int32_t L_3 = __this->get_valueStartPos_8();
		int32_t L_4 = ___valueOffset0;
		int32_t L_5 = __this->get_valueLength_9();
		int32_t L_6 = ___valueOffset0;
		NullCheck(L_1);
		StringBuilder_Append_m4B771D7BFE8A65C9A504EC5847A699EB678B02DB(L_1, L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)), /*hidden argument*/NULL);
		return;
	}

IL_0026:
	{
		int32_t L_7 = ___valueOffset0;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		StringBuilder_t * L_8 = ___sb1;
		String_t* L_9 = __this->get_value_6();
		NullCheck(L_8);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_8, L_9, /*hidden argument*/NULL);
		return;
	}

IL_0038:
	{
		StringBuilder_t * L_10 = ___sb1;
		String_t* L_11 = __this->get_value_6();
		int32_t L_12 = ___valueOffset0;
		String_t* L_13 = __this->get_value_6();
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_13, /*hidden argument*/NULL);
		int32_t L_15 = ___valueOffset0;
		NullCheck(L_10);
		StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17(L_10, L_11, L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlTextReaderImpl_NodeData::GetNameWPrefix(System.Xml.XmlNameTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeData_GetNameWPrefix_m8F2FF2029F59DB52995603EA96CD02F53D934643 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * ___nt0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_nameWPrefix_5();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->get_nameWPrefix_5();
		return L_1;
	}

IL_000f:
	{
		XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * L_2 = ___nt0;
		String_t* L_3 = NodeData_CreateNameWPrefix_mE5F2F6096757CECF6F0C49FB0542EFBF15A9C7C3(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String System.Xml.XmlTextReaderImpl_NodeData::CreateNameWPrefix(System.Xml.XmlNameTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeData_CreateNameWPrefix_mE5F2F6096757CECF6F0C49FB0542EFBF15A9C7C3 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * ___nt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_CreateNameWPrefix_mE5F2F6096757CECF6F0C49FB0542EFBF15A9C7C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_prefix_3();
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = __this->get_localName_2();
		__this->set_nameWPrefix_5(L_2);
		goto IL_003d;
	}

IL_001b:
	{
		XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * L_3 = ___nt0;
		String_t* L_4 = __this->get_prefix_3();
		String_t* L_5 = __this->get_localName_2();
		String_t* L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_4, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_7 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_3, L_6);
		__this->set_nameWPrefix_5(L_7);
	}

IL_003d:
	{
		String_t* L_8 = __this->get_nameWPrefix_5();
		return L_8;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl_NodeData::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeData_System_IComparable_CompareTo_m83288CF38E9F5552461E72F26954474A9ED6ED50 (NodeData_tD504C5A621E7DD546954D87282438662327280EA * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_System_IComparable_CompareTo_m83288CF38E9F5552461E72F26954474A9ED6ED50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NodeData_tD504C5A621E7DD546954D87282438662327280EA * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((NodeData_tD504C5A621E7DD546954D87282438662327280EA *)IsInstClass((RuntimeObject*)L_0, NodeData_tD504C5A621E7DD546954D87282438662327280EA_il2cpp_TypeInfo_var));
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_2 = __this->get_localName_2();
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_localName_2();
		bool L_5 = Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_6 = __this->get_ns_4();
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_ns_4();
		bool L_9 = Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F(L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		return 0;
	}

IL_0032:
	{
		String_t* L_10 = __this->get_ns_4();
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = L_11->get_ns_4();
		int32_t L_13 = String_CompareOrdinal_m1C7F94040504F35C89EBC8826D77FEA81B9C2C0E(L_10, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0044:
	{
		String_t* L_14 = __this->get_localName_2();
		NodeData_tD504C5A621E7DD546954D87282438662327280EA * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_localName_2();
		int32_t L_17 = String_CompareOrdinal_m1C7F94040504F35C89EBC8826D77FEA81B9C2C0E(L_14, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_0056:
	{
		return 1;
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
// System.Void System.Xml.XmlTextReaderImpl_OnDefaultAttributeUseDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDefaultAttributeUseDelegate__ctor_m33FBEA77B836E089D0EFCED2A5157443C503F3F5 (OnDefaultAttributeUseDelegate_t3E995824DB2F605D21E74880C851C4C6BB9A1E88 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.Xml.XmlTextReaderImpl_OnDefaultAttributeUseDelegate::Invoke(System.Xml.IDtdDefaultAttributeInfo,System.Xml.XmlTextReaderImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDefaultAttributeUseDelegate_Invoke_mAE00805CFBABDE9D41AD11E50FF27E0FE71F9553 (OnDefaultAttributeUseDelegate_t3E995824DB2F605D21E74880C851C4C6BB9A1E88 * __this, RuntimeObject* ___defaultAttribute0, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * ___coreReader1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject*, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___defaultAttribute0, ___coreReader1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject*, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___defaultAttribute0, ___coreReader1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * >::Invoke(targetMethod, ___defaultAttribute0, ___coreReader1);
					else
						GenericVirtActionInvoker1< XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * >::Invoke(targetMethod, ___defaultAttribute0, ___coreReader1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___defaultAttribute0, ___coreReader1);
					else
						VirtActionInvoker1< XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___defaultAttribute0, ___coreReader1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___coreReader1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___defaultAttribute0, ___coreReader1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___defaultAttribute0, ___coreReader1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject*, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * >::Invoke(targetMethod, targetThis, ___defaultAttribute0, ___coreReader1);
					else
						GenericVirtActionInvoker2< RuntimeObject*, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * >::Invoke(targetMethod, targetThis, ___defaultAttribute0, ___coreReader1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject*, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___defaultAttribute0, ___coreReader1);
					else
						VirtActionInvoker2< RuntimeObject*, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___defaultAttribute0, ___coreReader1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___defaultAttribute0) - 1), ___coreReader1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject*, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___defaultAttribute0, ___coreReader1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult System.Xml.XmlTextReaderImpl_OnDefaultAttributeUseDelegate::BeginInvoke(System.Xml.IDtdDefaultAttributeInfo,System.Xml.XmlTextReaderImpl,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDefaultAttributeUseDelegate_BeginInvoke_mAC4E747A3BB4DD7C6AE2E132579BCFE4F6319825 (OnDefaultAttributeUseDelegate_t3E995824DB2F605D21E74880C851C4C6BB9A1E88 * __this, RuntimeObject* ___defaultAttribute0, XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * ___coreReader1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___defaultAttribute0;
	__d_args[1] = ___coreReader1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.Xml.XmlTextReaderImpl_OnDefaultAttributeUseDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDefaultAttributeUseDelegate_EndInvoke_mF1DD49F82FDC59CE06DDEFE19ED2F5B2E0386ACF (OnDefaultAttributeUseDelegate_t3E995824DB2F605D21E74880C851C4C6BB9A1E88 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Xml.XmlTextReaderImpl/ParsingState
IL2CPP_EXTERN_C void ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshal_pinvoke(const ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF& unmarshaled, ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___encoding_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'encoding' of type 'ParsingState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___encoding_3Exception, NULL);
}
IL2CPP_EXTERN_C void ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshal_pinvoke_back(const ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshaled_pinvoke& marshaled, ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF& unmarshaled)
{
	Exception_t* ___encoding_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'encoding' of type 'ParsingState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___encoding_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextReaderImpl/ParsingState
IL2CPP_EXTERN_C void ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshal_pinvoke_cleanup(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Xml.XmlTextReaderImpl/ParsingState
IL2CPP_EXTERN_C void ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshal_com(const ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF& unmarshaled, ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshaled_com& marshaled)
{
	Exception_t* ___encoding_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'encoding' of type 'ParsingState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___encoding_3Exception, NULL);
}
IL2CPP_EXTERN_C void ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshal_com_back(const ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshaled_com& marshaled, ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF& unmarshaled)
{
	Exception_t* ___encoding_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'encoding' of type 'ParsingState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___encoding_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextReaderImpl/ParsingState
IL2CPP_EXTERN_C void ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshal_com_cleanup(ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF_marshaled_com& marshaled)
{
}
// System.Void System.Xml.XmlTextReaderImpl_ParsingState::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingState_Clear_m23A1DD27BCE9143D4C4E6D5A45C0F4AA1FECA004 (ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingState_Clear_m23A1DD27BCE9143D4C4E6D5A45C0F4AA1FECA004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_chars_0((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL);
		__this->set_charPos_1(0);
		__this->set_charsUsed_2(0);
		__this->set_encoding_3((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)NULL);
		__this->set_stream_5((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
		__this->set_decoder_6((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)NULL);
		__this->set_bytes_7((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		__this->set_bytePos_8(0);
		__this->set_bytesUsed_9(0);
		__this->set_textReader_10((TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F *)NULL);
		__this->set_lineNo_11(1);
		__this->set_lineStartPos_12((-1));
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_baseUriStr_13(L_0);
		__this->set_baseUri_14((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL);
		__this->set_isEof_15((bool)0);
		__this->set_isStreamEof_16((bool)0);
		__this->set_eolNormalized_19((bool)1);
		__this->set_entityResolvedManually_20((bool)0);
		return;
	}
}
IL2CPP_EXTERN_C  void ParsingState_Clear_m23A1DD27BCE9143D4C4E6D5A45C0F4AA1FECA004_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * _thisAdjusted = reinterpret_cast<ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF *>(__this + _offset);
	ParsingState_Clear_m23A1DD27BCE9143D4C4E6D5A45C0F4AA1FECA004(_thisAdjusted, method);
}
// System.Void System.Xml.XmlTextReaderImpl_ParsingState::Close(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingState_Close_m689F0D29DA61913B5406B7E42E675DED08CEC10F (ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * __this, bool ___closeInput0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___closeInput0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get_stream_5();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = __this->get_stream_5();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_2);
		return;
	}

IL_0017:
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_3 = __this->get_textReader_10();
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_4 = __this->get_textReader_10();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_4);
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ParsingState_Close_m689F0D29DA61913B5406B7E42E675DED08CEC10F_AdjustorThunk (RuntimeObject * __this, bool ___closeInput0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * _thisAdjusted = reinterpret_cast<ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF *>(__this + _offset);
	ParsingState_Close_m689F0D29DA61913B5406B7E42E675DED08CEC10F(_thisAdjusted, ___closeInput0, method);
}
// System.Int32 System.Xml.XmlTextReaderImpl_ParsingState::get_LineNo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParsingState_get_LineNo_m9C32240CFE61AE19697B7C9EFA5DE9B44D3C9610 (ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_lineNo_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ParsingState_get_LineNo_m9C32240CFE61AE19697B7C9EFA5DE9B44D3C9610_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * _thisAdjusted = reinterpret_cast<ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF *>(__this + _offset);
	return ParsingState_get_LineNo_m9C32240CFE61AE19697B7C9EFA5DE9B44D3C9610_inline(_thisAdjusted, method);
}
// System.Int32 System.Xml.XmlTextReaderImpl_ParsingState::get_LinePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParsingState_get_LinePos_mB937EA68EFFA791C24EDC7C1DFFE45732EBFFD5C (ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_charPos_1();
		int32_t L_1 = __this->get_lineStartPos_12();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
IL2CPP_EXTERN_C  int32_t ParsingState_get_LinePos_mB937EA68EFFA791C24EDC7C1DFFE45732EBFFD5C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * _thisAdjusted = reinterpret_cast<ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF *>(__this + _offset);
	return ParsingState_get_LinePos_mB937EA68EFFA791C24EDC7C1DFFE45732EBFFD5C(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextReaderImpl_XmlContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlContext__ctor_m5785549B37BF1B5F5295E45AA99FB8057AA2C120 (XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlContext__ctor_m5785549B37BF1B5F5295E45AA99FB8057AA2C120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_xmlSpace_0(0);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_xmlLang_1(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_defaultNamespace_2(L_1);
		__this->set_previousContext_3((XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D *)NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl_XmlContext::.ctor(System.Xml.XmlTextReaderImpl_XmlContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlContext__ctor_mBB5EC64A1865F609FEA54FC912CD4989934EC764 (XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * __this, XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * ___previousContext0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * L_0 = ___previousContext0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_xmlSpace_0();
		__this->set_xmlSpace_0(L_1);
		XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * L_2 = ___previousContext0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_xmlLang_1();
		__this->set_xmlLang_1(L_3);
		XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * L_4 = ___previousContext0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_defaultNamespace_2();
		__this->set_defaultNamespace_2(L_5);
		XmlContext_tAC94E49A4625E1E5BDD6390576509760DD2A162D * L_6 = ___previousContext0;
		__this->set_previousContext_3(L_6);
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
// System.Void System.Xml.XmlUrlResolver_<GetEntityAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEntityAsyncU3Ed__15_MoveNext_m6F75ADBC40411959ECD71C921F282AB4102D208E (U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEntityAsyncU3Ed__15_MoveNext_m6F75ADBC40411959ECD71C921F282AB4102D208E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_1_t7EA81BB95AB4DBB79ADF06E9518D55B0721DC03C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1 * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00ae;
			}
		}

IL_0014:
		{
			Type_t * L_3 = __this->get_ofObjectToReturn_2();
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0053;
			}
		}

IL_0022:
		{
			Type_t * L_5 = __this->get_ofObjectToReturn_2();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
			bool L_8 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0053;
			}
		}

IL_0039:
		{
			Type_t * L_9 = __this->get_ofObjectToReturn_2();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
			bool L_12 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_00d4;
			}
		}

IL_0053:
		{
			XmlDownloadManager_t28FF2F536CFB5125C74928F7DC706692604D5A9D * L_13 = XmlUrlResolver_get_DownloadManager_m5A25332CBCCAB9CBC41955E665944D016CE2804E(/*hidden argument*/NULL);
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_14 = __this->get_absoluteUri_3();
			XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1 * L_15 = V_1;
			NullCheck(L_15);
			RuntimeObject* L_16 = L_15->get__credentials_1();
			XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1 * L_17 = V_1;
			NullCheck(L_17);
			RuntimeObject* L_18 = L_17->get__proxy_2();
			XmlUrlResolver_t341613B5C62E06DC2382255E0AE4D763AD302AE1 * L_19 = V_1;
			NullCheck(L_19);
			RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED * L_20 = L_19->get__cachePolicy_3();
			NullCheck(L_13);
			Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602 * L_21 = XmlDownloadManager_GetStreamAsync_m8651CC7437004016BCBB9742D71972CBAAB94E62(L_13, L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			ConfiguredTaskAwaitable_1_t7EA81BB95AB4DBB79ADF06E9518D55B0721DC03C  L_22 = Task_1_ConfigureAwait_m4A6D2565EE9545645B9418B3B2CC34B6A3D260A8(L_21, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m4A6D2565EE9545645B9418B3B2CC34B6A3D260A8_RuntimeMethod_var);
			V_4 = L_22;
			ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC  L_23 = ConfiguredTaskAwaitable_1_GetAwaiter_m4F1ED70E3551027C342566D331FE99EB40F7C076_inline((ConfiguredTaskAwaitable_1_t7EA81BB95AB4DBB79ADF06E9518D55B0721DC03C *)(&V_4), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m4F1ED70E3551027C342566D331FE99EB40F7C076_RuntimeMethod_var);
			V_3 = L_23;
			bool L_24 = ConfiguredTaskAwaiter_get_IsCompleted_mB7A99A944FAEF631A2EC109FADBF428D6A12FC0F((ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mB7A99A944FAEF631A2EC109FADBF428D6A12FC0F_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00ca;
			}
		}

IL_008e:
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
			ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC  L_26 = V_3;
			__this->set_U3CU3Eu__1_5(L_26);
			AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC_TisU3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218_m3B21BB85DA84F2172127634BA0CCA9EF4FFE865F((AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)L_27, (ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC *)(&V_3), (U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC_TisU3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218_m3B21BB85DA84F2172127634BA0CCA9EF4FFE865F_RuntimeMethod_var);
			goto IL_0111;
		}

IL_00ae:
		{
			ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC  L_28 = __this->get_U3CU3Eu__1_5();
			V_3 = L_28;
			ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC * L_29 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_29, sizeof(ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC ));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
		}

IL_00ca:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_31 = ConfiguredTaskAwaiter_GetResult_mAD154326007808FFD2047A47BD8C312B91A05FCD((ConfiguredTaskAwaiter_t8518ACD1F2872D675882BA604F5262DD7B2A62BC *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mAD154326007808FFD2047A47BD8C312B91A05FCD_RuntimeMethod_var);
			V_2 = L_31;
			goto IL_00fd;
		}

IL_00d4:
		{
			String_t* L_32 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918 * L_33 = (XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918 *)il2cpp_codegen_object_new(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918_il2cpp_TypeInfo_var);
			XmlException__ctor_m113008AE4B646E85154C99B3CBB55D536CBEFEB9(L_33, _stringLiteralD29CA80AA23F62C996542BD3373B35F12EBC874B, L_32, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, U3CGetEntityAsyncU3Ed__15_MoveNext_m6F75ADBC40411959ECD71C921F282AB4102D208E_RuntimeMethod_var);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e4;
		throw e;
	}

CATCH_00e4:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_35 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3((AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)L_34, L_35, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_RuntimeMethod_var);
		goto IL_0111;
	} // end catch (depth: 1)

IL_00fd:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * L_36 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject * L_37 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA((AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)L_36, L_37, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_RuntimeMethod_var);
	}

IL_0111:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetEntityAsyncU3Ed__15_MoveNext_m6F75ADBC40411959ECD71C921F282AB4102D208E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 * _thisAdjusted = reinterpret_cast<U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 *>(__this + _offset);
	U3CGetEntityAsyncU3Ed__15_MoveNext_m6F75ADBC40411959ECD71C921F282AB4102D208E(_thisAdjusted, method);
}
// System.Void System.Xml.XmlUrlResolver_<GetEntityAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEntityAsyncU3Ed__15_SetStateMachine_m9A31F8EDD492D50FFA4F9FCC8F0FBAD9DD1D3E93 (U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEntityAsyncU3Ed__15_SetStateMachine_m9A31F8EDD492D50FFA4F9FCC8F0FBAD9DD1D3E93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D((AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetEntityAsyncU3Ed__15_SetStateMachine_m9A31F8EDD492D50FFA4F9FCC8F0FBAD9DD1D3E93_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 * _thisAdjusted = reinterpret_cast<U3CGetEntityAsyncU3Ed__15_t20AEFF2EBE2252FD1B094E4F290D7BD745CFF218 *>(__this + _offset);
	U3CGetEntityAsyncU3Ed__15_SetStateMachine_m9A31F8EDD492D50FFA4F9FCC8F0FBAD9DD1D3E93(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Xml.XmlWellFormedWriter/AttrName
IL2CPP_EXTERN_C void AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshal_pinvoke(const AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C& unmarshaled, AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshaled_pinvoke& marshaled)
{
	marshaled.___prefix_0 = il2cpp_codegen_marshal_string(unmarshaled.get_prefix_0());
	marshaled.___namespaceUri_1 = il2cpp_codegen_marshal_string(unmarshaled.get_namespaceUri_1());
	marshaled.___localName_2 = il2cpp_codegen_marshal_string(unmarshaled.get_localName_2());
	marshaled.___prev_3 = unmarshaled.get_prev_3();
}
IL2CPP_EXTERN_C void AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshal_pinvoke_back(const AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshaled_pinvoke& marshaled, AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C& unmarshaled)
{
	unmarshaled.set_prefix_0(il2cpp_codegen_marshal_string_result(marshaled.___prefix_0));
	unmarshaled.set_namespaceUri_1(il2cpp_codegen_marshal_string_result(marshaled.___namespaceUri_1));
	unmarshaled.set_localName_2(il2cpp_codegen_marshal_string_result(marshaled.___localName_2));
	int32_t unmarshaled_prev_temp_3 = 0;
	unmarshaled_prev_temp_3 = marshaled.___prev_3;
	unmarshaled.set_prev_3(unmarshaled_prev_temp_3);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlWellFormedWriter/AttrName
IL2CPP_EXTERN_C void AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshal_pinvoke_cleanup(AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___prefix_0);
	marshaled.___prefix_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___namespaceUri_1);
	marshaled.___namespaceUri_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___localName_2);
	marshaled.___localName_2 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlWellFormedWriter/AttrName
IL2CPP_EXTERN_C void AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshal_com(const AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C& unmarshaled, AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshaled_com& marshaled)
{
	marshaled.___prefix_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_prefix_0());
	marshaled.___namespaceUri_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_namespaceUri_1());
	marshaled.___localName_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_localName_2());
	marshaled.___prev_3 = unmarshaled.get_prev_3();
}
IL2CPP_EXTERN_C void AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshal_com_back(const AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshaled_com& marshaled, AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C& unmarshaled)
{
	unmarshaled.set_prefix_0(il2cpp_codegen_marshal_bstring_result(marshaled.___prefix_0));
	unmarshaled.set_namespaceUri_1(il2cpp_codegen_marshal_bstring_result(marshaled.___namespaceUri_1));
	unmarshaled.set_localName_2(il2cpp_codegen_marshal_bstring_result(marshaled.___localName_2));
	int32_t unmarshaled_prev_temp_3 = 0;
	unmarshaled_prev_temp_3 = marshaled.___prev_3;
	unmarshaled.set_prev_3(unmarshaled_prev_temp_3);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlWellFormedWriter/AttrName
IL2CPP_EXTERN_C void AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshal_com_cleanup(AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___prefix_0);
	marshaled.___prefix_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___namespaceUri_1);
	marshaled.___namespaceUri_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___localName_2);
	marshaled.___localName_2 = NULL;
}
// System.Void System.Xml.XmlWellFormedWriter_AttrName::Set(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttrName_Set_m670AC1B21A3697B638023B9FBD1E04DCF9D3052B (AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		__this->set_prefix_0(L_0);
		String_t* L_1 = ___namespaceUri2;
		__this->set_namespaceUri_1(L_1);
		String_t* L_2 = ___localName1;
		__this->set_localName_2(L_2);
		__this->set_prev_3(0);
		return;
	}
}
IL2CPP_EXTERN_C  void AttrName_Set_m670AC1B21A3697B638023B9FBD1E04DCF9D3052B_AdjustorThunk (RuntimeObject * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C * _thisAdjusted = reinterpret_cast<AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C *>(__this + _offset);
	AttrName_Set_m670AC1B21A3697B638023B9FBD1E04DCF9D3052B(_thisAdjusted, ___prefix0, ___localName1, ___namespaceUri2, method);
}
// System.Boolean System.Xml.XmlWellFormedWriter_AttrName::IsDuplicate(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttrName_IsDuplicate_m4AC75CB7B66F45F9F7442F8B18AD33E251CB4D32 (AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_localName_2();
		String_t* L_1 = ___localName1;
		bool L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = __this->get_prefix_0();
		String_t* L_4 = ___prefix0;
		bool L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = __this->get_namespaceUri_1();
		String_t* L_7 = ___namespaceUri2;
		bool L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		return (bool)1;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AttrName_IsDuplicate_m4AC75CB7B66F45F9F7442F8B18AD33E251CB4D32_AdjustorThunk (RuntimeObject * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C * _thisAdjusted = reinterpret_cast<AttrName_t0672A54748B35BEFB6C4C4F67D86D9612D137E2C *>(__this + _offset);
	return AttrName_IsDuplicate_m4AC75CB7B66F45F9F7442F8B18AD33E251CB4D32(_thisAdjusted, ___prefix0, ___localName1, ___namespaceUri2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Xml.XmlWellFormedWriter_AttributeValueCache::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AttributeValueCache_get_StringValue_m0D617F77E0DB9C7030B93310426187C5015DB006 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_singleStringValue_1();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->get_singleStringValue_1();
		return L_1;
	}

IL_000f:
	{
		StringBuilder_t * L_2 = __this->get_stringValue_0();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::WriteEntityRef(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_WriteEntityRef_m20D6BE6836719DF501E4BAC53AC7B5A13A5CC117 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeValueCache_WriteEntityRef_m20D6BE6836719DF501E4BAC53AC7B5A13A5CC117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_singleStringValue_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AttributeValueCache_StartComplexValue_mABF6AA6F8A30162A6F433CFFCAF0D0BE79311454(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		String_t* L_1 = ___name0;
		bool L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_3 = ___name0;
		bool L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral1710B4477A01FFE20514D8AA61891F364D71C25B, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_5 = ___name0;
		bool L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral893D84FF4ED81AC205FBC0C67CBEE1C0C752B406, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_7 = ___name0;
		bool L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral513659CEF285C73478E9829E41D7E4C23DB53E12, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_9 = ___name0;
		bool L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral96930EC8C6FD5250BB36A5E1040AB06A9588FD62, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_00a1;
	}

IL_0051:
	{
		StringBuilder_t * L_11 = __this->get_stringValue_0();
		NullCheck(L_11);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_11, ((int32_t)60), /*hidden argument*/NULL);
		goto IL_00ca;
	}

IL_0061:
	{
		StringBuilder_t * L_12 = __this->get_stringValue_0();
		NullCheck(L_12);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_12, ((int32_t)62), /*hidden argument*/NULL);
		goto IL_00ca;
	}

IL_0071:
	{
		StringBuilder_t * L_13 = __this->get_stringValue_0();
		NullCheck(L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_13, ((int32_t)34), /*hidden argument*/NULL);
		goto IL_00ca;
	}

IL_0081:
	{
		StringBuilder_t * L_14 = __this->get_stringValue_0();
		NullCheck(L_14);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_14, ((int32_t)39), /*hidden argument*/NULL);
		goto IL_00ca;
	}

IL_0091:
	{
		StringBuilder_t * L_15 = __this->get_stringValue_0();
		NullCheck(L_15);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_15, ((int32_t)38), /*hidden argument*/NULL);
		goto IL_00ca;
	}

IL_00a1:
	{
		StringBuilder_t * L_16 = __this->get_stringValue_0();
		NullCheck(L_16);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_16, ((int32_t)38), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = __this->get_stringValue_0();
		String_t* L_18 = ___name0;
		NullCheck(L_17);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, L_18, /*hidden argument*/NULL);
		StringBuilder_t * L_19 = __this->get_stringValue_0();
		NullCheck(L_19);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_19, ((int32_t)59), /*hidden argument*/NULL);
	}

IL_00ca:
	{
		String_t* L_20 = ___name0;
		AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6(__this, 0, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::WriteCharEntity(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_WriteCharEntity_mF5CF5D0B1FD72D9646547BA04E0A8CF0FE99E988 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeValueCache_WriteCharEntity_mF5CF5D0B1FD72D9646547BA04E0A8CF0FE99E988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_singleStringValue_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AttributeValueCache_StartComplexValue_mABF6AA6F8A30162A6F433CFFCAF0D0BE79311454(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		StringBuilder_t * L_1 = __this->get_stringValue_0();
		Il2CppChar L_2 = ___ch0;
		NullCheck(L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, L_2, /*hidden argument*/NULL);
		Il2CppChar L_3 = ___ch0;
		Il2CppChar L_4 = L_3;
		RuntimeObject * L_5 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_4);
		AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6(__this, 1, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::WriteSurrogateCharEntity(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_WriteSurrogateCharEntity_m849F2BE6F3AF1F013961649206432643B945BEDE (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, Il2CppChar ___lowChar0, Il2CppChar ___highChar1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeValueCache_WriteSurrogateCharEntity_m849F2BE6F3AF1F013961649206432643B945BEDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_singleStringValue_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AttributeValueCache_StartComplexValue_mABF6AA6F8A30162A6F433CFFCAF0D0BE79311454(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		StringBuilder_t * L_1 = __this->get_stringValue_0();
		Il2CppChar L_2 = ___highChar1;
		NullCheck(L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, L_2, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = __this->get_stringValue_0();
		Il2CppChar L_4 = ___lowChar0;
		NullCheck(L_3);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_3, L_4, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = L_5;
		Il2CppChar L_7 = ___lowChar0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_7);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = L_6;
		Il2CppChar L_9 = ___highChar1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)L_9);
		AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6(__this, 2, (RuntimeObject *)(RuntimeObject *)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::WriteWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_WriteWhitespace_m59410187D1A9273D8E7C266D851BA3965E7DFB91 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, String_t* ___ws0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_singleStringValue_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AttributeValueCache_StartComplexValue_mABF6AA6F8A30162A6F433CFFCAF0D0BE79311454(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		StringBuilder_t * L_1 = __this->get_stringValue_0();
		String_t* L_2 = ___ws0;
		NullCheck(L_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___ws0;
		AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6(__this, 3, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::WriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_WriteString_m14B77EC30DF6DABA828ACF9169F7940F4F6137DF (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_singleStringValue_1();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		AttributeValueCache_StartComplexValue_mABF6AA6F8A30162A6F433CFFCAF0D0BE79311454(__this, /*hidden argument*/NULL);
		goto IL_0021;
	}

IL_0010:
	{
		int32_t L_1 = __this->get_lastItem_4();
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___text0;
		__this->set_singleStringValue_1(L_2);
		return;
	}

IL_0021:
	{
		StringBuilder_t * L_3 = __this->get_stringValue_0();
		String_t* L_4 = ___text0;
		NullCheck(L_3);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_3, L_4, /*hidden argument*/NULL);
		String_t* L_5 = ___text0;
		AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6(__this, 4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::WriteChars(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_WriteChars_m29755C4DA7BBFF025E144B4E2D262940EFA659A7 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeValueCache_WriteChars_m29755C4DA7BBFF025E144B4E2D262940EFA659A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_singleStringValue_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AttributeValueCache_StartComplexValue_mABF6AA6F8A30162A6F433CFFCAF0D0BE79311454(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		StringBuilder_t * L_1 = __this->get_stringValue_0();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___buffer0;
		int32_t L_3 = ___index1;
		int32_t L_4 = ___count2;
		NullCheck(L_1);
		StringBuilder_Append_m4B771D7BFE8A65C9A504EC5847A699EB678B02DB(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___buffer0;
		int32_t L_6 = ___index1;
		int32_t L_7 = ___count2;
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_8 = (BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E *)il2cpp_codegen_object_new(BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E_il2cpp_TypeInfo_var);
		BufferChunk__ctor_mA0A1D11DB3A3EFA1671DA5B5BF20ADC05DEB326D(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6(__this, 5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::WriteRaw(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_WriteRaw_m297BAEA99CFAFAF357FDE71AFD1C98C93A5C49FF (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeValueCache_WriteRaw_m297BAEA99CFAFAF357FDE71AFD1C98C93A5C49FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_singleStringValue_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AttributeValueCache_StartComplexValue_mABF6AA6F8A30162A6F433CFFCAF0D0BE79311454(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		StringBuilder_t * L_1 = __this->get_stringValue_0();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___buffer0;
		int32_t L_3 = ___index1;
		int32_t L_4 = ___count2;
		NullCheck(L_1);
		StringBuilder_Append_m4B771D7BFE8A65C9A504EC5847A699EB678B02DB(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___buffer0;
		int32_t L_6 = ___index1;
		int32_t L_7 = ___count2;
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_8 = (BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E *)il2cpp_codegen_object_new(BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E_il2cpp_TypeInfo_var);
		BufferChunk__ctor_mA0A1D11DB3A3EFA1671DA5B5BF20ADC05DEB326D(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6(__this, 7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::WriteRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_WriteRaw_mBBE53E7B4256C5A239508B346DCA3A54A898EEF9 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, String_t* ___data0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_singleStringValue_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AttributeValueCache_StartComplexValue_mABF6AA6F8A30162A6F433CFFCAF0D0BE79311454(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		StringBuilder_t * L_1 = __this->get_stringValue_0();
		String_t* L_2 = ___data0;
		NullCheck(L_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___data0;
		AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6(__this, 6, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::WriteValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_WriteValue_m7EB9ED91D89EB26620950902F9346B91670970F0 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_singleStringValue_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AttributeValueCache_StartComplexValue_mABF6AA6F8A30162A6F433CFFCAF0D0BE79311454(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		StringBuilder_t * L_1 = __this->get_stringValue_0();
		String_t* L_2 = ___value0;
		NullCheck(L_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___value0;
		AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6(__this, 8, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::Replay(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_Replay_m2CF2F703C0D6D9CD77FB32178BB68B28A1D027A2 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeValueCache_Replay_m2CF2F703C0D6D9CD77FB32178BB68B28A1D027A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * V_0 = NULL;
	int32_t V_1 = 0;
	Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * V_2 = NULL;
	int32_t V_3 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_4 = NULL;
	{
		String_t* L_0 = __this->get_singleStringValue_1();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_1 = ___writer0;
		String_t* L_2 = __this->get_singleStringValue_1();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_1, L_2);
		return;
	}

IL_0015:
	{
		int32_t L_3 = __this->get_firstItem_3();
		V_1 = L_3;
		goto IL_0149;
	}

IL_0021:
	{
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_4 = __this->get_items_2();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_type_0();
		V_3 = L_9;
		int32_t L_10 = V_3;
		switch (L_10)
		{
			case 0:
			{
				goto IL_0060;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_008c;
			}
			case 3:
			{
				goto IL_00ac;
			}
			case 4:
			{
				goto IL_00c2;
			}
			case 5:
			{
				goto IL_00d5;
			}
			case 6:
			{
				goto IL_00fb;
			}
			case 7:
			{
				goto IL_010e;
			}
			case 8:
			{
				goto IL_0134;
			}
		}
	}
	{
		goto IL_0145;
	}

IL_0060:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_11 = ___writer0;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_12 = V_2;
		NullCheck(L_12);
		RuntimeObject * L_13 = L_12->get_data_1();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, L_11, ((String_t*)CastclassSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)));
		goto IL_0145;
	}

IL_0076:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_14 = ___writer0;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_15 = V_2;
		NullCheck(L_15);
		RuntimeObject * L_16 = L_15->get_data_1();
		NullCheck(L_14);
		VirtActionInvoker1< Il2CppChar >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteCharEntity(System.Char) */, L_14, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_16, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))));
		goto IL_0145;
	}

IL_008c:
	{
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_17 = V_2;
		NullCheck(L_17);
		RuntimeObject * L_18 = L_17->get_data_1();
		V_4 = ((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)Castclass((RuntimeObject*)L_18, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var));
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_19 = ___writer0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = 0;
		uint16_t L_22 = (uint16_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = V_4;
		NullCheck(L_23);
		int32_t L_24 = 1;
		uint16_t L_25 = (uint16_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_19);
		VirtActionInvoker2< Il2CppChar, Il2CppChar >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteSurrogateCharEntity(System.Char,System.Char) */, L_19, L_22, L_25);
		goto IL_0145;
	}

IL_00ac:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_26 = ___writer0;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_27 = V_2;
		NullCheck(L_27);
		RuntimeObject * L_28 = L_27->get_data_1();
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, L_26, ((String_t*)CastclassSealed((RuntimeObject*)L_28, String_t_il2cpp_TypeInfo_var)));
		goto IL_0145;
	}

IL_00c2:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_29 = ___writer0;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_30 = V_2;
		NullCheck(L_30);
		RuntimeObject * L_31 = L_30->get_data_1();
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_29, ((String_t*)CastclassSealed((RuntimeObject*)L_31, String_t_il2cpp_TypeInfo_var)));
		goto IL_0145;
	}

IL_00d5:
	{
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_32 = V_2;
		NullCheck(L_32);
		RuntimeObject * L_33 = L_32->get_data_1();
		V_0 = ((BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E *)CastclassClass((RuntimeObject*)L_33, BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E_il2cpp_TypeInfo_var));
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_34 = ___writer0;
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_35 = V_0;
		NullCheck(L_35);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_36 = L_35->get_buffer_0();
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = L_37->get_index_1();
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = L_39->get_count_2();
		NullCheck(L_34);
		VirtActionInvoker3< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(22 /* System.Void System.Xml.XmlWriter::WriteChars(System.Char[],System.Int32,System.Int32) */, L_34, L_36, L_38, L_40);
		goto IL_0145;
	}

IL_00fb:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_41 = ___writer0;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_42 = V_2;
		NullCheck(L_42);
		RuntimeObject * L_43 = L_42->get_data_1();
		NullCheck(L_41);
		VirtActionInvoker1< String_t* >::Invoke(24 /* System.Void System.Xml.XmlWriter::WriteRaw(System.String) */, L_41, ((String_t*)CastclassSealed((RuntimeObject*)L_43, String_t_il2cpp_TypeInfo_var)));
		goto IL_0145;
	}

IL_010e:
	{
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_44 = V_2;
		NullCheck(L_44);
		RuntimeObject * L_45 = L_44->get_data_1();
		V_0 = ((BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E *)CastclassClass((RuntimeObject*)L_45, BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E_il2cpp_TypeInfo_var));
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_46 = ___writer0;
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_47 = V_0;
		NullCheck(L_47);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_48 = L_47->get_buffer_0();
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = L_49->get_index_1();
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_count_2();
		NullCheck(L_46);
		VirtActionInvoker3< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(22 /* System.Void System.Xml.XmlWriter::WriteChars(System.Char[],System.Int32,System.Int32) */, L_46, L_48, L_50, L_52);
		goto IL_0145;
	}

IL_0134:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_53 = ___writer0;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_54 = V_2;
		NullCheck(L_54);
		RuntimeObject * L_55 = L_54->get_data_1();
		NullCheck(L_53);
		VirtActionInvoker1< String_t* >::Invoke(31 /* System.Void System.Xml.XmlWriter::WriteValue(System.String) */, L_53, ((String_t*)CastclassSealed((RuntimeObject*)L_55, String_t_il2cpp_TypeInfo_var)));
	}

IL_0145:
	{
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_0149:
	{
		int32_t L_57 = V_1;
		int32_t L_58 = __this->get_lastItem_4();
		if ((((int32_t)L_57) <= ((int32_t)L_58)))
		{
			goto IL_0021;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_Trim_mA522BD9E00F36191AA0EB984EA8CA0DD664476DE (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeValueCache_Trim_mA522BD9E00F36191AA0EB984EA8CA0DD664476DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * V_3 = NULL;
	int32_t V_4 = 0;
	BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * V_5 = NULL;
	int32_t V_6 = 0;
	Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * V_7 = NULL;
	BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * V_8 = NULL;
	{
		String_t* L_0 = __this->get_singleStringValue_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1 = __this->get_singleStringValue_1();
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_2 = XmlConvert_TrimString_mF0E4AC16BD05053538B20B21DBD64447195A2D1B(L_1, /*hidden argument*/NULL);
		__this->set_singleStringValue_1(L_2);
		return;
	}

IL_001a:
	{
		StringBuilder_t * L_3 = __this->get_stringValue_0();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		String_t* L_5 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_6 = XmlConvert_TrimString_mF0E4AC16BD05053538B20B21DBD64447195A2D1B(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		bool L_8 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_9 = V_0;
		StringBuilder_t * L_10 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77(L_10, L_9, /*hidden argument*/NULL);
		__this->set_stringValue_0(L_10);
	}

IL_0040:
	{
		XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA  L_11 = XmlCharType_get_Instance_mA3CFC9BC3797565FD176224C6116F41AC8BA65B5(/*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12 = __this->get_firstItem_3();
		V_2 = L_12;
		goto IL_0155;
	}

IL_0052:
	{
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_13 = __this->get_items_2();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_type_0();
		V_4 = L_18;
		int32_t L_19 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)3)))
		{
			case 0:
			{
				goto IL_0089;
			}
			case 1:
			{
				goto IL_009c;
			}
			case 2:
			{
				goto IL_00d7;
			}
			case 3:
			{
				goto IL_009c;
			}
			case 4:
			{
				goto IL_00d7;
			}
			case 5:
			{
				goto IL_009c;
			}
		}
	}
	{
		goto IL_0151;
	}

IL_0089:
	{
		int32_t L_20 = __this->get_firstItem_3();
		__this->set_firstItem_3(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		goto IL_0151;
	}

IL_009c:
	{
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_21 = V_3;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_22 = V_3;
		NullCheck(L_22);
		RuntimeObject * L_23 = L_22->get_data_1();
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_24 = XmlConvert_TrimStringStart_m430B3EFD170D03F58CC8C419D421AEA7AB7FD859(((String_t*)CastclassSealed((RuntimeObject*)L_23, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_data_1(L_24);
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_25 = V_3;
		NullCheck(L_25);
		RuntimeObject * L_26 = L_25->get_data_1();
		NullCheck(((String_t*)CastclassSealed((RuntimeObject*)L_26, String_t_il2cpp_TypeInfo_var)));
		int32_t L_27 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(((String_t*)CastclassSealed((RuntimeObject*)L_26, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0151;
		}
	}
	{
		int32_t L_28 = __this->get_firstItem_3();
		__this->set_firstItem_3(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		goto IL_0151;
	}

IL_00d7:
	{
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_29 = V_3;
		NullCheck(L_29);
		RuntimeObject * L_30 = L_29->get_data_1();
		V_5 = ((BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E *)CastclassClass((RuntimeObject*)L_30, BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E_il2cpp_TypeInfo_var));
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_31 = V_5;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_index_1();
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_33 = V_5;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_count_2();
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_34));
		goto IL_0115;
	}

IL_00f7:
	{
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_35 = V_5;
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_36 = L_35;
		NullCheck(L_36);
		int32_t L_37 = L_36->get_index_1();
		NullCheck(L_36);
		L_36->set_index_1(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_38 = V_5;
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_39 = L_38;
		NullCheck(L_39);
		int32_t L_40 = L_39->get_count_2();
		NullCheck(L_39);
		L_39->set_count_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1)));
	}

IL_0115:
	{
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_41 = V_5;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_index_1();
		int32_t L_43 = V_6;
		if ((((int32_t)L_42) >= ((int32_t)L_43)))
		{
			goto IL_0138;
		}
	}
	{
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_44 = V_5;
		NullCheck(L_44);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_45 = L_44->get_buffer_0();
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_index_1();
		NullCheck(L_45);
		int32_t L_48 = L_47;
		uint16_t L_49 = (uint16_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		bool L_50 = XmlCharType_IsWhiteSpace_m4EE0C544C3C666A6BBAAE63BDD5CFB221655DDA0((XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA *)(&V_1), L_49, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_00f7;
		}
	}

IL_0138:
	{
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_51 = V_5;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_index_1();
		int32_t L_53 = V_6;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_0151;
		}
	}
	{
		int32_t L_54 = __this->get_firstItem_3();
		__this->set_firstItem_3(((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1)));
	}

IL_0151:
	{
		int32_t L_55 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_0155:
	{
		int32_t L_56 = V_2;
		int32_t L_57 = __this->get_firstItem_3();
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_58 = V_2;
		int32_t L_59 = __this->get_lastItem_4();
		if ((((int32_t)L_58) <= ((int32_t)L_59)))
		{
			goto IL_0052;
		}
	}

IL_016a:
	{
		int32_t L_60 = __this->get_lastItem_4();
		V_2 = L_60;
		goto IL_0263;
	}

IL_0176:
	{
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_61 = __this->get_items_2();
		int32_t L_62 = V_2;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_7 = L_64;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_65 = V_7;
		NullCheck(L_65);
		int32_t L_66 = L_65->get_type_0();
		V_4 = L_66;
		int32_t L_67 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)3)))
		{
			case 0:
			{
				goto IL_01af;
			}
			case 1:
			{
				goto IL_01c2;
			}
			case 2:
			{
				goto IL_01fd;
			}
			case 3:
			{
				goto IL_01c2;
			}
			case 4:
			{
				goto IL_01fd;
			}
			case 5:
			{
				goto IL_01c2;
			}
		}
	}
	{
		goto IL_025f;
	}

IL_01af:
	{
		int32_t L_68 = __this->get_lastItem_4();
		__this->set_lastItem_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)1)));
		goto IL_025f;
	}

IL_01c2:
	{
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_69 = V_7;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_70 = V_7;
		NullCheck(L_70);
		RuntimeObject * L_71 = L_70->get_data_1();
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_72 = XmlConvert_TrimStringEnd_m49BB2083DDE01A5251215D81D721E315C9270DB0(((String_t*)CastclassSealed((RuntimeObject*)L_71, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_69);
		L_69->set_data_1(L_72);
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_73 = V_7;
		NullCheck(L_73);
		RuntimeObject * L_74 = L_73->get_data_1();
		NullCheck(((String_t*)CastclassSealed((RuntimeObject*)L_74, String_t_il2cpp_TypeInfo_var)));
		int32_t L_75 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(((String_t*)CastclassSealed((RuntimeObject*)L_74, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_75)
		{
			goto IL_025f;
		}
	}
	{
		int32_t L_76 = __this->get_lastItem_4();
		__this->set_lastItem_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)1)));
		goto IL_025f;
	}

IL_01fd:
	{
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_77 = V_7;
		NullCheck(L_77);
		RuntimeObject * L_78 = L_77->get_data_1();
		V_8 = ((BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E *)CastclassClass((RuntimeObject*)L_78, BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E_il2cpp_TypeInfo_var));
		goto IL_021c;
	}

IL_020d:
	{
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_79 = V_8;
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_80 = L_79;
		NullCheck(L_80);
		int32_t L_81 = L_80->get_count_2();
		NullCheck(L_80);
		L_80->set_count_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1)));
	}

IL_021c:
	{
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_82 = V_8;
		NullCheck(L_82);
		int32_t L_83 = L_82->get_count_2();
		if ((((int32_t)L_83) <= ((int32_t)0)))
		{
			goto IL_0248;
		}
	}
	{
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_84 = V_8;
		NullCheck(L_84);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_85 = L_84->get_buffer_0();
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_86 = V_8;
		NullCheck(L_86);
		int32_t L_87 = L_86->get_index_1();
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_88 = V_8;
		NullCheck(L_88);
		int32_t L_89 = L_88->get_count_2();
		NullCheck(L_85);
		int32_t L_90 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_89)), (int32_t)1));
		uint16_t L_91 = (uint16_t)(L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		bool L_92 = XmlCharType_IsWhiteSpace_m4EE0C544C3C666A6BBAAE63BDD5CFB221655DDA0((XmlCharType_t0B35CAE2B2E20F28A418270966E9989BBDB004BA *)(&V_1), L_91, /*hidden argument*/NULL);
		if (L_92)
		{
			goto IL_020d;
		}
	}

IL_0248:
	{
		BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * L_93 = V_8;
		NullCheck(L_93);
		int32_t L_94 = L_93->get_count_2();
		if (L_94)
		{
			goto IL_025f;
		}
	}
	{
		int32_t L_95 = __this->get_lastItem_4();
		__this->set_lastItem_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)1)));
	}

IL_025f:
	{
		int32_t L_96 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_96, (int32_t)1));
	}

IL_0263:
	{
		int32_t L_97 = V_2;
		int32_t L_98 = __this->get_lastItem_4();
		if ((!(((uint32_t)L_97) == ((uint32_t)L_98))))
		{
			goto IL_0278;
		}
	}
	{
		int32_t L_99 = V_2;
		int32_t L_100 = __this->get_firstItem_3();
		if ((((int32_t)L_99) >= ((int32_t)L_100)))
		{
			goto IL_0176;
		}
	}

IL_0278:
	{
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_Clear_mEB00BEAD618CC121D48CB1095BED2A6DE4DE0216 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, const RuntimeMethod* method)
{
	{
		__this->set_singleStringValue_1((String_t*)NULL);
		__this->set_lastItem_4((-1));
		__this->set_firstItem_3(0);
		StringBuilder_t * L_0 = __this->get_stringValue_0();
		NullCheck(L_0);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::StartComplexValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_StartComplexValue_mABF6AA6F8A30162A6F433CFFCAF0D0BE79311454 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, const RuntimeMethod* method)
{
	{
		StringBuilder_t * L_0 = __this->get_stringValue_0();
		String_t* L_1 = __this->get_singleStringValue_1();
		NullCheck(L_0);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_singleStringValue_1();
		AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6(__this, 4, L_2, /*hidden argument*/NULL);
		__this->set_singleStringValue_1((String_t*)NULL);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::AddItem(System.Xml.XmlWellFormedWriter_AttributeValueCache_ItemType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6 (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, int32_t ___type0, RuntimeObject * ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeValueCache_AddItem_mBCEE0ECC34917F1FFFF293BF5BA8A79BADB87DF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* V_1 = NULL;
	{
		int32_t L_0 = __this->get_lastItem_4();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_1 = __this->get_items_2();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_2 = (ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0*)(ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0*)SZArrayNew(ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_items_2(L_2);
		goto IL_0047;
	}

IL_001f:
	{
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_3 = __this->get_items_2();
		NullCheck(L_3);
		int32_t L_4 = V_0;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))) == ((uint32_t)L_4))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_5 = V_0;
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_6 = (ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0*)(ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0*)SZArrayNew(ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)2)));
		V_1 = L_6;
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_7 = __this->get_items_2();
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_7, (RuntimeArray *)(RuntimeArray *)L_8, L_9, /*hidden argument*/NULL);
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_10 = V_1;
		__this->set_items_2(L_10);
	}

IL_0047:
	{
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_11 = __this->get_items_2();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_005e;
		}
	}
	{
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_15 = __this->get_items_2();
		int32_t L_16 = V_0;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_17 = (Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE *)il2cpp_codegen_object_new(Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE_il2cpp_TypeInfo_var);
		Item__ctor_m665B675DD337B875403961D152E3727546C08451(L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE *)L_17);
	}

IL_005e:
	{
		ItemU5BU5D_t3E687A69104C40C2235B03682C40C74BC9AA70B0* L_18 = __this->get_items_2();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = ___type0;
		RuntimeObject * L_23 = ___data1;
		NullCheck(L_21);
		Item_Set_m681A661CE0DDF8B8BDE87368422863CBE7C4836C(L_21, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		__this->set_lastItem_4(L_24);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeValueCache__ctor_m98C2253BDD259D380432CE6A1C012D203824C9BB (AttributeValueCache_t73CBFCCA77AAFAB369BCE307E8F39FD775C7C90D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeValueCache__ctor_m98C2253BDD259D380432CE6A1C012D203824C9BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_stringValue_0(L_0);
		__this->set_lastItem_4((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: System.Xml.XmlWellFormedWriter/ElementScope
IL2CPP_EXTERN_C void ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshal_pinvoke(const ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474& unmarshaled, ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshaled_pinvoke& marshaled)
{
	marshaled.___prevNSTop_0 = unmarshaled.get_prevNSTop_0();
	marshaled.___prefix_1 = il2cpp_codegen_marshal_string(unmarshaled.get_prefix_1());
	marshaled.___localName_2 = il2cpp_codegen_marshal_string(unmarshaled.get_localName_2());
	marshaled.___namespaceUri_3 = il2cpp_codegen_marshal_string(unmarshaled.get_namespaceUri_3());
	marshaled.___xmlSpace_4 = unmarshaled.get_xmlSpace_4();
	marshaled.___xmlLang_5 = il2cpp_codegen_marshal_string(unmarshaled.get_xmlLang_5());
}
IL2CPP_EXTERN_C void ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshal_pinvoke_back(const ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshaled_pinvoke& marshaled, ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474& unmarshaled)
{
	int32_t unmarshaled_prevNSTop_temp_0 = 0;
	unmarshaled_prevNSTop_temp_0 = marshaled.___prevNSTop_0;
	unmarshaled.set_prevNSTop_0(unmarshaled_prevNSTop_temp_0);
	unmarshaled.set_prefix_1(il2cpp_codegen_marshal_string_result(marshaled.___prefix_1));
	unmarshaled.set_localName_2(il2cpp_codegen_marshal_string_result(marshaled.___localName_2));
	unmarshaled.set_namespaceUri_3(il2cpp_codegen_marshal_string_result(marshaled.___namespaceUri_3));
	int32_t unmarshaled_xmlSpace_temp_4 = 0;
	unmarshaled_xmlSpace_temp_4 = marshaled.___xmlSpace_4;
	unmarshaled.set_xmlSpace_4(unmarshaled_xmlSpace_temp_4);
	unmarshaled.set_xmlLang_5(il2cpp_codegen_marshal_string_result(marshaled.___xmlLang_5));
}
// Conversion method for clean up from marshalling of: System.Xml.XmlWellFormedWriter/ElementScope
IL2CPP_EXTERN_C void ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshal_pinvoke_cleanup(ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___prefix_1);
	marshaled.___prefix_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___localName_2);
	marshaled.___localName_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___namespaceUri_3);
	marshaled.___namespaceUri_3 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___xmlLang_5);
	marshaled.___xmlLang_5 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlWellFormedWriter/ElementScope
IL2CPP_EXTERN_C void ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshal_com(const ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474& unmarshaled, ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshaled_com& marshaled)
{
	marshaled.___prevNSTop_0 = unmarshaled.get_prevNSTop_0();
	marshaled.___prefix_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_prefix_1());
	marshaled.___localName_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_localName_2());
	marshaled.___namespaceUri_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_namespaceUri_3());
	marshaled.___xmlSpace_4 = unmarshaled.get_xmlSpace_4();
	marshaled.___xmlLang_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_xmlLang_5());
}
IL2CPP_EXTERN_C void ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshal_com_back(const ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshaled_com& marshaled, ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474& unmarshaled)
{
	int32_t unmarshaled_prevNSTop_temp_0 = 0;
	unmarshaled_prevNSTop_temp_0 = marshaled.___prevNSTop_0;
	unmarshaled.set_prevNSTop_0(unmarshaled_prevNSTop_temp_0);
	unmarshaled.set_prefix_1(il2cpp_codegen_marshal_bstring_result(marshaled.___prefix_1));
	unmarshaled.set_localName_2(il2cpp_codegen_marshal_bstring_result(marshaled.___localName_2));
	unmarshaled.set_namespaceUri_3(il2cpp_codegen_marshal_bstring_result(marshaled.___namespaceUri_3));
	int32_t unmarshaled_xmlSpace_temp_4 = 0;
	unmarshaled_xmlSpace_temp_4 = marshaled.___xmlSpace_4;
	unmarshaled.set_xmlSpace_4(unmarshaled_xmlSpace_temp_4);
	unmarshaled.set_xmlLang_5(il2cpp_codegen_marshal_bstring_result(marshaled.___xmlLang_5));
}
// Conversion method for clean up from marshalling of: System.Xml.XmlWellFormedWriter/ElementScope
IL2CPP_EXTERN_C void ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshal_com_cleanup(ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___prefix_1);
	marshaled.___prefix_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___localName_2);
	marshaled.___localName_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___namespaceUri_3);
	marshaled.___namespaceUri_3 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___xmlLang_5);
	marshaled.___xmlLang_5 = NULL;
}
// System.Void System.Xml.XmlWellFormedWriter_ElementScope::Set(System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementScope_Set_m3195A84F957C5A3B5C18AF4D9511E8D5638354DC (ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, int32_t ___prevNSTop3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___prevNSTop3;
		__this->set_prevNSTop_0(L_0);
		String_t* L_1 = ___prefix0;
		__this->set_prefix_1(L_1);
		String_t* L_2 = ___namespaceUri2;
		__this->set_namespaceUri_3(L_2);
		String_t* L_3 = ___localName1;
		__this->set_localName_2(L_3);
		__this->set_xmlSpace_4((-1));
		__this->set_xmlLang_5((String_t*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ElementScope_Set_m3195A84F957C5A3B5C18AF4D9511E8D5638354DC_AdjustorThunk (RuntimeObject * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, int32_t ___prevNSTop3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 * _thisAdjusted = reinterpret_cast<ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 *>(__this + _offset);
	ElementScope_Set_m3195A84F957C5A3B5C18AF4D9511E8D5638354DC(_thisAdjusted, ___prefix0, ___localName1, ___namespaceUri2, ___prevNSTop3, method);
}
// System.Void System.Xml.XmlWellFormedWriter_ElementScope::WriteEndElement(System.Xml.XmlRawWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementScope_WriteEndElement_mC36BE0462387942175D03BE353AFCBA993314499 (ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 * __this, XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * ___rawWriter0, const RuntimeMethod* method)
{
	{
		XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * L_0 = ___rawWriter0;
		String_t* L_1 = __this->get_prefix_1();
		String_t* L_2 = __this->get_localName_2();
		String_t* L_3 = __this->get_namespaceUri_3();
		NullCheck(L_0);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(38 /* System.Void System.Xml.XmlRawWriter::WriteEndElement(System.String,System.String,System.String) */, L_0, L_1, L_2, L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void ElementScope_WriteEndElement_mC36BE0462387942175D03BE353AFCBA993314499_AdjustorThunk (RuntimeObject * __this, XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * ___rawWriter0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 * _thisAdjusted = reinterpret_cast<ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 *>(__this + _offset);
	ElementScope_WriteEndElement_mC36BE0462387942175D03BE353AFCBA993314499(_thisAdjusted, ___rawWriter0, method);
}
// System.Void System.Xml.XmlWellFormedWriter_ElementScope::WriteFullEndElement(System.Xml.XmlRawWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementScope_WriteFullEndElement_m5DDEA1A5F0728660E314BAFDCD52462E65D34299 (ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 * __this, XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * ___rawWriter0, const RuntimeMethod* method)
{
	{
		XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * L_0 = ___rawWriter0;
		String_t* L_1 = __this->get_prefix_1();
		String_t* L_2 = __this->get_localName_2();
		String_t* L_3 = __this->get_namespaceUri_3();
		NullCheck(L_0);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(39 /* System.Void System.Xml.XmlRawWriter::WriteFullEndElement(System.String,System.String,System.String) */, L_0, L_1, L_2, L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void ElementScope_WriteFullEndElement_m5DDEA1A5F0728660E314BAFDCD52462E65D34299_AdjustorThunk (RuntimeObject * __this, XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * ___rawWriter0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 * _thisAdjusted = reinterpret_cast<ElementScope_tCAF8E72C26AA435F4628AC1523BB64E2E6CE3474 *>(__this + _offset);
	ElementScope_WriteFullEndElement_m5DDEA1A5F0728660E314BAFDCD52462E65D34299(_thisAdjusted, ___rawWriter0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Xml.XmlWellFormedWriter/Namespace
IL2CPP_EXTERN_C void Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshal_pinvoke(const Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00& unmarshaled, Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshaled_pinvoke& marshaled)
{
	marshaled.___prefix_0 = il2cpp_codegen_marshal_string(unmarshaled.get_prefix_0());
	marshaled.___namespaceUri_1 = il2cpp_codegen_marshal_string(unmarshaled.get_namespaceUri_1());
	marshaled.___kind_2 = unmarshaled.get_kind_2();
	marshaled.___prevNsIndex_3 = unmarshaled.get_prevNsIndex_3();
}
IL2CPP_EXTERN_C void Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshal_pinvoke_back(const Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshaled_pinvoke& marshaled, Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00& unmarshaled)
{
	unmarshaled.set_prefix_0(il2cpp_codegen_marshal_string_result(marshaled.___prefix_0));
	unmarshaled.set_namespaceUri_1(il2cpp_codegen_marshal_string_result(marshaled.___namespaceUri_1));
	int32_t unmarshaled_kind_temp_2 = 0;
	unmarshaled_kind_temp_2 = marshaled.___kind_2;
	unmarshaled.set_kind_2(unmarshaled_kind_temp_2);
	int32_t unmarshaled_prevNsIndex_temp_3 = 0;
	unmarshaled_prevNsIndex_temp_3 = marshaled.___prevNsIndex_3;
	unmarshaled.set_prevNsIndex_3(unmarshaled_prevNsIndex_temp_3);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlWellFormedWriter/Namespace
IL2CPP_EXTERN_C void Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshal_pinvoke_cleanup(Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___prefix_0);
	marshaled.___prefix_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___namespaceUri_1);
	marshaled.___namespaceUri_1 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlWellFormedWriter/Namespace
IL2CPP_EXTERN_C void Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshal_com(const Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00& unmarshaled, Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshaled_com& marshaled)
{
	marshaled.___prefix_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_prefix_0());
	marshaled.___namespaceUri_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_namespaceUri_1());
	marshaled.___kind_2 = unmarshaled.get_kind_2();
	marshaled.___prevNsIndex_3 = unmarshaled.get_prevNsIndex_3();
}
IL2CPP_EXTERN_C void Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshal_com_back(const Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshaled_com& marshaled, Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00& unmarshaled)
{
	unmarshaled.set_prefix_0(il2cpp_codegen_marshal_bstring_result(marshaled.___prefix_0));
	unmarshaled.set_namespaceUri_1(il2cpp_codegen_marshal_bstring_result(marshaled.___namespaceUri_1));
	int32_t unmarshaled_kind_temp_2 = 0;
	unmarshaled_kind_temp_2 = marshaled.___kind_2;
	unmarshaled.set_kind_2(unmarshaled_kind_temp_2);
	int32_t unmarshaled_prevNsIndex_temp_3 = 0;
	unmarshaled_prevNsIndex_temp_3 = marshaled.___prevNsIndex_3;
	unmarshaled.set_prevNsIndex_3(unmarshaled_prevNsIndex_temp_3);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlWellFormedWriter/Namespace
IL2CPP_EXTERN_C void Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshal_com_cleanup(Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___prefix_0);
	marshaled.___prefix_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___namespaceUri_1);
	marshaled.___namespaceUri_1 = NULL;
}
// System.Void System.Xml.XmlWellFormedWriter_Namespace::Set(System.String,System.String,System.Xml.XmlWellFormedWriter_NamespaceKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Namespace_Set_mBC3EC65E5DAC5566D507031854355191E8A432CA (Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00 * __this, String_t* ___prefix0, String_t* ___namespaceUri1, int32_t ___kind2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		__this->set_prefix_0(L_0);
		String_t* L_1 = ___namespaceUri1;
		__this->set_namespaceUri_1(L_1);
		int32_t L_2 = ___kind2;
		__this->set_kind_2(L_2);
		__this->set_prevNsIndex_3((-1));
		return;
	}
}
IL2CPP_EXTERN_C  void Namespace_Set_mBC3EC65E5DAC5566D507031854355191E8A432CA_AdjustorThunk (RuntimeObject * __this, String_t* ___prefix0, String_t* ___namespaceUri1, int32_t ___kind2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00 * _thisAdjusted = reinterpret_cast<Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00 *>(__this + _offset);
	Namespace_Set_mBC3EC65E5DAC5566D507031854355191E8A432CA(_thisAdjusted, ___prefix0, ___namespaceUri1, ___kind2, method);
}
// System.Void System.Xml.XmlWellFormedWriter_Namespace::WriteDecl(System.Xml.XmlWriter,System.Xml.XmlRawWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Namespace_WriteDecl_mDC2FAE6430835463C87F91004DD93F8695CB714A (Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00 * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * ___rawWriter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Namespace_WriteDecl_mDC2FAE6430835463C87F91004DD93F8695CB714A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * L_0 = ___rawWriter1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * L_1 = ___rawWriter1;
		String_t* L_2 = __this->get_prefix_0();
		String_t* L_3 = __this->get_namespaceUri_1();
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(40 /* System.Void System.Xml.XmlRawWriter::WriteNamespaceDeclaration(System.String,System.String) */, L_1, L_2, L_3);
		return;
	}

IL_0016:
	{
		String_t* L_4 = __this->get_prefix_0();
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_6 = ___writer0;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_6);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, L_6, L_7, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		goto IL_0050;
	}

IL_003a:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_8 = ___writer0;
		String_t* L_9 = __this->get_prefix_0();
		NullCheck(L_8);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, L_8, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, L_9, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
	}

IL_0050:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_10 = ___writer0;
		String_t* L_11 = __this->get_namespaceUri_1();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_10, L_11);
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_12 = ___writer0;
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, L_12);
		return;
	}
}
IL2CPP_EXTERN_C  void Namespace_WriteDecl_mDC2FAE6430835463C87F91004DD93F8695CB714A_AdjustorThunk (RuntimeObject * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * ___rawWriter1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00 * _thisAdjusted = reinterpret_cast<Namespace_tCCD6FFC46FAE8BA6AF0D84A0DA4E18A41ABDDB00 *>(__this + _offset);
	Namespace_WriteDecl_mDC2FAE6430835463C87F91004DD93F8695CB714A(_thisAdjusted, ___writer0, ___rawWriter1, method);
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
// System.Void System.Xml.XmlWellFormedWriter_NamespaceResolverProxy::.ctor(System.Xml.XmlWellFormedWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceResolverProxy__ctor_m414A85B32A43A013780EBB149B50CED04A0217F0 (NamespaceResolverProxy_tDDE95968AA0C8C13FF8FF3A7A4D25A9B5A4DBD7D * __this, XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667 * ___wfWriter0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667 * L_0 = ___wfWriter0;
		__this->set_wfWriter_0(L_0);
		return;
	}
}
// System.String System.Xml.XmlWellFormedWriter_NamespaceResolverProxy::System.Xml.IXmlNamespaceResolver.LookupNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NamespaceResolverProxy_System_Xml_IXmlNamespaceResolver_LookupNamespace_m3472EF19FCE21EF2569748E1191BDD86A144E599 (NamespaceResolverProxy_tDDE95968AA0C8C13FF8FF3A7A4D25A9B5A4DBD7D * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	{
		XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667 * L_0 = __this->get_wfWriter_0();
		String_t* L_1 = ___prefix0;
		NullCheck(L_0);
		String_t* L_2 = XmlWellFormedWriter_LookupNamespace_m97A8F15A380CBCD257CEFF961513A2D433AE34EE(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XmlWellFormedWriter_NamespaceResolverProxy::System.Xml.IXmlNamespaceResolver.LookupPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NamespaceResolverProxy_System_Xml_IXmlNamespaceResolver_LookupPrefix_m8280093F519A750021B5D62B20A045EEF7021CAC (NamespaceResolverProxy_tDDE95968AA0C8C13FF8FF3A7A4D25A9B5A4DBD7D * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	{
		XmlWellFormedWriter_t3BD7026B798C071CB5A2483F878716C1BDAF1667 * L_0 = __this->get_wfWriter_0();
		String_t* L_1 = ___namespaceName0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(30 /* System.String System.Xml.XmlWriter::LookupPrefix(System.String) */, L_0, L_1);
		return L_2;
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
// Conversion methods for marshalling of: System.Xml.Schema.XsdDateTime/Parser
IL2CPP_EXTERN_C void Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshal_pinvoke(const Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855& unmarshaled, Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshaled_pinvoke& marshaled)
{
	marshaled.___typeCode_0 = unmarshaled.get_typeCode_0();
	marshaled.___year_1 = unmarshaled.get_year_1();
	marshaled.___month_2 = unmarshaled.get_month_2();
	marshaled.___day_3 = unmarshaled.get_day_3();
	marshaled.___hour_4 = unmarshaled.get_hour_4();
	marshaled.___minute_5 = unmarshaled.get_minute_5();
	marshaled.___second_6 = unmarshaled.get_second_6();
	marshaled.___fraction_7 = unmarshaled.get_fraction_7();
	marshaled.___kind_8 = unmarshaled.get_kind_8();
	marshaled.___zoneHour_9 = unmarshaled.get_zoneHour_9();
	marshaled.___zoneMinute_10 = unmarshaled.get_zoneMinute_10();
	marshaled.___text_11 = il2cpp_codegen_marshal_string(unmarshaled.get_text_11());
	marshaled.___length_12 = unmarshaled.get_length_12();
}
IL2CPP_EXTERN_C void Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshal_pinvoke_back(const Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshaled_pinvoke& marshaled, Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855& unmarshaled)
{
	int32_t unmarshaled_typeCode_temp_0 = 0;
	unmarshaled_typeCode_temp_0 = marshaled.___typeCode_0;
	unmarshaled.set_typeCode_0(unmarshaled_typeCode_temp_0);
	int32_t unmarshaled_year_temp_1 = 0;
	unmarshaled_year_temp_1 = marshaled.___year_1;
	unmarshaled.set_year_1(unmarshaled_year_temp_1);
	int32_t unmarshaled_month_temp_2 = 0;
	unmarshaled_month_temp_2 = marshaled.___month_2;
	unmarshaled.set_month_2(unmarshaled_month_temp_2);
	int32_t unmarshaled_day_temp_3 = 0;
	unmarshaled_day_temp_3 = marshaled.___day_3;
	unmarshaled.set_day_3(unmarshaled_day_temp_3);
	int32_t unmarshaled_hour_temp_4 = 0;
	unmarshaled_hour_temp_4 = marshaled.___hour_4;
	unmarshaled.set_hour_4(unmarshaled_hour_temp_4);
	int32_t unmarshaled_minute_temp_5 = 0;
	unmarshaled_minute_temp_5 = marshaled.___minute_5;
	unmarshaled.set_minute_5(unmarshaled_minute_temp_5);
	int32_t unmarshaled_second_temp_6 = 0;
	unmarshaled_second_temp_6 = marshaled.___second_6;
	unmarshaled.set_second_6(unmarshaled_second_temp_6);
	int32_t unmarshaled_fraction_temp_7 = 0;
	unmarshaled_fraction_temp_7 = marshaled.___fraction_7;
	unmarshaled.set_fraction_7(unmarshaled_fraction_temp_7);
	int32_t unmarshaled_kind_temp_8 = 0;
	unmarshaled_kind_temp_8 = marshaled.___kind_8;
	unmarshaled.set_kind_8(unmarshaled_kind_temp_8);
	int32_t unmarshaled_zoneHour_temp_9 = 0;
	unmarshaled_zoneHour_temp_9 = marshaled.___zoneHour_9;
	unmarshaled.set_zoneHour_9(unmarshaled_zoneHour_temp_9);
	int32_t unmarshaled_zoneMinute_temp_10 = 0;
	unmarshaled_zoneMinute_temp_10 = marshaled.___zoneMinute_10;
	unmarshaled.set_zoneMinute_10(unmarshaled_zoneMinute_temp_10);
	unmarshaled.set_text_11(il2cpp_codegen_marshal_string_result(marshaled.___text_11));
	int32_t unmarshaled_length_temp_12 = 0;
	unmarshaled_length_temp_12 = marshaled.___length_12;
	unmarshaled.set_length_12(unmarshaled_length_temp_12);
}
// Conversion method for clean up from marshalling of: System.Xml.Schema.XsdDateTime/Parser
IL2CPP_EXTERN_C void Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshal_pinvoke_cleanup(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___text_11);
	marshaled.___text_11 = NULL;
}
// Conversion methods for marshalling of: System.Xml.Schema.XsdDateTime/Parser
IL2CPP_EXTERN_C void Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshal_com(const Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855& unmarshaled, Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshaled_com& marshaled)
{
	marshaled.___typeCode_0 = unmarshaled.get_typeCode_0();
	marshaled.___year_1 = unmarshaled.get_year_1();
	marshaled.___month_2 = unmarshaled.get_month_2();
	marshaled.___day_3 = unmarshaled.get_day_3();
	marshaled.___hour_4 = unmarshaled.get_hour_4();
	marshaled.___minute_5 = unmarshaled.get_minute_5();
	marshaled.___second_6 = unmarshaled.get_second_6();
	marshaled.___fraction_7 = unmarshaled.get_fraction_7();
	marshaled.___kind_8 = unmarshaled.get_kind_8();
	marshaled.___zoneHour_9 = unmarshaled.get_zoneHour_9();
	marshaled.___zoneMinute_10 = unmarshaled.get_zoneMinute_10();
	marshaled.___text_11 = il2cpp_codegen_marshal_bstring(unmarshaled.get_text_11());
	marshaled.___length_12 = unmarshaled.get_length_12();
}
IL2CPP_EXTERN_C void Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshal_com_back(const Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshaled_com& marshaled, Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855& unmarshaled)
{
	int32_t unmarshaled_typeCode_temp_0 = 0;
	unmarshaled_typeCode_temp_0 = marshaled.___typeCode_0;
	unmarshaled.set_typeCode_0(unmarshaled_typeCode_temp_0);
	int32_t unmarshaled_year_temp_1 = 0;
	unmarshaled_year_temp_1 = marshaled.___year_1;
	unmarshaled.set_year_1(unmarshaled_year_temp_1);
	int32_t unmarshaled_month_temp_2 = 0;
	unmarshaled_month_temp_2 = marshaled.___month_2;
	unmarshaled.set_month_2(unmarshaled_month_temp_2);
	int32_t unmarshaled_day_temp_3 = 0;
	unmarshaled_day_temp_3 = marshaled.___day_3;
	unmarshaled.set_day_3(unmarshaled_day_temp_3);
	int32_t unmarshaled_hour_temp_4 = 0;
	unmarshaled_hour_temp_4 = marshaled.___hour_4;
	unmarshaled.set_hour_4(unmarshaled_hour_temp_4);
	int32_t unmarshaled_minute_temp_5 = 0;
	unmarshaled_minute_temp_5 = marshaled.___minute_5;
	unmarshaled.set_minute_5(unmarshaled_minute_temp_5);
	int32_t unmarshaled_second_temp_6 = 0;
	unmarshaled_second_temp_6 = marshaled.___second_6;
	unmarshaled.set_second_6(unmarshaled_second_temp_6);
	int32_t unmarshaled_fraction_temp_7 = 0;
	unmarshaled_fraction_temp_7 = marshaled.___fraction_7;
	unmarshaled.set_fraction_7(unmarshaled_fraction_temp_7);
	int32_t unmarshaled_kind_temp_8 = 0;
	unmarshaled_kind_temp_8 = marshaled.___kind_8;
	unmarshaled.set_kind_8(unmarshaled_kind_temp_8);
	int32_t unmarshaled_zoneHour_temp_9 = 0;
	unmarshaled_zoneHour_temp_9 = marshaled.___zoneHour_9;
	unmarshaled.set_zoneHour_9(unmarshaled_zoneHour_temp_9);
	int32_t unmarshaled_zoneMinute_temp_10 = 0;
	unmarshaled_zoneMinute_temp_10 = marshaled.___zoneMinute_10;
	unmarshaled.set_zoneMinute_10(unmarshaled_zoneMinute_temp_10);
	unmarshaled.set_text_11(il2cpp_codegen_marshal_bstring_result(marshaled.___text_11));
	int32_t unmarshaled_length_temp_12 = 0;
	unmarshaled_length_temp_12 = marshaled.___length_12;
	unmarshaled.set_length_12(unmarshaled_length_temp_12);
}
// Conversion method for clean up from marshalling of: System.Xml.Schema.XsdDateTime/Parser
IL2CPP_EXTERN_C void Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshal_com_cleanup(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___text_11);
	marshaled.___text_11 = NULL;
}
// System.Boolean System.Xml.Schema.XsdDateTime_Parser::Parse(System.String,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Parse_m4967C6E2F360C1BCAAEDC78816BBADE6F5A6C297 (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, String_t* ___text0, int32_t ___kinds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Parse_m4967C6E2F360C1BCAAEDC78816BBADE6F5A6C297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___text0;
		__this->set_text_11(L_0);
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		__this->set_length_12(L_2);
		V_0 = 0;
		goto IL_001b;
	}

IL_0017:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_length_12();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_6 = ___text0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Il2CppChar L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_9 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0017;
		}
	}

IL_0032:
	{
		int32_t L_10 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_11 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_10, ((int32_t)773), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_12 = V_0;
		bool L_13 = Parser_ParseDate_m23E3A2F31DFAA15C290E80E7D32F8981686A515F((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_14 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_15 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_14, 1, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_17 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_dd_6();
		bool L_18 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)), ((int32_t)84), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_20 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_ddT_7();
		bool L_21 = Parser_ParseTimeAndZoneAndWhitespace_mD3C814A74159B2A1D9833D62B387855AA750A7D7((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0080;
		}
	}
	{
		__this->set_typeCode_0(0);
		return (bool)1;
	}

IL_0080:
	{
		int32_t L_22 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_23 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_22, 4, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_25 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_dd_6();
		bool L_26 = Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25)), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00a1;
		}
	}
	{
		__this->set_typeCode_0(2);
		return (bool)1;
	}

IL_00a1:
	{
		int32_t L_27 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_28 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_27, ((int32_t)512), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_30 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_dd_6();
		bool L_31 = Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)), /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_32 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_33 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_dd_6();
		bool L_34 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)), ((int32_t)84), /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_35 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_36 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_ddT_7();
		bool L_37 = Parser_ParseTimeAndZoneAndWhitespace_mD3C814A74159B2A1D9833D62B387855AA750A7D7((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00e6;
		}
	}

IL_00dd:
	{
		__this->set_typeCode_0(8);
		return (bool)1;
	}

IL_00e6:
	{
		int32_t L_38 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_39 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_38, ((int32_t)256), /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_41 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_dd_6();
		bool L_42 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)L_41)), ((int32_t)84), /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_43 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_44 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_ddT_7();
		bool L_45 = Parser_ParseTimeAndWhitespace_mBCF164792A47E16B97330955841DCE66BC3EE76F((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)), /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		__this->set_typeCode_0(8);
		return (bool)1;
	}

IL_011c:
	{
		__this->set_typeCode_0(8);
		return (bool)1;
	}

IL_0125:
	{
		int32_t L_46 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_47 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_46, 2, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_48 = V_0;
		bool L_49 = Parser_ParseTimeAndZoneAndWhitespace_mD3C814A74159B2A1D9833D62B387855AA750A7D7((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0159;
		}
	}
	{
		__this->set_year_1(((int32_t)1904));
		__this->set_month_2(1);
		__this->set_day_3(1);
		__this->set_typeCode_0(1);
		return (bool)1;
	}

IL_0159:
	{
		int32_t L_50 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_51 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_50, ((int32_t)1024), /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0191;
		}
	}
	{
		int32_t L_52 = V_0;
		bool L_53 = Parser_ParseTimeAndWhitespace_mBCF164792A47E16B97330955841DCE66BC3EE76F((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0191;
		}
	}
	{
		__this->set_year_1(((int32_t)1904));
		__this->set_month_2(1);
		__this->set_day_3(1);
		__this->set_typeCode_0(1);
		return (bool)1;
	}

IL_0191:
	{
		int32_t L_54 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_55 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_54, ((int32_t)24), /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_56 = V_0;
		int32_t* L_57 = __this->get_address_of_year_1();
		bool L_58 = Parser_Parse4Dig_m65BF5864AF2DAF8C2C5C4986EF5033E430211E85((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, L_56, (int32_t*)L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_59 = __this->get_year_1();
		if ((((int32_t)1) > ((int32_t)L_59)))
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_60 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_61 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_60, 8, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_62 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_63 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_2();
		bool L_64 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)L_63)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_65 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_66 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy__3();
		int32_t* L_67 = __this->get_address_of_month_2();
		bool L_68 = Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)), (int32_t*)L_67, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_69 = __this->get_month_2();
		if ((((int32_t)1) > ((int32_t)L_69)))
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_70 = __this->get_month_2();
		if ((((int32_t)L_70) > ((int32_t)((int32_t)12))))
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_71 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_72 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_4();
		bool L_73 = Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)L_72)), /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_021d;
		}
	}
	{
		__this->set_day_3(1);
		__this->set_typeCode_0(3);
		return (bool)1;
	}

IL_021d:
	{
		int32_t L_74 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_75 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_74, ((int32_t)16), /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_76 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_77 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_2();
		bool L_78 = Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)L_77)), /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_024d;
		}
	}
	{
		__this->set_month_2(1);
		__this->set_day_3(1);
		__this->set_typeCode_0(4);
		return (bool)1;
	}

IL_024d:
	{
		int32_t L_79 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_80 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_79, ((int32_t)160), /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_81 = V_0;
		bool L_82 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, L_81, ((int32_t)45), /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_83 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_84 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz__13();
		bool L_85 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)L_84)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_86 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_87 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz___17();
		int32_t* L_88 = __this->get_address_of_month_2();
		bool L_89 = Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)L_87)), (int32_t*)L_88, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_90 = __this->get_month_2();
		if ((((int32_t)1) > ((int32_t)L_90)))
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_91 = __this->get_month_2();
		if ((((int32_t)L_91) > ((int32_t)((int32_t)12))))
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_92 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_93 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_92, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_94 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_95 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz__mm_18();
		bool L_96 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)L_95)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_97 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_98 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz__mm__19();
		int32_t* L_99 = __this->get_address_of_day_3();
		bool L_100 = Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)L_98)), (int32_t*)L_99, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_101 = __this->get_day_3();
		if ((((int32_t)1) > ((int32_t)L_101)))
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_102 = __this->get_day_3();
		int32_t L_103 = __this->get_month_2();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		int32_t L_104 = DateTime_DaysInMonth_m64931EEDA4428AD99566FCF0434BA298153E4531(((int32_t)1904), L_103, /*hidden argument*/NULL);
		if ((((int32_t)L_102) > ((int32_t)L_104)))
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_105 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_106 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz__mm_dd_21();
		bool L_107 = Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)L_106)), /*hidden argument*/NULL);
		if (!L_107)
		{
			goto IL_0324;
		}
	}
	{
		__this->set_year_1(((int32_t)1904));
		__this->set_typeCode_0(5);
		return (bool)1;
	}

IL_0324:
	{
		int32_t L_108 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_109 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_108, ((int32_t)128), /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_110 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_111 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz__mm_18();
		bool L_112 = Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)L_111)), /*hidden argument*/NULL);
		if (L_112)
		{
			goto IL_0371;
		}
	}
	{
		int32_t L_113 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_114 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz__mm_18();
		bool L_115 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)L_114)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_115)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_116 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_117 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz__mm__19();
		bool L_118 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)L_117)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_118)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_119 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_120 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz__mm___20();
		bool L_121 = Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)L_120)), /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_038c;
		}
	}

IL_0371:
	{
		__this->set_year_1(((int32_t)1904));
		__this->set_day_3(1);
		__this->set_typeCode_0(7);
		return (bool)1;
	}

IL_038c:
	{
		int32_t L_122 = ___kinds1;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		bool L_123 = Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982(L_122, ((int32_t)64), /*hidden argument*/NULL);
		if (!L_123)
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_124 = V_0;
		bool L_125 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, L_124, ((int32_t)45), /*hidden argument*/NULL);
		if (!L_125)
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_126 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_127 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz__13();
		bool L_128 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)L_127)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_128)
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_129 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_130 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz___17();
		bool L_131 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)L_130)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_131)
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_132 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_133 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz____22();
		int32_t* L_134 = __this->get_address_of_day_3();
		bool L_135 = Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)L_133)), (int32_t*)L_134, /*hidden argument*/NULL);
		if (!L_135)
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_136 = __this->get_day_3();
		if ((((int32_t)1) > ((int32_t)L_136)))
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_137 = __this->get_day_3();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		int32_t L_138 = DateTime_DaysInMonth_m64931EEDA4428AD99566FCF0434BA298153E4531(((int32_t)1904), 1, /*hidden argument*/NULL);
		if ((((int32_t)L_137) > ((int32_t)L_138)))
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_139 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_140 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz___dd_23();
		bool L_141 = Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)L_140)), /*hidden argument*/NULL);
		if (!L_141)
		{
			goto IL_0421;
		}
	}
	{
		__this->set_year_1(((int32_t)1904));
		__this->set_month_2(1);
		__this->set_typeCode_0(6);
		return (bool)1;
	}

IL_0421:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_Parse_m4967C6E2F360C1BCAAEDC78816BBADE6F5A6C297_AdjustorThunk (RuntimeObject * __this, String_t* ___text0, int32_t ___kinds1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * _thisAdjusted = reinterpret_cast<Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *>(__this + _offset);
	return Parser_Parse_m4967C6E2F360C1BCAAEDC78816BBADE6F5A6C297(_thisAdjusted, ___text0, ___kinds1, method);
}
// System.Boolean System.Xml.Schema.XsdDateTime_Parser::ParseDate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseDate_m23E3A2F31DFAA15C290E80E7D32F8981686A515F (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseDate_m23E3A2F31DFAA15C290E80E7D32F8981686A515F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___start0;
		int32_t* L_1 = __this->get_address_of_year_1();
		bool L_2 = Parser_Parse4Dig_m65BF5864AF2DAF8C2C5C4986EF5033E430211E85((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_3 = __this->get_year_1();
		if ((((int32_t)1) > ((int32_t)L_3)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_4 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_5 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_2();
		bool L_6 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_7 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_8 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy__3();
		int32_t* L_9 = __this->get_address_of_month_2();
		bool L_10 = Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)), (int32_t*)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_11 = __this->get_month_2();
		if ((((int32_t)1) > ((int32_t)L_11)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_12 = __this->get_month_2();
		if ((((int32_t)L_12) > ((int32_t)((int32_t)12))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_13 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_14 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_4();
		bool L_15 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_16 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_17 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lzyyyy_MM__5();
		int32_t* L_18 = __this->get_address_of_day_3();
		bool L_19 = Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)), (int32_t*)L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_20 = __this->get_day_3();
		if ((((int32_t)1) > ((int32_t)L_20)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_21 = __this->get_day_3();
		int32_t L_22 = __this->get_year_1();
		int32_t L_23 = __this->get_month_2();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		int32_t L_24 = DateTime_DaysInMonth_m64931EEDA4428AD99566FCF0434BA298153E4531(L_22, L_23, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_21) > ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00a3:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_ParseDate_m23E3A2F31DFAA15C290E80E7D32F8981686A515F_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * _thisAdjusted = reinterpret_cast<Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *>(__this + _offset);
	return Parser_ParseDate_m23E3A2F31DFAA15C290E80E7D32F8981686A515F(_thisAdjusted, ___start0, method);
}
// System.Boolean System.Xml.Schema.XsdDateTime_Parser::ParseTimeAndZoneAndWhitespace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseTimeAndZoneAndWhitespace_mD3C814A74159B2A1D9833D62B387855AA750A7D7 (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	{
		bool L_0 = Parser_ParseTime_m8B8F8087006D4BDFE3FF8E239ACE293C68A41339((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, (int32_t*)(&___start0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___start0;
		bool L_2 = Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_ParseTimeAndZoneAndWhitespace_mD3C814A74159B2A1D9833D62B387855AA750A7D7_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * _thisAdjusted = reinterpret_cast<Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *>(__this + _offset);
	return Parser_ParseTimeAndZoneAndWhitespace_mD3C814A74159B2A1D9833D62B387855AA750A7D7(_thisAdjusted, ___start0, method);
}
// System.Boolean System.Xml.Schema.XsdDateTime_Parser::ParseTimeAndWhitespace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseTimeAndWhitespace_mBCF164792A47E16B97330955841DCE66BC3EE76F (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	{
		bool L_0 = Parser_ParseTime_m8B8F8087006D4BDFE3FF8E239ACE293C68A41339((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, (int32_t*)(&___start0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		int32_t L_1 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_0011:
	{
		int32_t L_2 = ___start0;
		int32_t L_3 = __this->get_length_12();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_4 = ___start0;
		int32_t L_5 = __this->get_length_12();
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_ParseTimeAndWhitespace_mBCF164792A47E16B97330955841DCE66BC3EE76F_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * _thisAdjusted = reinterpret_cast<Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *>(__this + _offset);
	return Parser_ParseTimeAndWhitespace_mBCF164792A47E16B97330955841DCE66BC3EE76F(_thisAdjusted, ___start0, method);
}
// System.Boolean System.Xml.Schema.XsdDateTime_Parser::ParseTime(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseTime_m8B8F8087006D4BDFE3FF8E239ACE293C68A41339 (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t* ___start0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseTime_m8B8F8087006D4BDFE3FF8E239ACE293C68A41339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t* L_0 = ___start0;
		int32_t L_1 = *((int32_t*)L_0);
		int32_t* L_2 = __this->get_address_of_hour_4();
		bool L_3 = Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_4 = __this->get_hour_4();
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)24))))
		{
			goto IL_0159;
		}
	}
	{
		int32_t* L_5 = ___start0;
		int32_t L_6 = *((int32_t*)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_7 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_LzHH_8();
		bool L_8 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), ((int32_t)58), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0159;
		}
	}
	{
		int32_t* L_9 = ___start0;
		int32_t L_10 = *((int32_t*)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_11 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_LzHH__9();
		int32_t* L_12 = __this->get_address_of_minute_5();
		bool L_13 = Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), (int32_t*)L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_14 = __this->get_minute_5();
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)60))))
		{
			goto IL_0159;
		}
	}
	{
		int32_t* L_15 = ___start0;
		int32_t L_16 = *((int32_t*)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_17 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_LzHH_mm_10();
		bool L_18 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)), ((int32_t)58), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0159;
		}
	}
	{
		int32_t* L_19 = ___start0;
		int32_t L_20 = *((int32_t*)L_19);
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_21 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_LzHH_mm__11();
		int32_t* L_22 = __this->get_address_of_second_6();
		bool L_23 = Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), (int32_t*)L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_24 = __this->get_second_6();
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)60))))
		{
			goto IL_0159;
		}
	}
	{
		int32_t* L_25 = ___start0;
		int32_t* L_26 = ___start0;
		int32_t L_27 = *((int32_t*)L_26);
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_28 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_LzHH_mm_ss_12();
		*((int32_t*)L_25) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28));
		int32_t* L_29 = ___start0;
		int32_t L_30 = *((int32_t*)L_29);
		bool L_31 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, L_30, ((int32_t)46), /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0157;
		}
	}
	{
		__this->set_fraction_7(0);
		V_0 = 0;
		V_1 = 0;
		goto IL_010a;
	}

IL_00bc:
	{
		String_t* L_32 = __this->get_text_11();
		int32_t* L_33 = ___start0;
		int32_t L_34 = *((int32_t*)L_33);
		NullCheck(L_32);
		Il2CppChar L_35 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_32, L_34, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)((int32_t)48)));
		int32_t L_36 = V_2;
		if ((!(((uint32_t)((int32_t)9)) >= ((uint32_t)L_36))))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) >= ((int32_t)7)))
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_38 = __this->get_fraction_7();
		int32_t L_39 = V_2;
		__this->set_fraction_7(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)((int32_t)10))), (int32_t)L_39)));
		goto IL_0106;
	}

IL_00e9:
	{
		int32_t L_40 = V_0;
		if ((!(((uint32_t)L_40) == ((uint32_t)7))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_41 = V_2;
		if ((((int32_t)5) >= ((int32_t)L_41)))
		{
			goto IL_00f5;
		}
	}
	{
		V_1 = 1;
		goto IL_0106;
	}

IL_00f5:
	{
		int32_t L_42 = V_2;
		if ((!(((uint32_t)L_42) == ((uint32_t)5))))
		{
			goto IL_0106;
		}
	}
	{
		V_1 = (-1);
		goto IL_0106;
	}

IL_00fd:
	{
		int32_t L_43 = V_1;
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_0106;
		}
	}
	{
		int32_t L_44 = V_2;
		if (!L_44)
		{
			goto IL_0106;
		}
	}
	{
		V_1 = 1;
	}

IL_0106:
	{
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_010a:
	{
		int32_t* L_46 = ___start0;
		int32_t* L_47 = ___start0;
		int32_t L_48 = *((int32_t*)L_47);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		int32_t L_49 = V_3;
		*((int32_t*)L_46) = (int32_t)L_49;
		int32_t L_50 = V_3;
		int32_t L_51 = __this->get_length_12();
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00bc;
		}
	}

IL_011b:
	{
		int32_t L_52 = V_0;
		if ((((int32_t)L_52) >= ((int32_t)7)))
		{
			goto IL_013c;
		}
	}
	{
		int32_t L_53 = V_0;
		if (L_53)
		{
			goto IL_0124;
		}
	}
	{
		return (bool)0;
	}

IL_0124:
	{
		int32_t L_54 = __this->get_fraction_7();
		IL2CPP_RUNTIME_CLASS_INIT(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = ((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_StaticFields*)il2cpp_codegen_static_fields_for(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var))->get_Power10_13();
		int32_t L_56 = V_0;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_subtract((int32_t)7, (int32_t)L_56));
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		__this->set_fraction_7(((int32_t)il2cpp_codegen_multiply((int32_t)L_54, (int32_t)L_58)));
		goto IL_0157;
	}

IL_013c:
	{
		int32_t L_59 = V_1;
		if ((((int32_t)L_59) >= ((int32_t)0)))
		{
			goto IL_0149;
		}
	}
	{
		int32_t L_60 = __this->get_fraction_7();
		V_1 = ((int32_t)((int32_t)L_60&(int32_t)1));
	}

IL_0149:
	{
		int32_t L_61 = __this->get_fraction_7();
		int32_t L_62 = V_1;
		__this->set_fraction_7(((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)L_62)));
	}

IL_0157:
	{
		return (bool)1;
	}

IL_0159:
	{
		__this->set_hour_4(0);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_ParseTime_m8B8F8087006D4BDFE3FF8E239ACE293C68A41339_AdjustorThunk (RuntimeObject * __this, int32_t* ___start0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * _thisAdjusted = reinterpret_cast<Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *>(__this + _offset);
	return Parser_ParseTime_m8B8F8087006D4BDFE3FF8E239ACE293C68A41339(_thisAdjusted, ___start0, method);
}
// System.Boolean System.Xml.Schema.XsdDateTime_Parser::ParseZoneAndWhitespace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get_length_12();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_00c4;
		}
	}
	{
		String_t* L_2 = __this->get_text_11();
		int32_t L_3 = ___start0;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)90))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)122)))))
		{
			goto IL_0034;
		}
	}

IL_0023:
	{
		__this->set_kind_8(1);
		int32_t L_7 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		goto IL_00c4;
	}

IL_0034:
	{
		int32_t L_8 = ___start0;
		int32_t L_9 = __this->get_length_12();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)5))) >= ((int32_t)L_9)))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_10 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_11 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz__13();
		int32_t* L_12 = __this->get_address_of_zoneHour_9();
		bool L_13 = Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), (int32_t*)L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_14 = __this->get_zoneHour_9();
		if ((((int32_t)L_14) > ((int32_t)((int32_t)99))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_15 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_16 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz_zz_14();
		bool L_17 = Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), ((int32_t)58), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_18 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_19 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz_zz__15();
		int32_t* L_20 = __this->get_address_of_zoneMinute_10();
		bool L_21 = Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19)), (int32_t*)L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_22 = __this->get_zoneMinute_10();
		if ((((int32_t)L_22) > ((int32_t)((int32_t)99))))
		{
			goto IL_00c4;
		}
	}
	{
		Il2CppChar L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00a8;
		}
	}
	{
		__this->set_kind_8(2);
		int32_t L_24 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_25 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz_zz_zz_16();
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25));
		goto IL_00c4;
	}

IL_00a8:
	{
		Il2CppChar L_26 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_00c4;
		}
	}
	{
		__this->set_kind_8(3);
		int32_t L_27 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var);
		int32_t L_28 = ((XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t2416CEAC52CB3C0387293D0C4C5F7471313C076D_il2cpp_TypeInfo_var))->get_Lz_zz_zz_16();
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28));
		goto IL_00c4;
	}

IL_00bf:
	{
		int32_t L_29 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00c4:
	{
		int32_t L_30 = ___start0;
		int32_t L_31 = __this->get_length_12();
		if ((((int32_t)L_30) >= ((int32_t)L_31)))
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_32 = __this->get_text_11();
		int32_t L_33 = ___start0;
		NullCheck(L_32);
		Il2CppChar L_34 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_32, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_35 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_00bf;
		}
	}

IL_00e0:
	{
		int32_t L_36 = ___start0;
		int32_t L_37 = __this->get_length_12();
		return (bool)((((int32_t)L_36) == ((int32_t)L_37))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * _thisAdjusted = reinterpret_cast<Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *>(__this + _offset);
	return Parser_ParseZoneAndWhitespace_m8AE1CD0249E328AD018311B36D4D7C8145B1F7FD(_thisAdjusted, ___start0, method);
}
// System.Boolean System.Xml.Schema.XsdDateTime_Parser::Parse4Dig(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Parse4Dig_m65BF5864AF2DAF8C2C5C4986EF5033E430211E85 (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get_length_12();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3))) >= ((int32_t)L_1)))
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_2 = __this->get_text_11();
		int32_t L_3 = ___start0;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, L_3, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)48)));
		String_t* L_5 = __this->get_text_11();
		int32_t L_6 = ___start0;
		NullCheck(L_5);
		Il2CppChar L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)48)));
		String_t* L_8 = __this->get_text_11();
		int32_t L_9 = ___start0;
		NullCheck(L_8);
		Il2CppChar L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2)), /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)48)));
		String_t* L_11 = __this->get_text_11();
		int32_t L_12 = ___start0;
		NullCheck(L_11);
		Il2CppChar L_13 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)3)), /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)48)));
		int32_t L_14 = V_0;
		if ((((int32_t)0) > ((int32_t)L_14)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)0) > ((int32_t)L_16)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_18 = V_2;
		if ((((int32_t)0) > ((int32_t)L_18)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)0) > ((int32_t)L_20)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_21 = V_3;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t* L_22 = ___num1;
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = V_2;
		int32_t L_26 = V_3;
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)((int32_t)10))), (int32_t)L_24)), (int32_t)((int32_t)10))), (int32_t)L_25)), (int32_t)((int32_t)10))), (int32_t)L_26));
		return (bool)1;
	}

IL_0089:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_Parse4Dig_m65BF5864AF2DAF8C2C5C4986EF5033E430211E85_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * _thisAdjusted = reinterpret_cast<Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *>(__this + _offset);
	return Parser_Parse4Dig_m65BF5864AF2DAF8C2C5C4986EF5033E430211E85(_thisAdjusted, ___start0, ___num1, method);
}
// System.Boolean System.Xml.Schema.XsdDateTime_Parser::Parse2Dig(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581 (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get_length_12();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) >= ((int32_t)L_1)))
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_2 = __this->get_text_11();
		int32_t L_3 = ___start0;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, L_3, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)48)));
		String_t* L_5 = __this->get_text_11();
		int32_t L_6 = ___start0;
		NullCheck(L_5);
		Il2CppChar L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)48)));
		int32_t L_8 = V_0;
		if ((((int32_t)0) > ((int32_t)L_8)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)0) > ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t* L_12 = ___num1;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)((int32_t)10))), (int32_t)L_14));
		return (bool)1;
	}

IL_0049:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * _thisAdjusted = reinterpret_cast<Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *>(__this + _offset);
	return Parser_Parse2Dig_mDC407DA9C1765B371244EEE11A43CF233F655581(_thisAdjusted, ___start0, ___num1, method);
}
// System.Boolean System.Xml.Schema.XsdDateTime_Parser::ParseChar(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C (Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * __this, int32_t ___start0, Il2CppChar ___ch1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get_length_12();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = __this->get_text_11();
		int32_t L_3 = ___start0;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, L_3, /*hidden argument*/NULL);
		Il2CppChar L_5 = ___ch1;
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_0019:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, Il2CppChar ___ch1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 * _thisAdjusted = reinterpret_cast<Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855 *>(__this + _offset);
	return Parser_ParseChar_mA930C408F85983CD044A747F8C0F7BBFC30D9D6C(_thisAdjusted, ___start0, ___ch1, method);
}
// System.Boolean System.Xml.Schema.XsdDateTime_Parser::Test(System.Xml.Schema.XsdDateTimeFlags,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Test_m5A5C90806D215B4B96044BF593DCEBB4D989D982 (int32_t ___left0, int32_t ___right1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___left0;
		int32_t L_1 = ___right1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void System.Xml.Schema.XsdDateTime_Parser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__cctor_mF52624EF62C9F87E4BC098307C643E9BB73EAFBA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__cctor_mF52624EF62C9F87E4BC098307C643E9BB73EAFBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)7);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAA330E6B4295DC1363094EDE988D3B524C40486E____9E31F24F64765FCAA589F589324D17C9FCF6A06D_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_StaticFields*)il2cpp_codegen_static_fields_for(Parser_tDDE3EDB5C06630226AE405E4CBE5341EC9B8E855_il2cpp_TypeInfo_var))->set_Power10_13(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleObjectEnumerator__ctor_m604B995B6FF07963B203415E5DD1284159E65BA2 (SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		__this->set_position_1((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___value0;
		__this->set_loneValue_0(L_0);
		return;
	}
}
// System.Object System.Xml.XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SingleObjectEnumerator_get_Current_m76C9830F6FA5F3D4B444A13856E438EBDA9E0EDD (SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SingleObjectEnumerator_get_Current_m76C9830F6FA5F3D4B444A13856E438EBDA9E0EDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_position_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, SingleObjectEnumerator_get_Current_m76C9830F6FA5F3D4B444A13856E438EBDA9E0EDD_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject * L_2 = __this->get_loneValue_0();
		return L_2;
	}
}
// System.Boolean System.Xml.XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SingleObjectEnumerator_MoveNext_m5E4AA2E70A4D50ACB2278A53914638D29357C977 (SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_position_1();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		__this->set_position_1(0);
		return (bool)1;
	}

IL_0012:
	{
		__this->set_position_1(1);
		return (bool)0;
	}
}
// System.Void System.Xml.XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleObjectEnumerator_Reset_m98858E6483F42729E73D27B42927CD0AC431F81D (SingleObjectEnumerator_t00B492D3B841924569E3EB466D5675163D6EF62E * __this, const RuntimeMethod* method)
{
	{
		__this->set_position_1((-1));
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
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache_BufferChunk::.ctor(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferChunk__ctor_mA0A1D11DB3A3EFA1671DA5B5BF20ADC05DEB326D (BufferChunk_t18A98F7842AE429F6666AE33B5FB1D0091420A9E * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___buffer0;
		__this->set_buffer_0(L_0);
		int32_t L_1 = ___index1;
		__this->set_index_1(L_1);
		int32_t L_2 = ___count2;
		__this->set_count_2(L_2);
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
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache_Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m665B675DD337B875403961D152E3727546C08451 (Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWellFormedWriter_AttributeValueCache_Item::Set(System.Xml.XmlWellFormedWriter_AttributeValueCache_ItemType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Set_m681A661CE0DDF8B8BDE87368422863CBE7C4836C (Item_t120A5E76DFCD3BC7E4872EDB5A3F482B5C9F96DE * __this, int32_t ___type0, RuntimeObject * ___data1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___type0;
		__this->set_type_0(L_0);
		RuntimeObject * L_1 = ___data1;
		__this->set_data_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlEvent_InitEvent_m697F8F1C5FBAEBF07EEEFF5DF39BBB0B3046BC95_inline (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, int32_t ___eventType0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___eventType0;
		__this->set_eventType_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlEvent_get_EventType_m5E1A3D64EE0DF5F7A21C9A18107C0C9C7C1C66C7_inline (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_eventType_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlEvent_get_String1_mDAC92F7047BE968646E4D51C6409D7CD4012DCFB_inline (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_s1_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlEvent_get_String2_mA958CB1614BFB8F5E3FB01B69A012B3ADDA51EDA_inline (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_s2_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlEvent_get_String3_mCFB8894B848A4CAE67E7562D27881348E6B206EF_inline (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_s3_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * XmlEvent_get_Object_m53492BB3E8D7BE92F2B0A3A1230A6833CE1CC71F_inline (XmlEvent_t90A3FD5589BF0CB095CF3B7A0F395CC1604B92F8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_o_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlReaderDebuggerDisplayProxy__ctor_m784E61728FD15306C180AE7EA023511D8704FB0A_inline (XmlReaderDebuggerDisplayProxy_t06BFFD864B3662CB3DA3FEDA06E8F2A9C626501E * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader0, const RuntimeMethod* method)
{
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = ___reader0;
		__this->set_reader_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlMapping_get_ElementName_m325D48DC1385A3577E5B4948F1F116861A215CEF_inline (XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__elementName_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlMapping_get_Namespace_mC81A8F368DA39CCD355792888D951BE2A8B21835_inline (XmlMapping_t98D53F12A90FEA32EB59D51D4461C16AE85978F9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__namespace_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * XmlTextReaderImpl_get_DtdParserProxy_NameTable_mA567221B0BD05C6BF365121EF52549079FF67D9B_inline (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method)
{
	{
		XmlNameTable_t5A8AA505CA799E0DC25E9815E4106817D2E1E280 * L_0 = __this->get_nameTable_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XmlTextReaderImpl_get_DtdParserProxy_NamespaceResolver_m6A9BA136D735089A09CEB096E0D839AAC7E281FC_inline (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method)
{
	{
		XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 * L_0 = __this->get_namespaceManager_37();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XmlTextReaderImpl_get_DtdParserProxy_ValidationEventHandling_m86F807BDC2BEF934D72F2A65FC7F97262735A219_inline (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_validationEventHandling_56();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_Normalization_m114C15F2776A94727A5992DB26D65BDC1D670543_inline (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_normalize_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_Namespaces_m8D805DAFFE1332B0E23F2D3AE2959A29C8190FD3_inline (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_supportNamespaces_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_V1CompatibilityMode_m1B3ACC4435FE2768144414FF216E145916403325_inline (XmlTextReaderImpl_t3273E3D9A69C5BB959CD528E05DB4B3E9215BBB4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_v1Compat_36();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParsingState_get_LineNo_m9C32240CFE61AE19697B7C9EFA5DE9B44D3C9610_inline (ParsingState_t5C1CDFE140B4F180AE0AB39A21AAA0E361F691EF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_lineNo_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  L_0 = (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )__this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
