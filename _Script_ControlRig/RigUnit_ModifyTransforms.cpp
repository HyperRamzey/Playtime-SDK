#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "RigUnit_ModifyTransforms.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_ModifyTransforms::get_WeightMinimum() {
    return *(float*)((uintptr_t)this + 0x7c);
}
void* _Script_ControlRig::RigUnit_ModifyTransforms::get_ItemToModify() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_ModifyTransforms::get_Weight() {
    return *(float*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ModifyTransforms::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ModifyTransforms");
    return result;
}
float& _Script_ControlRig::RigUnit_ModifyTransforms::get_WeightMaximum() {
    return *(float*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_ModifyTransforms::get_Mode() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_ControlRig::RigUnit_ModifyTransforms::get_WorkData() {
    return (void*)((uintptr_t)this + 0x88);
}
