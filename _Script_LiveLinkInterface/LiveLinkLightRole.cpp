#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkLightRole.hpp"
#include "LiveLinkTransformRole.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkLightRole::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkInterface.LiveLinkLightRole");
    return result;
}
