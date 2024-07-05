#include "..\FUObjectArray.hpp"
#include "RigUnit_MathTransformBase.hpp"
#include "RigUnit_MathTransformMakeRelative.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathTransformMakeRelative::get_Global() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_MathTransformMakeRelative::get_Parent() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_MathTransformMakeRelative::get_Local() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathTransformMakeRelative::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathTransformMakeRelative");
    return result;
}
