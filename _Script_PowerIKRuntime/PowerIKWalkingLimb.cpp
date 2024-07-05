#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKWalkingLimb.hpp"
void* _Script_PowerIKRuntime::PowerIKWalkingLimb::get_StartBone() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_PowerIKRuntime::PowerIKWalkingLimb::get_EndBone() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_PowerIKRuntime::PowerIKWalkingLimb::get_RelatedLimbs() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_PowerIKRuntime::PowerIKWalkingLimb::get_LimbMaxLengthMultiplier() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_PowerIKRuntime::PowerIKWalkingLimb::get_StepLengthMultiplier() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_PowerIKRuntime::PowerIKWalkingLimb::get_StepDuration() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_PowerIKRuntime::PowerIKWalkingLimb::get_RotateFootToGround() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_PowerIKRuntime::PowerIKWalkingLimb::get_StepHeight() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_PowerIKRuntime::PowerIKWalkingLimb::get_FootCollisionRadius() {
    return *(float*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKWalkingLimb::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKWalkingLimb");
    return result;
}
