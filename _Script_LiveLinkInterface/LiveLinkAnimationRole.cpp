#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkAnimationRole.hpp"
#include "LiveLinkBasicRole.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkAnimationRole::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkInterface.LiveLinkAnimationRole");
    return result;
}
