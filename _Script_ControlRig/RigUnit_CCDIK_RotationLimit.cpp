#include "..\FUObjectArray.hpp"
#include "RigUnit_CCDIK_RotationLimit.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_CCDIK_RotationLimit::get_Bone() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_ControlRig::RigUnit_CCDIK_RotationLimit::get_Limit() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_CCDIK_RotationLimit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_CCDIK_RotationLimit");
    return result;
}
