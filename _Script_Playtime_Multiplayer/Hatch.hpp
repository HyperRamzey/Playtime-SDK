#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct Hatch : public _Script_Engine::Actor {
    private: char pad_220[0xd0]; public:
    bool get_Opened();
    void set_Opened(bool value);
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_ImprisonedPlayer();
    void* get_OpeningTimeline();
    _Script_Engine::CurveFloat*& get_RotationCurve();
    _Script_Engine::SoundBase*& get_OpenDoorSound();
    _Script_Engine::SoundBase*& get_CloseDoorSound();
    void* get_HatchBangSounds();
    static _Script_CoreUObject::Class* static_class();
    void PutPlayerIn(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    void OpenHatch();
    void OnComponentOverlap(_Script_Engine::Actor* Actor);
    void KillPlayer();
    void HatchProgress(float Value);
    void CloseHatch();
    void BP_ShowOpenHatchIndicator(bool Shown);
    void BP_SetHingeRotation(float Progress);
    void BP_PlayerFuncImprisonedInWuggyHole(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    void BP_MakeBoogieBot(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
}; // Size: 0x2f0
#pragma pack(pop)
}
