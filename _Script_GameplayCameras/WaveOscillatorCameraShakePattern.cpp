#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SimpleCameraShakePattern.hpp"
#include "WaveOscillatorCameraShakePattern.hpp"
void* _Script_GameplayCameras::WaveOscillatorCameraShakePattern::get_Z() {
    return (void*)((uintptr_t)this + 0x58);
}
float& _Script_GameplayCameras::WaveOscillatorCameraShakePattern::get_LocationAmplitudeMultiplier() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_GameplayCameras::WaveOscillatorCameraShakePattern::get_LocationFrequencyMultiplier() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_GameplayCameras::WaveOscillatorCameraShakePattern::get_Pitch() {
    return (void*)((uintptr_t)this + 0x6c);
}
void* _Script_GameplayCameras::WaveOscillatorCameraShakePattern::get_X() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_GameplayCameras::WaveOscillatorCameraShakePattern::get_RotationFrequencyMultiplier() {
    return *(float*)((uintptr_t)this + 0x68);
}
void* _Script_GameplayCameras::WaveOscillatorCameraShakePattern::get_Y() {
    return (void*)((uintptr_t)this + 0x4c);
}
float& _Script_GameplayCameras::WaveOscillatorCameraShakePattern::get_RotationAmplitudeMultiplier() {
    return *(float*)((uintptr_t)this + 0x64);
}
void* _Script_GameplayCameras::WaveOscillatorCameraShakePattern::get_Yaw() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_GameplayCameras::WaveOscillatorCameraShakePattern::get_Roll() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_GameplayCameras::WaveOscillatorCameraShakePattern::get_FOV() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_GameplayCameras::WaveOscillatorCameraShakePattern::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayCameras.WaveOscillatorCameraShakePattern");
    return result;
}
