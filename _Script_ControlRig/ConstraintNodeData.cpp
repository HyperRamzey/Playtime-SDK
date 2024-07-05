#include "..\FUObjectArray.hpp"
#include "ConstraintNodeData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::ConstraintNodeData::get_Constraints() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_ControlRig::ConstraintNodeData::get_RelativeParent() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::ConstraintNodeData::get_ConstraintOffset() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::ConstraintNodeData::get_LinkedNode() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_ControlRig::ConstraintNodeData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ConstraintNodeData");
    return result;
}
