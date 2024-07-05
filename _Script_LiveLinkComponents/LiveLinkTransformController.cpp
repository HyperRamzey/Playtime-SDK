#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkControllerBase.hpp"
#include "LiveLinkTransformController.hpp"
void* _Script_LiveLinkComponents::LiveLinkTransformController::get_TransformData() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_LiveLinkComponents::LiveLinkTransformController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkComponents.LiveLinkTransformController");
    return result;
}
