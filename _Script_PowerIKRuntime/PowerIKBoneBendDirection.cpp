#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKBoneBendDirection.hpp"
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKBoneBendDirection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKBoneBendDirection");
    return result;
}
void* _Script_PowerIKRuntime::PowerIKBoneBendDirection::get_BoneName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_PowerIKRuntime::PowerIKBoneBendDirection::get_BendDirection() {
    return (void*)((uintptr_t)this + 0x8);
}
