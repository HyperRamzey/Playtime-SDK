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
struct TimelineComponent;
}
namespace _Script_Engine {
struct CameraActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_BP_CameraMoverMain {
#pragma pack(push, 1)
struct BP_CameraMoverMain_C : public _Script_Engine::Actor {
    private: char pad_220[0xe0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_Transition_Alpha_B5CADAA8441D3D8698A1AEA840F1B384();
    void* get_Transition__Direction_B5CADAA8441D3D8698A1AEA840F1B384();
    _Script_Engine::TimelineComponent*& get_Transition();
    void* get_Cameras();
    _Script_Engine::CameraActor*& get_PlayerCamera();
    void* get_FromTransform();
    void* get_ToTransform();
    static _Script_CoreUObject::Class* static_class();
    void Transition__FinishedFunc();
    void Transition__UpdateFunc();
    void TransitionToCamera(void* Target, float Time, bool Smoothed);
    void ExecuteUbergraph_BP_CameraMoverMain(int32_t EntryPoint);
}; // Size: 0x300
#pragma pack(pop)
}
