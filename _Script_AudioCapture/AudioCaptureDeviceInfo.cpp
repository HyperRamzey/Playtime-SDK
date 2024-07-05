#include "..\FUObjectArray.hpp"
#include "AudioCaptureDeviceInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AudioCapture::AudioCaptureDeviceInfo::get_DeviceName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_AudioCapture::AudioCaptureDeviceInfo::get_NumInputChannels() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_AudioCapture::AudioCaptureDeviceInfo::get_SampleRate() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_AudioCapture::AudioCaptureDeviceInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AudioCapture.AudioCaptureDeviceInfo");
    return result;
}
