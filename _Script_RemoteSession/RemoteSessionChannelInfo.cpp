#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemoteSessionChannelInfo.hpp"
void* _Script_RemoteSession::RemoteSessionChannelInfo::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RemoteSession::RemoteSessionChannelInfo::get_Mode() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_RemoteSession::RemoteSessionChannelInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RemoteSession.RemoteSessionChannelInfo");
    return result;
}
