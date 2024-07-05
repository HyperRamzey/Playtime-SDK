#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemoteStorageFileReadAsyncComplete.hpp"
void* _Script_SteamCore::RemoteStorageFileReadAsyncComplete::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::RemoteStorageFileReadAsyncComplete::get_Read() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::RemoteStorageFileReadAsyncComplete::get_Offset() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_SteamCore::RemoteStorageFileReadAsyncComplete::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RemoteStorageFileReadAsyncComplete");
    return result;
}
