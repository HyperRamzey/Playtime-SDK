#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_MapRange_Float.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_MapRange_Float::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_MapRange_Float::get_MinIn() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_MapRange_Float::get_MaxIn() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_MapRange_Float::get_MaxOut() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_MapRange_Float::get_MinOut() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MapRange_Float::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MapRange_Float");
    return result;
}
float& _Script_ControlRig::RigUnit_MapRange_Float::get_Result() {
    return *(float*)((uintptr_t)this + 0x1c);
}
