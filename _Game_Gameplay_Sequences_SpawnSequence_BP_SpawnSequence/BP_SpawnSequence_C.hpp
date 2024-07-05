#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct PlayerStart;
}
namespace _Script_CinematicCamera {
struct CineCameraComponent;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence {
#pragma pack(push, 1)
struct BP_SpawnSequence_C : public _Script_Engine::Actor {
    private: char pad_220[0x80]; public:
    void* get_UberGraphFrame();
    _Script_CinematicCamera::CineCameraComponent*& get_CineCamera();
    _Script_Engine::SplineComponent*& get_CameraRail();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_TL_CameraSequence_Fade_E0F2E4DD4EECC768E51E24BCD9C84614();
    float& get_TL_CameraSequence_Alpha_E0F2E4DD4EECC768E51E24BCD9C84614();
    void* get_TL_CameraSequence__Direction_E0F2E4DD4EECC768E51E24BCD9C84614();
    _Script_Engine::TimelineComponent*& get_TL_CameraSequence();
    void* get_SpawnTransform();
    void* get_Character();
    _Script_Engine::PlayerStart*& get_PlayerStart();
    float& get_CameraProgress();
    bool get_DebugCameraRail();
    void set_DebugCameraRail(bool value);
    void* get_OnIntroPlayed();
    void* get_PlayerStarts();
    static _Script_CoreUObject::Class* static_class();
    void TogglePlayerMesh(bool Hide);
    void ReservePlayerStart(_Script_Engine::PlayerStart*& PlayerStart);
    void GetMonsterHud(_Script_UMG::UserWidget*& HUD);
    void GetCameraTarget(_Script_CoreUObject::Vector& Location, _Script_CoreUObject::Rotator& Roation);
    void ConvertStartTransform(_Script_CoreUObject::Transform InTransform, _Script_CoreUObject::Transform& OutTransform);
    void UserConstructionScript0();
    void TL_CameraSequence__FinishedFunc();
    void TL_CameraSequence__UpdateFunc();
    void ReceiveBeginPlay0();
    void PlaySequence();
    void ExecuteUbergraph_BP_SpawnSequence(int32_t EntryPoint);
    void OnIntroPlayed__DelegateSignature();
}; // Size: 0x2a0
#pragma pack(pop)
}
