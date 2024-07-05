#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_ProjectTransformToNewParent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ProjectTransformToNewParent::get_NewParent() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_ControlRig::RigUnit_ProjectTransformToNewParent::set_bOldParentInitial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_ProjectTransformToNewParent::get_Child() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_ControlRig::RigUnit_ProjectTransformToNewParent::get_bOldParentInitial() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
bool _Script_ControlRig::RigUnit_ProjectTransformToNewParent::get_bChildInitial() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_ProjectTransformToNewParent::set_bChildInitial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_ProjectTransformToNewParent::get_OldParent() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_ControlRig::RigUnit_ProjectTransformToNewParent::get_bNewParentInitial() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_ProjectTransformToNewParent::set_bNewParentInitial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_ProjectTransformToNewParent::get_Transform() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_ProjectTransformToNewParent::get_CachedChild() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_ProjectTransformToNewParent::get_CachedOldParent() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_ControlRig::RigUnit_ProjectTransformToNewParent::get_CachedNewParent() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ProjectTransformToNewParent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ProjectTransformToNewParent");
    return result;
}
