#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FOscillator.hpp"
void* _Script_GameplayCameras::FOscillator::get_Waveform() {
    return (void*)((uintptr_t)this + 0x9);
}
float& _Script_GameplayCameras::FOscillator::get_Amplitude() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_GameplayCameras::FOscillator::get_Frequency() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_GameplayCameras::FOscillator::get_InitialOffset() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_GameplayCameras::FOscillator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayCameras.FOscillator");
    return result;
}
