#include "..\FUObjectArray.hpp"
#include "RigUnit_CollectionBaseMutable.hpp"
#include "RigUnit_CollectionLoop.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ControlRig::RigUnit_CollectionLoop::set_Continue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_CollectionLoop::get_Continue() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_CollectionLoop::get_Collection() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_CollectionLoop::get_Item() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_CollectionLoop::get_Completed() {
    return (void*)((uintptr_t)this + 0x98);
}
int32_t& _Script_ControlRig::RigUnit_CollectionLoop::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
int32_t& _Script_ControlRig::RigUnit_CollectionLoop::get_Count() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
float& _Script_ControlRig::RigUnit_CollectionLoop::get_Ratio() {
    return *(float*)((uintptr_t)this + 0x8c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_CollectionLoop::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_CollectionLoop");
    return result;
}
