#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Playtime_Multiplayer {
struct ChaseMusicPack;
}
namespace _Script_Engine {
struct StaticMeshComponent;
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
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA {
#pragma pack(push, 1)
struct BPC_PlayerDetectionSystem_BA_C : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x80]; public:
    void* get_UberGraphFrame();
    _Script_Playtime_Multiplayer::ChaseMusicPack*& get_MonsterSelectedChaseMusic();
    bool get_isChaseMusicActive();
    void set_isChaseMusicActive(bool value);
    void* get_PlayerDetected();
    void* get_PlayerLost();
    void* get_Update_Handle();
    void* get_Main_Handle();
    _Script_Engine::StaticMeshComponent*& get_BlueZone();
    _Script_Engine::StaticMeshComponent*& get_YellowZone();
    _Script_Engine::StaticMeshComponent*& get_RedZone();
    void* get_YellowPlayers();
    void* get_RedPlayers();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_SelectedSoundsPackage();
    void ExitRed(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void EnteredRed(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExitedYellow(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void EnteredYellow(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ActivateMonsterChaseMusic();
    void ActivateMonsterAmbientMusic();
    void TriggerChase();
    void CancelAllChaseMusic();
    void ExitedBlue(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void MML_UpdateTimer();
    void ReceiveBeginPlay0();
    void Disable();
    void enable();
    void MML_MainTimerEnd();
    void dummy(void* ErrorMessage);
    void Success(void*& Inventory);
    void ExecuteUbergraph_BPC_PlayerDetectionSystem_BA(int32_t EntryPoint);
    void PlayerLost__DelegateSignature(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* LostCharacter);
    void PlayerDetected__DelegateSignature(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Detected_Player);
}; // Size: 0x130
#pragma pack(pop)
}
