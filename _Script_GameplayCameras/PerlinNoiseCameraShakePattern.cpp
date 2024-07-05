#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PerlinNoiseCameraShakePattern.hpp"
#include "SimpleCameraShakePattern.hpp"
void* _Script_GameplayCameras::PerlinNoiseCameraShakePattern::get_X() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_GameplayCameras::PerlinNoiseCameraShakePattern::get_LocationAmplitudeMultiplier() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_GameplayCameras::PerlinNoiseCameraShakePattern::get_RotationFrequencyMultiplier() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_GameplayCameras::PerlinNoiseCameraShakePattern::get_LocationFrequencyMultiplier() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_GameplayCameras::PerlinNoiseCameraShakePattern::get_Y() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_GameplayCameras::PerlinNoiseCameraShakePattern::get_Z() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_GameplayCameras::PerlinNoiseCameraShakePattern::get_RotationAmplitudeMultiplier() {
    return *(float*)((uintptr_t)this + 0x58);
}
void* _Script_GameplayCameras::PerlinNoiseCameraShakePattern::get_Pitch() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_GameplayCameras::PerlinNoiseCameraShakePattern::get_Yaw() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_GameplayCameras::PerlinNoiseCameraShakePattern::get_Roll() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_GameplayCameras::PerlinNoiseCameraShakePattern::get_FOV() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_GameplayCameras::PerlinNoiseCameraShakePattern::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayCameras.PerlinNoiseCameraShakePattern");
    return result;
}
