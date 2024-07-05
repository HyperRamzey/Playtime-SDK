#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemoteStorageFileShareResult.hpp"
void* _Script_SteamCore::RemoteStorageFileShareResult::get_Filename() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SteamCore::RemoteStorageFileShareResult::get_File() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::RemoteStorageFileShareResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::RemoteStorageFileShareResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RemoteStorageFileShareResult");
    return result;
}
