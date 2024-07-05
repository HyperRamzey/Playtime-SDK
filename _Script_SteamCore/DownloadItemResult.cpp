#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DownloadItemResult.hpp"
int32_t& _Script_SteamCore::DownloadItemResult::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::DownloadItemResult::get_Result() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SteamCore::DownloadItemResult::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::DownloadItemResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.DownloadItemResult");
    return result;
}
