#include "..\FUObjectArray.hpp"
#include "RigInfluenceMapPerEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigInfluenceMapPerEvent::get_EventToIndex() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigInfluenceMapPerEvent::get_Maps() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigInfluenceMapPerEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigInfluenceMapPerEvent");
    return result;
}
