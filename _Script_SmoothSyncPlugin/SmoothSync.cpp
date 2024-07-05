#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "SmoothSync.hpp"
float& _Script_SmoothSyncPlugin::SmoothSync::get_interpolationBackTime() {
    return *(float*)((uintptr_t)this + 0x108);
}
void _Script_SmoothSyncPlugin::SmoothSync::clearBuffer() {
    return;
}
bool _Script_SmoothSyncPlugin::SmoothSync::get_useExtrapolationTimeLimit() {
    return (*(uint8_t*)((uintptr_t)this + 0x10d + 0)) & 1 != 0;
}
void* _Script_SmoothSyncPlugin::SmoothSync::get_ExtrapolationMode() {
    return (void*)((uintptr_t)this + 0x10c);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_extrapolationDistanceLimit() {
    return *(float*)((uintptr_t)this + 0x118);
}
void _Script_SmoothSyncPlugin::SmoothSync::set_useExtrapolationTimeLimit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10d + 0);
    *(uint8_t*)((uintptr_t)this + 0x10d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_extrapolationTimeLimit() {
    return *(float*)((uintptr_t)this + 0x110);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_sendAngularVelocityThreshold() {
    return *(float*)((uintptr_t)this + 0x12c);
}
void _Script_SmoothSyncPlugin::SmoothSync::set_useExtrapolationDistanceLimit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x114 + 0);
    *(uint8_t*)((uintptr_t)this + 0x114 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Script_SmoothSyncPlugin::SmoothSync::get_realComponentToSync() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x1f8);
}
bool _Script_SmoothSyncPlugin::SmoothSync::get_useExtrapolationDistanceLimit() {
    return (*(uint8_t*)((uintptr_t)this + 0x114 + 0)) & 1 != 0;
}
bool _Script_SmoothSyncPlugin::SmoothSync::get_syncOwnershipChange() {
    return (*(uint8_t*)((uintptr_t)this + 0x166 + 0)) & 1 != 0;
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_sendPositionThreshold() {
    return *(float*)((uintptr_t)this + 0x11c);
}
void* _Script_SmoothSyncPlugin::SmoothSync::get_syncScale() {
    return (void*)((uintptr_t)this + 0x156);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_sendRotationThreshold() {
    return *(float*)((uintptr_t)this + 0x120);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_sendScaleThreshold() {
    return *(float*)((uintptr_t)this + 0x124);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_sendVelocityThreshold() {
    return *(float*)((uintptr_t)this + 0x128);
}
void* _Script_SmoothSyncPlugin::SmoothSync::get_syncPosition() {
    return (void*)((uintptr_t)this + 0x154);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_receivedPositionThreshold() {
    return *(float*)((uintptr_t)this + 0x130);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_positionSnapThreshold() {
    return *(float*)((uintptr_t)this + 0x138);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_receivedRotationThreshold() {
    return *(float*)((uintptr_t)this + 0x134);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_rotationSnapThreshold() {
    return *(float*)((uintptr_t)this + 0x13c);
}
void _Script_SmoothSyncPlugin::SmoothSync::ClientSendsTransformToServer(void*& Value) {
    return;
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_scaleSnapThreshold() {
    return *(float*)((uintptr_t)this + 0x140);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_timeSmoothing() {
    return *(float*)((uintptr_t)this + 0x144);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_positionLerpSpeed() {
    return *(float*)((uintptr_t)this + 0x148);
}
void _Script_SmoothSyncPlugin::SmoothSync::enableSmoothSync(bool enable) {
    return;
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_rotationLerpSpeed() {
    return *(float*)((uintptr_t)this + 0x14c);
}
void* _Script_SmoothSyncPlugin::SmoothSync::get_syncVelocity() {
    return (void*)((uintptr_t)this + 0x157);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_scaleLerpSpeed() {
    return *(float*)((uintptr_t)this + 0x150);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_atRestPositionThreshold() {
    return *(float*)((uintptr_t)this + 0x350);
}
void* _Script_SmoothSyncPlugin::SmoothSync::get_syncRotation() {
    return (void*)((uintptr_t)this + 0x155);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_atRestRotationThreshold() {
    return *(float*)((uintptr_t)this + 0x354);
}
void* _Script_SmoothSyncPlugin::SmoothSync::get_syncAngularVelocity() {
    return (void*)((uintptr_t)this + 0x158);
}
bool _Script_SmoothSyncPlugin::SmoothSync::get_syncMovementMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x159 + 0)) & 1 != 0;
}
void _Script_SmoothSyncPlugin::SmoothSync::set_syncMovementMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x159 + 0);
    *(uint8_t*)((uintptr_t)this + 0x159 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SmoothSyncPlugin::SmoothSync::get_isPositionCompressed() {
    return (*(uint8_t*)((uintptr_t)this + 0x15a + 0)) & 1 != 0;
}
void _Script_SmoothSyncPlugin::SmoothSync::set_isPositionCompressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15a + 0);
    *(uint8_t*)((uintptr_t)this + 0x15a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SmoothSyncPlugin::SmoothSync::get_isRotationCompressed() {
    return (*(uint8_t*)((uintptr_t)this + 0x15b + 0)) & 1 != 0;
}
void _Script_SmoothSyncPlugin::SmoothSync::set_isRotationCompressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15b + 0);
    *(uint8_t*)((uintptr_t)this + 0x15b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SmoothSyncPlugin::SmoothSync::get_isScaleCompressed() {
    return (*(uint8_t*)((uintptr_t)this + 0x15c + 0)) & 1 != 0;
}
void _Script_SmoothSyncPlugin::SmoothSync::SmoothSyncEnableServerToClients(bool enable) {
    return;
}
void _Script_SmoothSyncPlugin::SmoothSync::set_isScaleCompressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15c + 0);
    *(uint8_t*)((uintptr_t)this + 0x15c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SmoothSyncPlugin::SmoothSync::get_isVelocityCompressed() {
    return (*(uint8_t*)((uintptr_t)this + 0x15d + 0)) & 1 != 0;
}
void _Script_SmoothSyncPlugin::SmoothSync::set_isVelocityCompressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15d + 0);
    *(uint8_t*)((uintptr_t)this + 0x15d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SmoothSyncPlugin::SmoothSync::get_isAngularVelocityCompressed() {
    return (*(uint8_t*)((uintptr_t)this + 0x15e + 0)) & 1 != 0;
}
void _Script_SmoothSyncPlugin::SmoothSync::set_isAngularVelocityCompressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15e + 0);
    *(uint8_t*)((uintptr_t)this + 0x15e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_sendRate() {
    return *(float*)((uintptr_t)this + 0x160);
}
bool _Script_SmoothSyncPlugin::SmoothSync::get_isUsingOriginRebasing() {
    return (*(uint8_t*)((uintptr_t)this + 0x164 + 0)) & 1 != 0;
}
void _Script_SmoothSyncPlugin::SmoothSync::set_isUsingOriginRebasing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x164 + 0);
    *(uint8_t*)((uintptr_t)this + 0x164 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SmoothSyncPlugin::SmoothSync::get_alwaysSendOrigin() {
    return (*(uint8_t*)((uintptr_t)this + 0x165 + 0)) & 1 != 0;
}
void _Script_SmoothSyncPlugin::SmoothSync::set_alwaysSendOrigin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x165 + 0);
    *(uint8_t*)((uintptr_t)this + 0x165 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SmoothSyncPlugin::SmoothSync::set_syncOwnershipChange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x166 + 0);
    *(uint8_t*)((uintptr_t)this + 0x166 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SmoothSyncPlugin::SmoothSync::get_InterpolationTime() {
    return *(float*)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Script_SmoothSyncPlugin::SmoothSync::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SmoothSyncPlugin.SmoothSync");
    return result;
}
void _Script_SmoothSyncPlugin::SmoothSync::teleport() {
    return;
}
void _Script_SmoothSyncPlugin::SmoothSync::SmoothSyncTeleportServerToClients(_Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Rotation, _Script_CoreUObject::Vector Scale, float tempOwnerTime) {
    return;
}
void _Script_SmoothSyncPlugin::SmoothSync::SmoothSyncTeleportClientToServer(_Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Rotation, _Script_CoreUObject::Vector Scale, float tempOwnerTime) {
    return;
}
void _Script_SmoothSyncPlugin::SmoothSync::SmoothSyncEnableClientToServer(bool enable) {
    return;
}
void _Script_SmoothSyncPlugin::SmoothSync::setSceneComponentToSync(_Script_Engine::SceneComponent* theComponent) {
    return;
}
void _Script_SmoothSyncPlugin::SmoothSync::ServerSendsTransformToEveryone(void*& Value) {
    return;
}
void _Script_SmoothSyncPlugin::SmoothSync::forceStateSendNextFrame() {
    return;
}
