#include "..\FUObjectArray.hpp"
#include "AimTarget.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::AimTarget::get_AlignVector() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_ControlRig::AimTarget::get_Weight() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::AimTarget::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::AimTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.AimTarget");
    return result;
}
