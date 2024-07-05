#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WaveOscillator.hpp"
_Script_CoreUObject::Class* _Script_GameplayCameras::WaveOscillator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayCameras.WaveOscillator");
    return result;
}
float& _Script_GameplayCameras::WaveOscillator::get_Amplitude() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_GameplayCameras::WaveOscillator::get_Frequency() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_GameplayCameras::WaveOscillator::get_InitialOffsetType() {
    return (void*)((uintptr_t)this + 0x8);
}
