#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_ApplyFK.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ApplyFK::get_Joint() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ApplyFK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ApplyFK");
    return result;
}
void* _Script_ControlRig::RigUnit_ApplyFK::get_Transform() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_ApplyFK::get_BaseTransform() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_ControlRig::RigUnit_ApplyFK::get_Filter() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_ApplyFK::get_ApplyTransformMode() {
    return (void*)((uintptr_t)this + 0xa9);
}
void* _Script_ControlRig::RigUnit_ApplyFK::get_BaseJoint() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_ControlRig::RigUnit_ApplyFK::get_ApplyTransformSpace() {
    return (void*)((uintptr_t)this + 0xaa);
}
