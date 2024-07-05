#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Base_PlaytimeAPILibrary {
#pragma pack(push, 1)
struct PlaytimeAPILibrary_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* GenerateUniqueID(_Script_CoreUObject::Object* __WorldContext);
    void* GetAlphaCharacter(_Script_CoreUObject::Object* __WorldContext);
    void* FormatDateTime(_Script_CoreUObject::DateTime DateTime, bool HumanReadable, bool IncludeTime, _Script_CoreUObject::Object* __WorldContext);
    void Refresh_Ownership_Of_Toy_Box(_Script_CoreUObject::Object* __WorldContext);
    void GetRewardedItemsFromTransactionsResponse(void* TransactionsResponse, _Script_CoreUObject::Object* __WorldContext, void*& AwardedItems);
    void HandleRewardsSuccess(void*& Rewards, _Script_CoreUObject::Object* Sender, _Script_CoreUObject::Object* __WorldContext);
    void RefreshTierDisplay(_Script_CoreUObject::Object* __WorldContext);
    void Refresh_Currency_Display(bool Silent, _Script_CoreUObject::Object* __WorldContext);
    void PostCharge__Exchange_Coins_for_XP_(int32_t CoinsToExchangeForXP, void*& Success, void*& Failure, _Script_CoreUObject::Object* __WorldContext);
    void Get_Rewarded_Items_from_Points_Response(void* PointsResponse, _Script_CoreUObject::Object* __WorldContext, void*& RewardedItemDefIds);
}; // Size: 0x28
#pragma pack(pop)
}
