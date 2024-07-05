#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\WhackAWuggySpawnPoint.hpp"
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_WuggyHole {
struct BP_WuggyHole_C;
}
namespace _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera {
struct BP_AbstractJumpscare_Camera_C;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint {
#pragma pack(push, 1)
struct BP_WhackAWuggySpawnPoint_C : public _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint {
    private: char pad_240[0x130]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SkeletalMeshComponent*& get_HandPose();
    _Script_Engine::SceneComponent*& get_Wuggy_Jump_Origin();
    _Script_Engine::StaticMeshComponent*& get_SM_WuggyPipe();
    _Script_Engine::StaticMeshComponent*& get_Cylinder();
    _Script_Engine::SkeletalMeshComponent*& get_WuggyMesh();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_WuggyMagnet();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::SphereComponent*& get_Sphere();
    bool get_DestroyingWuggy_();
    void set_DestroyingWuggy_(bool value);
    _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C*& get_Wuggy_Hole_Ref();
    _Script_Engine::AudioComponent*& get_ChitteringSound();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Player_Target();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Player_Target_Stored();
    void* get_Closest_Player_Timer();
    bool get_Punched();
    void set_Punched(bool value);
    bool get_Crawl();
    void set_Crawl(bool value);
    bool get_Crawl_Back();
    void set_Crawl_Back(bool value);
    bool get_Jumpscare();
    void set_Jumpscare(bool value);
    void* get_Huggy_Origin();
    void* get_Huggy_Jumpscare_End_Point();
    void* get_Huggy_Origin_Rotator();
    void* get_Huggy_Jumpscare_End_Rotator();
    void* get_Player_Origin_Rotator();
    void* get_Player_Jumpscare_End_Rotation();
    _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C*& get_Jumpscare_Camera();
    void* get_HuggySkeletons();
    bool get_Lock_Target_Player();
    void set_Lock_Target_Player(bool value);
    _Script_Engine::SkeletalMesh*& get_Current_Wuggy_Skeleton();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Cached_Player();
    bool get_CanKillPlayers();
    void set_CanKillPlayers(bool value);
    void* get_Activated_Punch();
    void* get_Set_Crawl();
    void* get_Set_Crawl_Back();
    static _Script_CoreUObject::Class* static_class();
    void Update_Oldest_Player(_Script_Playtime_Multiplayer::ANetworkCharacter* Player_Target);
    void UserConstructionScript();
    void WuggyKillPlayer_Event(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character);
    void BndEvt__BP_WhackAWuggySpawnPoint_WuggyMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void ReceiveBeginPlay();
    void BP_Server_WuggyKillPlayer0();
    void Kill_Player();
    void BP_OnRep_WuggyIsSpawned0();
    void SpawnWuggy();
    void Set_Wuggy_Crawl(bool Crawl);
    void Set_Wuggy_Crawl_Back(bool Crawl_Back);
    void ExecuteUbergraph_BP_WhackAWuggySpawnPoint(int32_t EntryPoint);
    void Set_Crawl_Back__DelegateSignature(bool Crawl_Back);
    void Set_Crawl__DelegateSignature(bool Crawl, _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* WhackAWuggyRef);
    void Activated_Punch__DelegateSignature(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* WhackAWugRef);
}; // Size: 0x370
#pragma pack(pop)
}
