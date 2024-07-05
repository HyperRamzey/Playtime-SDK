#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\NetworkToyPart.hpp"
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Interface_BPC_Tooltip {
struct BPC_Tooltip_C;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_AIModule {
struct AIPerceptionStimuliSourceComponent;
}
namespace _Script_SmoothSyncPlugin {
struct SmoothSync;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavToyPart {
struct BP_NavToyPart_C;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkHand;
}
namespace _Game_Gameplay_Game_ToyData_BP_ToyPart {
#pragma pack(push, 1)
struct BP_ToyPart_C : public _Script_Playtime_Multiplayer::NetworkToyPart {
    private: char pad_250[0x50]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SphereComponent*& get_Sphere();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip();
    _Script_AIModule::AIPerceptionStimuliSourceComponent*& get_AIPerceptionStimuliSource();
    _Script_SmoothSyncPlugin::SmoothSync*& get_SmoothSync();
    bool get_UseGivenToyPartIndex();
    void set_UseGivenToyPartIndex(bool value);
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Players();
    bool get_Deposited_();
    void set_Deposited_(bool value);
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavToyPart::BP_NavToyPart_C*& get_NavIndicator();
    bool get_UseGivenMesh_();
    void set_UseGivenMesh_(bool value);
    void* get_GivenToySelection();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void ReceiveActorEndOverlap(_Script_Engine::Actor* OtherActor);
    void ReceiveDestroyed();
    void BP_CheckForNearbyPlayer0();
    void Detach(_Script_Playtime_Multiplayer::ANetworkHand* Hand);
    void DestroyNavIndicator();
    void ExecuteUbergraph_BP_ToyPart(int32_t EntryPoint);
}; // Size: 0x2a0
#pragma pack(pop)
}
