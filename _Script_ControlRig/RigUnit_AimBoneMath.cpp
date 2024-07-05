#include "..\FUObjectArray.hpp"
#include "RigUnit_AimBoneMath.hpp"
#include "RigUnit_HighlevelBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_AimBoneMath::get_InputTransform() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_AimBoneMath::get_Primary() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_AimBoneMath::get_SecondaryCachedSpace() {
    return (void*)((uintptr_t)this + 0x124);
}
void* _Script_ControlRig::RigUnit_AimBoneMath::get_Secondary() {
    return (void*)((uintptr_t)this + 0x6c);
}
float& _Script_ControlRig::RigUnit_AimBoneMath::get_Weight() {
    return *(float*)((uintptr_t)this + 0x98);
}
void* _Script_ControlRig::RigUnit_AimBoneMath::get_PrimaryCachedSpace() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_ControlRig::RigUnit_AimBoneMath::get_Result() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_AimBoneMath::get_DebugSettings() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AimBoneMath::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AimBoneMath");
    return result;
}
