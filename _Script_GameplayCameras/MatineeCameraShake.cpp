#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_Engine\CameraAnim.hpp"
#include "..\_Script_Engine\CameraAnimInst.hpp"
#include "..\_Script_Engine\CameraShakeBase.hpp"
#include "..\_Script_Engine\CameraShakeSourceComponent.hpp"
#include "..\_Script_Engine\MinimalViewInfo.hpp"
#include "..\_Script_Engine\PlayerCameraManager.hpp"
#include "MatineeCameraShake.hpp"
#include "..\_Script_TemplateSequence\CameraAnimationSequence.hpp"
#include "..\_Script_TemplateSequence\SequenceCameraShakePattern.hpp"
float& _Script_GameplayCameras::MatineeCameraShake::get_OscillationDuration() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_GameplayCameras::MatineeCameraShake::get_OscillationBlendInTime() {
    return *(float*)((uintptr_t)this + 0xac);
}
float& _Script_GameplayCameras::MatineeCameraShake::get_OscillationBlendOutTime() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_GameplayCameras::MatineeCameraShake::get_AnimScale() {
    return *(float*)((uintptr_t)this + 0x10c);
}
void* _Script_GameplayCameras::MatineeCameraShake::get_RotOscillation() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_GameplayCameras::MatineeCameraShake::get_LocOscillation() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_GameplayCameras::MatineeCameraShake::get_FOVOscillation() {
    return (void*)((uintptr_t)this + 0xfc);
}
float& _Script_GameplayCameras::MatineeCameraShake::get_AnimPlayRate() {
    return *(float*)((uintptr_t)this + 0x108);
}
_Script_GameplayCameras::MatineeCameraShake* _Script_GameplayCameras::MatineeCameraShake::StartMatineeCameraShakeFromSource(_Script_Engine::PlayerCameraManager* PlayerCameraManager, void* ShakeClass, _Script_Engine::CameraShakeSourceComponent* SourceComponent, float Scale, void* PlaySpace, _Script_CoreUObject::Rotator UserPlaySpaceRot) {
    return;
}
float& _Script_GameplayCameras::MatineeCameraShake::get_AnimBlendInTime() {
    return *(float*)((uintptr_t)this + 0x110);
}
float& _Script_GameplayCameras::MatineeCameraShake::get_AnimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x114);
}
float& _Script_GameplayCameras::MatineeCameraShake::get_RandomAnimSegmentDuration() {
    return *(float*)((uintptr_t)this + 0x118);
}
_Script_Engine::CameraAnim*& _Script_GameplayCameras::MatineeCameraShake::get_Anim() {
    return *(_Script_Engine::CameraAnim**)((uintptr_t)this + 0x120);
}
_Script_TemplateSequence::CameraAnimationSequence*& _Script_GameplayCameras::MatineeCameraShake::get_AnimSequence() {
    return *(_Script_TemplateSequence::CameraAnimationSequence**)((uintptr_t)this + 0x128);
}
bool _Script_GameplayCameras::MatineeCameraShake::get_bRandomAnimSegment() {
    return (*(uint8_t*)((uintptr_t)this + 0x130 + 0)) & 1 != 0;
}
void _Script_GameplayCameras::MatineeCameraShake::set_bRandomAnimSegment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x130 + 0);
    *(uint8_t*)((uintptr_t)this + 0x130 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_GameplayCameras::MatineeCameraShake::get_OscillatorTimeRemaining() {
    return *(float*)((uintptr_t)this + 0x134);
}
_Script_Engine::CameraAnimInst*& _Script_GameplayCameras::MatineeCameraShake::get_AnimInst() {
    return *(_Script_Engine::CameraAnimInst**)((uintptr_t)this + 0x138);
}
_Script_TemplateSequence::SequenceCameraShakePattern*& _Script_GameplayCameras::MatineeCameraShake::get_SequenceShakePattern() {
    return *(_Script_TemplateSequence::SequenceCameraShakePattern**)((uintptr_t)this + 0x180);
}
_Script_CoreUObject::Class* _Script_GameplayCameras::MatineeCameraShake::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayCameras.MatineeCameraShake");
    return result;
}
_Script_GameplayCameras::MatineeCameraShake* _Script_GameplayCameras::MatineeCameraShake::StartMatineeCameraShake(_Script_Engine::PlayerCameraManager* PlayerCameraManager, void* ShakeClass, float Scale, void* PlaySpace, _Script_CoreUObject::Rotator UserPlaySpaceRot) {
    return;
}
void _Script_GameplayCameras::MatineeCameraShake::ReceiveStopShake(bool bImmediately) {
    return;
}
void _Script_GameplayCameras::MatineeCameraShake::ReceivePlayShake(float Scale) {
    return;
}
bool _Script_GameplayCameras::MatineeCameraShake::ReceiveIsFinished() {
    return;
}
void _Script_GameplayCameras::MatineeCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, _Script_Engine::MinimalViewInfo& POV, _Script_Engine::MinimalViewInfo& ModifiedPOV) {
    return;
}
