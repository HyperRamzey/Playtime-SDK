#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.hpp"
#include "SteamID.hpp"
#include "SteamInventoryEligiblePromoItemDefIDs.hpp"
void* _Script_SteamCore::SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs");
    return result;
}
_Script_SteamCore::SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* _Script_SteamCore::SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::RequestEligiblePromoItemDefinitionsIDsAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamID SteamID, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::HandleCallback(_Script_SteamCore::SteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful) {
    return;
}
