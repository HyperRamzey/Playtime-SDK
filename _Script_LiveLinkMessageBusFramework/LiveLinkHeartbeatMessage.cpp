#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkHeartbeatMessage.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkMessageBusFramework::LiveLinkHeartbeatMessage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage");
    return result;
}
