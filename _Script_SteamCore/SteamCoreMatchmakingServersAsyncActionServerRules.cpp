#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreMatchmakingServersAsyncActionServerRules.hpp"
void* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionServerRules::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionServerRules::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules");
    return result;
}
_Script_SteamCore::SteamCoreMatchmakingServersAsyncActionServerRules* _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionServerRules::ServerRulesAsync(_Script_CoreUObject::Object* WorldContextObject, void* IP, int32_t QueryPort, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreMatchmakingServersAsyncActionServerRules::HandleCallback(void*& Data, bool bWasSuccessful) {
    return;
}
