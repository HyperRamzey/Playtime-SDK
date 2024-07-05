#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionHistoryExecuteCommand.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionHistoryExecuteCommand::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionHistoryExecuteCommand* _Script_SteamCoreWeb::SteamCoreWebAsyncActionHistoryExecuteCommand::HistoryExecuteCommandAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* SteamID, void* ContextId, int32_t ActorId) {
    return;
}
