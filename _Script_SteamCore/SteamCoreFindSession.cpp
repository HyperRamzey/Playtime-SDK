#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreFindSession.hpp"
_Script_SteamCore::SteamCoreFindSession* _Script_SteamCore::SteamCoreFindSession::FindSteamCoreSessions(_Script_CoreUObject::Object* WorldContextObject, void* SearchSettings, int32_t MaxResults, bool bUseLAN, void* ServerType, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout) {
    return;
}
void* _Script_SteamCore::SteamCoreFindSession::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreFindSession::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreFindSession");
    return result;
}
void _Script_SteamCore::SteamCoreFindSession::OnCompleted(bool bSuccessful) {
    return;
}
