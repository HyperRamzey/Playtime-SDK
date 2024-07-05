#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\AIStimulus.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "PresetSlot.hpp"
namespace _Script_AIModule {
struct AISenseConfig_Sight;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AIModule {
struct AIPerceptionComponent;
}
namespace _Script_Playtime_Multiplayer {
struct TooltipComponent;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PlaytimeCharacter : public _Script_Engine::Character {
    private: char pad_4c0[0xe0]; public:
    _Script_AIModule::AISenseConfig_Sight*& get_Sight();
    _Script_AIModule::AIPerceptionComponent*& get_PerceptionComponent();
    bool get_IdleTimerEnabled();
    void set_IdleTimerEnabled(bool value);
    void* get_Preset();
    void* get_OwnerDesiredPreset();
    bool get_bIsAFKKickEnabled();
    void set_bIsAFKKickEnabled(bool value);
    float& get_TotalKickTime();
    void* get_IdleWarningTimer();
    void* get_IdleTimer();
    static _Script_CoreUObject::Class* static_class();
    void ShowTooltipIfAllowed(_Script_Engine::Actor* Actor, _Script_Playtime_Multiplayer::TooltipComponent* Tooltip);
    void SetIsInVent(bool InVent);
    void Server_SetCosmetics(_Script_Playtime_Multiplayer::PresetSlot Cosmetics);
    void Server_KnockBack(_Script_CoreUObject::Vector KnockBackOrigin, float Horizontal, float Vertical);
    void Owner_TryResetIdleTimer(float InputMagnitude);
    void Owner_SetCosmetics(_Script_Playtime_Multiplayer::PresetSlot Cosmetics);
    void Owner_ResetIdleTimer();
    void OnTargetPerceptionUpdated(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus);
    void OnSetCosmeticsInventorySuccess(void*& Items);
    void OnSetCosmeticsInventoryFailure(void* FailureMessage);
    void OnRep_Preset();
    void OnExitedVent();
    void OnEnteredVent();
    void KickIdlePlayer();
    bool IsInVent();
    void IdleTimerTimeout();
    _Script_Playtime_Multiplayer::PresetSlot GetCosmetics();
    void EnableIdleTimer(bool Enabled);
    void Client_ResetIdleTimer();
    void BP_ShowIdleWarning();
    void BP_OnRep_Preset();
    void BP_KickPlayer();
    void BP_IdleKickReset();
}; // Size: 0x5a0
#pragma pack(pop)
}
