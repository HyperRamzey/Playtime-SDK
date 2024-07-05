#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MagicLeapARPin\MagicLeapARPinInfoActorBase.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _MagicLeapPassableWorld_MagicLeapARPinInfoActor {
#pragma pack(push, 1)
struct MagicLeapARPinInfoActor_C : public _Script_MagicLeapARPin::MagicLeapARPinInfoActorBase {
    private: char pad_238[0x90]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Right();
    _Script_Engine::StaticMeshComponent*& get_Forward();
    _Script_Engine::StaticMeshComponent*& get_Up();
    _Script_Engine::SphereComponent*& get_ValidRadiusVisualizer();
    _Script_Engine::SceneComponent*& get_AxisRoot();
    _Script_Engine::SceneComponent*& get_VisualizerRoot();
    _Script_Engine::TextRenderComponent*& get_TypeValue();
    _Script_Engine::TextRenderComponent*& get_TransErrValue();
    _Script_Engine::TextRenderComponent*& get_RotErrValue();
    _Script_Engine::TextRenderComponent*& get_ConfidenceValue();
    _Script_Engine::TextRenderComponent*& get_TransErrLabel();
    _Script_Engine::TextRenderComponent*& get_RotErrLabel();
    _Script_Engine::TextRenderComponent*& get_ConfidenceLabel();
    _Script_Engine::TextRenderComponent*& get_PinIDValue();
    _Script_Engine::SceneComponent*& get_InfoRoot();
    _Script_Engine::SceneComponent*& get_Root();
    float& get_RotationSmoothSpeed();
    static _Script_CoreUObject::Class* static_class();
    void UpdatePinState();
    void UserConstructionScript();
    void OnUpdateARPinState0();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint);
}; // Size: 0x2c8
#pragma pack(pop)
}
