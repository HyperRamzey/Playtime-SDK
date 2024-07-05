#include "..\FUObjectArray.hpp"
#include "RigUnit_MathIntersectPlane.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_MathIntersectPlane::get_Distance() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Script_ControlRig::RigUnit_MathIntersectPlane::get_Start() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathIntersectPlane::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathIntersectPlane");
    return result;
}
void* _Script_ControlRig::RigUnit_MathIntersectPlane::get_Direction() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_MathIntersectPlane::get_PlanePoint() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_MathIntersectPlane::get_PlaneNormal() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_ControlRig::RigUnit_MathIntersectPlane::get_Result() {
    return (void*)((uintptr_t)this + 0x38);
}
