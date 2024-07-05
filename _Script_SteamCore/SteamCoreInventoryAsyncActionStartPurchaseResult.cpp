#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreInventoryAsyncActionStartPurchaseResult.hpp"
#include "SteamInventoryStartPurchaseResult.hpp"
void* _Script_SteamCore::SteamCoreInventoryAsyncActionStartPurchaseResult::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_SteamCore::SteamCoreInventoryAsyncActionStartPurchaseResult::HandleCallback(_Script_SteamCore::SteamInventoryStartPurchaseResult& Data, bool bWasSuccessful) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreInventoryAsyncActionStartPurchaseResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult");
    return result;
}
_Script_SteamCore::SteamCoreInventoryAsyncActionStartPurchaseResult* _Script_SteamCore::SteamCoreInventoryAsyncActionStartPurchaseResult::StartPurchaseAsync(_Script_CoreUObject::Object* WorldContextObject, void* ItemDefs, void* Quantity, float Timeout) {
    return;
}
