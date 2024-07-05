#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkPingMessage.hpp"
void* _Script_LiveLinkMessageBusFramework::LiveLinkPingMessage::get_PollRequest() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_LiveLinkMessageBusFramework::LiveLinkPingMessage::get_LiveLinkVersion() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_LiveLinkMessageBusFramework::LiveLinkPingMessage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkMessageBusFramework.LiveLinkPingMessage");
    return result;
}
