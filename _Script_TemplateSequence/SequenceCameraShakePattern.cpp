#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShakePattern.hpp"
#include "CameraAnimationSequence.hpp"
#include "SequenceCameraShakeCameraStandIn.hpp"
#include "SequenceCameraShakePattern.hpp"
#include "SequenceCameraShakeSequencePlayer.hpp"
_Script_TemplateSequence::CameraAnimationSequence*& _Script_TemplateSequence::SequenceCameraShakePattern::get_Sequence() {
    return *(_Script_TemplateSequence::CameraAnimationSequence**)((uintptr_t)this + 0x28);
}
float& _Script_TemplateSequence::SequenceCameraShakePattern::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Script_TemplateSequence::SequenceCameraShakePattern::get_bRandomSegment() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
float& _Script_TemplateSequence::SequenceCameraShakePattern::get_Scale() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_TemplateSequence::SequenceCameraShakePattern::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_TemplateSequence::SequenceCameraShakePattern::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_TemplateSequence::SequenceCameraShakePattern::get_RandomSegmentDuration() {
    return *(float*)((uintptr_t)this + 0x40);
}
void _Script_TemplateSequence::SequenceCameraShakePattern::set_bRandomSegment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_TemplateSequence::SequenceCameraShakeSequencePlayer*& _Script_TemplateSequence::SequenceCameraShakePattern::get_Player() {
    return *(_Script_TemplateSequence::SequenceCameraShakeSequencePlayer**)((uintptr_t)this + 0x48);
}
_Script_TemplateSequence::SequenceCameraShakeCameraStandIn*& _Script_TemplateSequence::SequenceCameraShakePattern::get_CameraStandIn() {
    return *(_Script_TemplateSequence::SequenceCameraShakeCameraStandIn**)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_TemplateSequence::SequenceCameraShakePattern::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.SequenceCameraShakePattern");
    return result;
}
