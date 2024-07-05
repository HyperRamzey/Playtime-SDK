#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "GeometryCache.hpp"
#include "GeometryCacheComponent.hpp"
bool _Script_GeometryCache::GeometryCacheComponent::get_bExtrapolateFrames() {
    return (*(uint8_t*)((uintptr_t)this + 0x482 + 0)) & 1 != 0;
}
_Script_GeometryCache::GeometryCache*& _Script_GeometryCache::GeometryCacheComponent::get_GeometryCache() {
    return *(_Script_GeometryCache::GeometryCache**)((uintptr_t)this + 0x478);
}
void _Script_GeometryCache::GeometryCacheComponent::set_bRunning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x480 + 0);
    *(uint8_t*)((uintptr_t)this + 0x480 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCache::GeometryCacheComponent::get_bRunning() {
    return (*(uint8_t*)((uintptr_t)this + 0x480 + 0)) & 1 != 0;
}
float& _Script_GeometryCache::GeometryCacheComponent::get_StartTimeOffset() {
    return *(float*)((uintptr_t)this + 0x484);
}
bool _Script_GeometryCache::GeometryCacheComponent::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x481 + 0)) & 1 != 0;
}
void _Script_GeometryCache::GeometryCacheComponent::Stop() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x481 + 0);
    *(uint8_t*)((uintptr_t)this + 0x481 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCache::GeometryCacheComponent::set_bExtrapolateFrames(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x482 + 0);
    *(uint8_t*)((uintptr_t)this + 0x482 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCache::GeometryCacheComponent::get_bManualTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d0 + 0)) & 1 != 0;
}
float& _Script_GeometryCache::GeometryCacheComponent::get_PlaybackSpeed() {
    return *(float*)((uintptr_t)this + 0x488);
}
float& _Script_GeometryCache::GeometryCacheComponent::get_MotionVectorScale() {
    return *(float*)((uintptr_t)this + 0x48c);
}
int32_t& _Script_GeometryCache::GeometryCacheComponent::get_NumTracks() {
    return *(int32_t*)((uintptr_t)this + 0x490);
}
float& _Script_GeometryCache::GeometryCacheComponent::get_ElapsedTime() {
    return *(float*)((uintptr_t)this + 0x494);
}
float& _Script_GeometryCache::GeometryCacheComponent::get_Duration() {
    return *(float*)((uintptr_t)this + 0x4cc);
}
void _Script_GeometryCache::GeometryCacheComponent::set_bManualTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCacheComponent");
    return result;
}
void _Script_GeometryCache::GeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping) {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset) {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed) {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::SetMotionVectorScale(float NewMotionVectorScale) {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::SetLooping(bool bNewLooping) {
    return;
}
bool _Script_GeometryCache::GeometryCacheComponent::SetGeometryCache(_Script_GeometryCache::GeometryCache* NewGeomCache) {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::SetExtrapolateFrames(bool bNewExtrapolating) {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::PlayReversedFromEnd() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::PlayReversed() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::PlayFromStart() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::Play() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::Pause() {
    return;
}
bool _Script_GeometryCache::GeometryCacheComponent::IsPlayingReversed() {
    return;
}
bool _Script_GeometryCache::GeometryCacheComponent::IsPlaying() {
    return;
}
bool _Script_GeometryCache::GeometryCacheComponent::IsLooping() {
    return;
}
bool _Script_GeometryCache::GeometryCacheComponent::IsExtrapolatingFrames() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetStartTimeOffset() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetPlaybackSpeed() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetPlaybackDirection() {
    return;
}
int32_t _Script_GeometryCache::GeometryCacheComponent::GetNumberOfFrames() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetMotionVectorScale() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetDuration() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetAnimationTime() {
    return;
}
