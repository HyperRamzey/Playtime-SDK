#include "..\FUObjectArray.hpp"
#include "RigInfluenceMap.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigInfluenceMap::get_EventName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigInfluenceMap::get_KeyToIndex() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigInfluenceMap::get_Entries() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigInfluenceMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigInfluenceMap");
    return result;
}
