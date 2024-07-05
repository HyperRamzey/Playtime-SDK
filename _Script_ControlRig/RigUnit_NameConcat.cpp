#include "..\FUObjectArray.hpp"
#include "RigUnit_NameBase.hpp"
#include "RigUnit_NameConcat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_NameConcat::get_A() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_NameConcat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_NameConcat");
    return result;
}
void* _Script_ControlRig::RigUnit_NameConcat::get_B() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_NameConcat::get_Result() {
    return (void*)((uintptr_t)this + 0x18);
}
