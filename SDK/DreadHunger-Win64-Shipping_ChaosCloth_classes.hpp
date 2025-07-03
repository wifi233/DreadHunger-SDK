                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ChaosCloth_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ChaosCloth.ChaosClothConfig
// size:0x0088 (0x0028 - 0x00B0)
class UChaosClothConfig : public UClothConfigCommon
{
public:
	EClothMassMode                                     MassMode;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              UniformMass;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TotalMass;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinPerParticleMass;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EdgeStiffness;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BendingStiffness;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBendingElements;                                      // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              AreaStiffness;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeStiffness;                                          // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StrainLimitingStiffness;                                  // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LimitScale;                                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EChaosClothTetherMode                              TetherMode;                                               // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGeodesicDistance;                                     // 0x0059(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              ShapeTargetStiffness;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrictionCoefficient;                                      // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSelfCollisions;                                       // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              SelfCollisionThickness;                                   // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLegacyBackstop;                                       // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              DampingCoefficient;                                       // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePointBasedWindModel;                                  // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              DragCoefficient;                                          // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LiftCoefficient;                                          // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGravityOverride;                                      // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              GravityScale;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // 0x008C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveSpringStiffness;                                 // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearVelocityScale;                                      // 0x009C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularVelocityScale;                                     // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTetrahedralConstraints;                               // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseThinShellVolumeConstraints;                           // 0x00AD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseContinuousCollisionDetection;                         // 0x00AE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x00AF(0x0001) MISSED OFFSET
};


// Class ChaosCloth.ChaosClothSharedSimConfig
// size:0x0030 (0x0028 - 0x0058)
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
public:
	int                                                IterationCount;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SubdivisionCount;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionThickness;                                   // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x0034(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bUseDampingOverride;                                      // 0x0038(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Damping;                                                  // 0x003C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bUseGravityOverride;                                      // 0x0040(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              GravityScale;                                             // 0x0044(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // 0x0048(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bUseLocalSpaceSimulation;                                 // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseXPBDConstraints;                                      // 0x0055(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
};


// Class ChaosCloth.ChaosClothingSimulationFactory
// size:0x0000 (0x0028 - 0x0028)
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
public:
};


// Class ChaosCloth.ChaosClothingSimulationInteractor
// size:0x0028 (0x0030 - 0x0058)
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
public:
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
