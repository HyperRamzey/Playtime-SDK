#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\Door.hpp"
namespace _Script_AIModule {
struct AIPerceptionStimuliSourceComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Interface_BPC_Tooltip {
struct BPC_Tooltip_C;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Interaction_BP_PullDownDoor {
#pragma pack(push, 1)
struct BP_PullDownDoor_C : public _Script_Playtime_Multiplayer::Door {
    private: char pad_280[0xb0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_SM_PullDoorFrame();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip();
    _Script_AIModule::AIPerceptionStimuliSourceComponent*& get_AIPerceptionStimuliSource();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos1();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos();
    _Script_Engine::PointLightComponent*& get_PointLight3();
    _Script_Engine::PointLightComponent*& get_PointLight2();
    _Script_Engine::PointLightComponent*& get_PointLight1();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::StaticMeshComponent*& get_SM_SlamDoorHandle();
    _Script_Engine::StaticMeshComponent*& get_SM_SlamDoor();
    _Script_Engine::SplineComponent*& get_Spline();
    _Script_Engine::BoxComponent*& get_Box1();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet1();
    _Script_Engine::BoxComponent*& get_Box();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet();
    _Script_Engine::SceneComponent*& get_Handle1();
    _Script_Engine::SceneComponent*& get_Handle();
    _Script_Engine::SceneComponent*& get_DoorParent();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_CloseDuration();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void On_Any_AttachmentStateChange(void* AttachmentStateChange);
    void BP_ShowOpenness0(float CurvedOpenness);
    void BP_OnClosed0();
    void BndEvt__BP_PullDownDoor_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_PullDownDoor_BPC_HandMagnet1_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BP_OnRep_DisabledByNoEscape0();
    void BP_OnRep_ShutByLockdown0();
    void ExecuteUbergraph_BP_PullDownDoor(int32_t EntryPoint);
}; // Size: 0x330
#pragma pack(pop)
}
