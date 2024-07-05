#include "..\FUObjectArray.hpp"
#include "RigInfluenceEntryModifier.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigInfluenceEntryModifier::get_AffectedList() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigInfluenceEntryModifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigInfluenceEntryModifier");
    return result;
}
