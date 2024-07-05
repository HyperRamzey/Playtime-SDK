#include "..\FUObjectArray.hpp"
#include "ControlRig.hpp"
#include "ControlRigControlActor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void _Script_ControlRig::ControlRigControlActor::set_bRefreshOnTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x230 + 0);
    *(uint8_t*)((uintptr_t)this + 0x230 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::ControlRigControlActor::get_bIsSelectable() {
    return (*(uint8_t*)((uintptr_t)this + 0x231 + 0)) & 1 != 0;
}
_Script_Engine::Actor*& _Script_ControlRig::ControlRigControlActor::get_ActorToTrack() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x220);
}
void* _Script_ControlRig::ControlRigControlActor::get_ControlRigClass() {
    return (void*)((uintptr_t)this + 0x228);
}
bool _Script_ControlRig::ControlRigControlActor::get_bRefreshOnTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x230 + 0)) & 1 != 0;
}
void _Script_ControlRig::ControlRigControlActor::set_bIsSelectable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x231 + 0);
    *(uint8_t*)((uintptr_t)this + 0x231 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInterface*& _Script_ControlRig::ControlRigControlActor::get_MaterialOverride() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x238);
}
void* _Script_ControlRig::ControlRigControlActor::get_ColorParameter() {
    return (void*)((uintptr_t)this + 0x240);
}
bool _Script_ControlRig::ControlRigControlActor::get_bCastShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x250 + 0)) & 1 != 0;
}
void _Script_ControlRig::ControlRigControlActor::set_bCastShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x250 + 0);
    *(uint8_t*)((uintptr_t)this + 0x250 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Script_ControlRig::ControlRigControlActor::get_ActorRootComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x258);
}
_Script_ControlRig::ControlRig*& _Script_ControlRig::ControlRigControlActor::get_ControlRig() {
    return *(_Script_ControlRig::ControlRig**)((uintptr_t)this + 0x260);
}
void* _Script_ControlRig::ControlRigControlActor::get_ControlNames() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Script_ControlRig::ControlRigControlActor::get_GizmoTransforms() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Script_ControlRig::ControlRigControlActor::get_Components() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Script_ControlRig::ControlRigControlActor::get_Materials() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Script_ControlRig::ControlRigControlActor::get_ColorParameterName() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigControlActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRigControlActor");
    return result;
}
void _Script_ControlRig::ControlRigControlActor::Refresh() {
    return;
}
void _Script_ControlRig::ControlRigControlActor::Clear() {
    return;
}
