#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemoteStorageFileWriteAsyncComplete.hpp"
void* _Script_SteamCore::RemoteStorageFileWriteAsyncComplete::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::RemoteStorageFileWriteAsyncComplete::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RemoteStorageFileWriteAsyncComplete");
    return result;
}
