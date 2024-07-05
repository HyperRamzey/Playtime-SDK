#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKBoneLimit.hpp"
void* _Script_PowerIKRuntime::PowerIKBoneLimit::get_BoneName() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_PowerIKRuntime::PowerIKBoneLimit::get_Stiffness() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKBoneLimit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKBoneLimit");
    return result;
}
