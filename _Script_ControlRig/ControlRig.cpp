#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimationCore\AnimationDataSourceRegistry.hpp"
#include "ControlRig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_RigVM\RigVM.hpp"
_Script_AnimationCore::AnimationDataSourceRegistry*& _Script_ControlRig::ControlRig::get_DataSourceRegistry() {
    return *(_Script_AnimationCore::AnimationDataSourceRegistry**)((uintptr_t)this + 0x4c0);
}
void* _Script_ControlRig::ControlRig::get_ExecutionType() {
    return (void*)((uintptr_t)this + 0x45);
}
_Script_RigVM::RigVM*& _Script_ControlRig::ControlRig::get_VM() {
    return *(_Script_RigVM::RigVM**)((uintptr_t)this + 0x48);
}
void* _Script_ControlRig::ControlRig::get_DrawContainer() {
    return (void*)((uintptr_t)this + 0x490);
}
void* _Script_ControlRig::ControlRig::get_OutputProperties() {
    return (void*)((uintptr_t)this + 0x440);
}
void* _Script_ControlRig::ControlRig::get_Hierarchy() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_ControlRig::ControlRig::get_GizmoLibrary() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void* _Script_ControlRig::ControlRig::get_InputProperties() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void* _Script_ControlRig::ControlRig::get_EventQueue() {
    return (void*)((uintptr_t)this + 0x4c8);
}
void* _Script_ControlRig::ControlRig::get_Influences() {
    return (void*)((uintptr_t)this + 0x550);
}
_Script_ControlRig::ControlRig*& _Script_ControlRig::ControlRig::get_InteractionRig() {
    return *(_Script_ControlRig::ControlRig**)((uintptr_t)this + 0x5b0);
}
void* _Script_ControlRig::ControlRig::get_InteractionRigClass() {
    return (void*)((uintptr_t)this + 0x5b8);
}
void* _Script_ControlRig::ControlRig::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x5c0);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRig");
    return result;
}
void _Script_ControlRig::ControlRig::SetInteractionRigClass(void* InInteractionRigClass) {
    return;
}
void _Script_ControlRig::ControlRig::SetInteractionRig(_Script_ControlRig::ControlRig* InInteractionRig) {
    return;
}
void* _Script_ControlRig::ControlRig::GetInteractionRigClass() {
    return;
}
_Script_ControlRig::ControlRig* _Script_ControlRig::ControlRig::GetInteractionRig() {
    return;
}
