#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Playtime_Multiplayer\BoogieBot.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Player_TrainingDummy_BP_CommsComponent {
struct BP_CommsComponent_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem {
struct BPC_NavSystem_C;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct SpringArmComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavPingLocation {
struct BP_NavPingLocation_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor {
struct BP_NavBaseActor_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Playtime_Multiplayer {
struct OutlineComponent;
}
namespace _Game_Player_BoogieBot_BP_BoogieBot {
#pragma pack(push, 1)
struct BP_BoogieBot_C : public _Script_Playtime_Multiplayer::BoogieBot {
    private: char pad_4d0[0x90]; public:
    void* get_UberGraphFrame();
    _Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C*& get_BP_CommsComponent();
    _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& get_BPC_NavSystem();
    _Script_Engine::CapsuleComponent*& get_HeadCaps();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::SpringArmComponent*& get_SpringArm();
    _Script_Engine::StaticMeshComponent*& get_RightArm();
    _Script_Engine::StaticMeshComponent*& get_LeftArm();
    _Script_Engine::StaticMeshComponent*& get_LeftLeg();
    _Script_Engine::StaticMeshComponent*& get_RightLeg();
    _Script_Engine::StaticMeshComponent*& get_head();
    _Script_Engine::StaticMeshComponent*& get_Body();
    _Script_Engine::SceneComponent*& get_BoogieBody();
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavPingLocation::BP_NavPingLocation_C*& get_PingLocation();
    void* get_Object_Types();
    bool get_ReviveAbility();
    void set_ReviveAbility(bool value);
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C*& get_Comm();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::Pawn* BP_CreateSpectator0();
    void InpActEvt_Ping_K2Node_InputActionEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_Comms_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void ReceivePossessed(_Script_Engine::Controller* NewController);
    void Client_UpdateUI();
    void Server_Outline(_Script_Playtime_Multiplayer::OutlineComponent* Outline_Component);
    void ReceiveUnpossessed(_Script_Engine::Controller* OldController);
    void CreateSpectator();
    void ExecuteUbergraph_BP_BoogieBot(int32_t EntryPoint);
}; // Size: 0x560
#pragma pack(pop)
}
