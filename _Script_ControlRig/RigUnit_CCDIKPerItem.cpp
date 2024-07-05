#include "..\FUObjectArray.hpp"
#include "RigUnit_CCDIKPerItem.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ControlRig::RigUnit_CCDIKPerItem::set_bStartFromTail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_CCDIKPerItem::get_Weight() {
    return *(float*)((uintptr_t)this + 0xb4);
}
void* _Script_ControlRig::RigUnit_CCDIKPerItem::get_Items() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_CCDIKPerItem::get_EffectorTransform() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_ControlRig::RigUnit_CCDIKPerItem::get_bStartFromTail() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 1 != 0;
}
float& _Script_ControlRig::RigUnit_CCDIKPerItem::get_Precision() {
    return *(float*)((uintptr_t)this + 0xb0);
}
int32_t& _Script_ControlRig::RigUnit_CCDIKPerItem::get_MaxIterations() {
    return *(int32_t*)((uintptr_t)this + 0xb8);
}
float& _Script_ControlRig::RigUnit_CCDIKPerItem::get_BaseRotationLimit() {
    return *(float*)((uintptr_t)this + 0xc0);
}
void* _Script_ControlRig::RigUnit_CCDIKPerItem::get_RotationLimits() {
    return (void*)((uintptr_t)this + 0xc8);
}
bool _Script_ControlRig::RigUnit_CCDIKPerItem::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xd8 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_CCDIKPerItem::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_CCDIKPerItem::get_WorkData() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_CCDIKPerItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_CCDIKPerItem");
    return result;
}
