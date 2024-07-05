#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\WuggyHole.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_PseudoHand {
struct BP_PseudoHand_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_WormholeExit {
struct BP_WormholeExit_C;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_WuggyHole {
#pragma pack(push, 1)
struct BP_WuggyHole_C : public _Script_Playtime_Multiplayer::WuggyHole {
    private: char pad_258[0x148]; public:
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Audio();
    _Script_Engine::ChildActorComponent*& get_BP_WormholeExit1();
    _Script_Engine::ChildActorComponent*& get_BP_WormholeExit6();
    _Script_Engine::ChildActorComponent*& get_BP_WormholeExit5();
    _Script_Engine::ChildActorComponent*& get_BP_WormholeExit3();
    _Script_Engine::SceneComponent*& get_Entrances();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint20();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint19();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint18();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint17();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint16();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint15();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint14();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint13();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint12();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint11();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint10();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint9();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint8();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint7();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint6();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint5();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint4();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint3();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint2();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint1();
    _Script_Engine::ChildActorComponent*& get_BP_WhackAWuggySpawnPoint0();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_WormHoleExits();
    int32_t& get_I();
    void* get_WormHoleEntrances();
    int32_t& get_NumOpenDoors();
    void* get_Between_Spawns_Timer();
    void* get_BetweenWuggiesTimer();
    int32_t& get_Multiplier();
    float& get_BP_MinigameStartTime();
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_Valid_Oldest_Player();
    bool get_Oldest_Player_Exists();
    void set_Oldest_Player_Exists(bool value);
    _Script_Engine::CurveFloat*& get_TimingCurve();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_Valid_Oldest_Player();
    void HasPlayers(bool& Has);
    void GetRandomWormholeExit(_Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C*& WormholeExit);
    void GrabNextCharacter(_Game_Gameplay_Interaction_Sewers_BP_PseudoHand::BP_PseudoHand_C*& PseudoHand, _Script_Playtime_Multiplayer::ANetworkCharacter*& GrabbedCharacter, _Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C*& WormHole, bool& Success);
    void ResolveDoors();
    void GetWormholeToGrabFrom(_Script_Playtime_Multiplayer::ANetworkCharacter* Player, _Script_CoreUObject::Transform& Transform, _Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C*& WormHole);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void AddPlayer(_Script_Playtime_Multiplayer::ANetworkCharacter* NetworkCharacter, bool ShouldIncreaseStrikes, bool SpawnedToRevive_);
    void BP_AuthorityBeginMinigame0();
    void BP_AuthorityEndMinigame0();
    void BP_OnRep_OldestPlayer0();
    void UpdateNetDormancy();
    void SpawnWuggyEvent();
    void SpawnWuggyWave();
    void StartGame();
    void ExecuteUbergraph_BP_WuggyHole(int32_t EntryPoint);
}; // Size: 0x3a0
#pragma pack(pop)
}
