#include "..\FUObjectArray.hpp"
#include "RigUnit_CollectionBase.hpp"
#include "RigUnit_CollectionUnion.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_CollectionUnion::get_A() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_CollectionUnion::get_B() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigUnit_CollectionUnion::get_Collection() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_CollectionUnion::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_CollectionUnion");
    return result;
}
