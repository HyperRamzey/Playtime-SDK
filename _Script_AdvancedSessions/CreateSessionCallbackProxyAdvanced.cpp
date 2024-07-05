#include "..\FUObjectArray.hpp"
#include "CreateSessionCallbackProxyAdvanced.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
void* _Script_AdvancedSessions::CreateSessionCallbackProxyAdvanced::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_AdvancedSessions::CreateSessionCallbackProxyAdvanced* _Script_AdvancedSessions::CreateSessionCallbackProxyAdvanced::CreateAdvancedSession(_Script_CoreUObject::Object* WorldContextObject, void*& ExtraSettings, _Script_Engine::PlayerController* PlayerController, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise) {
    return;
}
void* _Script_AdvancedSessions::CreateSessionCallbackProxyAdvanced::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::CreateSessionCallbackProxyAdvanced::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.CreateSessionCallbackProxyAdvanced");
    return result;
}
