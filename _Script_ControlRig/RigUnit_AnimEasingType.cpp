#include "..\FUObjectArray.hpp"
#include "RigUnit_AnimBase.hpp"
#include "RigUnit_AnimEasingType.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_AnimEasingType::get_Type() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AnimEasingType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AnimEasingType");
    return result;
}
