#include "..\FUObjectArray.hpp"
#include "AnimNode_ControlRigBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_CustomProperty.hpp"
void* _Script_ControlRig::AnimNode_ControlRigBase::get_Source() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_ControlRig::AnimNode_ControlRigBase::get_bExecute() {
    return (*(uint8_t*)((uintptr_t)this + 0x164 + 0)) & 1 != 0;
}
void* _Script_ControlRig::AnimNode_ControlRigBase::get_ControlRigBoneMapping() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::AnimNode_ControlRigBase::get_OutputSettings() {
    return (void*)((uintptr_t)this + 0x162);
}
void* _Script_ControlRig::AnimNode_ControlRigBase::get_ControlRigCurveMapping() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_ControlRig::AnimNode_ControlRigBase::get_InputToCurveMappingUIDs() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_ControlRig::AnimNode_ControlRigBase::get_NodeMappingContainer() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_ControlRig::AnimNode_ControlRigBase::get_InputSettings() {
    return (void*)((uintptr_t)this + 0x160);
}
void _Script_ControlRig::AnimNode_ControlRigBase::set_bExecute(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x164 + 0);
    *(uint8_t*)((uintptr_t)this + 0x164 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::AnimNode_ControlRigBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.AnimNode_ControlRigBase");
    return result;
}
