#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LiveLinkFrameInterpolationProcessor.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkFrameInterpolationProcessor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkInterface.LiveLinkFrameInterpolationProcessor");
    return result;
}
