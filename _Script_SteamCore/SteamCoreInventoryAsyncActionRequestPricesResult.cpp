#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreInventoryAsyncActionRequestPricesResult.hpp"
#include "SteamInventoryRequestPricesResult.hpp"
void* _Script_SteamCore::SteamCoreInventoryAsyncActionRequestPricesResult::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreInventoryAsyncActionRequestPricesResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult");
    return result;
}
_Script_SteamCore::SteamCoreInventoryAsyncActionRequestPricesResult* _Script_SteamCore::SteamCoreInventoryAsyncActionRequestPricesResult::RequestPricesAsync(_Script_CoreUObject::Object* WorldContextObject, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreInventoryAsyncActionRequestPricesResult::HandleCallback(_Script_SteamCore::SteamInventoryRequestPricesResult& Data, bool bWasSuccessful) {
    return;
}
