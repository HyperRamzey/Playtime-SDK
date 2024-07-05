#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Playtime_Multiplayer {
struct Monster;
}
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Game_BP_GameManager {
#pragma pack(push, 1)
struct BP_GameManager_C : public _Script_Engine::Actor {
    private: char pad_220[0x60]; public:
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Music();
    _Script_Engine::BillboardComponent*& get_Billboard();
    void* get_ToySelection();
    void* get_LookForMonsterLoopingTimer();
    _Script_Playtime_Multiplayer::Monster*& get_Monster();
    void* get_MonsterTrendingDirection();
    void* get_MonsterFinalLocation();
    float& get_TrendingSensitivityDefault();
    float& get_MaxTrend();
    void* get_Cache();
    static _Script_CoreUObject::Class* static_class();
    void DetermineMonsterTrend(float& Delta);
    void GetToyPartMeshFromIndex(int32_t Index, _Script_Engine::StaticMesh*& Output);
    bool UpdateToysOnHUD();
    void OnRep_ToySelection();
    void ReceiveBeginPlay0();
    void TrainIsFixed();
    void ReceiveTick0(float DeltaSeconds);
    void LookForMonster();
    void ExecuteUbergraph_BP_GameManager(int32_t EntryPoint);
}; // Size: 0x280
#pragma pack(pop)
}
