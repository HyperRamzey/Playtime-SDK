#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CameraShakePattern.hpp"
namespace _Script_TemplateSequence {
struct CameraAnimationSequence;
}
namespace _Script_TemplateSequence {
struct SequenceCameraShakeCameraStandIn;
}
namespace _Script_TemplateSequence {
struct SequenceCameraShakeSequencePlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TemplateSequence {
#pragma pack(push, 1)
struct SequenceCameraShakePattern : public _Script_Engine::CameraShakePattern {
    private: char pad_28[0x30]; public:
    _Script_TemplateSequence::CameraAnimationSequence*& get_Sequence();
    float& get_PlayRate();
    float& get_Scale();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    float& get_RandomSegmentDuration();
    bool get_bRandomSegment();
    void set_bRandomSegment(bool value);
    _Script_TemplateSequence::SequenceCameraShakeSequencePlayer*& get_Player();
    _Script_TemplateSequence::SequenceCameraShakeCameraStandIn*& get_CameraStandIn();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
