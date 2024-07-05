#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CinematicCamera {
struct CineCameraComponent;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Game_Interface_UI_MapIntro {
struct UI_MapIntro_C;
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
namespace _Game_Gameplay_Sequences_SpawnSequence_BP_IntroSequence {
#pragma pack(push, 1)
struct BP_IntroSequence_C : public _Script_Engine::Actor {
    private: char pad_220[0x58]; public:
    void* get_UberGraphFrame();
    _Script_CinematicCamera::CineCameraComponent*& get_CineCamera();
    _Script_Engine::SplineComponent*& get_Rail();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_TL_CameraSequence_Fade_2CAF406B400FDEC53F2DD1A404FD0956();
    float& get_TL_CameraSequence_Alpha_2CAF406B400FDEC53F2DD1A404FD0956();
    void* get_TL_CameraSequence__Direction_2CAF406B400FDEC53F2DD1A404FD0956();
    _Script_Engine::TimelineComponent*& get_TL_CameraSequence();
    float& get_Length();
    float& get_Progress();
    void* get_OnIntroPlayed();
    _Game_Interface_UI_MapIntro::UI_MapIntro_C*& get_MapIntroUI();
    static _Script_CoreUObject::Class* static_class();
    void* GetLevelName();
    void GetPlayerHUD(_Script_UMG::UserWidget*& HUD);
    void GetCameraTarget(_Script_CoreUObject::Vector& Location, _Script_CoreUObject::Rotator& Roation);
    void UserConstructionScript0();
    void TL_CameraSequence__FinishedFunc();
    void TL_CameraSequence__UpdateFunc();
    void ReceiveBeginPlay0();
    void PlaySequence();
    void CreateIntroWidget();
    void ExecuteUbergraph_BP_IntroSequence(int32_t EntryPoint);
    void OnIntroPlayed__DelegateSignature();
}; // Size: 0x278
#pragma pack(pop)
}
