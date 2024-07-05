#include "..\FUObjectArray.hpp"
#include "AudioCapture.hpp"
#include "AudioCaptureFunctionLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_AudioCapture::AudioCaptureFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioCapture.AudioCaptureFunctionLibrary");
    return result;
}
_Script_AudioCapture::AudioCapture* _Script_AudioCapture::AudioCaptureFunctionLibrary::CreateAudioCapture() {
    return;
}
