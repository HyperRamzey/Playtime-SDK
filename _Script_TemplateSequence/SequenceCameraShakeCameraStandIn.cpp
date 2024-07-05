#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SequenceCameraShakeCameraStandIn.hpp"
float& _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::get_FieldOfView() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::get_bConstrainAspectRatio() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::set_bConstrainAspectRatio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::get_AspectRatio() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::get_PostProcessBlendWeight() {
    return *(float*)((uintptr_t)this + 0x5a0);
}
void* _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::get_PostProcessSettings() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::get_LensSettings() {
    return (void*)((uintptr_t)this + 0x5b0);
}
void* _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::get_Filmback() {
    return (void*)((uintptr_t)this + 0x5a4);
}
void* _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::get_FocusSettings() {
    return (void*)((uintptr_t)this + 0x5c8);
}
float& _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::get_CurrentFocalLength() {
    return *(float*)((uintptr_t)this + 0x620);
}
float& _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::get_CurrentAperture() {
    return *(float*)((uintptr_t)this + 0x624);
}
float& _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::get_CurrentFocusDistance() {
    return *(float*)((uintptr_t)this + 0x628);
}
_Script_CoreUObject::Class* _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn");
    return result;
}
