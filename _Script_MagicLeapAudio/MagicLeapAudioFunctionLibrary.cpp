#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MagicLeapAudioFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapAudio::MagicLeapAudioFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary");
    return result;
}
bool _Script_MagicLeapAudio::MagicLeapAudioFunctionLibrary::SetOnAudioJackUnpluggedDelegate(void*& ResultDelegate) {
    return;
}
bool _Script_MagicLeapAudio::MagicLeapAudioFunctionLibrary::IsMicMuted() {
    return;
}
bool _Script_MagicLeapAudio::MagicLeapAudioFunctionLibrary::SetOnAudioJackPluggedDelegate(void*& ResultDelegate) {
    return;
}
bool _Script_MagicLeapAudio::MagicLeapAudioFunctionLibrary::SetMicMute(bool IsMuted) {
    return;
}
