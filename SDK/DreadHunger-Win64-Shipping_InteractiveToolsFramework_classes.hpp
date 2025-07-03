                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_InteractiveToolsFramework_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class InteractiveToolsFramework.InputBehavior
// size:0x0008 (0x0028 - 0x0030)
class UInputBehavior : public UObject
{
public:
};


// Class InteractiveToolsFramework.AnyButtonInputBehavior
// size:0x0050 (0x0030 - 0x0080)
class UAnyButtonInputBehavior : public UInputBehavior
{
public:
};


// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// size:0x0000 (0x0028 - 0x0028)
class UInteractiveGizmoBuilder : public UObject
{
public:
};


// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// size:0x0000 (0x0028 - 0x0028)
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
};


// Class InteractiveToolsFramework.InteractiveGizmo
// size:0x0010 (0x0028 - 0x0038)
class UInteractiveGizmo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UInputBehaviorSet*                           InputBehaviors;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class InteractiveToolsFramework.AxisAngleGizmo
// size:0x00B8 (0x0038 - 0x00F0)
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoFloatParameterSource> AngleSource;                                              // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bInInteraction;                                           // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector                                     RotationOrigin;                                           // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationPlaneX;                                           // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationPlaneY;                                           // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionStartPoint;                                    // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCurPoint;                                      // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionStartAngle;                                    // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionCurAngle;                                      // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x00DC(0x0014) MISSED OFFSET
};


// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// size:0x0000 (0x0028 - 0x0028)
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
};


// Class InteractiveToolsFramework.AxisPositionGizmo
// size:0x00A0 (0x0038 - 0x00D8)
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoFloatParameterSource> ParameterSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSignedAxis;                                        // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInInteraction;                                           // 0x0089(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	struct FVector                                     InteractionOrigin;                                        // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionAxis;                                          // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionStartPoint;                                    // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCurPoint;                                      // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionStartParameter;                                // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionCurParameter;                                  // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ParameterSign;                                            // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
};


// Class InteractiveToolsFramework.GizmoConstantAxisSource
// size:0x0020 (0x0028 - 0x0048)
class UGizmoConstantAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
};


// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// size:0x0038 (0x0028 - 0x0060)
class UGizmoConstantFrameAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TangentX;                                                 // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TangentY;                                                 // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData)
};


// Class InteractiveToolsFramework.GizmoWorldAxisSource
// size:0x0018 (0x0028 - 0x0040)
class UGizmoWorldAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};


// Class InteractiveToolsFramework.GizmoComponentAxisSource
// size:0x0018 (0x0028 - 0x0040)
class UGizmoComponentAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class USceneComponent*                             Component;                                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bLocalAxes;                                               // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};


// Class InteractiveToolsFramework.InteractiveToolPropertySet
// size:0x0038 (0x0028 - 0x0060)
class UInteractiveToolPropertySet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class UInteractiveToolPropertySet*                 CachedProperties;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPropertySetEnabled;                                    // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0041(0x001F) MISSED OFFSET
};


// Class InteractiveToolsFramework.BrushBaseProperties
// size:0x0018 (0x0060 - 0x0078)
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
	float                                              BrushSize;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecifyRadius;                                           // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              BrushRadius;                                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrushStrength;                                            // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrushFalloffAmount;                                       // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowStrength;                                            // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowFalloff;                                             // 0x0075(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
};


// Class InteractiveToolsFramework.InteractiveTool
// size:0x0058 (0x0028 - 0x0080)
class UInteractiveTool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	class UInputBehaviorSet*                           InputBehaviors;                                           // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ToolPropertyObjects;                                      // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0060(0x0020) MISSED OFFSET
};


// Class InteractiveToolsFramework.SingleSelectionTool
// size:0x0008 (0x0080 - 0x0088)
class USingleSelectionTool : public UInteractiveTool
{
public:
};


// Class InteractiveToolsFramework.MeshSurfacePointTool
// size:0x0038 (0x0088 - 0x00C0)
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
};


// Class InteractiveToolsFramework.BaseBrushTool
// size:0x0100 (0x00C0 - 0x01C0)
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
	class UBrushBaseProperties*                        BrushProperties;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bInBrushStroke;                                           // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              WorldToLocalScale;                                        // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FBrushStampData                             LastBrushStamp;                                           // 0x00D0(0x00AC)
	unsigned char                                      UnknownData01[0x14];                                      // 0x017C(0x0014) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x017C(0x0028) UNKNOWN PROPERTY: 
	class UBrushStampIndicator*                        BrushStampIndicator;                                      // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// size:0x0000 (0x0028 - 0x0028)
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
public:
};


// Class InteractiveToolsFramework.BrushStampIndicator
// size:0x0078 (0x0038 - 0x00B0)
class UBrushStampIndicator : public UInteractiveGizmo
{
public:
	float                                              BrushRadius;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrushFalloff;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BrushPosition;                                            // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BrushNormal;                                              // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawIndicatorLines;                                      // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawRadiusCircle;                                        // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	int                                                SampleStepCount;                                          // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDepthTested;                                             // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawSecondaryLines;                                      // 0x0075(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
	float                                              SecondaryLineThickness;                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SecondaryLineColor;                                       // 0x007C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         AttachedComponent;                                        // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0098(0x0018) MISSED OFFSET
};


// Class InteractiveToolsFramework.ClickDragInputBehavior
// size:0x00C0 (0x0080 - 0x0140)
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0080(0x00A0) MISSED OFFSET
	bool                                               bUpdateModifiersDuringDrag;                               // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0121(0x001F) MISSED OFFSET
};


// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// size:0x0140 (0x0140 - 0x0280)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:
};


// Class InteractiveToolsFramework.InteractiveToolBuilder
// size:0x0000 (0x0028 - 0x0028)
class UInteractiveToolBuilder : public UObject
{
public:
};


// Class InteractiveToolsFramework.ClickDragToolBuilder
// size:0x0000 (0x0028 - 0x0028)
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:
};


// Class InteractiveToolsFramework.ClickDragTool
// size:0x0008 (0x0080 - 0x0088)
class UClickDragTool : public UInteractiveTool
{
public:
};


// Class InteractiveToolsFramework.InternalToolFrameworkActor
// size:0x0000 (0x0220 - 0x0220)
class AInternalToolFrameworkActor : public AActor
{
public:
};


// Class InteractiveToolsFramework.GizmoActor
// size:0x0000 (0x0220 - 0x0220)
class AGizmoActor : public AInternalToolFrameworkActor
{
public:
};


// Class InteractiveToolsFramework.GizmoBaseComponent
// size:0x0020 (0x0450 - 0x0470)
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	struct FLinearColor                                Color;                                                    // 0x0450(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoverSizeMultiplier;                                      // 0x0460(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PixelHitDistanceThreshold;                                // 0x0464(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	void UpdateWorldLocalState(bool bWorldIn)//offset:0x303D3B0;
	void UpdateHoverState(bool bHoveringIn)//offset:0x303D320;
};


// Class InteractiveToolsFramework.GizmoArrowComponent
// size:0x0020 (0x0470 - 0x0490)
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Direction;                                                // 0x0470(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gap;                                                      // 0x047C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0480(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0484(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0488(0x0008) MISSED OFFSET
};


// Class InteractiveToolsFramework.GizmoBoxComponent
// size:0x0040 (0x0470 - 0x04B0)
class UGizmoBoxComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Origin;                                                   // 0x0470(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0480(0x0010) (Edit, IsPlainOldData)
	struct FVector                                     Dimensions;                                               // 0x0490(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // 0x049C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveHiddenLines;                                       // 0x04A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAxisFlip;                                          // 0x04A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x04A2(0x000E) MISSED OFFSET
};


// Class InteractiveToolsFramework.GizmoCircleComponent
// size:0x0020 (0x0470 - 0x0490)
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Normal;                                                   // 0x0470(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x047C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0480(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // 0x0484(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bViewAligned;                                             // 0x0488(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyAllowFrontFacingHits;                                // 0x0489(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x048A(0x0006) MISSED OFFSET
};


// Class InteractiveToolsFramework.GizmoTransformSource
// size:0x0000 (0x0028 - 0x0028)
class UGizmoTransformSource : public UInterface
{
public:

	void SetTransform(const struct FTransform& NewTransform)//offset:0x303D1B0;
	struct FTransform GetTransform()//offset:0x303D020;
};


// Class InteractiveToolsFramework.GizmoAxisSource
// size:0x0000 (0x0028 - 0x0028)
class UGizmoAxisSource : public UInterface
{
public:

	bool HasTangentVectors()//offset:0xF445B0;
	void GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)//offset:0x303CF30;
	struct FVector GetOrigin()//offset:0x303CE80;
	struct FVector GetDirection()//offset:0x303CE40;
};


// Class InteractiveToolsFramework.GizmoClickTarget
// size:0x0000 (0x0028 - 0x0028)
class UGizmoClickTarget : public UInterface
{
public:

	void UpdateHoverState(bool bHovering)//offset:0x303D290;
};


// Class InteractiveToolsFramework.GizmoStateTarget
// size:0x0000 (0x0028 - 0x0028)
class UGizmoStateTarget : public UInterface
{
public:

	void EndUpdate()//offset:0x303CDE0;
	void BeginUpdate()//offset:0x303CE00;
};


// Class InteractiveToolsFramework.GizmoFloatParameterSource
// size:0x0000 (0x0028 - 0x0028)
class UGizmoFloatParameterSource : public UInterface
{
public:

	void SetParameter(float NewValue)//offset:0x303D090;
	float GetParameter()//offset:0x303CEC0;
	void EndModify()//offset:0x303CE20;
	void BeginModify()//offset:0x303CDE0;
};


// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// size:0x0000 (0x0028 - 0x0028)
class UGizmoVec2ParameterSource : public UInterface
{
public:

	void SetParameter(const struct FVector2D& NewValue)//offset:0x303D120;
	struct FVector2D GetParameter()//offset:0x303CEF0;
	void EndModify()//offset:0x303CE20;
	void BeginModify()//offset:0x303CDE0;
};


// Class InteractiveToolsFramework.GizmoLineHandleComponent
// size:0x0030 (0x0470 - 0x04A0)
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Normal;                                                   // 0x0470(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HandleSize;                                               // 0x047C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0480(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0484(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bImageScale;                                              // 0x0494(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0495(0x000B) MISSED OFFSET
};


// Class InteractiveToolsFramework.GizmoRectangleComponent
// size:0x0030 (0x0470 - 0x04A0)
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     DirectionX;                                               // 0x0470(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DirectionY;                                               // 0x047C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetX;                                                  // 0x0488(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetY;                                                  // 0x048C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LengthX;                                                  // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LengthY;                                                  // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SegmentFlags;                                             // 0x049C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
};


// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// size:0x0088 (0x0028 - 0x00B0)
class UGizmoLambdaHitTarget : public UObject
{
public:
};


// Class InteractiveToolsFramework.GizmoComponentHitTarget
// size:0x0058 (0x0028 - 0x0080)
class UGizmoComponentHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         Component;                                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0038(0x0048) MISSED OFFSET
};


// Class InteractiveToolsFramework.InputBehaviorSet
// size:0x0010 (0x0028 - 0x0038)
class UInputBehaviorSet : public UObject
{
public:
	TArray<struct FBehaviorInfo>                       Behaviors;                                                // 0x0028(0x0010) (ZeroConstructor)
};


// Class InteractiveToolsFramework.InputBehaviorSource
// size:0x0000 (0x0028 - 0x0028)
class UInputBehaviorSource : public UInterface
{
public:
};


// Class InteractiveToolsFramework.InputRouter
// size:0x0088 (0x0028 - 0x00B0)
class UInputRouter : public UObject
{
public:
	bool                                               bAutoInvalidateOnHover;                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoInvalidateOnCapture;                                 // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x002A(0x000E) MISSED OFFSET
	class UInputBehaviorSet*                           ActiveInputBehaviors;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0040(0x0070) MISSED OFFSET
};


// Class InteractiveToolsFramework.InteractionMechanic
// size:0x0008 (0x0028 - 0x0030)
class UInteractionMechanic : public UObject
{
public:
};


// Class InteractiveToolsFramework.InteractiveGizmoManager
// size:0x0090 (0x0028 - 0x00B8)
class UInteractiveGizmoManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FActiveGizmo>                        ActiveGizmos;                                             // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	TMap<class FString, class UInteractiveGizmoBuilder*> GizmoBuilders;                                            // 0x0058(0x0050)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
};


// Class InteractiveToolsFramework.ToolContextTransactionProvider
// size:0x0000 (0x0028 - 0x0028)
class UToolContextTransactionProvider : public UInterface
{
public:
};


// Class InteractiveToolsFramework.InteractiveToolManager
// size:0x0110 (0x0028 - 0x0138)
class UInteractiveToolManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UInteractiveTool*                            ActiveLeftTool;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractiveTool*                            ActiveRightTool;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
	TMap<class FString, class UInteractiveToolBuilder*> ToolBuilders;                                             // 0x0090(0x0050)
	unsigned char                                      UnknownData02[0x58];                                      // 0x00E0(0x0058) MISSED OFFSET
};


// Class InteractiveToolsFramework.ToolFrameworkComponent
// size:0x0000 (0x0028 - 0x0028)
class UToolFrameworkComponent : public UInterface
{
public:
};


// Class InteractiveToolsFramework.InteractiveToolsContext
// size:0x0070 (0x0028 - 0x0098)
class UInteractiveToolsContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	class UInputRouter*                                InputRouter;                                              // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractiveToolManager*                     ToolManager;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractiveGizmoManager*                    GizmoManager;                                             // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0070(0x0028) UNKNOWN PROPERTY: 
};


// Class InteractiveToolsFramework.IntervalGizmoActor
// size:0x0018 (0x0220 - 0x0238)
class AIntervalGizmoActor : public AGizmoActor
{
public:
	class UGizmoLineHandleComponent*                   UpIntervalComponent;                                      // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGizmoLineHandleComponent*                   DownIntervalComponent;                                    // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGizmoLineHandleComponent*                   ForwardIntervalComponent;                                 // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class InteractiveToolsFramework.IntervalGizmoBuilder
// size:0x0098 (0x0028 - 0x00C0)
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
};


// Class InteractiveToolsFramework.IntervalGizmo
// size:0x00F8 (0x0038 - 0x0130)
class UIntervalGizmo : public UInteractiveGizmo
{
public:
	class UGizmoTransformChangeStateTarget*            StateTarget;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	class UTransformProxy*                             TransformProxy;                                           // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                         // 0x0058(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                             // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0078(0x0018) MISSED OFFSET
	class UGizmoComponentAxisSource*                   AxisYSource;                                              // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   AxisZSource;                                              // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x90];                                      // 0x00A0(0x0090) MISSED OFFSET
};


// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// size:0x0020 (0x0028 - 0x0048)
class UGizmoBaseFloatParameterSource : public UObject
{
public:
};


// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// size:0x0018 (0x0048 - 0x0060)
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoFloatParameterSource> FloatParameterSource;                                     // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              MinParameter;                                             // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxParameter;                                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
};


// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// size:0x00E0 (0x0030 - 0x0110)
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
};


// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// size:0x0008 (0x0028 - 0x0030)
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
public:
};


// Class InteractiveToolsFramework.MouseHoverBehavior
// size:0x0068 (0x0030 - 0x0098)
class UMouseHoverBehavior : public UInputBehavior
{
public:
};


// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// size:0x00B0 (0x0080 - 0x0130)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
};


// Class InteractiveToolsFramework.MultiSelectionTool
// size:0x0010 (0x0080 - 0x0090)
class UMultiSelectionTool : public UInteractiveTool
{
public:
};


// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// size:0x0010 (0x0048 - 0x0058)
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	float                                              Value;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x004C(0x0008)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};


// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// size:0x0020 (0x0028 - 0x0048)
class UGizmoBaseVec2ParameterSource : public UObject
{
public:
};


// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// size:0x0018 (0x0048 - 0x0060)
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                                   Value;                                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x0050(0x0010)
};


// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// size:0x00C8 (0x0048 - 0x0110)
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Parameter;                                                // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x00B4(0x0008)
	struct FVector                                     CurTranslationAxis;                                       // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationOrigin;                                     // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x00E0(0x0030) (IsPlainOldData)
};


// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// size:0x00E8 (0x0048 - 0x0130)
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Parameter;                                                // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x00B8(0x0010)
	struct FVector                                     CurTranslationOrigin;                                     // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationNormal;                                     // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationAxisX;                                      // 0x00E0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationAxisY;                                      // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0100(0x0030) (IsPlainOldData)
};


// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// size:0x00C8 (0x0048 - 0x0110)
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x00B4(0x0008)
	struct FVector                                     CurRotationAxis;                                          // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurRotationOrigin;                                        // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x00E0(0x0030) (IsPlainOldData)
};


// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// size:0x00A8 (0x0048 - 0x00F0)
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Parameter;                                                // 0x006C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x0074(0x0010)
	struct FVector                                     CurScaleOrigin;                                           // 0x0084(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleNormal;                                           // 0x0090(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleAxisX;                                            // 0x009C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleAxisY;                                            // 0x00A8(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x00C0(0x0030) (IsPlainOldData)
};


// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// size:0x0078 (0x0048 - 0x00C0)
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Parameter;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x0070(0x0008)
	struct FVector                                     CurScaleAxis;                                             // 0x0078(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleOrigin;                                           // 0x0084(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InitialTransform;                                         // 0x0090(0x0030) (IsPlainOldData)
};


// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// size:0x00E8 (0x0048 - 0x0130)
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Parameter;                                                // 0x00B4(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x00BC(0x0010)
	struct FVector                                     CurScaleOrigin;                                           // 0x00CC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleNormal;                                           // 0x00D8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleAxisX;                                            // 0x00E4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleAxisY;                                            // 0x00F0(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0100(0x0030) (IsPlainOldData)
};


// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// size:0x0000 (0x0028 - 0x0028)
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
};


// Class InteractiveToolsFramework.PlanePositionGizmo
// size:0x00C8 (0x0038 - 0x0100)
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoVec2ParameterSource>  ParameterSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSignedAxis;                                        // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bFlipX;                                                   // 0x0089(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bFlipY;                                                   // 0x008A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInInteraction;                                           // 0x008B(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionOrigin;                                        // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionNormal;                                        // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionAxisX;                                         // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionAxisY;                                         // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionStartPoint;                                    // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCurPoint;                                      // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionStartParameter;                                // 0x00D4(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionCurParameter;                                  // 0x00DC(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ParameterSigns;                                           // 0x00E4(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x00EC(0x0014) MISSED OFFSET
};


// Class InteractiveToolsFramework.SelectionSet
// size:0x0018 (0x0028 - 0x0040)
class USelectionSet : public UObject
{
public:
};


// Class InteractiveToolsFramework.MeshSelectionSet
// size:0x0040 (0x0040 - 0x0080)
class UMeshSelectionSet : public USelectionSet
{
public:
	TArray<int>                                        Vertices;                                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<int>                                        Edges;                                                    // 0x0050(0x0010) (ZeroConstructor)
	TArray<int>                                        Faces;                                                    // 0x0060(0x0010) (ZeroConstructor)
	TArray<int>                                        Groups;                                                   // 0x0070(0x0010) (ZeroConstructor)
};


// Class InteractiveToolsFramework.SingleClickInputBehavior
// size:0x00B0 (0x0080 - 0x0130)
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0080(0x0040) MISSED OFFSET
	bool                                               HitTestOnRelease;                                         // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6F];                                      // 0x00C1(0x006F) MISSED OFFSET
};


// Class InteractiveToolsFramework.SingleClickToolBuilder
// size:0x0000 (0x0028 - 0x0028)
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:
};


// Class InteractiveToolsFramework.SingleClickTool
// size:0x0008 (0x0080 - 0x0088)
class USingleClickTool : public UInteractiveTool
{
public:
};


// Class InteractiveToolsFramework.GizmoNilStateTarget
// size:0x0008 (0x0028 - 0x0030)
class UGizmoNilStateTarget : public UObject
{
public:
};


// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// size:0x0088 (0x0028 - 0x00B0)
class UGizmoLambdaStateTarget : public UObject
{
public:
};


// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// size:0x0030 (0x0028 - 0x0058)
class UGizmoObjectModifyStateTarget : public UObject
{
public:
};


// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// size:0x00B8 (0x0028 - 0x00E0)
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	TScriptInterface<class UToolContextTransactionProvider> TransactionManager;                                       // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0060(0x0080) MISSED OFFSET
};


// Class InteractiveToolsFramework.TransformGizmoActor
// size:0x0080 (0x0220 - 0x02A0)
class ATransformGizmoActor : public AGizmoActor
{
public:
	class UPrimitiveComponent*                         TranslateX;                                               // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateY;                                               // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateZ;                                               // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateYZ;                                              // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateXZ;                                              // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateXY;                                              // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RotateX;                                                  // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RotateY;                                                  // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RotateZ;                                                  // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         UniformScale;                                             // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         AxisScaleX;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         AxisScaleY;                                               // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         AxisScaleZ;                                               // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         PlaneScaleYZ;                                             // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         PlaneScaleXZ;                                             // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         PlaneScaleXY;                                             // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class InteractiveToolsFramework.TransformGizmoBuilder
// size:0x0098 (0x0028 - 0x00C0)
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
};


// Class InteractiveToolsFramework.TransformGizmo
// size:0x0168 (0x0038 - 0x01A0)
class UTransformGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	class UTransformProxy*                             ActiveTarget;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToWorldGrid;                                         // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bGridSizeIsExplicit;                                      // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	struct FVector                                     ExplicitGridSize;                                         // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bRotationGridSizeIsExplicit;                              // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FRotator                                    ExplicitRotationGridSize;                                 // 0x005C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToWorldRotGrid;                                      // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseContextCoordinateSystem;                              // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	EToolContextCoordinateSystem                       CurrentCoordinateSystem;                                  // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x006A(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData05[0x90];                                      // 0x0070(0x0090) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                         // 0x0100(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UPrimitiveComponent*>                 NonuniformScaleComponents;                                // 0x0110(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                             // 0x0120(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0130(0x0010) MISSED OFFSET
	class UGizmoConstantFrameAxisSource*               CameraAxisSource;                                         // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   AxisXSource;                                              // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   AxisYSource;                                              // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   AxisZSource;                                              // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   UnitAxisXSource;                                          // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   UnitAxisYSource;                                          // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   UnitAxisZSource;                                          // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoTransformChangeStateTarget*            StateTarget;                                              // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoScaledTransformSource*                 ScaledTransformSource;                                    // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x18];                                      // 0x0188(0x0018) MISSED OFFSET
};


// Class InteractiveToolsFramework.TransformProxy
// size:0x00C8 (0x0028 - 0x00F0)
class UTransformProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET
	bool                                               bRotatePerObject;                                         // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSetPivotMode;                                            // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1E];                                      // 0x0072(0x001E) MISSED OFFSET
	struct FTransform                                  SharedTransform;                                          // 0x0090(0x0030) (IsPlainOldData)
	struct FTransform                                  InitialSharedTransform;                                   // 0x00C0(0x0030) (IsPlainOldData)
};


// Class InteractiveToolsFramework.GizmoBaseTransformSource
// size:0x0020 (0x0028 - 0x0048)
class UGizmoBaseTransformSource : public UObject
{
public:
};


// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// size:0x0010 (0x0048 - 0x0058)
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                             Component;                                                // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bModifyComponentOnTransform;                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};


// Class InteractiveToolsFramework.GizmoScaledTransformSource
// size:0x0098 (0x0048 - 0x00E0)
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class UGizmoTransformSource>      ChildTransformSource;                                     // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0058(0x0088) MISSED OFFSET
};


// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// size:0x0008 (0x0048 - 0x0050)
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                             Proxy;                                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
