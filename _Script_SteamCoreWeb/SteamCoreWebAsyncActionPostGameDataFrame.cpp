#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionPostGameDataFrame.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionPostGameDataFrame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionPostGameDataFrame* _Script_SteamCoreWeb::SteamCoreWebAsyncActionPostGameDataFrame::PostGameDataFrameAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* SteamID, void* BroadcastId, void* FrameData) {
    return;
}
