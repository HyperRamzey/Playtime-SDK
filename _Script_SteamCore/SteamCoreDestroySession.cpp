#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreDestroySession.hpp"
void* _Script_SteamCore::SteamCoreDestroySession::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SteamCore::SteamCoreDestroySession::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreDestroySession::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreDestroySession");
    return result;
}
void _Script_SteamCore::SteamCoreDestroySession::OnCompleted(void* SessionName, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreDestroySession* _Script_SteamCore::SteamCoreDestroySession::DestroySteamCoreSession(_Script_CoreUObject::Object* WorldContextObject, float Timeout) {
    return;
}
