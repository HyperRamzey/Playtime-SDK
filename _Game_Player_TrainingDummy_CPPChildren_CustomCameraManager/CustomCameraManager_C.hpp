#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MinimalViewInfo.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimeCameraManager.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Game_Player_TrainingDummy_CPPChildren_CustomCameraManager {
#pragma pack(push, 1)
struct CustomCameraManager_C : public _Script_Playtime_Multiplayer::PlaytimeCameraManager {
    private: char pad_2810[0x20]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_AttachCam();
    bool get_IsBlending();
    void set_IsBlending(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool BlueprintUpdateCamera(_Script_Engine::Actor* CameraTarget, _Script_CoreUObject::Vector& NewCameraLocation, _Script_CoreUObject::Rotator& NewCameraRotation, float& NewCameraFOV);
    void BP_OnBlendComplete0();
    void ReceiveTick(float DeltaSeconds);
    void OnUpdatePOV0(_Script_Engine::MinimalViewInfo NewPOV);
    void ExecuteUbergraph_CustomCameraManager(int32_t EntryPoint);
}; // Size: 0x2830
#pragma pack(pop)
}
