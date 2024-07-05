#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct RectLightComponent;
}
namespace _Script_AIModule {
struct AIPerceptionStimuliSourceComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Interface_BPC_Tooltip {
struct BPC_Tooltip_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Game_Base_GM_Escape {
struct GM_Escape_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit {
#pragma pack(push, 1)
struct BP_ToyMachineDeposit_C : public _Script_Engine::Actor {
    private: char pad_220[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::RectLightComponent*& get_RectLight();
    _Script_Engine::StaticMeshComponent*& get_DarkFX();
    _Script_Engine::StaticMeshComponent*& get_SM_ToyMachineDepositA2();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip();
    _Script_AIModule::AIPerceptionStimuliSourceComponent*& get_AIPerceptionStimuliSource();
    _Script_Engine::BoxComponent*& get_HideZone();
    _Script_Engine::StaticMeshComponent*& get_Toy();
    _Script_Engine::SkeletalMeshComponent*& get_ToyAction();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_OnToyDeposited();
    void* get_Box_Characters();
    _Game_Base_GM_Escape::GM_Escape_C*& get_GM_Escape();
    float& get_Intensity();
    void* get_Light_Color();
    float& get_Temperature();
    bool get_Gm_Escape_Tutorial();
    void set_Gm_Escape_Tutorial(bool value);
    static _Script_CoreUObject::Class* static_class();
    void InsertToy(int32_t ToyIndex, _Script_Engine::StaticMesh* ToyMesh);
    void PlayDropAnimation(_Script_Engine::StaticMesh* ToyMesh);
    void UserConstructionScript0();
    void ReceiveActorBeginOverlap0(_Script_Engine::Actor* OtherActor);
    void MultiAnimateToy();
    void BndEvt__BP_ToyMachineDeposit_HideZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveActorEndOverlap0(_Script_Engine::Actor* OtherActor);
    void ReceiveBeginPlay0();
    void ReceiveTick0(float DeltaSeconds);
    void SetEnabled();
    void ExecuteUbergraph_BP_ToyMachineDeposit(int32_t EntryPoint);
    void OnToyDeposited__DelegateSignature();
}; // Size: 0x2c8
#pragma pack(pop)
}
