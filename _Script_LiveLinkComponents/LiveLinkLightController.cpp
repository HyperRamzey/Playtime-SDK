#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkControllerBase.hpp"
#include "LiveLinkLightController.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkComponents::LiveLinkLightController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkComponents.LiveLinkLightController");
    return result;
}
