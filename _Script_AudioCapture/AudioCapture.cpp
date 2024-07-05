#include "..\FUObjectArray.hpp"
#include "AudioCapture.hpp"
#include "AudioCaptureDeviceInfo.hpp"
#include "..\_Script_AudioMixer\AudioGenerator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AudioCapture::AudioCapture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioCapture.AudioCapture");
    return result;
}
void _Script_AudioCapture::AudioCapture::StopCapturingAudio() {
    return;
}
void _Script_AudioCapture::AudioCapture::StartCapturingAudio() {
    return;
}
bool _Script_AudioCapture::AudioCapture::GetAudioCaptureDeviceInfo(_Script_AudioCapture::AudioCaptureDeviceInfo& OutInfo) {
    return;
}
bool _Script_AudioCapture::AudioCapture::IsCapturingAudio() {
    return;
}
