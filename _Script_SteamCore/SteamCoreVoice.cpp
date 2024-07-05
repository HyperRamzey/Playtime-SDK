#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundWaveProcedural.hpp"
#include "SteamCoreVoice.hpp"
_Script_SteamCore::SteamCoreVoice* _Script_SteamCore::SteamCoreVoice::ConstructSteamCoreVoice(int32_t AudioSampleRate) {
    return;
}
void _Script_SteamCore::SteamCoreVoice::DestroySteamCoreVoice(_Script_SteamCore::SteamCoreVoice* Obj) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreVoice::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreVoice");
    return result;
}
void _Script_SteamCore::SteamCoreVoice::AddAudioBuffer(void*& Buffer) {
    return;
}
