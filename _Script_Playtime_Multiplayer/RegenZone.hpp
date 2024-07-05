#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SphereComponent.hpp"
#include "PerkPackage.hpp"
namespace _Script_Playtime_Multiplayer {
struct LeadershipRegenSubsystem;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct RegenZone : public _Script_Engine::SphereComponent {
    private: char pad_470[0x30]; public:
    _Script_Playtime_Multiplayer::LeadershipRegenSubsystem*& get_LeadershipRegenSubsystem();
    _Script_Engine::SceneComponent*& get_HealingAura();
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_SourcePlayer();
    bool get_Active();
    void set_Active(bool value);
    int32_t& get_HealthRegen();
    void* get_PlayersInRange();
    static _Script_CoreUObject::Class* static_class();
    void SetActiveWithNotify(bool Value);
    void OnRep_Active();
    void OnPerkSaveGameChanged(_Script_Playtime_Multiplayer::PerkPackage In_PerkSaveGame);
    void OnEndOverlap(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnBeginOverlap(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    bool IsThereDamagedPlayer();
}; // Size: 0x4a0
#pragma pack(pop)
}
