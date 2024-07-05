#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkAnimationAxisSwitchPreProcessor.hpp"
#include "LiveLinkTransformAxisSwitchPreProcessor.hpp"
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkAnimationAxisSwitchPreProcessor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor");
    return result;
}
