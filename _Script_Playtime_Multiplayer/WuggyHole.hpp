#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct WuggyHole : public _Script_Engine::Actor {
    private: char pad_220[0x38]; public:
    int32_t& get_NumPlayers();
    void* get_SpawnPoints();
    void* get_PlayingCharacters();
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_OldestPlayer();
    static _Script_CoreUObject::Class* static_class();
    _Script_Playtime_Multiplayer::ANetworkCharacter* ReturnOldestPlayer();
    _Script_Playtime_Multiplayer::ANetworkCharacter* RemoveAndReturnOldestPlayer();
    void OnRep_OldestPlayer();
    void Multicast_EndMiniGame();
    void EndMiniGame();
    void CleanPlayingCharacters();
    void BP_OnRep_OldestPlayer();
    void BP_AuthorityEndMinigame();
    void BP_AuthorityBeginMinigame();
    void Authority_SpawnWuggy();
    void Authority_EndMiniGame();
    void AddNewPlayer(_Script_Playtime_Multiplayer::ANetworkCharacter* Player, bool AddAtFront);
}; // Size: 0x258
#pragma pack(pop)
}
