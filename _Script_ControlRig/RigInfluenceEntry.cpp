#include "..\FUObjectArray.hpp"
#include "RigInfluenceEntry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigInfluenceEntry::get_Source() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigInfluenceEntry::get_AffectedList() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigInfluenceEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigInfluenceEntry");
    return result;
}
