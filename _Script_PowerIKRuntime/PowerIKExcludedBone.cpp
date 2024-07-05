#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKExcludedBone.hpp"
void* _Script_PowerIKRuntime::PowerIKExcludedBone::get_BoneName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKExcludedBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKExcludedBone");
    return result;
}
