#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebGameInventory.hpp"
void _Script_SteamCoreWeb::WebGameInventory::UpdateItemDefs() {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebGameInventory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebGameInventory");
    return result;
}
void _Script_SteamCoreWeb::WebGameInventory::SupportGetAssetHistory(void*& Callback, void* Key, int32_t AppID, void* AssetId, void* ContextId) {
    return;
}
void _Script_SteamCoreWeb::WebGameInventory::HistoryExecuteCommands(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* ContextId, int32_t ActorId) {
    return;
}
void _Script_SteamCoreWeb::WebGameInventory::GetUserHistory(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* ContextId, int32_t StartTime, int32_t EndTime) {
    return;
}
void _Script_SteamCoreWeb::WebGameInventory::GetHistoryCommandDetails(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* Command, void* ContextId, void* Arguments) {
    return;
}
