#include "..\FUObjectArray.hpp"
#include "RigUnit_CollectionBase.hpp"
#include "RigUnit_CollectionItemAtIndex.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_CollectionItemAtIndex::get_Collection() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_ControlRig::RigUnit_CollectionItemAtIndex::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_CollectionItemAtIndex::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_CollectionItemAtIndex");
    return result;
}
void* _Script_ControlRig::RigUnit_CollectionItemAtIndex::get_Item() {
    return (void*)((uintptr_t)this + 0x1c);
}
