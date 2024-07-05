#include "..\FUObjectArray.hpp"
#include "BPSteamWorkshopID.hpp"
#include "SteamWSRequestUGCDetailsCallbackProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
void* _Script_AdvancedSteamSessions::SteamWSRequestUGCDetailsCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AdvancedSteamSessions::SteamWSRequestUGCDetailsCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AdvancedSteamSessions::SteamWSRequestUGCDetailsCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy");
    return result;
}
_Script_AdvancedSteamSessions::SteamWSRequestUGCDetailsCallbackProxy* _Script_AdvancedSteamSessions::SteamWSRequestUGCDetailsCallbackProxy::GetWorkshopItemDetails(_Script_CoreUObject::Object* WorldContextObject, _Script_AdvancedSteamSessions::BPSteamWorkshopID WorkShopID) {
    return;
}
