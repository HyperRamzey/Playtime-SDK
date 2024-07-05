#include "..\FUObjectArray.hpp"
#include "..\_Script_AdvancedSessions\BPUniqueNetId.hpp"
#include "SteamRequestGroupOfficersCallbackProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
void* _Script_AdvancedSteamSessions::SteamRequestGroupOfficersCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AdvancedSteamSessions::SteamRequestGroupOfficersCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_AdvancedSteamSessions::SteamRequestGroupOfficersCallbackProxy* _Script_AdvancedSteamSessions::SteamRequestGroupOfficersCallbackProxy::GetSteamGroupOfficerList(_Script_CoreUObject::Object* WorldContextObject, _Script_AdvancedSessions::BPUniqueNetId GroupUniqueNetID) {
    return;
}
_Script_CoreUObject::Class* _Script_AdvancedSteamSessions::SteamRequestGroupOfficersCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy");
    return result;
}
