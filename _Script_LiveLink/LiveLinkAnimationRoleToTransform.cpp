#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkAnimationRoleToTransform.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkFrameTranslator.hpp"
void* _Script_LiveLink::LiveLinkAnimationRoleToTransform::get_BoneName() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkAnimationRoleToTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkAnimationRoleToTransform");
    return result;
}
