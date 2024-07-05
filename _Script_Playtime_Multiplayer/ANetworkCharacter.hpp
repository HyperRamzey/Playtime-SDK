#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "PerkPackage.hpp"
#include "PlaytimeCharacter.hpp"
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_Engine {
struct SpringArmComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Playtime_Multiplayer {
struct UHandRigPackageComponent;
}
namespace _Script_Playtime_Multiplayer {
struct PuzzleSoundPack;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Playtime_Multiplayer {
struct Monster;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Playtime_Multiplayer {
struct PlaytimeMovementComponent;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct ANetworkCharacter : public PlaytimeCharacter {
    private: char pad_5a0[0x200]; public:
    _Script_Engine::SkeletalMesh*& get_GrabpackSkeletalMesh();
    _Script_Engine::SpringArmComponent*& get_CameraSpringArm();
    _Script_Engine::CameraComponent*& get_CameraComponent();
    _Script_Engine::SpringArmComponent*& get_ExtendoHands();
    _Script_Engine::StaticMeshComponent*& get_SM_HeldToyPart();
    _Script_Engine::SplineComponent*& get_SwingPath();
    bool get_bGrabpackBroken();
    void set_bGrabpackBroken(bool value);
    _Script_Engine::SkeletalMeshComponent*& get_FPGrabpackGuns();
    _Script_Engine::SpringArmComponent*& get_LeftSpringArm();
    _Script_Engine::StaticMeshComponent*& get_SM_LeftLauncherGun();
    _Script_Engine::SkeletalMeshComponent*& get_SK_LeftHand();
    _Script_Engine::SceneComponent*& get_LeftHandSpawn();
    _Script_Playtime_Multiplayer::UHandRigPackageComponent*& get_LeftHandPkg();
    _Script_Engine::SpringArmComponent*& get_RightSpringArm();
    _Script_Engine::StaticMeshComponent*& get_SM_RightLauncherGun();
    _Script_Engine::SkeletalMeshComponent*& get_SK_RightHand();
    _Script_Engine::SceneComponent*& get_RightHandSpawn();
    _Script_Playtime_Multiplayer::UHandRigPackageComponent*& get_RightHandPkg();
    _Script_Engine::SpringArmComponent*& get_TP_PawnControlRotationArm();
    _Script_Engine::SpringArmComponent*& get_TP_ShoulderArm();
    _Script_Engine::SpringArmComponent*& get_TP_DistanceArm();
    _Script_Engine::CameraComponent*& get_TP_Camera();
    _Script_Playtime_Multiplayer::PuzzleSoundPack*& get_PuzzleSounds();
    void* get_OnShotBrokenHand();
    void* get_OnPerkSaveGameChanged();
    bool get_PunchingBagPerkShield();
    void set_PunchingBagPerkShield(bool value);
    void* get_OnPunchingBagPerkShieldChanged();
    float& get_PunchingBagPerkShieldRechargeTime();
    bool get_bPlayerIsDown();
    void set_bPlayerIsDown(bool value);
    bool get_bIsInsideLocker();
    void set_bIsInsideLocker(bool value);
    bool get_bIsEnteringLocker();
    void set_bIsEnteringLocker(bool value);
    bool get_bIsInWuggyHole();
    void set_bIsInWuggyHole(bool value);
    _Script_Engine::Actor*& get_WuggyHoleEntranceHatch();
    bool get_IsThirdPerson();
    void set_IsThirdPerson(bool value);
    float& get_AvailableWireLength();
    float& get_SharedLookPitch();
    _Script_Playtime_Multiplayer::Monster*& get_CarryingMonster();
    bool get_PlayerNeedsRevived();
    void set_PlayerNeedsRevived(bool value);
    bool get_Invulnerable();
    void set_Invulnerable(bool value);
    float& get_MaxHealth();
    float& get_Health();
    float& get_MaxWireLength();
    void* get_NetworkHandClass();
    _Script_Engine::AnimSequence*& get_HandRetractedAnim();
    void* get_JokeTimerHandle();
    void* get_OnAttachmentStateChange();
    void* get_TraceTag();
    _Script_CoreUObject::Object*& get_InteractedInterface();
    int32_t& get_HeldToyPartIndex();
    void* get_Perks();
    void* get_OnFearUpdated();
    void* get_OnCommsMenu();
    void* get_OnCommsEnabling();
    void* get_OnCommFired();
    static _Script_CoreUObject::Class* static_class();
    void TurnOnJokeTimer();
    void TurnOffJokeTimer();
    void TakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void SuccessfulPerksCallback(void*& PerksResponse);
    bool ShouldLeaveFootprint();
    void SetPlayerNeedsRevivedWithNotify(bool Value);
    void SetLocalPerksThenReplicate();
    void SetIsInChaseZone(bool bInZone);
    void SetInteractedInterface(_Script_CoreUObject::Object* Interactable);
    void SetHealthWithNotifyClamped(float& In_Health);
    void ServerOnly_DropToyPart(bool SpawnDrop, _Script_CoreUObject::Vector CustomLocation);
    void Server_SetSharedLookPitch(float Pitch);
    void Server_SetPerks(_Script_Playtime_Multiplayer::PerkPackage In_PerkSaveGame);
    void Server_DropToyPart(_Script_CoreUObject::Vector Location);
    void RechargePunchingBagPerkShield();
    void PseudoConstruct();
    void OnRep_PlayerNeedsRevived();
    void OnRep_PerkSaveGame();
    void OnRep_HeldToyPartIndex();
    void OnRep_Health();
    void OnRep_GrabpackBroken();
    _Script_CoreUObject::Object* ObtainInteractedInterface(bool& OutIsValid);
    void Multicast_PlayDamageFX();
    void Multicast_GetPickedUp(_Script_Playtime_Multiplayer::Monster* Monster);
    void Multicast_GetDropped();
    void JokeTimer();
    bool IsNotHoldingToyPart();
    bool IsHoldingToyPart();
    void InputAction_RightHandExtend_Released();
    void InputAction_RightHandExtend_Pressed();
    void InputAction_LeftHandExtend_Released();
    void InputAction_LeftHandExtend_Pressed();
    void IncrementPlayerStat(float Amount, void* Stat);
    void HandStateChange(_Script_Playtime_Multiplayer::UHandRigPackageComponent* Pkg, void* HandStateChange);
    void HandleComm5();
    void HandleComm4();
    void HandleComm3();
    void HandleComm2();
    void HandleComm1();
    _Script_Playtime_Multiplayer::PlaytimeMovementComponent* GetPlaytimeMovementComponent();
    _Script_Playtime_Multiplayer::PerkPackage GetPerks();
    bool GetIsInChaseZone();
    int32_t GetHeldToyPartIndex();
    void* GetFearState();
    void FireComm(int32_t CommSelected);
    void FailedPerksCallback(void* ErrorMessage);
    bool CanBePickedUp();
    void BreakPunchingBagPerkShield();
    void BP_TakeAnyDamageWhileAlive(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser, bool bKillingHit);
    void BP_SpawnDroppedToyPart(int32_t ToyPartIndex, _Script_CoreUObject::Vector CustomLocation);
    void BP_PlayDamageFX();
    void BP_OnRep_SavedPerksChanged();
    void BP_OnRep_PlayerNeedsRevived();
    void BP_OnRep_PerkSaveGame();
    void BP_OnRep_HeldToyPartIndex();
    void BP_OnRep_Health();
    _Script_Engine::SkeletalMeshComponent* BP_GetThirdPersonMesh();
    void BP_GetPickedUp(_Script_Playtime_Multiplayer::Monster* Monster);
    _Script_Engine::StaticMeshComponent* BP_GetHeldToyPart();
    void BP_GetDropped();
    _Script_Engine::CameraComponent* BP_GetCameraComponent();
    void BP_Authority_GetHealed();
    void Authority_SetGrabpackBroken(bool In_Broken);
}; // Size: 0x7a0
#pragma pack(pop)
}
