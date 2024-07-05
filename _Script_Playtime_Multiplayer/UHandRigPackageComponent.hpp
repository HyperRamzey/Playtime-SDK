#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\Vector_NetQuantize.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkHand;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Playtime_Multiplayer {
struct NetworkRope;
}
namespace _Script_Engine {
struct SpringArmComponent;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct UHandRigPackageComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0xd8]; public:
    void* get_Limb();
    bool get_PressedBeforeAttachment();
    void set_PressedBeforeAttachment(bool value);
    _Script_Playtime_Multiplayer::ANetworkHand*& get_NetworkHand();
    _Script_Playtime_Multiplayer::NetworkRope*& get_NetworkRope();
    _Script_Engine::SpringArmComponent*& get_SpringArm();
    _Script_Engine::StaticMeshComponent*& get_SM_LauncherGun();
    _Script_Engine::SkeletalMeshComponent*& get_SK_Hand();
    _Script_Engine::SceneComponent*& get_HandSpawn();
    _Script_Engine::SceneComponent*& get_RopeComponent();
    bool get_PseudoConstructHasBeenRun();
    void set_PseudoConstructHasBeenRun(bool value);
    void* get_SpawnScale();
    bool get_CheckingWire();
    void set_CheckingWire(bool value);
    void* get_OriginalLauncherGunRotation();
    void* get_HoldingLauncherGunRotation();
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_OwningCharacter();
    void* get_NetworkHandClass();
    void* get_NetworkRopeClass();
    void* get_PlayersToIgnore();
    void* get_HandMagnetTraceChannel();
    void* get_HandMagnetWhilePlayerDownedTraceChannel();
    void* get_PlayerObjectType();
    _Script_Engine::AnimationAsset*& get_HandRetractedAnim();
    void* get_Queued_FromLocation();
    void* get_Queued_ToLocation();
    int32_t& get_Queued_ShotCount();
    bool get_bQueuedTryExtendHand();
    void set_bQueuedTryExtendHand(bool value);
    void* get_OwningClientDesiredHandState();
    void* get_OnHandStateChange();
    static _Script_CoreUObject::Class* static_class();
    void SetRopeComponent(_Script_Engine::SceneComponent* TP_Rope);
    void Server_TryExtendHand(_Script_Engine::Vector_NetQuantize FromLocation, _Script_Engine::Vector_NetQuantize ToLocation);
    void Server_TryDetachAndRetractHand(void* CallerLocalRole);
    void Server_StartRetractBackwards(bool CanTriggerStartedPulling);
    void Server_SetOwningClientDesiredHandState(void* State);
    void Server_BroadcastHandStateChange(void* State);
    void OnRep_NetworkHand();
    void Multicast_TryExtendHand(_Script_Engine::Vector_NetQuantize FromLocation, _Script_Engine::Vector_NetQuantize ToLocation);
    void Multicast_TryDetachAndRetractHand(void* CallerLocalRole);
    void Multicast_StartRetractBackwards(bool CanTriggerStartedPulling);
    bool IsExtended();
    _Script_Engine::SceneComponent* GetRopeStart();
    void CheckWire();
}; // Size: 0x188
#pragma pack(pop)
}
