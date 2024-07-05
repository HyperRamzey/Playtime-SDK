#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ConstantCameraShakePattern.hpp"
#include "SimpleCameraShakePattern.hpp"
void* _Script_GameplayCameras::ConstantCameraShakePattern::get_LocationOffset() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_GameplayCameras::ConstantCameraShakePattern::get_RotationOffset() {
    return (void*)((uintptr_t)this + 0x44);
}
_Script_CoreUObject::Class* _Script_GameplayCameras::ConstantCameraShakePattern::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayCameras.ConstantCameraShakePattern");
    return result;
}
