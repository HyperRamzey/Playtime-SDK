#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "MagicLeapImageTrackerComponent.hpp"
_Script_Engine::Texture2D*& _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::get_TargetImageTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x1f8);
}
void _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::set_bUseUnreliablePose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x215 + 0);
    *(uint8_t*)((uintptr_t)this + 0x215 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::get_Name() {
    return (void*)((uintptr_t)this + 0x200);
}
float& _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::get_LongerDimension() {
    return *(float*)((uintptr_t)this + 0x210);
}
bool _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::get_bUseUnreliablePose() {
    return (*(uint8_t*)((uintptr_t)this + 0x215 + 0)) & 1 != 0;
}
bool _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::get_bIsStationary() {
    return (*(uint8_t*)((uintptr_t)this + 0x214 + 0)) & 1 != 0;
}
void _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::set_bIsStationary(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x214 + 0);
    *(uint8_t*)((uintptr_t)this + 0x214 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::get_AxisOrientation() {
    return (void*)((uintptr_t)this + 0x216);
}
void* _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::get_OnSetImageTargetSucceeded() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::get_OnSetImageTargetFailed() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::get_OnImageTargetFound() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::get_OnImageTargetLost() {
    return (void*)((uintptr_t)this + 0x248);
}
void* _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::get_OnImageTargetUnreliableTracking() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_CoreUObject::Class* _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapImageTracker.MagicLeapImageTrackerComponent");
    return result;
}
bool _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::SetTargetAsync(_Script_Engine::Texture2D* ImageTarget) {
    return;
}
bool _Script_MagicLeapImageTracker::MagicLeapImageTrackerComponent::RemoveTargetAsync() {
    return;
}
