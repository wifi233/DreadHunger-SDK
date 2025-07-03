                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Niagara_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Niagara.NiagaraDataInterface
// size:0x0010 (0x0028 - 0x0038)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
};


// Class Niagara.MovieSceneNiagaraTrack
// size:0x0010 (0x0078 - 0x0088)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0078(0x0010) (ExportObject, ZeroConstructor)
};


// Class Niagara.MovieSceneNiagaraParameterTrack
// size:0x0020 (0x0088 - 0x00A8)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                            Parameter;                                                // 0x0088(0x0020)
};


// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// size:0x0008 (0x00A8 - 0x00B0)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
};


// Class Niagara.MovieSceneNiagaraColorParameterTrack
// size:0x0008 (0x00A8 - 0x00B0)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
};


// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// size:0x0008 (0x00A8 - 0x00B0)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
};


// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// size:0x0008 (0x00A8 - 0x00B0)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
};


// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// size:0x0010 (0x00E8 - 0x00F8)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:
	ENiagaraSystemSpawnSectionStartBehavior            SectionStartBehavior;                                     // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E8(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraSystemSpawnSectionEvaluateBehavior         SectionEvaluateBehavior;                                  // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00EC(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraSystemSpawnSectionEndBehavior              SectionEndBehavior;                                       // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                            // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
};


// Class Niagara.MovieSceneNiagaraSystemTrack
// size:0x0008 (0x0088 - 0x0090)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:
};


// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// size:0x0010 (0x00A8 - 0x00B8)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	int                                                ChannelsUsed;                                             // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};


// Class Niagara.NiagaraActor
// size:0x0010 (0x0220 - 0x0230)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bDestroyOnSystemFinish;                                   // 0x0228(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish)//offset:0xCBDFD0;
	void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent)//offset:0xCBDF40;
};


// Class Niagara.NiagaraComponent
// size:0x01B0 (0x0450 - 0x0600)
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                              Asset;                                                    // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraTickBehavior                               TickBehavior;                                             // 0x0458(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	struct FNiagaraUserRedirectionParameterStore       OverrideParameters;                                       // 0x0460(0x00C8)
	unsigned char                                      bForceSolo;                                               // 0x0528(0x0001) (Edit)
	unsigned char                                      bEnableGpuComputeDebug;                                   // 0x0528(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2B];                                      // 0x0529(0x002B) MISSED OFFSET
	unsigned char                                      bAutoDestroy;                                             // 0x0554(0x0001)
	unsigned char                                      bRenderingEnabled;                                        // 0x0554(0x0001)
	unsigned char                                      bAutoManageAttachment;                                    // 0x0554(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAutoAttachWeldSimulatedBodies;                           // 0x0554(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0555(0x0003) MISSED OFFSET
	float                                              MaxTimeBeforeForceUpdateTransform;                        // 0x0558(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	TArray<struct FNiagaraMaterialOverride>            EmitterMaterials;                                         // 0x0560(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0570(0x0008) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnSystemFinished;                                         // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TWeakObjectPtr<class USceneComponent>              AutoAttachParent;                                         // 0x0588(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       AutoAttachSocketName;                                     // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachLocationRule;                                   // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachRotationRule;                                   // 0x0599(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachScaleRule;                                      // 0x059A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x65];                                      // 0x059B(0x0065) MISSED OFFSET

	void SetVariableVec4(const struct FName& InVariableName, const struct FVector4& InValue)//offset:0xCC2580;
	void SetVariableVec3(const struct FName& InVariableName, const struct FVector& InValue)//offset:0xCC24A0;
	void SetVariableVec2(const struct FName& InVariableName, const struct FVector2D& InValue)//offset:0xCC23D0;
	void SetVariableTextureRenderTarget(const struct FName& InVariableName, class UTextureRenderTarget* TextureRenderTarget)//offset:0xCC2300;
	void SetVariableQuat(const struct FName& InVariableName, const struct FQuat& InValue)//offset:0xCC2230;
	void SetVariableObject(const struct FName& InVariableName, class UObject* Object)//offset:0xCC2160;
	void SetVariableMaterial(const struct FName& InVariableName, class UMaterialInterface* Object)//offset:0xCC2090;
	void SetVariableLinearColor(const struct FName& InVariableName, const struct FLinearColor& InValue)//offset:0xCC1FC0;
	void SetVariableInt(const struct FName& InVariableName, int InValue)//offset:0xCC1EF0;
	void SetVariableFloat(const struct FName& InVariableName, float InValue)//offset:0xCC1E20;
	void SetVariableBool(const struct FName& InVariableName, bool InValue)//offset:0xCC1D50;
	void SetVariableActor(const struct FName& InVariableName, class AActor* Actor)//offset:0xCC1C80;
	void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior)//offset:0xCC1C00;
	void SetSeekDelta(float InSeekDelta)//offset:0xCC1B80;
	void SetRenderingEnabled(bool bInRenderingEnabled)//offset:0xCC1AF0;
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance)//offset:0xCC1A20;
	void SetPaused(bool bInPaused)//offset:0xCC1990;
	void SetNiagaraVariableVec4(const class FString& InVariableName, const struct FVector4& InValue)//offset:0xCC18A0;
	void SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue)//offset:0xCC17B0;
	void SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue)//offset:0xCC16D0;
	void SetNiagaraVariableQuat(const class FString& InVariableName, const struct FQuat& InValue)//offset:0xCC15E0;
	void SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object)//offset:0xCC1160;
	void SetNiagaraVariableLinearColor(const class FString& InVariableName, const struct FLinearColor& InValue)//offset:0xCC14F0;
	void SetNiagaraVariableInt(const class FString& InVariableName, int InValue)//offset:0xCC1410;
	void SetNiagaraVariableFloat(const class FString& InVariableName, float InValue)//offset:0xCC1320;
	void SetNiagaraVariableBool(const class FString& InVariableName, bool InValue)//offset:0xCC1240;
	void SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor)//offset:0xCC1160;
	void SetMaxSimTime(float InMaxTime)//offset:0xCC10E0;
	void SetGpuComputeDebug(bool bEnableDebug)//offset:0xCC1050;
	void SetForceSolo(bool bInForceSolo)//offset:0xCC0FC0;
	void SetDesiredAge(float InDesiredAge)//offset:0xCC0F40;
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)//offset:0xCC0EB0;
	void SetAutoDestroy(bool bInAutoDestroy)//offset:0xCC0E20;
	void SetAsset(class UNiagaraSystem* InAsset)//offset:0xCC0D90;
	void SetAllowScalability(bool bAllow)//offset:0xCC0D00;
	void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode)//offset:0xCC0C80;
	void SeekToDesiredAge(float InDesiredAge)//offset:0xCC0C00;
	void ResetSystem()//offset:0xCC0BE0;
	void ReinitializeSystem()//offset:0xCC0BC0;
	bool IsPaused()//offset:0xCC0B90;
	ENiagaraTickBehavior GetTickBehavior()//offset:0xCC0B70;
	float GetSeekDelta()//offset:0xCC0B40;
	bool GetPreviewLODDistanceEnabled()//offset:0xCC0B20;
	int GetPreviewLODDistance()//offset:0xCC0B00;
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName)//offset:0xCC0860;
	TArray<float> GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName)//offset:0xCC09B0;
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName)//offset:0xCC0770;
	float GetMaxSimTime()//offset:0xCC0740;
	bool GetForceSolo()//offset:0xCC0710;
	float GetDesiredAge()//offset:0xCC06E0;
	class UNiagaraDataInterface* GetDataInterface(const class FString& Name)//offset:0xCC0630;
	class UNiagaraSystem* GetAsset()//offset:0xCC0610;
	ENiagaraAgeUpdateMode GetAgeUpdateMode()//offset:0xCC05E0;
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)//offset:0xCC0510;
	void AdvanceSimulation(int TickCount, float TickDeltaSeconds)//offset:0xCC0440;
};


// Class Niagara.NiagaraComponentPool
// size:0x0058 (0x0028 - 0x0080)
class UNiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct FNCPool>        WorldParticleSystemPools;                                 // 0x0028(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};


// Class Niagara.NiagaraRendererProperties
// size:0x0058 (0x0028 - 0x0080)
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	struct FNiagaraPlatformSet                         Platforms;                                                // 0x0028(0x0030) (Edit)
	int                                                SortOrderHint;                                            // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMotionBlurEnabled;                                       // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x22];                                      // 0x005E(0x0022) MISSED OFFSET
};


// Class Niagara.NiagaraComponentRendererProperties
// size:0x00E0 (0x0080 - 0x0160)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
public:
	class USceneComponent*                             ComponentType;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ComponentCountLimit;                                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            EnabledBinding;                                           // 0x0090(0x0058) (Edit)
	bool                                               bAssignComponentsOnParticleID;                            // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyCreateComponentsOnParticleSpawn;                     // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00EA(0x0006) MISSED OFFSET
	class USceneComponent*                             TemplateComponent;                                        // 0x00F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FNiagaraComponentPropertyBinding>    PropertyBindings;                                         // 0x00F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0108(0x0058) MISSED OFFSET
};


// Class Niagara.NiagaraComponentSettings
// size:0x00F0 (0x0028 - 0x0118)
class UNiagaraComponentSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData01[0x50];                                      // 0x0078(0x0050) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData02[0x50];                                      // 0x00C8(0x0050) UNKNOWN PROPERTY: 
};


// Class Niagara.NiagaraConvertInPlaceUtilityBase
// size:0x0000 (0x0028 - 0x0028)
class UNiagaraConvertInPlaceUtilityBase : public UObject
{
public:
};


// Class Niagara.NiagaraDataInterface2DArrayTexture
// size:0x0008 (0x0038 - 0x0040)
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
public:
	class UTexture2DArray*                             Texture;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraDataInterfaceArray
// size:0x0018 (0x0038 - 0x0050)
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	int                                                MaxElements;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};


// Class Niagara.NiagaraDataInterfaceArrayFloat
// size:0x0010 (0x0050 - 0x0060)
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{
public:
	TArray<float>                                      FloatData;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};


// Class Niagara.NiagaraDataInterfaceArrayFloat2
// size:0x0010 (0x0050 - 0x0060)
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector2D>                           FloatData;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};


// Class Niagara.NiagaraDataInterfaceArrayFloat3
// size:0x0010 (0x0050 - 0x0060)
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector>                             FloatData;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};


// Class Niagara.NiagaraDataInterfaceArrayFloat4
// size:0x0010 (0x0050 - 0x0060)
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector4>                            FloatData;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};


// Class Niagara.NiagaraDataInterfaceArrayColor
// size:0x0010 (0x0050 - 0x0060)
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FLinearColor>                        ColorData;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};


// Class Niagara.NiagaraDataInterfaceArrayQuat
// size:0x0010 (0x0050 - 0x0060)
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FQuat>                               QuatData;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};


// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// size:0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector4> ArrayData)//offset:0xCC6700;
	static void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector2D> ArrayData)//offset:0xCC65E0;
	static void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector> ArrayData)//offset:0xCC6820;
	static void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FQuat> ArrayData)//offset:0xCC64C0;
	static void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<int> ArrayData)//offset:0xCC63A0;
	static void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<float> ArrayData)//offset:0xCC6280;
	static void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FLinearColor> ArrayData)//offset:0xCC6160;
	static void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<bool> ArrayData)//offset:0xCC6040;
	static TArray<struct FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)//offset:0xCC57C0;
	static TArray<struct FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)//offset:0xCC56B0;
	static TArray<struct FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)//offset:0xCC58D0;
	static TArray<struct FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)//offset:0xCC55A0;
	static TArray<int> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)//offset:0xCC5490;
	static TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)//offset:0xCC5380;
	static TArray<struct FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)//offset:0xCC5270;
	static TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)//offset:0xCC5160;
};


// Class Niagara.NiagaraDataInterfaceArrayInt32
// size:0x0010 (0x0050 - 0x0060)
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{
public:
	TArray<int>                                        IntData;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};


// Class Niagara.NiagaraDataInterfaceArrayBool
// size:0x0010 (0x0050 - 0x0060)
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
public:
	TArray<bool>                                       BoolData;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};


// Class Niagara.NiagaraDataInterfaceAudioSubmix
// size:0x0008 (0x0038 - 0x0040)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                                Submix;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// size:0x0010 (0x0038 - 0x0048)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                                Submix;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Resolution;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScopeInMilliseconds;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraDataInterfaceAudioPlayer
// size:0x0038 (0x0038 - 0x0070)
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
public:
	class USoundBase*                                  SoundToPlay;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Attenuation;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           Concurrency;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ParameterNames;                                           // 0x0050(0x0010) (Edit, ZeroConstructor)
	bool                                               bLimitPlaysPerTick;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                MaxPlaysPerTick;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenComponentIsDestroyed;                            // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};


// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// size:0x0010 (0x0040 - 0x0050)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
public:
	int                                                Resolution;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFrequency;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaximumFrequency;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseFloorDb;                                             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraDataInterfaceCamera
// size:0x0008 (0x0038 - 0x0040)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
public:
	int                                                PlayerControllerIndex;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireCurrentFrameData;                                 // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};


// Class Niagara.NiagaraDataInterfaceCollisionQuery
// size:0x0010 (0x0038 - 0x0048)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
};


// Class Niagara.NiagaraDataInterfaceCurveBase
// size:0x0038 (0x0038 - 0x0070)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                      ShaderLUT;                                                // 0x0038(0x0010) (ZeroConstructor)
	float                                              LUTMinTime;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTMaxTime;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTInvTimeRange;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTNumSamplesMinusOne;                                    // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseLUT;                                                  // 0x0058(0x0001) (Edit)
	unsigned char                                      bExposeCurve;                                             // 0x0058(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FName                                       ExposedName;                                              // 0x005C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class UTexture2D*                                  ExposedTexture;                                           // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraDataInterfaceColorCurve
// size:0x0200 (0x0070 - 0x0270)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x0070(0x0080) (Edit)
	struct FRichCurve                                  GreenCurve;                                               // 0x00F0(0x0080) (Edit)
	struct FRichCurve                                  BlueCurve;                                                // 0x0170(0x0080) (Edit)
	struct FRichCurve                                  AlphaCurve;                                               // 0x01F0(0x0080) (Edit)
};


// Class Niagara.NiagaraDataInterfaceCurlNoise
// size:0x0010 (0x0038 - 0x0048)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32_t                                           Seed;                                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET
};


// Class Niagara.NiagaraDataInterfaceCurve
// size:0x0080 (0x0070 - 0x00F0)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                    // 0x0070(0x0080) (Edit)
};


// Class Niagara.NiagaraParticleCallbackHandler
// size:0x0000 (0x0028 - 0x0028)
class UNiagaraParticleCallbackHandler : public UInterface
{
public:

	void ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem)//offset:0xCC5F40;
};


// Class Niagara.NiagaraDataInterfaceExport
// size:0x0030 (0x0038 - 0x0068)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding                CallbackHandlerParameter;                                 // 0x0038(0x0020) (Edit)
	ENDIExport_GPUAllocationMode                       GPUAllocationMode;                                        // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                GPUAllocationFixedSize;                                   // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GPUAllocationPerParticleSize;                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};


// Class Niagara.NiagaraDataInterfaceGBuffer
// size:0x0000 (0x0038 - 0x0038)
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{
public:
};


// Class Niagara.NiagaraDataInterfaceRWBase
// size:0x00A0 (0x0038 - 0x00D8)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData01[0x50];                                      // 0x0088(0x0050) UNKNOWN PROPERTY: 
};


// Class Niagara.NiagaraDataInterfaceGrid2D
// size:0x0020 (0x00D8 - 0x00F8)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	int                                                NumCellsX;                                                // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCellsY;                                                // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCellsMaxAxis;                                          // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumAttributes;                                            // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SetGridFromMaxAxis;                                       // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	struct FVector2D                                   WorldBBoxSize;                                            // 0x00EC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
};


// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// size:0x00C8 (0x00F8 - 0x01C0)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                // 0x00F8(0x0020) (Edit)
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                     // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideFormat;                                          // 0x0119(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x56];                                      // 0x011A(0x0056) MISSED OFFSET
	TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                     // 0x0170(0x0050) (Transient)

	void GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY)//offset:0xCC5C90;
	void GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY)//offset:0xCC59E0;
	bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int AttributeIndex)//offset:0xCC5040;
	bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int* TilesX, int* TilesY)//offset:0xCC4CD0;
};


// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// size:0x0070 (0x00F8 - 0x0168)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{
public:
	class FString                                      EmitterName;                                              // 0x00F8(0x0010) (Edit, ZeroConstructor)
	class FString                                      DIName;                                                   // 0x0108(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0118(0x0050) MISSED OFFSET
};


// Class Niagara.NiagaraDataInterfaceGrid3D
// size:0x0028 (0x00D8 - 0x0100)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  NumCells;                                                 // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellSize;                                                 // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCellsMaxAxis;                                          // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESetResolutionMethod                               SetResolutionMethod;                                      // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00EC(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector                                     WorldBBoxSize;                                            // 0x00F0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
};


// Class Niagara.NiagaraDataInterfaceGrid3DCollection
// size:0x0080 (0x0100 - 0x0180)
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
public:
	int                                                NumAttributes;                                            // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                // 0x0108(0x0020) (Edit)
	ENiagaraGpuBufferFormat                            BufferFormat;                                             // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0129(0x0057) MISSED OFFSET

	void GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY, int* SizeZ)//offset:0xCC5DC0;
	void GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY, int* SizeZ)//offset:0xCC5B10;
	bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int AttributeIndex)//offset:0xCC5040;
	bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int* TilesX, int* TilesY, int* TileZ)//offset:0xCC4E40;
};


// Class Niagara.NiagaraDataInterfaceLandscape
// size:0x0008 (0x0038 - 0x0040)
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
public:
	class AActor*                                      SourceLandscape;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// size:0x0008 (0x0100 - 0x0108)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32_t                                           MaxNeighborsPerCell;                                      // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
};


// Class Niagara.NiagaraDataInterfaceOcclusion
// size:0x0000 (0x0038 - 0x0038)
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
public:
};


// Class Niagara.NiagaraDataInterfaceParticleRead
// size:0x0010 (0x00D8 - 0x00E8)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
public:
	class FString                                      EmitterName;                                              // 0x00D8(0x0010) (Edit, ZeroConstructor)
};


// Class Niagara.NiagaraDataInterfacePlatformSet
// size:0x0030 (0x0038 - 0x0068)
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
public:
	struct FNiagaraPlatformSet                         Platforms;                                                // 0x0038(0x0030) (Edit)
};


// Class Niagara.NiagaraDataInterfaceRenderTarget2D
// size:0x0080 (0x00D8 - 0x0158)
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                                   Size;                                                     // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                               // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideFormat;                                          // 0x00E1(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                // 0x00E8(0x0020) (Edit)
	TMap<uint64_t, class UTextureRenderTarget2D*>      ManagedRenderTargets;                                     // 0x0108(0x0050) (Transient)
};


// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
// size:0x0080 (0x00D8 - 0x0158)
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  Size;                                                     // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                               // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideFormat;                                          // 0x00E5(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00E6(0x0002) MISSED OFFSET
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                // 0x00E8(0x0020) (Edit)
	TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                     // 0x0108(0x0050) (Transient)
};


// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
// size:0x0080 (0x00D8 - 0x0158)
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  Size;                                                     // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                               // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideFormat;                                          // 0x00E5(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00E6(0x0002) MISSED OFFSET
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                // 0x00E8(0x0020) (Edit)
	TMap<uint64_t, class UTextureRenderTargetVolume*>  ManagedRenderTargets;                                     // 0x0108(0x0050) (Transient)
};


// Class Niagara.NiagaraDataInterfaceSimpleCounter
// size:0x0000 (0x0038 - 0x0038)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:
};


// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// size:0x0088 (0x0038 - 0x00C0)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	ENDISkeletalMesh_SourceMode                        SourceMode;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class AActor*                                      Source;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                MeshUserParameter;                                        // 0x0048(0x0020) (Edit)
	class USkeletalMeshComponent*                      SourceComponent;                                          // 0x0068(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                             // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FName>                               SamplingRegions;                                          // 0x0078(0x0010) (Edit, ZeroConstructor)
	int                                                WholeMeshLOD;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TArray<struct FName>                               FilteredBones;                                            // 0x0090(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               FilteredSockets;                                          // 0x00A0(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ExcludeBoneName;                                          // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bExcludeBone;                                             // 0x00B8(0x0001) (Edit)
	bool                                               bRequireCurrentFrameData;                                 // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
};


// Class Niagara.NiagaraDataInterfaceSpline
// size:0x0008 (0x0038 - 0x0040)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraDataInterfaceStaticMesh
// size:0x0050 (0x0038 - 0x0088)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	ENDIStaticMesh_SourceMode                          SourceMode;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UStaticMesh*                                 DefaultMesh;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SourceComponent;                                          // 0x0050(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                            // 0x0058(0x0010) (Edit)
	bool                                               bUsePhysicsBodyVelocity;                                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	TArray<struct FName>                               FilteredSockets;                                          // 0x0070(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};


// Class Niagara.NiagaraDataInterfaceTexture
// size:0x0008 (0x0038 - 0x0040)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                                    Texture;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraDataInterfaceVector2DCurve
// size:0x0100 (0x0070 - 0x0170)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0070(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00F0(0x0080) (Edit)
};


// Class Niagara.NiagaraDataInterfaceVector4Curve
// size:0x0200 (0x0070 - 0x0270)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0070(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00F0(0x0080) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0170(0x0080) (Edit)
	struct FRichCurve                                  WCurve;                                                   // 0x01F0(0x0080) (Edit)
};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// size:0x0180 (0x0070 - 0x01F0)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0070(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00F0(0x0080) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0170(0x0080) (Edit)
};


// Class Niagara.NiagaraDataInterfaceVectorField
// size:0x0010 (0x0038 - 0x0048)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                                Field;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileX;                                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileY;                                                   // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileZ;                                                   // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
};


// Class Niagara.NiagaraDataInterfaceVolumeTexture
// size:0x0008 (0x0038 - 0x0040)
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
public:
	class UVolumeTexture*                              Texture;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraEditorDataBase
// size:0x0000 (0x0028 - 0x0028)
class UNiagaraEditorDataBase : public UObject
{
public:
};


// Class Niagara.NiagaraSignificanceHandler
// size:0x0000 (0x0028 - 0x0028)
class UNiagaraSignificanceHandler : public UObject
{
public:
};


// Class Niagara.NiagaraSignificanceHandlerDistance
// size:0x0000 (0x0028 - 0x0028)
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{
public:
};


// Class Niagara.NiagaraSignificanceHandlerAge
// size:0x0000 (0x0028 - 0x0028)
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{
public:
};


// Class Niagara.NiagaraEffectType
// size:0x00E8 (0x0028 - 0x0110)
class UNiagaraEffectType : public UObject
{
public:
	ENiagaraScalabilityUpdateFrequency                 UpdateFrequency;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0028(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraCullReaction                               CullReaction;                                             // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UNiagaraSignificanceHandler*                 SignificanceHandler;                                      // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FNiagaraSystemScalabilitySettings>   DetailLevelScalabilitySettings;                           // 0x0038(0x0010) (ZeroConstructor, Deprecated)
	struct FNiagaraSystemScalabilitySettingsArray      SystemScalabilitySettings;                                // 0x0048(0x0010) (Edit)
	struct FNiagaraEmitterScalabilitySettingsArray     EmitterScalabilitySettings;                               // 0x0058(0x0010) (Edit)
	unsigned char                                      UnknownData02[0xA8];                                      // 0x0068(0x00A8) MISSED OFFSET
};


// Class Niagara.NiagaraEmitter
// size:0x0278 (0x0028 - 0x02A0)
class UNiagaraEmitter : public UObject
{
public:
	bool                                               bLocalSpace;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDeterminism;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                RandomSeed;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EParticleAllocationMode                            AllocationMode;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                PreAllocationCount;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0038(0x0028)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x0060(0x0028)
	ENiagaraSimTarget                                  SimTarget;                                                // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FBox                                        FixedBounds;                                              // 0x008C(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinDetailLevel;                                           // 0x00A8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MaxDetailLevel;                                           // 0x00AC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FNiagaraDetailsLevelScaleOverrides          GlobalSpawnCountScaleOverrides;                           // 0x00B0(0x0014) (Deprecated)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FNiagaraPlatformSet                         Platforms;                                                // 0x00C8(0x0030) (Edit)
	struct FNiagaraEmitterScalabilityOverrides         ScalabilityOverrides;                                     // 0x00F8(0x0010) (Edit)
	unsigned char                                      bInterpolatedSpawning;                                    // 0x0108(0x0001) (Edit)
	unsigned char                                      bFixedBounds;                                             // 0x0108(0x0001) (Edit)
	unsigned char                                      bUseMinDetailLevel;                                       // 0x0108(0x0001) (Deprecated)
	unsigned char                                      bUseMaxDetailLevel;                                       // 0x0108(0x0001) (Deprecated)
	unsigned char                                      bOverrideGlobalSpawnCountScale;                           // 0x0108(0x0001) (Deprecated)
	unsigned char                                      bRequiresPersistentIDs;                                   // 0x0108(0x0001) (Edit)
	unsigned char                                      bCombineEventSpawn;                                       // 0x0108(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              MaxDeltaTimePerTick;                                      // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           DefaultShaderStageIndex;                                  // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxUpdateIterations;                                      // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x50];                                      // 0x0118(0x0050) UNKNOWN PROPERTY: 
	unsigned char                                      bSimulationStagesEnabled;                                 // 0x0168(0x0001) (Edit)
	unsigned char                                      bDeprecatedShaderStagesEnabled;                           // 0x0168(0x0001) (Edit)
	unsigned char                                      bLimitDeltaTime;                                          // 0x0168(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	class FString                                      UniqueEmitterName;                                        // 0x0170(0x0010) (ZeroConstructor)
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                       // 0x0180(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraEventScriptProperties>       EventHandlerScriptProps;                                  // 0x0190(0x0010) (Edit, ZeroConstructor)
	TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                         // 0x01A0(0x0010) (ZeroConstructor)
	class UNiagaraScript*                              GPUComputeScript;                                         // 0x01B0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SharedEventGeneratorIds;                                  // 0x01B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData07[0xD8];                                      // 0x01C8(0x00D8) MISSED OFFSET
};


// Class Niagara.NiagaraEventReceiverEmitterAction
// size:0x0000 (0x0028 - 0x0028)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:
};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// size:0x0008 (0x0028 - 0x0030)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};


// Class Niagara.NiagaraFunctionLibrary
// size:0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck)//offset:0xCCE350;
	static class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck)//offset:0xCCE070;
	static void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UVolumeTexture* Texture)//offset:0xCCDF50;
	static void SetTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture* Texture)//offset:0xCCDB70;
	static void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<struct FName> SamplingRegions)//offset:0xCCDA40;
	static void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent)//offset:0xCCD490;
	static void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh)//offset:0xCCD370;
	static void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent)//offset:0xCCD250;
	static class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection)//offset:0xCCCE80;
};


// Class Niagara.NiagaraLightRendererProperties
// size:0x0258 (0x0080 - 0x02D8)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	unsigned char                                      bUseInverseSquaredFalloff;                                // 0x0080(0x0001) (Edit)
	unsigned char                                      bAffectsTranslucency;                                     // 0x0080(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              RadiusScale;                                              // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorAdd;                                                 // 0x0088(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            LightRenderingEnabledBinding;                             // 0x0098(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            LightExponentBinding;                                     // 0x00F0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0148(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x01A0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RadiusBinding;                                            // 0x01F8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            VolumetricScatteringBinding;                              // 0x0250(0x0058) (Edit)
	unsigned char                                      UnknownData02[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET
};


// Class Niagara.NiagaraMeshRendererProperties
// size:0x05F8 (0x0080 - 0x0678)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                             // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSortMode                                   SortMode;                                                 // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	unsigned char                                      bOverrideMaterials;                                       // 0x008C(0x0001) (Edit)
	unsigned char                                      bSortOnlyWhenTranslucent;                                 // 0x008C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	TArray<struct FNiagaraMeshMaterialOverride>        OverrideMaterials;                                        // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   SubImageSize;                                             // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSubImageBlend;                                           // 0x00A8(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	ENiagaraMeshFacingMode                             FacingMode;                                               // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	unsigned char                                      bLockedAxisEnable;                                        // 0x00B0(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FVector                                     LockedAxis;                                               // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraMeshLockedAxisSpace                        LockedAxisSpace;                                          // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	struct FVector                                     PivotOffset;                                              // 0x00C4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                         // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	unsigned char                                      bEnableFrustumCulling;                                    // 0x00D4(0x0001) (Edit)
	unsigned char                                      bEnableCameraDistanceCulling;                             // 0x00D4(0x0001) (Edit)
	unsigned char                                      UnknownData07[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	float                                              MinCameraDistance;                                        // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxCameraDistance;                                        // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RendererVisibility;                                       // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x00E8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0140(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0198(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            MeshOrientationBinding;                                   // 0x01F0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ScaleBinding;                                             // 0x0248(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                     // 0x02A0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x02F8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x0350(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x03A8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x0400(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0458(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x04B0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0508(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                      // 0x0560(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RendererVisibilityTagBinding;                             // 0x05B8(0x0058) (Edit)
	unsigned char                                      UnknownData09[0x68];                                      // 0x0610(0x0068) MISSED OFFSET
};


// Class Niagara.NiagaraMessageDataBase
// size:0x0000 (0x0028 - 0x0028)
class UNiagaraMessageDataBase : public UObject
{
public:
};


// Class Niagara.NiagaraParameterCollectionInstance
// size:0x0098 (0x0028 - 0x00C0)
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*                 Collection;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    OverridenParameters;                                      // 0x0030(0x0010) (ZeroConstructor)
	struct FNiagaraParameterStore                      ParameterStorage;                                         // 0x0040(0x0078)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	void SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue)//offset:0xCCDE60;
	void SetVector4Parameter(const class FString& InVariableName, const struct FVector4& InValue)//offset:0xCCDD70;
	void SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue)//offset:0xCCDC90;
	void SetQuatParameter(const class FString& InVariableName, const struct FQuat& InValue)//offset:0xCCD950;
	void SetIntParameter(const class FString& InVariableName, int InValue)//offset:0xCCD870;
	void SetFloatParameter(const class FString& InVariableName, float InValue)//offset:0xCCD780;
	void SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue)//offset:0xCCD690;
	void SetBoolParameter(const class FString& InVariableName, bool InValue)//offset:0xCCD5B0;
	struct FVector GetVectorParameter(const class FString& InVariableName)//offset:0xCCD190;
	struct FVector4 GetVector4Parameter(const class FString& InVariableName)//offset:0xCCD0D0;
	struct FVector2D GetVector2DParameter(const class FString& InVariableName)//offset:0xCCD010;
	struct FQuat GetQuatParameter(const class FString& InVariableName)//offset:0xCCCF50;
	int GetIntParameter(const class FString& InVariableName)//offset:0xCCCDD0;
	float GetFloatParameter(const class FString& InVariableName)//offset:0xCCCD20;
	struct FLinearColor GetColorParameter(const class FString& InVariableName)//offset:0xCCCC60;
	bool GetBoolParameter(const class FString& InVariableName)//offset:0xCCCBB0;
};


// Class Niagara.NiagaraParameterCollection
// size:0x0038 (0x0028 - 0x0060)
class UNiagaraParameterCollection : public UObject
{
public:
	struct FName                                       Namespace;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0030(0x0010) (ZeroConstructor)
	class UMaterialParameterCollection*                SourceMaterialCollection;                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompileId;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraPrecompileContainer
// size:0x0018 (0x0028 - 0x0040)
class UNiagaraPrecompileContainer : public UObject
{
public:
	TArray<class UNiagaraScript*>                      Scripts;                                                  // 0x0028(0x0010) (ZeroConstructor)
	class UNiagaraSystem*                              System;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraPreviewBase
// size:0x0000 (0x0220 - 0x0220)
class ANiagaraPreviewBase : public AActor
{
public:

	void SetSystem(class UNiagaraSystem* InSystem)//offset:0x13CEB30;
	void SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText)//offset:0x13CEB30;
};


// Class Niagara.NiagaraPreviewAxis
// size:0x0000 (0x0028 - 0x0028)
class UNiagaraPreviewAxis : public UObject
{
public:

	int Num()//offset:0xCD1920;
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, class FString* OutLabelText)//offset:0xCD16D0;
};


// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// size:0x0010 (0x0028 - 0x0038)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	struct FName                                       Param;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};


// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// size:0x0008 (0x0038 - 0x0040)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int                                                Min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// size:0x0008 (0x0038 - 0x0040)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                              Min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// size:0x0010 (0x0038 - 0x0048)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                                   Min;                                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// size:0x0018 (0x0038 - 0x0050)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                                     Min;                                                      // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// size:0x0028 (0x0038 - 0x0060)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FVector4                                    Min;                                                      // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Max;                                                      // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// size:0x0020 (0x0038 - 0x0058)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                                Min;                                                      // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Max;                                                      // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Niagara.NiagaraPreviewGrid
// size:0x0050 (0x0220 - 0x0270)
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                              System;                                                   // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraPreviewGridResetMode                       ResetMode;                                                // 0x0228(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                             // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                             // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ANiagaraPreviewBase*                         PreviewClass;                                             // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingX;                                                 // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingY;                                                 // 0x024C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumX;                                                     // 0x0250(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumY;                                                     // 0x0254(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UChildActorComponent*>                PreviewComponents;                                        // 0x0258(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	void SetPaused(bool bPaused)//offset:0xCD1950;
	void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews)//offset:0xCD1870;
	void DeactivatePreviews()//offset:0xCD1850;
	void ActivatePreviews(bool bReset)//offset:0xCD1640;
};


// Class Niagara.NiagaraRibbonRendererProperties
// size:0x0758 (0x0080 - 0x07D8)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                MaterialUserParamBinding;                                 // 0x0088(0x0020) (Edit)
	ENiagaraRibbonFacingMode                           FacingMode;                                               // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	struct FNiagaraRibbonUVSettings                    UV0Settings;                                              // 0x00AC(0x0024) (Edit)
	struct FNiagaraRibbonUVSettings                    UV1Settings;                                              // 0x00D0(0x0024) (Edit)
	ENiagaraRibbonDrawDirection                        DrawDirection;                                            // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	float                                              CurveTension;                                             // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonTessellationMode                     TessellationMode;                                         // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	int                                                TessellationFactor;                                       // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantFactor;                                       // 0x0104(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	float                                              TessellationAngle;                                        // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bScreenSpaceTessellation;                                 // 0x010C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0110(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0168(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x01C0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0218(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonTwistBinding;                                       // 0x0270(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonWidthBinding;                                       // 0x02C8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonFacingBinding;                                      // 0x0320(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonIdBinding;                                          // 0x0378(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonLinkOrderBinding;                                   // 0x03D0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0428(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0480(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x04D8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0530(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x0588(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            U0OverrideBinding;                                        // 0x05E0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            V0RangeOverrideBinding;                                   // 0x0638(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            U1OverrideBinding;                                        // 0x0690(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            V1RangeOverrideBinding;                                   // 0x06E8(0x0058) (Edit)
	unsigned char                                      UnknownData05[0x98];                                      // 0x0740(0x0098) MISSED OFFSET
};


// Class Niagara.NiagaraScript
// size:0x0298 (0x0028 - 0x02C0)
class UNiagaraScript : public UNiagaraScriptBase
{
public:
	ENiagaraScriptUsage                                Usage;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                UsageIndex;                                               // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FGuid                                       UsageId;                                                  // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraParameterStore                      RapidIterationParameters;                                 // 0x0040(0x0078)
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStore;                                // 0x00B8(0x0098)
	TArray<struct FNiagaraBoundParameter>              ScriptExecutionBoundParameters;                           // 0x0150(0x0010) (ZeroConstructor)
	struct FNiagaraVMExecutableDataId                  CachedScriptVMId;                                         // 0x0160(0x0048)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01A8(0x0010) MISSED OFFSET
	struct FNiagaraVMExecutableData                    CachedScriptVM;                                           // 0x01B8(0x00E0)
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                      // 0x0298(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     CachedDefaultDataInterfaces;                              // 0x02A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET

	void RaiseOnGPUCompilationComplete()//offset:0x806320;
};


// Class Niagara.NiagaraScriptSourceBase
// size:0x0020 (0x0028 - 0x0048)
class UNiagaraScriptSourceBase : public UObject
{
public:
};


// Class Niagara.NiagaraSettings
// size:0x0088 (0x0038 - 0x00C0)
class UNiagaraSettings : public UDeveloperSettings
{
public:
	struct FSoftObjectPath                             DefaultEffectType;                                        // 0x0038(0x0018) (Edit, ZeroConstructor, Config)
	TArray<struct FText>                               QualityLevels;                                            // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	TMap<class FString, struct FText>                  ComponentRendererWarningsPerClass;                        // 0x0060(0x0050) (Edit, Config)
	TEnumAsByte<ETextureRenderTargetFormat>            DefaultRenderTargetFormat;                                // 0x00B0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	ENiagaraGpuBufferFormat                            DefaultGridFormat;                                        // 0x00B1(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	class UNiagaraEffectType*                          DefaultEffectTypePtr;                                     // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};


// Class Niagara.NiagaraSimulationStageBase
// size:0x0018 (0x0028 - 0x0040)
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
	class UNiagaraScript*                              Script;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SimulationStageName;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnabled;                                                 // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};


// Class Niagara.NiagaraSimulationStageGeneric
// size:0x0030 (0x0040 - 0x0070)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
public:
	ENiagaraIterationSource                            IterationSource;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                Iterations;                                               // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSpawnOnly;                                               // 0x0048(0x0001) (Edit)
	unsigned char                                      bDisablePartialParticleUpdate;                            // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FNiagaraVariableDataInterfaceBinding        DataInterface;                                            // 0x0050(0x0020) (Edit)
};


// Class Niagara.NiagaraSpriteRendererProperties
// size:0x0720 (0x0080 - 0x07A0)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRendererSourceDataMode                     SourceMode;                                               // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FNiagaraUserParameterBinding                MaterialUserParamBinding;                                 // 0x0090(0x0020) (Edit)
	ENiagaraSpriteAlignment                            Alignment;                                                // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSpriteFacingMode                           FacingMode;                                               // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	struct FVector2D                                   PivotInUVSpace;                                           // 0x00B4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSortMode                                   SortMode;                                                 // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	struct FVector2D                                   SubImageSize;                                             // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSubImageBlend;                                           // 0x00C8(0x0001) (Edit)
	unsigned char                                      bRemoveHMDRollInVR;                                       // 0x00C8(0x0001) (Edit)
	unsigned char                                      bSortOnlyWhenTranslucent;                                 // 0x00C8(0x0001) (Edit)
	unsigned char                                      bGpuLowLatencyTranslucency;                               // 0x00C8(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableCameraDistanceCulling;                             // 0x00D4(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	float                                              MinCameraDistance;                                        // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxCameraDistance;                                        // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RendererVisibility;                                       // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x00E8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0140(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0198(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteRotationBinding;                                    // 0x01F0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteSizeBinding;                                        // 0x0248(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteFacingBinding;                                      // 0x02A0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteAlignmentBinding;                                   // 0x02F8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                     // 0x0350(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x03A8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x0400(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0458(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x04B0(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                      // 0x0508(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            UVScaleBinding;                                           // 0x0560(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x05B8(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x0610(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0668(0x0058) (Edit)
	struct FNiagaraVariableAttributeBinding            RendererVisibilityTagBinding;                             // 0x06C0(0x0058) (Edit)
	TArray<struct FNiagaraMaterialAttributeBinding>    MaterialParameterBindings;                                // 0x0718(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData06[0x78];                                      // 0x0728(0x0078) MISSED OFFSET
};


// Class Niagara.NiagaraSystem
// size:0x0450 (0x0030 - 0x0480)
class UNiagaraSystem : public UFXSystemAsset
{
public:
	bool                                               bDumpDebugSystemInfo;                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDumpDebugEmitterInfo;                                    // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireCurrentFrameData;                                 // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
	unsigned char                                      bFixedBounds;                                             // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	class UNiagaraEffectType*                          EffectType;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideScalabilitySettings;                             // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<struct FNiagaraSystemScalabilityOverride>   ScalabilityOverrides;                                     // 0x0048(0x0010) (ZeroConstructor, Deprecated)
	struct FNiagaraSystemScalabilityOverrides          SystemScalabilityOverrides;                               // 0x0058(0x0010) (Edit)
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                           // 0x0068(0x0010) (ZeroConstructor)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                             // 0x0078(0x0010) (Edit, ZeroConstructor)
	class UNiagaraScript*                              SystemSpawnScript;                                        // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraScript*                              SystemUpdateScript;                                       // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	struct FNiagaraSystemCompiledData                  SystemCompiledData;                                       // 0x00A8(0x0218)
	struct FNiagaraUserRedirectionParameterStore       ExposedParameters;                                        // 0x02C0(0x00C8)
	struct FBox                                        FixedBounds;                                              // 0x0388(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDeactivate;                                          // 0x03A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	float                                              WarmupTime;                                               // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WarmupTickCount;                                          // 0x03AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarmupTickDelta;                                          // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                   // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	TArray<struct FName>                               UserDINamesReadInSystemScripts;                           // 0x03B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0xB8];                                      // 0x03C8(0x00B8) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
