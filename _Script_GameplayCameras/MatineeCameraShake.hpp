#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_Engine\CameraShakeBase.hpp"
namespace _Script_Engine {
struct CameraAnim;
}
namespace _Script_TemplateSequence {
struct CameraAnimationSequence;
}
namespace _Script_Engine {
struct CameraAnimInst;
}
namespace _Script_TemplateSequence {
struct SequenceCameraShakePattern;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerCameraManager;
}
namespace _Script_Engine {
struct CameraShakeSourceComponent;
}
namespace _Script_Engine {
struct MinimalViewInfo;
}
namespace _Script_GameplayCameras {
#pragma pack(push, 1)
struct MatineeCameraShake : public _Script_Engine::CameraShakeBase {
    private: char pad_b0[0x100]; public:
    float& get_OscillationDuration();
    float& get_OscillationBlendInTime();
    float& get_OscillationBlendOutTime();
    void* get_RotOscillation();
    void* get_LocOscillation();
    void* get_FOVOscillation();
    float& get_AnimPlayRate();
    float& get_AnimScale();
    float& get_AnimBlendInTime();
    float& get_AnimBlendOutTime();
    float& get_RandomAnimSegmentDuration();
    _Script_Engine::CameraAnim*& get_Anim();
    _Script_TemplateSequence::CameraAnimationSequence*& get_AnimSequence();
    bool get_bRandomAnimSegment();
    void set_bRandomAnimSegment(bool value);
    float& get_OscillatorTimeRemaining();
    _Script_Engine::CameraAnimInst*& get_AnimInst();
    _Script_TemplateSequence::SequenceCameraShakePattern*& get_SequenceShakePattern();
    static _Script_CoreUObject::Class* static_class();
    _Script_GameplayCameras::MatineeCameraShake* StartMatineeCameraShakeFromSource(_Script_Engine::PlayerCameraManager* PlayerCameraManager, void* ShakeClass, _Script_Engine::CameraShakeSourceComponent* SourceComponent, float Scale, void* PlaySpace, _Script_CoreUObject::Rotator UserPlaySpaceRot);
    _Script_GameplayCameras::MatineeCameraShake* StartMatineeCameraShake(_Script_Engine::PlayerCameraManager* PlayerCameraManager, void* ShakeClass, float Scale, void* PlaySpace, _Script_CoreUObject::Rotator UserPlaySpaceRot);
    void ReceiveStopShake(bool bImmediately);
    void ReceivePlayShake(float Scale);
    bool ReceiveIsFinished();
    void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, _Script_Engine::MinimalViewInfo& POV, _Script_Engine::MinimalViewInfo& ModifiedPOV);
}; // Size: 0x1b0
#pragma pack(pop)
}
