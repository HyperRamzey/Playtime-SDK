#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetRelativeBoneTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_GetRelativeBoneTransform::get_Bone() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetRelativeBoneTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetRelativeBoneTransform");
    return result;
}
void* _Script_ControlRig::RigUnit_GetRelativeBoneTransform::get_Space() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_GetRelativeBoneTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_GetRelativeBoneTransform::get_CachedBone() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_ControlRig::RigUnit_GetRelativeBoneTransform::get_CachedSpace() {
    return (void*)((uintptr_t)this + 0x64);
}
