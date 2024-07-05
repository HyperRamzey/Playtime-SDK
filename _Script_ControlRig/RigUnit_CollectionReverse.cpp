#include "..\FUObjectArray.hpp"
#include "RigUnit_CollectionBase.hpp"
#include "RigUnit_CollectionReverse.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_CollectionReverse::get_Collection() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_CollectionReverse::get_Reversed() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_CollectionReverse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_CollectionReverse");
    return result;
}
