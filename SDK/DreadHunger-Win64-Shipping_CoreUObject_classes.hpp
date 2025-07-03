                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_CoreUObject_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CoreUObject.Object
// 0x0028
class UObject
{
public:

	void ExecuteUbergraph(int EntryPoint)//offset:0x13CEB30;
};


// Class CoreUObject.Interface
// size:0x0000 (0x0028 - 0x0028)
class UInterface : public UObject
{
public:
};


// Class CoreUObject.GCObjectReferencer
// size:0x0048 (0x0028 - 0x0070)
class UGCObjectReferencer : public UObject
{
public:
};


// Class CoreUObject.TextBuffer
// size:0x0028 (0x0028 - 0x0050)
class UTextBuffer : public UObject
{
public:
};


// Class CoreUObject.Field
// size:0x0008 (0x0028 - 0x0030)
class UField : public UObject
{
public:
};


// Class CoreUObject.Struct
// size:0x0080 (0x0030 - 0x00B0)
class UStruct : public UField
{
public:
};


// Class CoreUObject.ScriptStruct
// size:0x0010 (0x00B0 - 0x00C0)
class UScriptStruct : public UStruct
{
public:
};


// Class CoreUObject.Package
// size:0x0078 (0x0028 - 0x00A0)
class UPackage : public UObject
{
public:
};


// Class CoreUObject.Class
// size:0x0180 (0x00B0 - 0x0230)
class UClass : public UStruct
{
public:
};


// Class CoreUObject.Function
// size:0x0030 (0x00B0 - 0x00E0)
class UFunction : public UStruct
{
public:
};


// Class CoreUObject.DelegateFunction
// size:0x0000 (0x00E0 - 0x00E0)
class UDelegateFunction : public UFunction
{
public:
};


// Class CoreUObject.SparseDelegateFunction
// size:0x0010 (0x00E0 - 0x00F0)
class USparseDelegateFunction : public UDelegateFunction
{
public:
};


// Class CoreUObject.DynamicClass
// size:0x0080 (0x0230 - 0x02B0)
class UDynamicClass : public UClass
{
public:
};


// Class CoreUObject.PackageMap
// size:0x00B8 (0x0028 - 0x00E0)
class UPackageMap : public UObject
{
public:
};


// Class CoreUObject.Enum
// size:0x0030 (0x0030 - 0x0060)
class UEnum : public UField
{
public:
};


// Class CoreUObject.LinkerPlaceholderClass
// size:0x01B8 (0x0230 - 0x03E8)
class ULinkerPlaceholderClass : public UClass
{
public:
};


// Class CoreUObject.LinkerPlaceholderExportObject
// size:0x00C8 (0x0028 - 0x00F0)
class ULinkerPlaceholderExportObject : public UObject
{
public:
};


// Class CoreUObject.LinkerPlaceholderFunction
// size:0x01B8 (0x00E0 - 0x0298)
class ULinkerPlaceholderFunction : public UFunction
{
public:
};


// Class CoreUObject.MetaData
// size:0x00A0 (0x0028 - 0x00C8)
class UMetaData : public UObject
{
public:
};


// Class CoreUObject.ObjectRedirector
// size:0x0008 (0x0028 - 0x0030)
class UObjectRedirector : public UObject
{
public:
};


// Class CoreUObject.Property
// size:0x0040 (0x0030 - 0x0070)
class UProperty : public UField
{
public:
};


// Class CoreUObject.EnumProperty
// size:0x0010 (0x0070 - 0x0080)
class UEnumProperty : public UProperty
{
public:
};


// Class CoreUObject.ArrayProperty
// size:0x0008 (0x0070 - 0x0078)
class UArrayProperty : public UProperty
{
public:
};


// Class CoreUObject.ObjectPropertyBase
// size:0x0008 (0x0070 - 0x0078)
class UObjectPropertyBase : public UProperty
{
public:
};


// Class CoreUObject.BoolProperty
// size:0x0008 (0x0070 - 0x0078)
class UBoolProperty : public UProperty
{
public:
};


// Class CoreUObject.NumericProperty
// size:0x0000 (0x0070 - 0x0070)
class UNumericProperty : public UProperty
{
public:
};


// Class CoreUObject.ByteProperty
// size:0x0008 (0x0070 - 0x0078)
class UByteProperty : public UNumericProperty
{
public:
};


// Class CoreUObject.ObjectProperty
// size:0x0000 (0x0078 - 0x0078)
class UObjectProperty : public UObjectPropertyBase
{
public:
};


// Class CoreUObject.ClassProperty
// size:0x0008 (0x0078 - 0x0080)
class UClassProperty : public UObjectProperty
{
public:
};


// Class CoreUObject.DelegateProperty
// size:0x0008 (0x0070 - 0x0078)
class UDelegateProperty : public UProperty
{
public:
};


// Class CoreUObject.DoubleProperty
// size:0x0000 (0x0070 - 0x0070)
class UDoubleProperty : public UNumericProperty
{
public:
};


// Class CoreUObject.FloatProperty
// size:0x0000 (0x0070 - 0x0070)
class UFloatProperty : public UNumericProperty
{
public:
};


// Class CoreUObject.IntProperty
// size:0x0000 (0x0070 - 0x0070)
class UIntProperty : public UNumericProperty
{
public:
};


// Class CoreUObject.Int8Property
// size:0x0000 (0x0070 - 0x0070)
class UInt8Property : public UNumericProperty
{
public:
};


// Class CoreUObject.Int16Property
// size:0x0000 (0x0070 - 0x0070)
class UInt16Property : public UNumericProperty
{
public:
};


// Class CoreUObject.Int64Property
// size:0x0000 (0x0070 - 0x0070)
class UInt64Property : public UNumericProperty
{
public:
};


// Class CoreUObject.InterfaceProperty
// size:0x0008 (0x0070 - 0x0078)
class UInterfaceProperty : public UProperty
{
public:
};


// Class CoreUObject.LazyObjectProperty
// size:0x0000 (0x0078 - 0x0078)
class ULazyObjectProperty : public UObjectPropertyBase
{
public:
};


// Class CoreUObject.MapProperty
// size:0x0028 (0x0070 - 0x0098)
class UMapProperty : public UProperty
{
public:
};


// Class CoreUObject.MulticastDelegateProperty
// size:0x0008 (0x0070 - 0x0078)
class UMulticastDelegateProperty : public UProperty
{
public:
};


// Class CoreUObject.MulticastInlineDelegateProperty
// size:0x0000 (0x0078 - 0x0078)
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
public:
};


// Class CoreUObject.MulticastSparseDelegateProperty
// size:0x0000 (0x0078 - 0x0078)
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
public:
};


// Class CoreUObject.NameProperty
// size:0x0000 (0x0070 - 0x0070)
class UNameProperty : public UProperty
{
public:
};


// Class CoreUObject.SetProperty
// size:0x0020 (0x0070 - 0x0090)
class USetProperty : public UProperty
{
public:
};


// Class CoreUObject.SoftObjectProperty
// size:0x0000 (0x0078 - 0x0078)
class USoftObjectProperty : public UObjectPropertyBase
{
public:
};


// Class CoreUObject.SoftClassProperty
// size:0x0008 (0x0078 - 0x0080)
class USoftClassProperty : public USoftObjectProperty
{
public:
};


// Class CoreUObject.StrProperty
// size:0x0000 (0x0070 - 0x0070)
class UStrProperty : public UProperty
{
public:
};


// Class CoreUObject.StructProperty
// size:0x0008 (0x0070 - 0x0078)
class UStructProperty : public UProperty
{
public:
};


// Class CoreUObject.UInt16Property
// size:0x0000 (0x0070 - 0x0070)
class UUInt16Property : public UNumericProperty
{
public:
};


// Class CoreUObject.UInt32Property
// size:0x0000 (0x0070 - 0x0070)
class UUInt32Property : public UNumericProperty
{
public:
};


// Class CoreUObject.UInt64Property
// size:0x0000 (0x0070 - 0x0070)
class UUInt64Property : public UNumericProperty
{
public:
};


// Class CoreUObject.WeakObjectProperty
// size:0x0000 (0x0078 - 0x0078)
class UWeakObjectProperty : public UObjectPropertyBase
{
public:
};


// Class CoreUObject.TextProperty
// size:0x0000 (0x0070 - 0x0070)
class UTextProperty : public UProperty
{
public:
};


// Class CoreUObject.PropertyWrapper
// size:0x0008 (0x0028 - 0x0030)
class UPropertyWrapper : public UObject
{
public:
};


// Class CoreUObject.MulticastDelegatePropertyWrapper
// size:0x0000 (0x0030 - 0x0030)
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{
public:
};


// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// size:0x0000 (0x0030 - 0x0030)
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{
public:
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
