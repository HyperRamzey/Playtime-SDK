#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LiveLinkFramePreProcessor.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkFramePreProcessor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkInterface.LiveLinkFramePreProcessor");
    return result;
}
