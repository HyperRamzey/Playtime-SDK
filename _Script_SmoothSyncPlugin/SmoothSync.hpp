#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SmoothSyncPlugin {
#pragma pack(push, 1)
struct SmoothSync : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x2c0]; public:
    float& get_interpolationBackTime();
    void* get_ExtrapolationMode();
    bool get_useExtrapolationTimeLimit();
    void set_useExtrapolationTimeLimit(bool value);
    float& get_extrapolationTimeLimit();
    bool get_useExtrapolationDistanceLimit();
    void set_useExtrapolationDistanceLimit(bool value);
    float& get_extrapolationDistanceLimit();
    float& get_sendPositionThreshold();
    float& get_sendRotationThreshold();
    float& get_sendScaleThreshold();
    float& get_sendVelocityThreshold();
    float& get_sendAngularVelocityThreshold();
    float& get_receivedPositionThreshold();
    float& get_receivedRotationThreshold();
    float& get_positionSnapThreshold();
    float& get_rotationSnapThreshold();
    float& get_scaleSnapThreshold();
    float& get_timeSmoothing();
    float& get_positionLerpSpeed();
    float& get_rotationLerpSpeed();
    float& get_scaleLerpSpeed();
    void* get_syncPosition();
    void* get_syncRotation();
    void* get_syncScale();
    void* get_syncVelocity();
    void* get_syncAngularVelocity();
    bool get_syncMovementMode();
    void set_syncMovementMode(bool value);
    bool get_isPositionCompressed();
    void set_isPositionCompressed(bool value);
    bool get_isRotationCompressed();
    void set_isRotationCompressed(bool value);
    bool get_isScaleCompressed();
    void set_isScaleCompressed(bool value);
    bool get_isVelocityCompressed();
    void set_isVelocityCompressed(bool value);
    bool get_isAngularVelocityCompressed();
    void set_isAngularVelocityCompressed(bool value);
    float& get_sendRate();
    bool get_isUsingOriginRebasing();
    void set_isUsingOriginRebasing(bool value);
    bool get_alwaysSendOrigin();
    void set_alwaysSendOrigin(bool value);
    bool get_syncOwnershipChange();
    void set_syncOwnershipChange(bool value);
    _Script_Engine::SceneComponent*& get_realComponentToSync();
    float& get_InterpolationTime();
    float& get_atRestPositionThreshold();
    float& get_atRestRotationThreshold();
    static _Script_CoreUObject::Class* static_class();
    void teleport();
    void SmoothSyncTeleportServerToClients(_Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Rotation, _Script_CoreUObject::Vector Scale, float tempOwnerTime);
    void SmoothSyncTeleportClientToServer(_Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Rotation, _Script_CoreUObject::Vector Scale, float tempOwnerTime);
    void SmoothSyncEnableServerToClients(bool enable);
    void SmoothSyncEnableClientToServer(bool enable);
    void setSceneComponentToSync(_Script_Engine::SceneComponent* theComponent);
    void ServerSendsTransformToEveryone(void*& Value);
    void forceStateSendNextFrame();
    void enableSmoothSync(bool enable);
    void ClientSendsTransformToServer(void*& Value);
    void clearBuffer();
}; // Size: 0x370
#pragma pack(pop)
}
