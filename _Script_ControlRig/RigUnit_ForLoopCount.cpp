#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_ForLoopCount.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::RigUnit_ForLoopCount::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x6c);
}
int32_t& _Script_ControlRig::RigUnit_ForLoopCount::get_Count() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_ForLoopCount::get_Ratio() {
    return *(float*)((uintptr_t)this + 0x70);
}
bool _Script_ControlRig::RigUnit_ForLoopCount::get_Continue() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_ForLoopCount::set_Continue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_ForLoopCount::get_Completed() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ForLoopCount::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ForLoopCount");
    return result;
}
