#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameInstanceSubsystem.hpp"
#include "LevelResponse.hpp"
#include "ToyBoxResponse.hpp"
#include "ToyBoxResponseItem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_VaRest {
struct VaRestRequestJSON;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct BackendSubsystem : public _Script_Engine::GameInstanceSubsystem {
    private: char pad_30[0x850]; public:
    void* get_WalletNeedsRefresh();
    void* get_InventoryNeedsRefresh();
    void* get_LevelNeedsRefresh();
    void* get_PerksNeedRefresh();
    static _Script_CoreUObject::Class* static_class();
    void SubmitMatchSummary(_Script_CoreUObject::Object* WorldContextObject, void* MatchID, void*& Results, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void SubmitMatchPenalty(_Script_CoreUObject::Object* WorldContextObject, void* MatchID, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void SetUseLocalData(bool UseLocalData);
    void PurchaseGooglePlay(_Script_CoreUObject::Object* WorldContextObject, void* ProductId, void* Token, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void PurchaseApple(_Script_CoreUObject::Object* WorldContextObject, void* OriginalTransactionID, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void OnWalletSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnWalletFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnSubmitMatchSummarySuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnSubmitMatchSummaryFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnSubmitMatchPenaltySuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnSubmitMatchPenaltyFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnShoppySuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnShoppyFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnSaleItemsSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnSaleItemsFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnRewardsSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnRewardsFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnPurchaseGooglePlaySuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnPurchaseGooglePlayFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnPurchaseAppleSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnPurchaseAppleFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnPenaltiesSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnPenaltiesFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnMigrateUserDataSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnMigrateUserDataFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnLevelSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnLevelFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnInventorySuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnInventoryFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnInitializeSteamPurchaseSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnInitializeSteamPurchaseFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnHealthCheckSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnHealthCheckFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnGetPerksSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnGetPerksFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnFinalizeSteamPurchaseSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnFinalizeSteamPurchaseFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnFeaturedPageTempSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnFeaturedPageTempFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnFeaturedPageSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnFeaturedPageFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnFeaturedItemsSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnFeaturedItemsFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnDailyRewardsSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnDailyRewardsFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnCurrentToyBoxSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnCurrentToyBoxFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnCreateUserSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnCreateUserFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnClaimItemSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnClaimItemFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnBuyToyBoxSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnBuyToyBoxFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnBuyPerkSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnBuyPerkFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnBuyLevelsSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnBuyLevelsFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnBuyItemSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnBuyItemFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void OnBundleItemsSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void OnBundleItemsFailure(_Script_VaRest::VaRestRequestJSON* Request);
    void MigrateUserDataFromSteam(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void MarkWalletCacheDirty();
    void MarkAllCachesDirty();
    void InitializeSteamPurchase(_Script_CoreUObject::Object* WorldContextObject, int32_t ProductId, void* ProductDescription, void* LanguageCode, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void GetWallet(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void GetShoppy(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void GetSaleItems(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void GetRewards(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    float GetProgressThroughCurrentLevel(_Script_Playtime_Multiplayer::LevelResponse Level);
    void GetPerks(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void GetPenalties(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void GetLevel(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    _Script_Playtime_Multiplayer::ToyBoxResponseItem GetItemAtLevel(_Script_Playtime_Multiplayer::ToyBoxResponse ToyBox, int32_t Level);
    void GetInventory(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void GetFeaturedPageItemsTemp(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void GetFeaturedPageItems(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void GetFeaturedItems(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void GetDailyRewards(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void GetCurrentToyBox(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void GetBundleItems(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void* GetAuthToken(_Script_CoreUObject::Object* WorldContextObject, bool& WasSuccessful);
    void FinalizeSteamPurchase(_Script_CoreUObject::Object* WorldContextObject, int32_t OrderId, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void DoHealthCheck(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void CreateUser(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void ClaimReward(_Script_CoreUObject::Object* WorldContextObject, int32_t ItemId, void* CorrelationID);
    void BuyToyBox(_Script_CoreUObject::Object* WorldContextObject, bool Bundle, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void BuySabotage(_Script_CoreUObject::Object* WorldContextObject, void* SabotageID, int32_t Level, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void BuyPerk(_Script_CoreUObject::Object* WorldContextObject, void* PerkID, int32_t Level, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void BuyLevels(_Script_CoreUObject::Object* WorldContextObject, int32_t Levels, void* OnSuccess, void* OnFailure, void* CorrelationID);
    void BuyItem(_Script_CoreUObject::Object* WorldContextObject, int32_t ItemId, void* Currency, void* OnSuccess, void* OnFailure, void* CorrelationID);
}; // Size: 0x880
#pragma pack(pop)
}
