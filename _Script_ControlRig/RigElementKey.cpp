#include "..\FUObjectArray.hpp"
#include "RigElementKey.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigElementKey::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigElementKey::get_Name() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigElementKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigElementKey");
    return result;
}
