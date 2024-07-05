#include "..\FUObjectArray.hpp"
#include "ControlRigComponentMappedComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::SceneComponent*& _Script_ControlRig::ControlRigComponentMappedComponent::get_Component() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::ControlRigComponentMappedComponent::get_ElementName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::ControlRigComponentMappedComponent::get_Direction() {
    return (void*)((uintptr_t)this + 0x11);
}
void* _Script_ControlRig::ControlRigComponentMappedComponent::get_ElementType() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigComponentMappedComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigComponentMappedComponent");
    return result;
}
