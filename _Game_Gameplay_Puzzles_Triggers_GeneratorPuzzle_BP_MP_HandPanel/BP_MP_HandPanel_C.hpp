#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_UMG {
struct WidgetComponent;
}
namespace _Game_Interface_Misc_UI_HandPadCharge {
struct UI_HandPadCharge_C;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct Material;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel {
#pragma pack(push, 1)
struct BP_MP_HandPanel_C : public _Script_Engine::Actor {
    private: char pad_220[0x98]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Trigger();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet();
    _Script_Engine::StaticMeshComponent*& get_HandDecal();
    _Script_UMG::WidgetComponent*& get_ChargeWidgetComponent();
    _Script_Engine::StaticMeshComponent*& get_HandPanelMesh();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_TL_Progress_Alpha_535C2A2E42058E109D54D4B578AF50B1();
    void* get_TL_Progress__Direction_535C2A2E42058E109D54D4B578AF50B1();
    _Script_Engine::TimelineComponent*& get_TL_Progress();
    void* get_Activated();
    _Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C*& get_ChargeWidget();
    bool get_IsActivated();
    void set_IsActivated(bool value);
    float& get_Play_Rate();
    float& get_Reverse_Rate();
    bool get_LeftHand();
    void set_LeftHand(bool value);
    float& get_Percentage();
    bool get_ShouldPercentageIncrease_();
    void set_ShouldPercentageIncrease_(bool value);
    bool get_DecalRemoved_();
    void set_DecalRemoved_(bool value);
    void* get_PanelType();
    _Script_Engine::Material*& get_Decal();
    void* get_ProgressColor();
    void* get_LeftHandColor();
    void* get_RightHandColor();
    static _Script_CoreUObject::Class* static_class();
    void SetupProgressColor();
    void OnRep_DecalRemoved_();
    void OnRep_Percentage();
    void SetHandStyleWidget();
    void UserConstructionScript0();
    void TL_Progress__FinishedFunc();
    void TL_Progress__UpdateFunc();
    void ReceiveBeginPlay0();
    void BndEvt__BP_TrainCall_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void CustomEvent_0();
    void ExecuteUbergraph_BP_MP_HandPanel(int32_t EntryPoint);
    void Activated__DelegateSignature();
}; // Size: 0x2b8
#pragma pack(pop)
}
