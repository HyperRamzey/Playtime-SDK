#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKCenterOfGravity.hpp"
float& _Script_PowerIKRuntime::PowerIKCenterOfGravity::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_PowerIKRuntime::PowerIKCenterOfGravity::get_HorizAmount() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_PowerIKRuntime::PowerIKCenterOfGravity::get_VertAmount() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_PowerIKRuntime::PowerIKCenterOfGravity::get_PullBodyAmount() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKCenterOfGravity::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKCenterOfGravity");
    return result;
}
