                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_FieldSystemEngine_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FieldSystemEngine.FieldSystemActor
// size:0x0008 (0x0220 - 0x0228)
class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                     // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};


// Class FieldSystemEngine.FieldSystem
// size:0x0010 (0x0028 - 0x0038)
class UFieldSystem : public UObject
{
public:
};


// Class FieldSystemEngine.FieldSystemComponent
// size:0x0040 (0x0450 - 0x0490)
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	class UFieldSystem*                                FieldSystem;                                              // 0x0450(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0458(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0458(0x0010) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData02[0x18];                                      // 0x0478(0x0018) MISSED OFFSET

	void ResetFieldSystem()//offset:0x2FF9CA0;
	void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude)//offset:0x2FF9AE0;
	void ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int Iterations)//offset:0x2FF9910;
	void ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius)//offset:0x2FF97E0;
	void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude)//offset:0x2FF9650;
	void ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude)//offset:0x2FF9520;
	void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)//offset:0x2FF93C0;
	void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude)//offset:0x2FF9290;
	void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)//offset:0x2FF9130;
};


// Class FieldSystemEngine.FieldSystemMetaData
// size:0x0000 (0x00B0 - 0x00B0)
class UFieldSystemMetaData : public UActorComponent
{
public:
};


// Class FieldSystemEngine.FieldSystemMetaDataIteration
// size:0x0008 (0x00B0 - 0x00B8)
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
public:
	int                                                Iterations;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	class UFieldSystemMetaDataIteration* SetMetaDataIteration(int Iterations)//offset:0x2FFA020;
};


// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// size:0x0008 (0x00B0 - 0x00B8)
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	TEnumAsByte<EFieldResolutionType>                  ResolutionType;                                           // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType)//offset:0x2FFA0C0;
};


// Class FieldSystemEngine.FieldNodeBase
// size:0x0000 (0x00B0 - 0x00B0)
class UFieldNodeBase : public UActorComponent
{
public:
};


// Class FieldSystemEngine.FieldNodeInt
// size:0x0000 (0x00B0 - 0x00B0)
class UFieldNodeInt : public UFieldNodeBase
{
public:
};


// Class FieldSystemEngine.FieldNodeFloat
// size:0x0000 (0x00B0 - 0x00B0)
class UFieldNodeFloat : public UFieldNodeBase
{
public:
};


// Class FieldSystemEngine.FieldNodeVector
// size:0x0000 (0x00B0 - 0x00B0)
class UFieldNodeVector : public UFieldNodeBase
{
public:
};


// Class FieldSystemEngine.UniformInteger
// size:0x0008 (0x00B0 - 0x00B8)
class UUniformInteger : public UFieldNodeInt
{
public:
	int                                                Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	class UUniformInteger* SetUniformInteger(int Magnitude)//offset:0x2FFA020;
};


// Class FieldSystemEngine.RadialIntMask
// size:0x0020 (0x00B0 - 0x00D0)
class URadialIntMask : public UFieldNodeInt
{
public:
	float                                              Radius;                                                   // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InteriorValue;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExteriorValue;                                            // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESetMaskConditionType>                 SetMaskCondition;                                         // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	class URadialIntMask* SetRadialIntMask(float Radius, const struct FVector& Position, int InteriorValue, int ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn)//offset:0x2FFA930;
};


// Class FieldSystemEngine.UniformScalar
// size:0x0008 (0x00B0 - 0x00B8)
class UUniformScalar : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	class UUniformScalar* SetUniformScalar(float Magnitude)//offset:0x2FFAC00;
};


// Class FieldSystemEngine.RadialFalloff
// size:0x0028 (0x00B0 - 0x00D8)
class URadialFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x00C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET

	class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, TEnumAsByte<EFieldFalloffType> Falloff)//offset:0x2FFA6E0;
};


// Class FieldSystemEngine.PlaneFalloff
// size:0x0030 (0x00B0 - 0x00E0)
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x00C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET

	class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, TEnumAsByte<EFieldFalloffType> Falloff)//offset:0x2FFA440;
};


// Class FieldSystemEngine.BoxFalloff
// size:0x0050 (0x00B0 - 0x0100)
class UBoxFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x00C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00F1(0x000F) MISSED OFFSET

	class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, TEnumAsByte<EFieldFalloffType> Falloff)//offset:0x2FF9CC0;
};


// Class FieldSystemEngine.NoiseField
// size:0x0040 (0x00B0 - 0x00F0)
class UNoiseField : public UFieldNodeFloat
{
public:
	float                                              MinRange;                                                 // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	class UNoiseField* SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform)//offset:0x2FFA150;
};


// Class FieldSystemEngine.UniformVector
// size:0x0010 (0x00B0 - 0x00C0)
class UUniformVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	class UUniformVector* SetUniformVector(float Magnitude, const struct FVector& Direction)//offset:0x2FFAB10;
};


// Class FieldSystemEngine.RadialVector
// size:0x0010 (0x00B0 - 0x00C0)
class URadialVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	class URadialVector* SetRadialVector(float Magnitude, const struct FVector& Position)//offset:0x2FFAB10;
};


// Class FieldSystemEngine.RandomVector
// size:0x0008 (0x00B0 - 0x00B8)
class URandomVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	class URandomVector* SetRandomVector(float Magnitude)//offset:0x2FFAC00;
};


// Class FieldSystemEngine.OperatorField
// size:0x0020 (0x00B0 - 0x00D0)
class UOperatorField : public UFieldNodeBase
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class UFieldNodeBase*                              RightField;                                               // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase*                              LeftField;                                                // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EFieldOperationType>                   Operation;                                                // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* RightField, class UFieldNodeBase* LeftField, TEnumAsByte<EFieldOperationType> Operation)//offset:0x2FFA2E0;
};


// Class FieldSystemEngine.ToIntegerField
// size:0x0008 (0x00B0 - 0x00B8)
class UToIntegerField : public UFieldNodeInt
{
public:
	class UFieldNodeFloat*                             FloatField;                                               // 0x00B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField)//offset:0x2FFACC0;
};


// Class FieldSystemEngine.ToFloatField
// size:0x0008 (0x00B0 - 0x00B8)
class UToFloatField : public UFieldNodeFloat
{
public:
	class UFieldNodeInt*                               IntField;                                                 // 0x00B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField)//offset:0x2FFACC0;
};


// Class FieldSystemEngine.CullingField
// size:0x0018 (0x00B0 - 0x00C8)
class UCullingField : public UFieldNodeBase
{
public:
	class UFieldNodeBase*                              Culling;                                                  // 0x00B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase*                              Field;                                                    // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EFieldCullingOperationType>            Operation;                                                // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation)//offset:0x2FF9F10;
};


// Class FieldSystemEngine.ReturnResultsTerminal
// size:0x0000 (0x00B0 - 0x00B0)
class UReturnResultsTerminal : public UFieldNodeBase
{
public:

	class UReturnResultsTerminal* SetReturnResultsTerminal()//offset:0x2FFAC90;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
