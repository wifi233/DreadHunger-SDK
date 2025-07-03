                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_ClothingSystemRuntimeInterface_classes.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8_t
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethod_MAX        = 2
};


// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	AnimDriveMultiplier            = 4,
	EWeightMapTargetCommon_MAX     = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
// 0x00D4
struct FClothConfig_Legacy
{
	EClothingWindMethod_Legacy                         WindMethod;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FClothConstraintSetup_Legacy                VerticalConstraintConfig;                                 // 0x0004(0x0010)
	struct FClothConstraintSetup_Legacy                HorizontalConstraintConfig;                               // 0x0014(0x0010)
	struct FClothConstraintSetup_Legacy                BendConstraintConfig;                                     // 0x0024(0x0010)
	struct FClothConstraintSetup_Legacy                ShearConstraintConfig;                                    // 0x0034(0x0010)
	float                                              SelfCollisionRadius;                                      // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionCullScale;                                   // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Damping;                                                  // 0x0050(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WindDragCoefficient;                                      // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WindLiftCoefficient;                                      // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearDrag;                                               // 0x0068(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularDrag;                                              // 0x0074(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearInertiaScale;                                       // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularInertiaScale;                                      // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CentrifugalInertiaScale;                                  // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              SolverFrequency;                                          // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     GravityOverride;                                          // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseGravityOverride;                                      // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	float                                              TetherStiffness;                                          // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TetherLimit;                                              // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveSpringStiffness;                                 // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveDamperStiffness;                                 // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
// 0x0010
struct FClothConstraintSetup_Legacy
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StiffnessMultiplier;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StretchLimit;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CompressionLimit;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
// 0x0160
struct FClothLODDataCommon
{
	struct FClothPhysicalMeshData                      PhysicalMeshData;                                         // 0x0000(0x00F8) (Edit)
	struct FClothCollisionData                         CollisionData;                                            // 0x00F8(0x0040) (Edit)
	bool                                               bUseMultipleInfluences;                                   // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	float                                              SkinningKernelRadius;                                     // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0140(0x0020) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// 0x00F8
struct FClothPhysicalMeshData
{
	TArray<struct FVector>                             Vertices;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<uint32_t>                                   Indices;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	TMap<uint32_t, struct FPointWeightMap>             WeightMaps;                                               // 0x0030(0x0050) (Edit)
	TArray<float>                                      InverseMasses;                                            // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<struct FClothVertBoneData>                  BoneData;                                                 // 0x0090(0x0010) (Edit, ZeroConstructor)
	int                                                MaxBoneWeights;                                           // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumFixedVerts;                                            // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<uint32_t>                                   SelfCollisionIndices;                                     // 0x00A8(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      MaxDistances;                                             // 0x00B8(0x0010) (ZeroConstructor, Deprecated)
	TArray<float>                                      BackstopDistances;                                        // 0x00C8(0x0010) (ZeroConstructor, Deprecated)
	TArray<float>                                      BackstopRadiuses;                                         // 0x00D8(0x0010) (ZeroConstructor, Deprecated)
	TArray<float>                                      AnimDriveMultipliers;                                     // 0x00E8(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
// 0x0010
struct FPointWeightMap
{
	TArray<float>                                      Values;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// 0x0030
struct FClothParameterMask_Legacy
{
	struct FName                                       MaskName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EWeightMapTargetCommon                             CurrentTarget;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              MaxValue;                                                 // 0x000C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<float>                                      Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	bool                                               bEnabled;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
