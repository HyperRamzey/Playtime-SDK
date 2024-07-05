#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "FileDetailsResult.hpp"
#include "SteamCoreAppsAsyncActionGetFileDetails.hpp"
#include "SteamCoreAsyncAction.hpp"
void* _Script_SteamCore::SteamCoreAppsAsyncActionGetFileDetails::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreAppsAsyncActionGetFileDetails::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreAppsAsyncActionGetFileDetails");
    return result;
}
void _Script_SteamCore::SteamCoreAppsAsyncActionGetFileDetails::HandleCallback(_Script_SteamCore::FileDetailsResult& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreAppsAsyncActionGetFileDetails* _Script_SteamCore::SteamCoreAppsAsyncActionGetFileDetails::GetFileDetailsAsync(_Script_CoreUObject::Object* WorldContextObject, void* Filename, float Timeout) {
    return;
}
