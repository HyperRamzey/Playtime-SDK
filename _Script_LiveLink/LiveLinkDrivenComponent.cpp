#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "LiveLinkDrivenComponent.hpp"
void* _Script_LiveLink::LiveLinkDrivenComponent::get_SubjectName() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_LiveLink::LiveLinkDrivenComponent::get_ActorTransformBone() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_LiveLink::LiveLinkDrivenComponent::get_bSetRelativeLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0xc1 + 0)) & 1 != 0;
}
bool _Script_LiveLink::LiveLinkDrivenComponent::get_bModifyActorTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkDrivenComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkDrivenComponent");
    return result;
}
void _Script_LiveLink::LiveLinkDrivenComponent::set_bModifyActorTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_LiveLink::LiveLinkDrivenComponent::set_bSetRelativeLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
