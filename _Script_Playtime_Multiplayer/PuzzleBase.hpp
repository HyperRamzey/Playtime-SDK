#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Playtime_Multiplayer {
struct HandMagnetComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_Playtime_Multiplayer {
struct PuzzleSoundPack;
}
namespace _Script_Engine {
struct MaterialInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PuzzleBase : public _Script_Engine::Actor {
    private: char pad_220[0x258]; public:
    _Script_Engine::SceneComponent*& get_Root();
    _Script_Engine::StaticMeshComponent*& get_Face();
    _Script_Engine::BoxComponent*& get_CollisionBox();
    _Script_Engine::StaticMeshComponent*& get_HandPanel();
    _Script_Playtime_Multiplayer::HandMagnetComponent*& get_HandMagnet();
    _Script_Engine::SkeletalMeshComponent*& get_Hand();
    _Script_Engine::BoxComponent*& get_HandMagnetCollision();
    _Script_Engine::SceneComponent*& get_SpawnAreaParent();
    _Script_Engine::BoxComponent*& get_SparkArea();
    _Script_Engine::BoxComponent*& get_BoobyTrapArea();
    _Script_Engine::BoxComponent*& get_FailAnimArea();
    _Script_Engine::SceneComponent*& get_DoorParent();
    _Script_Engine::SceneComponent*& get_LeftDoorHinge();
    _Script_Engine::SceneComponent*& get_RightDoorHinge();
    _Script_Engine::StaticMeshComponent*& get_LeftDoor();
    _Script_Engine::StaticMeshComponent*& get_RightDoor();
    _Script_Engine::SoundBase*& get_SolvedSound();
    _Script_Engine::StaticMesh*& get_FaceMesh();
    _Script_Engine::StaticMesh*& get_PanelMesh();
    _Script_Engine::StaticMesh*& get_LeftDoorMesh();
    _Script_Engine::StaticMesh*& get_RightDoorMesh();
    void* get_BP_FailAnim();
    void* get_BP_NavFailPuzzleIndicator();
    void* get_BP_NavBoobyTrapIndicator();
    _Script_Engine::ParticleSystem*& get_SparkEmitter();
    int32_t& get_PillarIndex();
    int32_t& get_Progress();
    int32_t& get_puzzleSoundReplicator();
    bool get_Solved();
    void set_Solved(bool value);
    bool get_InProgress();
    void set_InProgress(bool value);
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_Player();
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_MostRecentPlayer();
    void* get_State();
    void* get_puzzleType();
    _Script_Engine::BoxComponent*& get_CurrentSparkArea();
    bool get_isArcadePuzzle();
    void set_isArcadePuzzle(bool value);
    _Script_Playtime_Multiplayer::PuzzleSoundPack*& get_PuzzleSounds();
    _Script_Engine::MaterialInstance*& get_CorrectMaterial();
    void* get_OnPuzzleHit();
    static _Script_CoreUObject::Class* static_class();
    void TransitionState(void* NewState);
    void ToSolved();
    void ToShutDown();
    void ToIdle();
    void ToBoobyTrapped();
    void StopSpawningSparks();
    void StartSpawningSparks();
    void SpawnSparks(_Script_Engine::BoxComponent* SparkSpawningArea);
    void SpawnFailAnim();
    void SpawnBoobyIndicator();
    void ResetPuzzle();
    void OpenDoors(float LerpAlpha);
    void OnRep_State();
    void OnRep_PuzzleSoundReplicator();
    void OnRep_Progress();
    void OnPanelHit();
    void OnAttachmentStateChanged(void* AttachmentStateChange);
    bool IsSolved();
    bool IsShutDown();
    bool IsInProgress();
    bool IsBoobyTrapped();
    void IncrementingToInProgress();
    void IdleToInProgress();
    void* GetState();
    float GetPuzzlePlayerPinginMS();
    void FailedToInProgress();
    void FailedPuzzle();
    bool DoIncrement();
    void DoesTouchCount(_Script_Playtime_Multiplayer::HandMagnetComponent* MagnetComponent, _Script_Playtime_Multiplayer::ANetworkCharacter* PlayerRef, bool& outCounts, _Script_Playtime_Multiplayer::ANetworkCharacter*& outPlayerRef);
    void BoobyTrapSparksFinished();
}; // Size: 0x478
#pragma pack(pop)
}
