                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_StorageTrunk_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StorageTrunk.BP_StorageTrunk_C
// size:0x0069 (0x0220 - 0x0289)
class ABP_StorageTrunk_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDH_CraftingComponent*                       SearchComponent;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavModifierComponent*                       NavModifier;                                              // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ColorMask;                                                // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_InventoryManager*                        Storage;                                                  // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OpenAnimationSpeed;                                       // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloseAnimationSpeed;                                      // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       FriendlyName;                                             // 0x0258(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UDH_DropTable*                               DropTable;                                                // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StorageLimit;                                             // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClearOnSearch;                                           // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x027D(0x0003) MISSED OFFSET
	class UDH_DropTable*                               ThrallDropTable;                                          // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSearched;                                                // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void GetLinearColorDelta(float Distance, struct FLinearColor* PrimaryLinearColorDelta, struct FLinearColor* SecondaryLinearColorData)//offset:0x13CEB30;
	TArray<class UDH_ColorMaskComponent*> GetColorMaskComponents()//offset:0x13CEB30;
	class UDH_ColorMaskComponent* GetColorMaskComponent(class UActorComponent* TargetActorComponent)//offset:0x13CEB30;
	struct FText GetInteractFailedMessage(class AController* InteractInstigator)//offset:0x13CEB30;
	struct FText GetFriendlyName()//offset:0x13CEB30;
	struct FDH_KeybindInteractionMessage GetKeybindInteractText(class AController* InteractInstigator)//offset:0x13CEB30;
	bool CanBeInteractedWithThroughWalls()//offset:0x13CEB30;
	bool OnInteract(class AController* InteractInstigator, int SlotIndex, class UPrimitiveComponent* TargetComponent)//offset:0x13CEB30;
	bool UsePreciseInteractions(class UPrimitiveComponent* TargetComponent)//offset:0x13CEB30;
	unsigned char GetInteractPriority(class AController* InteractInstigator, class UPrimitiveComponent* TargetComponent)//offset:0x13CEB30;
	float GetInteractTime(class AController* InteractInstigator)//offset:0x13CEB30;
	struct FDH_InteractPermissions CanBeInteractedWith(class AController* InteractInstigator, class UPrimitiveComponent* TargetComponent)//offset:0x13CEB30;
	void OnSearched()//offset:0x13CEB30;
	void UserConstructionScript()//offset:0x13CEB30;
	void OnStorageClosed(class UDH_InventoryManager* OtherInventory)//offset:0x13CEB30;
	void OnStorageOpened(class UDH_InventoryManager* OtherInventory)//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void BndEvt__SearchComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature(class UDH_CraftingProject* Project)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_StorageTrunk(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
