#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\ANetworkSwingHandle.hpp"
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Game_Interface_BPC_Tooltip {
struct BPC_Tooltip_C;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_AIModule {
struct AIPerceptionStimuliSourceComponent;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkHand;
}
namespace _Game_Gameplay_Game_BP_NetworkSwingHandle {
#pragma pack(push, 1)
struct BP_NetworkSwingHandle_C : public _Script_Playtime_Multiplayer::ANetworkSwingHandle {
    private: char pad_2a0[0x80]; public:
    void* get_UberGraphFrame();
    _Script_Engine::CapsuleComponent*& get_Capsule();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::BoxComponent*& get_BlockAllDynamicCollision();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip();
    _Script_AIModule::AIPerceptionStimuliSourceComponent*& get_AIPerceptionStimuliSource();
    _Script_Engine::StaticMeshComponent*& get_NoCollisionVisual();
    _Script_Engine::StaticMeshComponent*& get_Cube();
    _Script_Engine::TextRenderComponent*& get_TextRender1();
    _Script_Engine::TextRenderComponent*& get_TextRender();
    float& get_HideGrappleTimeline_OpenAlpha_D304674444450D6E8D59658477C07B0F();
    float& get_HideGrappleTimeline_BreakAlpha_D304674444450D6E8D59658477C07B0F();
    float& get_HideGrappleTimeline_Alpha_D304674444450D6E8D59658477C07B0F();
    void* get_HideGrappleTimeline__Direction_D304674444450D6E8D59658477C07B0F();
    _Script_Engine::TimelineComponent*& get_HideGrappleTimeline();
    bool get_OnCooldown();
    void set_OnCooldown(bool value);
    bool get_UsesAutomaticCooldown();
    void set_UsesAutomaticCooldown(bool value);
    bool get_CanGrab();
    void set_CanGrab(bool value);
    bool get_Closing();
    void set_Closing(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AdjustAttachPoint(_Script_CoreUObject::Transform& Point);
    void HideGrappleTimeline__FinishedFunc();
    void HideGrappleTimeline__UpdateFunc();
    void Activate_Grapple();
    void Deactivate_Grapple();
    void Pull(_Script_Playtime_Multiplayer::ANetworkHand* Hand);
    void Attach(_Script_Playtime_Multiplayer::ANetworkHand* Hand);
    void Detach(_Script_Playtime_Multiplayer::ANetworkHand* Hand);
    void Sabotage(float Duration);
    void OnRep_GrappleSabotaged0();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NetworkSwingHandle(int32_t EntryPoint);
}; // Size: 0x320
#pragma pack(pop)
}
