#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Playtime_Multiplayer {
struct HandMagnetComponent;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct WhackAWuggySpawnPoint : public _Script_Engine::Actor {
    private: char pad_220[0x20]; public:
    _Script_Engine::SkeletalMeshComponent*& get_Wuggy();
    _Script_Playtime_Multiplayer::HandMagnetComponent*& get_WuggyHandMagnet();
    float& get_MaxWuggyLivingTime();
    bool get_bWuggyIsSpawned();
    void set_bWuggyIsSpawned(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateOldestPlayer(_Script_Playtime_Multiplayer::ANetworkCharacter* Character);
    bool PseudoSpawnWuggy();
    void PseudoDestroyWuggy();
    void PseudoConstruct(_Script_Playtime_Multiplayer::HandMagnetComponent* In_WuggyHandMagnet, _Script_Engine::SkeletalMeshComponent* In_Wuggy);
    void PrePseudoDestroyWuggy();
    void OnRep_WuggyIsSpawned();
    void BP_WuggySpawned();
    void BP_Server_WuggyKillPlayer();
    void BP_OnRep_WuggyIsSpawned();
}; // Size: 0x240
#pragma pack(pop)
}
