#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "LiveLinkComponentController.hpp"
bool _Script_LiveLinkComponents::LiveLinkComponentController::get_bDisableEvaluateLiveLinkWhenSpawnable() {
    return (*(uint8_t*)((uintptr_t)this + 0x150 + 0)) & 1 != 0;
}
void* _Script_LiveLinkComponents::LiveLinkComponentController::get_SubjectRepresentation() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_LiveLinkComponents::LiveLinkComponentController::get_ControllerMap() {
    return (void*)((uintptr_t)this + 0xc0);
}
bool _Script_LiveLinkComponents::LiveLinkComponentController::get_bUpdateInEditor() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_LiveLinkComponents::LiveLinkComponentController::set_bUpdateInEditor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_LiveLinkComponents::LiveLinkComponentController::set_bDisableEvaluateLiveLinkWhenSpawnable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150 + 0);
    *(uint8_t*)((uintptr_t)this + 0x150 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_LiveLinkComponents::LiveLinkComponentController::get_OnLiveLinkUpdated() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_LiveLinkComponents::LiveLinkComponentController::get_ComponentToControl() {
    return (void*)((uintptr_t)this + 0x128);
}
bool _Script_LiveLinkComponents::LiveLinkComponentController::get_bEvaluateLiveLink() {
    return (*(uint8_t*)((uintptr_t)this + 0x151 + 0)) & 1 != 0;
}
void _Script_LiveLinkComponents::LiveLinkComponentController::set_bEvaluateLiveLink(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x151 + 0);
    *(uint8_t*)((uintptr_t)this + 0x151 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_LiveLinkComponents::LiveLinkComponentController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkComponents.LiveLinkComponentController");
    return result;
}
