#include "..\FUObjectArray.hpp"
#include "ControlRigComponentMappedElement.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Script_ControlRig::ControlRigComponentMappedElement::get_ComponentReference() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::ControlRigComponentMappedElement::get_ElementName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_ControlRig::ControlRigComponentMappedElement::get_ElementType() {
    return (void*)((uintptr_t)this + 0x34);
}
int32_t& _Script_ControlRig::ControlRigComponentMappedElement::get_TransformIndex() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_ControlRig::ControlRigComponentMappedElement::get_Space() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_ControlRig::ControlRigComponentMappedElement::get_TransformName() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_ControlRig::ControlRigComponentMappedElement::get_Direction() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_ControlRig::ControlRigComponentMappedElement::get_Weight() {
    return *(float*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::ControlRigComponentMappedElement::get_Offset() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_Engine::SceneComponent*& _Script_ControlRig::ControlRigComponentMappedElement::get_SceneComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x88);
}
int32_t& _Script_ControlRig::ControlRigComponentMappedElement::get_ElementIndex() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
int32_t& _Script_ControlRig::ControlRigComponentMappedElement::get_SubIndex() {
    return *(int32_t*)((uintptr_t)this + 0x94);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigComponentMappedElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigComponentMappedElement");
    return result;
}
