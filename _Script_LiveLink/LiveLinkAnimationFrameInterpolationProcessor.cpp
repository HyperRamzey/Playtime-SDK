#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkAnimationFrameInterpolationProcessor.hpp"
#include "LiveLinkBasicFrameInterpolationProcessor.hpp"
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkAnimationFrameInterpolationProcessor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor");
    return result;
}
