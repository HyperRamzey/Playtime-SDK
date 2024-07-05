#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionIsPlayingSharedGame.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionIsPlayingSharedGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionIsPlayingSharedGame* _Script_SteamCoreWeb::SteamCoreWebAsyncActionIsPlayingSharedGame::IsPlayingSharedGameAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppIdPlaying) {
    return;
}
