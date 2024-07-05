#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\GameInstanceSubsystem.hpp"
#include "BackendSubsystem.hpp"
#include "LevelResponse.hpp"
#include "ToyBoxResponse.hpp"
#include "ToyBoxResponseItem.hpp"
#include "..\_Script_VaRest\VaRestRequestJSON.hpp"
void _Script_Playtime_Multiplayer::BackendSubsystem::SetUseLocalData(bool UseLocalData) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnBuyItemSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::SubmitMatchSummary(_Script_CoreUObject::Object* WorldContextObject, void* MatchID, void*& Results, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnInitializeSteamPurchaseSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::BackendSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.BackendSubsystem");
    return result;
}
void* _Script_Playtime_Multiplayer::BackendSubsystem::get_WalletNeedsRefresh() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnFeaturedItemsSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void* _Script_Playtime_Multiplayer::BackendSubsystem::get_InventoryNeedsRefresh() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnFinalizeSteamPurchaseSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void* _Script_Playtime_Multiplayer::BackendSubsystem::get_LevelNeedsRefresh() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Playtime_Multiplayer::BackendSubsystem::get_PerksNeedRefresh() {
    return (void*)((uintptr_t)this + 0x80);
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnBuyPerkSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnPurchaseAppleFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::SubmitMatchPenalty(_Script_CoreUObject::Object* WorldContextObject, void* MatchID, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetBundleItems(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::PurchaseGooglePlay(_Script_CoreUObject::Object* WorldContextObject, void* ProductId, void* Token, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnMigrateUserDataFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnPurchaseGooglePlaySuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::PurchaseApple(_Script_CoreUObject::Object* WorldContextObject, void* OriginalTransactionID, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnBuyToyBoxSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnCreateUserSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnWalletSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnHealthCheckFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnWalletFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnSubmitMatchSummarySuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnSubmitMatchSummaryFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnClaimItemFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnSubmitMatchPenaltySuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnSubmitMatchPenaltyFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnInventorySuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnShoppySuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnShoppyFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnSaleItemsSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnSaleItemsFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::BuyPerk(_Script_CoreUObject::Object* WorldContextObject, void* PerkID, int32_t Level, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnRewardsSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnRewardsFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnFeaturedPageFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnPurchaseGooglePlayFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnPurchaseAppleSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnFeaturedPageTempFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnPenaltiesSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnPenaltiesFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnInventoryFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnMigrateUserDataSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnLevelSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnCreateUserFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnLevelFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnCurrentToyBoxSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnInitializeSteamPurchaseFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnHealthCheckSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::CreateUser(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnGetPerksSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnGetPerksFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnFinalizeSteamPurchaseFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnFeaturedPageTempSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnFeaturedPageSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnBuyLevelsSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnFeaturedItemsFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnDailyRewardsSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnDailyRewardsFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnCurrentToyBoxFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnClaimItemSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnBuyToyBoxFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnBuyPerkFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnBuyLevelsFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnBuyItemFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnBundleItemsSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::OnBundleItemsFailure(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::MigrateUserDataFromSteam(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::MarkWalletCacheDirty() {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::MarkAllCachesDirty() {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::InitializeSteamPurchase(_Script_CoreUObject::Object* WorldContextObject, int32_t ProductId, void* ProductDescription, void* LanguageCode, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetWallet(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetShoppy(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetSaleItems(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetRewards(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
float _Script_Playtime_Multiplayer::BackendSubsystem::GetProgressThroughCurrentLevel(_Script_Playtime_Multiplayer::LevelResponse Level) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetPerks(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetPenalties(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetLevel(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
_Script_Playtime_Multiplayer::ToyBoxResponseItem _Script_Playtime_Multiplayer::BackendSubsystem::GetItemAtLevel(_Script_Playtime_Multiplayer::ToyBoxResponse ToyBox, int32_t Level) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetInventory(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetFeaturedPageItemsTemp(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetFeaturedPageItems(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetFeaturedItems(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetDailyRewards(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::GetCurrentToyBox(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void* _Script_Playtime_Multiplayer::BackendSubsystem::GetAuthToken(_Script_CoreUObject::Object* WorldContextObject, bool& WasSuccessful) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::FinalizeSteamPurchase(_Script_CoreUObject::Object* WorldContextObject, int32_t OrderId, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::DoHealthCheck(_Script_CoreUObject::Object* WorldContextObject, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::ClaimReward(_Script_CoreUObject::Object* WorldContextObject, int32_t ItemId, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::BuyToyBox(_Script_CoreUObject::Object* WorldContextObject, bool Bundle, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::BuySabotage(_Script_CoreUObject::Object* WorldContextObject, void* SabotageID, int32_t Level, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::BuyLevels(_Script_CoreUObject::Object* WorldContextObject, int32_t Levels, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
void _Script_Playtime_Multiplayer::BackendSubsystem::BuyItem(_Script_CoreUObject::Object* WorldContextObject, int32_t ItemId, void* Currency, void* OnSuccess, void* OnFailure, void* CorrelationID) {
    return;
}
