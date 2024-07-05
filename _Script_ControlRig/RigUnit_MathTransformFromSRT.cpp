#include "..\FUObjectArray.hpp"
#include "RigUnit_MathTransformBase.hpp"
#include "RigUnit_MathTransformFromSRT.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathTransformFromSRT::get_Transform() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigUnit_MathTransformFromSRT::get_Location() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathTransformFromSRT::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathTransformFromSRT");
    return result;
}
void* _Script_ControlRig::RigUnit_MathTransformFromSRT::get_Rotation() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_MathTransformFromSRT::get_RotationOrder() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_MathTransformFromSRT::get_Scale() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_ControlRig::RigUnit_MathTransformFromSRT::get_EulerTransform() {
    return (void*)((uintptr_t)this + 0x60);
}
