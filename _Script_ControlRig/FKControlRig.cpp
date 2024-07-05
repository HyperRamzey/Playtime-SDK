#include "..\FUObjectArray.hpp"
#include "ControlRig.hpp"
#include "FKControlRig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::FKControlRig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.FKControlRig");
    return result;
}
void* _Script_ControlRig::FKControlRig::get_IsControlActive() {
    return (void*)((uintptr_t)this + 0x650);
}
void* _Script_ControlRig::FKControlRig::get_ApplyMode() {
    return (void*)((uintptr_t)this + 0x660);
}
