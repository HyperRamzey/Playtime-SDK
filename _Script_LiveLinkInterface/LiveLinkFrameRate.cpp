#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "LiveLinkFrameRate.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkFrameRate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkFrameRate");
    return result;
}
