#include "..\FUObjectArray.hpp"
#include "RigUnit_AimItem.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_AimItem::get_Item() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_AimItem::get_Primary() {
    return (void*)((uintptr_t)this + 0x74);
}
void* _Script_ControlRig::RigUnit_AimItem::get_SecondaryCachedSpace() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_ControlRig::RigUnit_AimItem::get_Secondary() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_AimItem::get_CachedItem() {
    return (void*)((uintptr_t)this + 0x110);
}
float& _Script_ControlRig::RigUnit_AimItem::get_Weight() {
    return *(float*)((uintptr_t)this + 0xcc);
}
void* _Script_ControlRig::RigUnit_AimItem::get_DebugSettings() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_ControlRig::RigUnit_AimItem::get_PrimaryCachedSpace() {
    return (void*)((uintptr_t)this + 0x124);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AimItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AimItem");
    return result;
}
