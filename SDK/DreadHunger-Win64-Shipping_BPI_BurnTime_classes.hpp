                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BPI_BurnTime_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_BurnTime.BPI_BurnTime_C
// size:0x0000 (0x0028 - 0x0028)
class UBPI_BurnTime_C : public UInterface
{
public:

	TArray<EInventoryType> GetBurnTypes()//offset:0x13CEB30;
	struct FText GetName()//offset:0x13CEB30;
	bool GetBurnTime(EInventoryType Type, float* BurnTime)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
