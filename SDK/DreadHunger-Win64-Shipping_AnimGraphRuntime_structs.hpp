                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t
{
	StandardBlend                  = 0,
	Inertialization                = 1,
	EBlendListTransitionType_MAX   = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
	None                           = 0,
	Offset_RefPose                 = 1,
	EConstraintOffsetOption_MAX    = 2
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	WeightedMovingAverage          = 3,
	RemapCurve                     = 4,
	EModifyCurveApplyMode_MAX      = 5
};


// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2
};


// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2
};


// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	BaseBoneSpace                  = 2,
	ESimulationSpace_MAX           = 3
};


// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
	FixedDefaultLengthValue        = 0,
	Distance                       = 1,
	ChainLength                    = 2,
	EScaleChainInitialLength_MAX   = 3
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3
};


// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	ESplineBoneAxis_MAX            = 4
};


// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
	EulerX                         = 0,
	EulerY                         = 1,
	EulerZ                         = 2,
	QuaternionAngle                = 3,
	SwingAngle                     = 4,
	TwistAngle                     = 5,
	ERotationComponent_MAX         = 6
};


// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
	Linear                         = 0,
	Sinusoidal                     = 1,
	Cubic                          = 2,
	QuadraticInOut                 = 3,
	CubicInOut                     = 4,
	HermiteCubic                   = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	CustomCurve                    = 14,
	EEasingFuncType_MAX            = 15
};


// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
	OnlyNormalizeAboveOne          = 0,
	AlwaysNormalize                = 1,
	NormalizeWithinMedian          = 2,
	NoNormalization                = 3,
	ERBFNormalizeMethod_MAX        = 4
};


// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	TwistAngle                     = 3,
	DefaultMethod                  = 4,
	ERBFDistanceMethod_MAX         = 5
};


// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	DefaultFunction                = 5,
	ERBFFunctionType_MAX           = 6
};


// Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8_t
{
	Additive                       = 0,
	Interpolative                  = 1,
	ERBFSolverType_MAX             = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// size:0x00B0 (0x0038 - 0x00E8)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                      // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	float                                              StartPosition;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0058(0x0088) MISSED OFFSET
	class UBlendSpaceBase*                             PreviousBlendSpace;                                       // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// size:0x00D8 (0x00E8 - 0x01C0)
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x00E8(0x0068) MISSED OFFSET
	struct FPoseLink                                   BasePose;                                                 // 0x0150(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSocketName;                                         // 0x0164(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PivotSocketName;                                          // 0x016C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtLocation;                                           // 0x0174(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketAxis;                                               // 0x0180(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0190(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// size:0x00B8 (0x0010 - 0x00C8)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0010(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlphaBoolEnabled;                                        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              Alpha;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0030(0x0008) (Edit, BlueprintVisible)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0038(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0088(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// size:0x0378 (0x00C8 - 0x0440)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	float                                              LinearDampingOverride;                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDampingOverride;                                   // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x00D0(0x0060) MISSED OFFSET
	struct FBoneReference                              RelativeSpaceBone;                                        // 0x0130(0x0010) (Edit)
	struct FBoneReference                              BoundBone;                                                // 0x0140(0x0010) (Edit)
	struct FBoneReference                              ChainEnd;                                                 // 0x0150(0x0010) (Edit)
	struct FVector                                     BoxExtents;                                               // 0x0160(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalJointOffset;                                         // 0x016C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GravityOverride;                                          // 0x017C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearSpringConstant;                                     // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpringConstant;                                    // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindScale;                                                // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0194(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x01A0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x01AC(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularBiasOverride;                                      // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSolverIterationsPreUpdate;                             // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSolverIterationsPostUpdate;                            // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimPhysConstraintSetup                    ConstraintSetup;                                          // 0x01C4(0x0048) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	TArray<struct FAnimPhysSphericalLimit>             SphericalLimits;                                          // 0x0210(0x0010) (Edit, ZeroConstructor)
	float                                              SphereCollisionRadius;                                    // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x0224(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                             // 0x0230(0x0010) (Edit, ZeroConstructor)
	EAnimPhysCollisionType                             CollisionType;                                            // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysSimSpaceType                              SimulationSpace;                                          // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0242(0x0002) MISSED OFFSET
	unsigned char                                      bUseSphericalLimits;                                      // 0x0244(0x0001) (Edit)
	unsigned char                                      bUsePlanarLimit;                                          // 0x0244(0x0001) (Edit)
	unsigned char                                      bDoUpdate;                                                // 0x0244(0x0001) (Edit)
	unsigned char                                      bDoEval;                                                  // 0x0244(0x0001) (Edit)
	unsigned char                                      bOverrideLinearDamping;                                   // 0x0244(0x0001) (Edit)
	unsigned char                                      bOverrideAngularBias;                                     // 0x0244(0x0001) (Edit)
	unsigned char                                      bOverrideAngularDamping;                                  // 0x0244(0x0001) (Edit)
	unsigned char                                      bEnableWind;                                              // 0x0244(0x0001) (Edit)
	unsigned char                                      bUseGravityOverride;                                      // 0x0245(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLinearSpring;                                            // 0x0245(0x0001) (Edit)
	unsigned char                                      bAngularSpring;                                           // 0x0245(0x0001) (Edit)
	unsigned char                                      bChain;                                                   // 0x0245(0x0001) (Edit)
	unsigned char                                      UnknownData03[0xA];                                       // 0x0246(0x000A) MISSED OFFSET
	struct FRotationRetargetingInfo                    RetargetingSettings;                                      // 0x0250(0x0130) (Edit)
	unsigned char                                      UnknownData04[0xC0];                                      // 0x0380(0x00C0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// 0x0130
struct FRotationRetargetingInfo
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Source;                                                   // 0x0010(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  Target;                                                   // 0x0040(0x0030) (Edit, IsPlainOldData)
	ERotationComponent                                 RotationComponent;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FVector                                     TwistAxis;                                                // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAbsoluteAngle;                                        // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              SourceMinimum;                                            // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SourceMaximum;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetMinimum;                                            // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetMaximum;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EEasingFuncType                                    EasingType;                                               // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomCurve;                                              // 0x0098(0x0088) (Edit)
	bool                                               bFlipEasing;                                              // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	float                                              EasingWeight;                                             // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClamp;                                                   // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0040
struct FAnimPhysPlanarLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0010) (Edit)
	struct FTransform                                  PlaneTransform;                                           // 0x0010(0x0030) (Edit, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0024
struct FAnimPhysSphericalLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0010) (Edit)
	struct FVector                                     SphereLocalOffset;                                        // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LimitRadius;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESphericalLimitType                                LimitType;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x0048
struct FAnimPhysConstraintSetup
{
	EAnimPhysLinearConstraintType                      LinearXLimitType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysLinearConstraintType                      LinearYLimitType;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysLinearConstraintType                      LinearZLimitType;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     LinearAxesMin;                                            // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearAxesMax;                                            // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysAngularConstraintType                     AngularConstraintType;                                    // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysTwistAxis                                 TwistAxis;                                                // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysTwistAxis                                 AngularTargetAxis;                                        // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	float                                              ConeAngle;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularLimitsMin;                                         // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularLimitsMax;                                         // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularTarget;                                            // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// size:0x00B8 (0x0010 - 0x00C8)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0034(0x0008) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0040(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0090(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C0(0x0004) MISSED OFFSET
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlphaBoolEnabled;                                        // 0x00C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00C6(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// size:0x0020 (0x00C8 - 0x00E8)
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
	TArray<struct FAngularRangeLimit>                  AngularRangeLimits;                                       // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             AngularOffsets;                                           // 0x00D8(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// 0x0028
struct FAngularRangeLimit
{
	struct FVector                                     LimitMin;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LimitMax;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              Bone;                                                     // 0x0018(0x0010) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// size:0x0058 (0x0010 - 0x0068)
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x0020(0x0010) (Edit, BlueprintVisible)
	TArray<struct FBlendBoneByChannelEntry>            BoneDefinitions;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0058(0x0008) (Edit, BlueprintVisible)
	TEnumAsByte<EBoneControlSpace>                     TransformsSpace;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// 0x0024
struct FBlendBoneByChannelEntry
{
	struct FBoneReference                              SourceBone;                                               // 0x0000(0x0010) (Edit)
	struct FBoneReference                              TargetBone;                                               // 0x0010(0x0010) (Edit)
	bool                                               bBlendTranslation;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendRotation;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendScale;                                              // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// size:0x0088 (0x0010 - 0x0098)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendTime;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	EBlendListTransitionType                           TransitionType;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  BlendType;                                                // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetChildOnActivation;                                  // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0048(0x0050) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// size:0x0008 (0x0098 - 0x00A0)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	bool                                               bActiveValue;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// size:0x0018 (0x0098 - 0x00B0)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                          // 0x0098(0x0010) (ZeroConstructor)
	unsigned char                                      ActiveEnumValue;                                          // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// size:0x0008 (0x0098 - 0x00A0)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                         // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// size:0x0008 (0x00E8 - 0x00F0)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// size:0x0050 (0x00C8 - 0x0118)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00C8(0x0010) (Edit)
	class UCurveFloat*                                 DrivingCurve;                                             // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMin;                                                 // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // 0x00F4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              TargetBone;                                               // 0x00FC(0x0010) (Edit)
	EDrivenDestinationMode                             DestinationMode;                                          // 0x010C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDrivenBoneModificationMode                        ModificationMode;                                         // 0x010D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComponentType>                        SourceComponent;                                          // 0x010E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseRange;                                                // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationX;                                // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationY;                                // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationZ;                                // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationX;                                   // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationY;                                   // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationZ;                                   // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleX;                                      // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleY;                                      // 0x0110(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleZ;                                      // 0x0110(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// size:0x00B8 (0x00C8 - 0x0180)
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     EffectorLocation;                                         // 0x00C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x00D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00D5(0x000B) MISSED OFFSET
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x00E0(0x0060) (Edit)
	struct FBoneReference                              TipBone;                                                  // 0x0140(0x0010) (Edit)
	struct FBoneReference                              RootBone;                                                 // 0x0150(0x0010) (Edit)
	float                                              Precision;                                                // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStartFromTail;                                           // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRotationLimit;                                     // 0x0169(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x016A(0x0006) MISSED OFFSET
	TArray<float>                                      RotationLimitPerJoints;                                   // 0x0170(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// 0x0060
struct FBoneSocketTarget
{
	bool                                               bUseSocket;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FBoneReference                              BoneReference;                                            // 0x0004(0x0010) (Edit)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FSocketReference                            SocketReference;                                          // 0x0020(0x0040) (Edit)
};

// ScriptStruct AnimGraphRuntime.SocketReference
// 0x0040
struct FSocketReference
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// size:0x0040 (0x00C8 - 0x0108)
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x00C8(0x0010) (Edit)
	TArray<struct FConstraint>                         ConstraintSetup;                                          // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ConstraintWeights;                                        // 0x00E8(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.Constraint
// 0x001C
struct FConstraint
{
	struct FBoneReference                              TargetBone;                                               // 0x0000(0x0010) (Edit)
	EConstraintOffsetOption                            OffsetOption;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETransformConstraintType                           TransformType;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFilterOptionPerAxis                        PerAxis;                                                  // 0x0012(0x0003) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0015(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// size:0x0028 (0x00C8 - 0x00F0)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              TargetBone;                                               // 0x00D8(0x0010) (Edit)
	bool                                               bCopyTranslation;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyRotation;                                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyScale;                                               // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ControlSpace;                                             // 0x00EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// size:0x0030 (0x00C8 - 0x00F8)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              TargetBone;                                               // 0x00D8(0x0010) (Edit)
	bool                                               bCopyTranslation;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyRotation;                                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyScale;                                               // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECopyBoneDeltaMode                                 CopyMode;                                                 // 0x00EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TranslationMultiplier;                                    // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationMultiplier;                                       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// size:0x01C8 (0x0010 - 0x01D8)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	TWeakObjectPtr<class USkeletalMeshComponent>       SourceMeshComponent;                                      // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      bUseAttachedParent;                                       // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCopyCurves;                                              // 0x0018(0x0001) (Edit, BlueprintVisible)
	bool                                               bCopyCustomAttributes;                                    // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseMeshPose;                                             // 0x001A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	struct FName                                       RootBoneToCopy;                                           // 0x001C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1B4];                                     // 0x0024(0x01B4) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// size:0x0030 (0x0010 - 0x0040)
struct FAnimNode_CurveSource : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SourceBinding;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TScriptInterface<class UCurveSourceInterface>      CurveSource;                                              // 0x0030(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// size:0x00C8 (0x00C8 - 0x0190)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FTransform                                  EffectorTransform;                                        // 0x00D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x0100(0x0060) (Edit)
	struct FBoneReference                              TipBone;                                                  // 0x0160(0x0010) (Edit)
	struct FBoneReference                              RootBone;                                                 // 0x0170(0x0010) (Edit)
	float                                              Precision;                                                // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                   // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                   // 0x0189(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x018A(0x0006) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// size:0x0058 (0x00C8 - 0x0120)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                              // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              LeftHandFK;                                               // 0x00D8(0x0010) (Edit)
	struct FBoneReference                              RightHandIK;                                              // 0x00E8(0x0010) (Edit)
	struct FBoneReference                              LeftHandIK;                                               // 0x00F8(0x0010) (Edit)
	TArray<struct FBoneReference>                      IKBonesToMove;                                            // 0x0108(0x0010) (Edit, ZeroConstructor)
	float                                              HandFKWeight;                                             // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// size:0x00B0 (0x0010 - 0x00C0)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<struct FPoseLink>                           BlendPoses;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FInputBlendPose>                     LayerSetup;                                               // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	bool                                               bMeshSpaceRotationBlend;                                  // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMeshSpaceScaleBlend;                                     // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendRootMotionBasedOnRootBone;                          // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	int                                                LODThreshold;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FPerBoneBlendWeight>                 PerBoneBlendWeights;                                      // 0x0060(0x0010) (ZeroConstructor)
	struct FGuid                                       SkeletonGuid;                                             // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VirtualBoneGuid;                                          // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0090(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// size:0x0030 (0x00C8 - 0x00F8)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
	float                                              ReachPrecision;                                           // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimLegIKDefinition>                LegsDefinition;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x002C
struct FAnimLegIKDefinition
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0010) (Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0010(0x0010) (Edit)
	int                                                NumBonesInLimb;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRotationAngle;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 FootBoneForwardAxis;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRotationLimit;                                     // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableKneeTwistCorrection;                               // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x00A0
struct FAnimLegIKData
{

};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0038
struct FIKChain
{

};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x003C
struct FIKChainLink
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// size:0x00E8 (0x00C8 - 0x01B0)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x00C8(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FBoneSocketTarget                           LookAtTarget;                                             // 0x00E0(0x0060) (Edit)
	struct FVector                                     LookAtLocation;                                           // 0x0140(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAxis                                       LookAt_Axis;                                              // 0x014C(0x0010) (Edit)
	bool                                               bUseLookUpAxis;                                           // 0x015C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        // 0x015D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x015E(0x0002) MISSED OFFSET
	struct FAxis                                       LookUp_Axis;                                              // 0x0160(0x0010) (Edit)
	float                                              LookAtClamp;                                              // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x34];                                      // 0x017C(0x0034) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// size:0x0028 (0x0010 - 0x0038)
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	bool                                               bMeshSpaceAdditive;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// size:0x0040 (0x00C8 - 0x0108)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x00C8(0x0010) (Edit)
	struct FVector                                     Translation;                                              // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x00F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x00FD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x00FE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x00FF(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// size:0x0048 (0x0010 - 0x0058)
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize)
	TArray<float>                                      CurveValues;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FName>                               CurveNames;                                               // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EModifyCurveApplyMode                              ApplyMode;                                                // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// size:0x0040 (0x0010 - 0x0050)
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           Poses;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DesiredAlphas;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0040(0x0008) (Edit, BlueprintVisible)
	bool                                               bAdditiveNode;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalizeAlpha;                                          // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// size:0x0038 (0x00C8 - 0x0100)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                            // 0x00C8(0x0010) (Edit)
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                             // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeToRefPose;                                       // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	struct FVector                                     Translation;                                              // 0x00DC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x00E8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x00F4(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// size:0x0048 (0x0038 - 0x0080)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	class UPoseAsset*                                  PoseAsset;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// size:0x0020 (0x0080 - 0x00A0)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, EditFixedSize)
	EAlphaBlendOption                                  BlendOption;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// size:0x0018 (0x0080 - 0x0098)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	struct FName                                       PoseName;                                                 // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PoseWeight;                                               // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x008C(0x000C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// size:0x00B8 (0x0080 - 0x0138)
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, EditFixedSize)
	TArray<struct FBoneReference>                      SourceBones;                                              // 0x0090(0x0010) (Edit, ZeroConstructor)
	TArray<struct FBoneReference>                      OnlyDriveBones;                                           // 0x00A0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPoseDriverTarget>                   PoseTargets;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00C0(0x0030) MISSED OFFSET
	struct FBoneReference                              EvalSpaceBone;                                            // 0x00F0(0x0010) (Edit)
	struct FRBFParams                                  RBFParams;                                                // 0x0100(0x002C) (Edit, BlueprintVisible)
	EPoseDriverSource                                  DriveSource;                                              // 0x012C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPoseDriverOutput                                  DriveOutput;                                              // 0x012D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOnlyDriveSelectedBones;                                  // 0x012E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x1];                                       // 0x012F(0x0001) MISSED OFFSET
	int                                                LODThreshold;                                             // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFParams
// 0x002C
struct FRBFParams
{
	int                                                TargetDimensions;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	ERBFSolverType                                     SolverType;                                               // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticRadius;                                         // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERBFFunctionType                                   Function;                                                 // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERBFDistanceMethod                                 DistanceMethod;                                           // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeightThreshold;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERBFNormalizeMethod                                NormalizeMethod;                                          // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FVector                                     MedianReference;                                          // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MedianMin;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MedianMax;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x00C0
struct FPoseDriverTarget
{
	TArray<struct FPoseDriverTransform>                BoneTransforms;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FRotator                                    TargetRotation;                                           // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetScale;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ERBFDistanceMethod                                 DistanceMethod;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ERBFFunctionType                                   FunctionType;                                             // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyCustomCurve;                                        // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
	struct FRichCurve                                  CustomCurve;                                              // 0x0028(0x0080) (Edit)
	struct FName                                       DrivenName;                                               // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	bool                                               bIsHidden;                                                // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x0018
struct FPoseDriverTransform
{
	struct FVector                                     TargetTranslation;                                        // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// size:0x0080 (0x0010 - 0x0090)
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
	struct FName                                       SnapshotName;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPoseSnapshot                               Snapshot;                                                 // 0x0018(0x0038) (Edit, BlueprintVisible)
	ESnapshotSourceMode                                Mode;                                                     // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0051(0x003F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// size:0x0068 (0x0010 - 0x0078)
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	TArray<struct FRandomPlayerSequenceEntry>          Entries;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0020(0x0050) MISSED OFFSET
	bool                                               bShuffleMode;                                             // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0050
struct FRandomPlayerSequenceEntry
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToPlay;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinLoopCount;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoopCount;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FAlphaBlend                                 BlendIn;                                                  // 0x0020(0x0030) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// size:0x0000 (0x0010 - 0x0010)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// size:0x0008 (0x0010 - 0x0018)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<ERefPoseType>                          RefPoseType;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// size:0x0010 (0x00C8 - 0x00D8)
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// size:0x0588 (0x00C8 - 0x0650)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x98];                                      // 0x00D0(0x0098) MISSED OFFSET
	struct FVector                                     OverrideWorldGravity;                                     // 0x0168(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x0174(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0180(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x018C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x0198(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSimSpaceSettings                           SimSpaceSettings;                                         // 0x01A4(0x0040) (Edit)
	float                                              CachedBoundsScale;                                        // 0x01E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BaseBoneRef;                                              // 0x01E8(0x0010) (Edit)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x01F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESimulationSpace                                   SimulationSpace;                                          // 0x01F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceDisableCollisionBetweenConstraintBodies;            // 0x01FA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x01FB(0x0001) MISSED OFFSET
	unsigned char                                      bEnableWorldGeometry;                                     // 0x01FC(0x0001) (Edit)
	unsigned char                                      bOverrideWorldGravity;                                    // 0x01FC(0x0001) (Edit)
	unsigned char                                      bTransferBoneVelocities;                                  // 0x01FC(0x0001) (Edit)
	unsigned char                                      bFreezeIncomingPoseOnStart;                               // 0x01FC(0x0001) (Edit)
	unsigned char                                      bClampLinearTranslationLimitToRefPose;                    // 0x01FC(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01FD(0x0003) MISSED OFFSET
	float                                              WorldSpaceMinimumScale;                                   // 0x0200(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EvaluationResetTime;                                      // 0x0204(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x448];                                     // 0x0208(0x0448) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SimSpaceSettings
// 0x0040
struct FSimSpaceSettings
{
	float                                              MasterAlpha;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityScaleZ;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLinearVelocity;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularVelocity;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLinearAcceleration;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularAcceleration;                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExternalLinearDrag;                                       // 0x0018(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     ExternalLinearDragV;                                      // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalLinearVelocity;                                   // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalAngularVelocity;                                  // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// size:0x0090 (0x0010 - 0x00A0)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible)
	float                                              Pitch;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        PitchScaleBiasClamp;                                      // 0x0028(0x0030) (Edit, BlueprintVisible)
	struct FInputScaleBiasClamp                        YawScaleBiasClamp;                                        // 0x0058(0x0030) (Edit, BlueprintVisible)
	struct FRotator                                    MeshToComponent;                                          // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// size:0x0028 (0x00C8 - 0x00F0)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                               // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              SourceBone;                                               // 0x00D8(0x0010) (Edit)
	float                                              Multiplier;                                               // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                      // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x00ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// size:0x00A8 (0x00E8 - 0x0190)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x00E8(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0100(0x0008) (Edit, BlueprintVisible)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0108(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0158(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0188(0x0004) MISSED OFFSET
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x018C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlphaBoolEnabled;                                        // 0x018D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x018E(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// size:0x0068 (0x0010 - 0x0078)
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0010(0x0010) (Edit)
	float                                              DefaultChainLength;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              ChainStartBone;                                           // 0x0024(0x0010) (Edit)
	struct FBoneReference                              ChainEndBone;                                             // 0x0034(0x0010) (Edit)
	struct FVector                                     TargetLocation;                                           // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0058(0x0008) (Edit)
	EScaleChainInitialLength                           ChainInitialLength;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0061(0x0017) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// size:0x0018 (0x0038 - 0x0050)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitTime;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldLoop;                                              // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportToExplicitTime;                                  // 0x0045(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                 // 0x0046(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0047(0x0001) MISSED OFFSET
	float                                              StartPosition;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// size:0x0038 (0x0010 - 0x0048)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SlotName;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysUpdateSourcePose;                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0029(0x001F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// size:0x01A8 (0x00C8 - 0x0270)
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              StartBone;                                                // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              EndBone;                                                  // 0x00D8(0x0010) (Edit)
	ESplineBoneAxis                                    BoneAxis;                                                 // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCalculateSpline;                                     // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	int                                                PointCount;                                               // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ControlPoints;                                            // 0x00F0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	float                                              Roll;                                                     // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TwistStart;                                               // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TwistEnd;                                                 // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FAlphaBlend                                 TwistBlend;                                               // 0x0110(0x0030) (Edit)
	float                                              Stretch;                                                  // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x128];                                     // 0x0148(0x0128) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0014
struct FSplineIKCachedBoneData
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0010)
	int                                                RefSkeletonIndex;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// size:0x0060 (0x00C8 - 0x0128)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                               // 0x00C8(0x0010) (Edit)
	float                                              MaxDisplacement;                                          // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorResetThresh;                                         // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00E8(0x003C) MISSED OFFSET
	unsigned char                                      bLimitDisplacement;                                       // 0x0124(0x0001) (Edit)
	unsigned char                                      bTranslateX;                                              // 0x0124(0x0001) (Edit)
	unsigned char                                      bTranslateY;                                              // 0x0124(0x0001) (Edit)
	unsigned char                                      bTranslateZ;                                              // 0x0124(0x0001) (Edit)
	unsigned char                                      bRotateX;                                                 // 0x0124(0x0001) (Edit)
	unsigned char                                      bRotateY;                                                 // 0x0124(0x0001) (Edit)
	unsigned char                                      bRotateZ;                                                 // 0x0124(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// size:0x0000 (0x0030 - 0x0030)
struct FAnimNode_StateResult : public FAnimNode_Root
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// size:0x0198 (0x00C8 - 0x0260)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C8(0x0038) MISSED OFFSET
	struct FBoneReference                              TrailBone;                                                // 0x0100(0x0010) (Edit)
	int                                                ChainLength;                                              // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                            // 0x0114(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInvertChainBoneAxis;                                     // 0x0115(0x0001) (Edit)
	unsigned char                                      bLimitStretch;                                            // 0x0115(0x0001) (Edit)
	unsigned char                                      bLimitRotation;                                           // 0x0115(0x0001) (Edit)
	unsigned char                                      bUsePlanarLimit;                                          // 0x0115(0x0001) (Edit)
	unsigned char                                      bActorSpaceFakeVel;                                       // 0x0115(0x0001) (Edit)
	unsigned char                                      bReorientParentToChild;                                   // 0x0115(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0116(0x0002) MISSED OFFSET
	float                                              MaxDeltaTime;                                             // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RelaxationSpeedScale;                                     // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          TrailRelaxationSpeed;                                     // 0x0120(0x0088) (Edit)
	struct FInputScaleBiasClamp                        RelaxationSpeedScaleInputProcessor;                       // 0x01A8(0x0030) (Edit, BlueprintVisible)
	TArray<struct FRotationLimit>                      RotationLimits;                                           // 0x01D8(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FVector>                             RotationOffsets;                                          // 0x01E8(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                             // 0x01F8(0x0010) (Edit, ZeroConstructor)
	float                                              StretchLimit;                                             // 0x0208(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FakeVelocity;                                             // 0x020C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BaseJoint;                                                // 0x0218(0x0010) (Edit)
	float                                              LastBoneRotationAnimAlphaBlend;                           // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x34];                                      // 0x022C(0x0034) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RotationLimit
// 0x0018
struct FRotationLimit
{
	struct FVector                                     LimitMin;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LimitMax;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// size:0x0070 (0x00C8 - 0x0138)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame                         BaseFrame;                                                // 0x00C8(0x0020) (Edit)
	struct FReferenceBoneFrame                         TwistFrame;                                               // 0x00E8(0x0020) (Edit)
	struct FAxis                                       TwistPlaneNormalAxis;                                     // 0x0108(0x0010) (Edit)
	float                                              RangeMax;                                                 // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimCurveParam                             Curve;                                                    // 0x0124(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0020
struct FReferenceBoneFrame
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0010) (Edit)
	struct FAxis                                       Axis;                                                     // 0x0010(0x0010) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// size:0x0118 (0x00C8 - 0x01E0)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                   // 0x00C8(0x0010) (Edit)
	float                                              StartStretchRatio;                                        // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxStretchScale;                                          // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffectorLocation;                                         // 0x00E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x00F0(0x0060) (Edit)
	struct FVector                                     JointTargetLocation;                                      // 0x0150(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	struct FBoneSocketTarget                           JointTarget;                                              // 0x0160(0x0060) (Edit)
	struct FAxis                                       TwistAxis;                                                // 0x01C0(0x0010) (Edit)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x01D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                 // 0x01D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStretching;                                         // 0x01D2(0x0001) (Edit)
	unsigned char                                      bTakeRotationFromEffectorSpace;                           // 0x01D2(0x0001) (Edit)
	unsigned char                                      bMaintainEffectorRelRot;                                  // 0x01D2(0x0001) (Edit)
	unsigned char                                      bAllowTwist;                                              // 0x01D2(0x0001) (Edit)
	unsigned char                                      UnknownData02[0xD];                                       // 0x01D3(0x000D) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// size:0x00B8 (0x0010 - 0x00C8)
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x0020(0x0010) (Edit, BlueprintVisible)
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlphaBoolEnabled;                                        // 0x0031(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bResetChildOnActivation;                                  // 0x0031(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0038(0x0008) (Edit, BlueprintVisible)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0040(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0090(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// size:0x02A0 (0x0760 - 0x0A00)
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct AnimGraphRuntime.PositionHistory
// 0x0030
struct FPositionHistory
{
	TArray<struct FVector>                             Positions;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Range;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0014(0x001C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x0010
struct FRBFEntry
{
	TArray<float>                                      Values;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// size:0x0090 (0x0010 - 0x00A0)
struct FRBFTarget : public FRBFEntry
{
	float                                              ScaleFactor;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyCustomCurve;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FRichCurve                                  CustomCurve;                                              // 0x0018(0x0080) (Edit)
	ERBFDistanceMethod                                 DistanceMethod;                                           // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ERBFFunctionType                                   FunctionType;                                             // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
