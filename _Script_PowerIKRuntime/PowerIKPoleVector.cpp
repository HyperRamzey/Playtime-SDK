#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKPoleVector.hpp"
void* _Script_PowerIKRuntime::PowerIKPoleVector::get_Mode() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_PowerIKRuntime::PowerIKPoleVector::get_Position() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_PowerIKRuntime::PowerIKPoleVector::get_BoneName() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_PowerIKRuntime::PowerIKPoleVector::get_AngleOffset() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKPoleVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKPoleVector");
    return result;
}
