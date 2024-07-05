#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct SpringArmComponent;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance {
struct BP_WormholeEntrance_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_SpectateObject {
#pragma pack(push, 1)
struct SpectateObject_C : public _Script_Engine::Pawn {
    private: char pad_280[0x30]; public:
    void* get_UberGraphFrame();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::SpringArmComponent*& get_SpringArm();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C*& get_Hatch();
    bool get_Dead();
    void set_Dead(bool value);
    static _Script_CoreUObject::Class* static_class();
    void InpActEvt_HitHatch_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void InpAxisEvt_LookPitch_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1(float AxisValue);
    void ReceiveUnpossessed0(_Script_Engine::Controller* OldController);
    void HitHatch();
    void ReceivePossessed0(_Script_Engine::Controller* NewController);
    void SetUI(bool Visible_);
    void DisableHatchHitting();
    void ExecuteUbergraph_SpectateObject(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
}
