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
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_SpectatePawn {
#pragma pack(push, 1)
struct SpectatePawn_C : public _Script_Engine::Pawn {
    private: char pad_280[0x50]; public:
    void* get_UberGraphFrame();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::SpringArmComponent*& get_CamArm();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_Players();
    int32_t& get_SpectatedIdx();
    void* get_UserName();
    float& get_Points();
    int32_t& get_Tickets();
    static _Script_CoreUObject::Class* static_class();
    void UpdateSpectatablePlayers();
    void InpActEvt_D_K2Node_InputKeyEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_A_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key);
    void InpActEvt_Left_Hand_Extend_K2Node_InputActionEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_Right_Hand_Extend_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void InpAxisEvt_LookPitch_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1(float AxisValue);
    void ReceiveBeginPlay();
    void RefreshSpectated();
    void ExecuteUbergraph_SpectatePawn(int32_t EntryPoint);
}; // Size: 0x2d0
#pragma pack(pop)
}
