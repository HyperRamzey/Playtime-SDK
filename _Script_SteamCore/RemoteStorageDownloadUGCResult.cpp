#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemoteStorageDownloadUGCResult.hpp"
void* _Script_SteamCore::RemoteStorageDownloadUGCResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::RemoteStorageDownloadUGCResult::get_Filename() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_SteamCore::RemoteStorageDownloadUGCResult::get_FileHandle() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::RemoteStorageDownloadUGCResult::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_SteamCore::RemoteStorageDownloadUGCResult::get_SteamIDOwner() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_SteamCore::RemoteStorageDownloadUGCResult::get_SizeInBytes() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_SteamCore::RemoteStorageDownloadUGCResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RemoteStorageDownloadUGCResult");
    return result;
}
