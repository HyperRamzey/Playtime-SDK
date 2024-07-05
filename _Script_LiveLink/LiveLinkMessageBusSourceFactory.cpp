#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkMessageBusSourceFactory.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSourceFactory.hpp"
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkMessageBusSourceFactory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkMessageBusSourceFactory");
    return result;
}
