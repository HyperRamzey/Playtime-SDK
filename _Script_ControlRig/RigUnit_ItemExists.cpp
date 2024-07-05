#include "..\FUObjectArray.hpp"
#include "RigUnit_ItemBase.hpp"
#include "RigUnit_ItemExists.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ItemExists::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ItemExists");
    return result;
}
void* _Script_ControlRig::RigUnit_ItemExists::get_Item() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_ControlRig::RigUnit_ItemExists::get_Exists() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_ItemExists::set_Exists(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_ItemExists::get_CachedIndex() {
    return (void*)((uintptr_t)this + 0x18);
}
