#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameInstanceSubsystem.hpp"
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct DynamicMusicSubsystem : public _Script_Engine::GameInstanceSubsystem {
    private: char pad_30[0xe0]; public:
    void* get_TaggedMusics();
    bool get_bIsCrossfading();
    void set_bIsCrossfading(bool value);
    bool get_bCurrentAudio();
    void set_bCurrentAudio(bool value);
    void* get_Audios();
    _Script_Engine::SoundBase*& get_CurrentAmbience();
    void* get_Timer();
    static _Script_CoreUObject::Class* static_class();
    void SetTaggedMusic(void* Tag, _Script_Engine::SoundBase* Music);
    void SetInactiveAudio(_Script_Engine::AudioComponent* Inactive);
    void SetAmbientMusic(_Script_Engine::SoundBase* AmbientMusic);
    void SetActiveAudio(_Script_Engine::AudioComponent* Active);
    void ReturnToAmbientMusic(float FadeTime, float NewVolume);
    _Script_Engine::AudioComponent* GetInactiveAudio();
    _Script_Engine::AudioComponent* GetActiveAudio();
    void FadeToTaggedMusic(void* Tag, float FadeTime, float NewVolume);
    void FadeOut(float FadeTime);
    void ExecuteNextCrossfadeRequest();
    void CrossfadeToAtTime(_Script_Engine::SoundBase* NewMusic, float StartTime, float FadeTime, float NewVolume);
    void CrossfadeToAtPercent(_Script_Engine::SoundBase* NewMusic, float StartPercent, float FadeTime, float NewVolume);
    void CrossfadeTo(_Script_Engine::SoundBase* NewMusic, float FadeTime, float NewVolume);
}; // Size: 0x110
#pragma pack(pop)
}
