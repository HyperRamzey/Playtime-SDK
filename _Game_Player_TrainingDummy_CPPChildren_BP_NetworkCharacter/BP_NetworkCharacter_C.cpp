#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_BP_MultiplayerPlayerController\BP_MultiplayerPlayerController_C.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic\BP_MeshContainer_GrabpackCosmetic_C.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player\BP_MeshContainer_Player_C.hpp"
#include "..\_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster\BP_AbstractJumpscareMaster_C.hpp"
#include "..\_Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer\BP_PlayerPOVJumpscareContainer_C.hpp"
#include "..\_Game_Gameplay_Game_BP_GameManager\BP_GameManager_C.hpp"
#include "..\_Game_Gameplay_Interaction_BP_Locker\BP_Locker_C.hpp"
#include "..\_Game_Gameplay_Interaction_BP_OutlineComponent\BP_OutlineComponent_C.hpp"
#include "..\_Game_Interface_BPC_Tooltip\BPC_Tooltip_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_DeathScreen\UI_DeathScreen_C.hpp"
#include "..\_Game_Interface_Lobby_UI_WalkableLobby\UI_WalkableLobby_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavRepairGrabpack\BP_NavRepairGrabpack_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement\BPC_NavElement_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem\BPC_NavSystem_C.hpp"
#include "..\_Game_Player_BP_RegenZone\BP_RegenZone_C.hpp"
#include "..\_Game_Player_Huggy_BP_HuggyJumpscare\BP_HuggyJumpscare_C.hpp"
#include "..\_Game_Player_TrainingDummy_BP_CommsComponent\BP_CommsComponent_C.hpp"
#include "..\_Game_Player_TrainingDummy_BP_ZoneDetectionComponent\BP_ZoneDetectionComponent_C.hpp"
#include "BP_NetworkCharacter_C.hpp"
#include "..\_Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer\ABP_NetworkPlayer_C.hpp"
#include "..\_Script_AIModule\AIPerceptionStimuliSourceComponent.hpp"
#include "..\_Script_AIModule\AIStimulus.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\PlayerState.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SoundAttenuation.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Engine\SpringArmComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Niagara\NiagaraComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkCharacter.hpp"
#include "..\_Script_Playtime_Multiplayer\AmbiencePack.hpp"
#include "..\_Script_Playtime_Multiplayer\ChaseMusicPack.hpp"
#include "..\_Script_Playtime_Multiplayer\Monster.hpp"
#include "..\_Script_Playtime_Multiplayer\NavigatorIndicatorSorter.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
#include "..\_Script_Playtime_Multiplayer\PuzzleSoundPack.hpp"
#include "..\_Script_Playtime_Multiplayer\SurvivorSoundPack.hpp"
#include "..\_Script_Playtime_Multiplayer\UHandRigPackageComponent.hpp"
#include "..\_Script_UMG\WidgetComponent.hpp"
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x7a0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ManageThirdPersonHands(void* Limb, void* HandStateChange) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SetFirstPersonVisibility(bool Hide_) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue) {
    return;
}
_Game_Player_TrainingDummy_BP_ZoneDetectionComponent::BP_ZoneDetectionComponent_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BP_ZoneDetectionComponent() {
    return *(_Game_Player_TrainingDummy_BP_ZoneDetectionComponent::BP_ZoneDetectionComponent_C**)((uintptr_t)this + 0x7a8);
}
_Script_Niagara::NiagaraComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_NS_HealthAOE() {
    return *(_Script_Niagara::NiagaraComponent**)((uintptr_t)this + 0x7d0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CosmeticHead() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x870);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_MonsterDetectionTimer() {
    return (void*)((uintptr_t)this + 0xe20);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ExecuteUbergraph_BP_NetworkCharacter(int32_t EntryPoint) {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Player_Animations() {
    return (void*)((uintptr_t)this + 0xaf0);
}
_Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BP_CommsComponent() {
    return *(_Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C**)((uintptr_t)this + 0x7b0);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Tooltips() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x830);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Carry_Rotation_Offset() {
    return (void*)((uintptr_t)this + 0xe0c);
}
_Script_Engine::SpotLightComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SpotLightL() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x7b8);
}
_Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BP_OutlineComponent() {
    return *(_Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C**)((uintptr_t)this + 0x7c0);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_F_Pressed() {
    return (*(uint8_t*)((uintptr_t)this + 0x9fc + 0)) & 1 != 0;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SK_Webs() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x910);
}
_Script_Engine::AudioComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_RHandPullSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0xa78);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_ThirdPerson_HeldToyPart() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x8f0);
}
_Game_Player_BP_RegenZone::BP_RegenZone_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BP_RegenZone() {
    return *(_Game_Player_BP_RegenZone::BP_RegenZone_C**)((uintptr_t)this + 0x7d8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::GetPrompt(void*& PromptPrefix, void*& PromptSuffix, bool& CanPrompt) {
    return;
}
_Script_Engine::SpotLightComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SpotLightR() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x7c8);
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Timeline_3() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x980);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_IsJumping() {
    return (*(uint8_t*)((uintptr_t)this + 0xac8 + 0)) & 1 != 0;
}
_Script_Playtime_Multiplayer::NavigatorIndicatorSorter*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_NavigatorIndicatorSorter() {
    return *(_Script_Playtime_Multiplayer::NavigatorIndicatorSorter**)((uintptr_t)this + 0x7e0);
}
_Script_Engine::AudioComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_HuggyChaseMusic() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x8e8);
}
_Script_Engine::ChildActorComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BP_PlayerPOVJumpscareContainer() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x7e8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CosmeticPants() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x868);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_NavIndicatorAttachment() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x7f0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_SpawnDroppedToyPart0(int32_t ToyPartIndex, _Script_CoreUObject::Vector CustomLocation) {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_PlayerEnded() {
    return (void*)((uintptr_t)this + 0xd88);
}
_Script_Engine::BoxComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_ReviveCollision() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x8d8);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_PlayerColor() {
    return (void*)((uintptr_t)this + 0xa10);
}
_Script_Playtime_Multiplayer::SurvivorSoundPack*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SurvivorSounds() {
    return *(_Script_Playtime_Multiplayer::SurvivorSoundPack**)((uintptr_t)this + 0xcd8);
}
_Script_Engine::ChildActorComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BP_MeshContainer_FirstPersonGrabpack() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x7f8);
}
_Script_Engine::ChildActorComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BP_MeshContainer_ModularPlayerCosmetic() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x800);
}
_Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_JumpscareContainer() {
    return *(_Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C**)((uintptr_t)this + 0xd30);
}
_Script_Engine::CameraComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x808);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_GrabPack_HandR() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x848);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Toggled_Third_Person_During_Jumpscare() {
    return (void*)((uintptr_t)this + 0xc18);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_isChaseMusicActive() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf9 + 0)) & 1 != 0;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::IsPlayerCrouching() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_FP_Camera() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x810);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Get_Monster_Jumpscare_Origin(_Script_Engine::Character* Monster, _Script_CoreUObject::Vector& Location) {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Timeline_0__Direction_FE8D1880456E21D3BC74ED8A27242AF4() {
    return (void*)((uintptr_t)this + 0x98c);
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavRepairGrabpack::BP_NavRepairGrabpack_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_RepairGrabpackIndicator() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavRepairGrabpack::BP_NavRepairGrabpack_C**)((uintptr_t)this + 0xcc0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::End_Jumpscare_Montage() {
    return;
}
_Script_Engine::SpringArmComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CamArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x818);
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BPC_Tooltip1() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x820);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Being_Carried_By_Monster() {
    return (*(uint8_t*)((uintptr_t)this + 0xb54 + 0)) & 1 != 0;
}
_Script_Engine::AudioComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_RevivingSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0xc28);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Authority_GetHealed() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Shirt() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x920);
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BPC_Tooltip() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x828);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Authority_EndInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_StartedGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa89 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa89 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_PreJumpscareThirdPersonMode() {
    return (*(uint8_t*)((uintptr_t)this + 0xab8 + 0)) & 1 != 0;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CosmeticShirt() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x838);
}
_Script_Engine::CameraComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CosmeticsCamera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x880);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_GrabPack_HandL() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x840);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::RemoveFootprints() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Sticker() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x850);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_UserName() {
    return (void*)((uintptr_t)this + 0xa20);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CosmeticMask() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x858);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_TakeAnyDamageWhileAlive0(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser, bool bKillingHit) {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CosmeticShoes() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x860);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EndAutoReviveUI() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CosmeticHat() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x878);
}
_Script_Engine::SpringArmComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_FlashLight() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x960);
}
_Script_Engine::SpringArmComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CosmeticsSpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x888);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SelfRevive_TL__UpdateFunc() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Hat() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x928);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_FirstPersonGrabpackGunsR() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x890);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ChangeCamHeight(float TargetCamHeight) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_OnRep_Preset() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_HighFivePointR() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x940);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_FirstPersonGrabpackGunsL() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x898);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_Emote_K2Node_InputActionEvent_5(_Script_InputCore::Key Key) {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Hose_R() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x8a0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Hose_L() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x8a8);
}
int32_t& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SurvivorSoundPackID() {
    return *(int32_t*)((uintptr_t)this + 0xd00);
}
_Script_Engine::SoundBase*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LGrabSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0xbe8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnRep_Username() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_GrabpackPhysPack() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x8b0);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Ready() {
    return (*(uint8_t*)((uintptr_t)this + 0xa30 + 0)) & 1 != 0;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_EmoteRequested() {
    return (void*)((uintptr_t)this + 0xc78);
}
_Script_UMG::WidgetComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_NameTag() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x918);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_DepositNavIndicators() {
    return (void*)((uintptr_t)this + 0xba8);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_RightRope() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x8b8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Move_Player(_Script_CoreUObject::Vector WorldDirection, float ScaleValue) {
    return;
}
_Script_Engine::CurveFloat*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LookPitchCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0xd98);
}
_Script_UMG::WidgetComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_DownWidget() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x930);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_WantsToStandUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xad8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LeftRope() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x8c0);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_HighFivePointL() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x938);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::PlayerEnded__DelegateSignature() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ToggleCosmetics(bool Force_off) {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_EscapedMonsterDetection() {
    return (void*)((uintptr_t)this + 0xd20);
}
_Script_Engine::CapsuleComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_HitCapsule() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x8c8);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Timeline_0_Down_FE8D1880456E21D3BC74ED8A27242AF4() {
    return *(float*)((uintptr_t)this + 0x988);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_UncrouchCamLocation() {
    return (void*)((uintptr_t)this + 0xbfc);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_LivingNightmare(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe29 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ToggleRun(bool Running) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Spawn_Jumpscare_Light() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_GrabPackGuns() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x8d0);
}
_Script_AIModule::AIPerceptionStimuliSourceComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_AIPerceptionStimuliSource() {
    return *(_Script_AIModule::AIPerceptionStimuliSourceComponent**)((uintptr_t)this + 0x8e0);
}
_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BPC_NavElement() {
    return *(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C**)((uintptr_t)this + 0x8f8);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Right_Hand_Animations() {
    return (void*)((uintptr_t)this + 0xae0);
}
_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BPC_NavSystem() {
    return *(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C**)((uintptr_t)this + 0x900);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Multi_ShowHidePlayer(bool Show_) {
    return;
}
_Script_Engine::AudioComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Heartbeat_Loop() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x908);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Lobby_TransitioningCamera() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8b + 0)) & 1 != 0;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_FPS_Legs() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x948);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Owner_InteractingToCancelled() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_GrabPack_GunR() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x950);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_GrabPack_GunL() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x958);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_AnimPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0xb11 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Pick_Up_Point() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x968);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::TryReady(bool Ready) {
    return;
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_PlayerIsDetectedLerp01() {
    return *(float*)((uintptr_t)this + 0xb7c);
}
_Script_Engine::SpringArmComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Pickup_Arm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x970);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Timeline_3_Lerp_Amount_A603532D4C48D7452A05E1B9C45442CA() {
    return *(float*)((uintptr_t)this + 0x978);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Timeline_3__Direction_A603532D4C48D7452A05E1B9C45442CA() {
    return (void*)((uintptr_t)this + 0x97c);
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x990);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::LoadAndSetSoundPacks() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Authority_IWSToCancelled() {
    return;
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SelfRevive_TL_Progress_5DDCD2B14B94039DBF03129E8A179B25() {
    return *(float*)((uintptr_t)this + 0x998);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ResetCharacter(bool JustDestroyUI) {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SelfRevive_TL__Direction_5DDCD2B14B94039DBF03129E8A179B25() {
    return (void*)((uintptr_t)this + 0x99c);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::IsPlayerMoving(bool& IsMoving) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SelfRevive_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x9a0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EventImprisonedInWuggyHole() {
    return;
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Timeline_1_FogDistance_AB6AC0D54F1F67BC2AB9FC8F6CF853EA() {
    return *(float*)((uintptr_t)this + 0x9a8);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Timeline_1__Direction_AB6AC0D54F1F67BC2AB9FC8F6CF853EA() {
    return (void*)((uintptr_t)this + 0x9ac);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Kill() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::StartPointsTimer() {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Timeline_1() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x9b0);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_InteractingWithTimeline_Progress_2B743AAB4510002E99A90EBAF0DD4814() {
    return *(float*)((uintptr_t)this + 0x9b8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnRep_Webbed() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_InCosmeticsMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8a + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Func_imprisonedInWuggyHole() {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_PreJumpscareControlRotation() {
    return (void*)((uintptr_t)this + 0xaac);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_InteractingWithTimeline__Direction_2B743AAB4510002E99A90EBAF0DD4814() {
    return (void*)((uintptr_t)this + 0x9bc);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::UnProne() {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_InteractingWithTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x9c0);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_InteractedWithTimeline_Progress_CB3D860E4ADEDB7B7146DAAB9FD55F3B() {
    return *(float*)((uintptr_t)this + 0x9c8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_PlayerIsDetected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb78 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::NetworkSafe_PlayLandSounds(void* Surface_type) {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_InteractedWithTimeline__Direction_CB3D860E4ADEDB7B7146DAAB9FD55F3B() {
    return (void*)((uintptr_t)this + 0x9cc);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnLanded(_Script_Engine::HitResult& Hit) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ReviveThirdPerson() {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_AutoReviveTimerHandler() {
    return (void*)((uintptr_t)this + 0xa38);
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_InteractedWithTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x9d0);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_WebOpacityTime_Track_4B661A644643E00E44D0BDA1DCDB4658() {
    return *(float*)((uintptr_t)this + 0x9d8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Event_Sabotage_AutoCarry(float Duration) {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_WebOpacityTime__Direction_4B661A644643E00E44D0BDA1DCDB4658() {
    return (void*)((uintptr_t)this + 0x9dc);
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_WebOpacityTime() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x9e0);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SetGlitchOpacity_Track_EEBB24774033BA8597F370826D9442AB() {
    return *(float*)((uintptr_t)this + 0x9e8);
}
_Script_Playtime_Multiplayer::PuzzleSoundPack*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_PuzzleSounds_0() {
    return *(_Script_Playtime_Multiplayer::PuzzleSoundPack**)((uintptr_t)this + 0xce0);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SetGlitchOpacity__Direction_EEBB24774033BA8597F370826D9442AB() {
    return (void*)((uintptr_t)this + 0x9ec);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::RollSound() {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SetGlitchOpacity() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x9f0);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_JumpscareActive() {
    return (*(uint8_t*)((uintptr_t)this + 0xaa8 + 0)) & 1 != 0;
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LookPitch() {
    return *(float*)((uintptr_t)this + 0x9f8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_F_Pressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x9fc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_Lobby_TransitioningCamera(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8b + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_DeathScreen() {
    return *(_Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C**)((uintptr_t)this + 0xa00);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_HP() {
    return *(float*)((uintptr_t)this + 0xa08);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Webbed() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0c + 0)) & 1 != 0;
}
_Script_Engine::SoundBase*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_RReturnSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0xa58);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_Webbed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0c + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Owner_InteractingToReviving() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::CommsRequested__DelegateSignature() {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Won() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0d + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::DecrementFear() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_Won(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0d + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnJumped() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_Ready(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa30 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_AutoReviveTime() {
    return *(float*)((uintptr_t)this + 0xa34);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue) {
    return;
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_ReviveTime() {
    return *(float*)((uintptr_t)this + 0xa40);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Dead_() {
    return (*(uint8_t*)((uintptr_t)this + 0xa44 + 0)) & 1 != 0;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_HealthAOENotVisible() {
    return (void*)((uintptr_t)this + 0xc4c);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_Dead_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa44 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Gameplay_Game_BP_GameManager::BP_GameManager_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_GameManager() {
    return *(_Game_Gameplay_Game_BP_GameManager::BP_GameManager_C**)((uintptr_t)this + 0xb70);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CameraRotation() {
    return (void*)((uintptr_t)this + 0xa48);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnShieldChanged(bool PunchingBagPerkShield) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Authority_IWSToReviving() {
    return;
}
_Script_Engine::SoundBase*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_RGrabSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0xa60);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::PlayLandSounds(void* Surface_type) {
    return;
}
_Script_Engine::SoundBase*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_RLaunchSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0xa68);
}
_Script_Engine::CurveFloat*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LookYawCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0xda0);
}
_Script_Engine::AudioComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LHandPullSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0xa70);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_DetectedTimerHandler() {
    return (void*)((uintptr_t)this + 0xa80);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InteractedWithTimeline__FinishedFunc() {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_DEPREC_IsInWuggyHole_() {
    return (*(uint8_t*)((uintptr_t)this + 0xa88 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_DEPREC_IsInWuggyHole_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa88 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::StartCarryUI() {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_StartedGame() {
    return (*(uint8_t*)((uintptr_t)this + 0xa89 + 0)) & 1 != 0;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_InCosmeticsMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8a + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SetPlayerColor() {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_DashDirection() {
    return (void*)((uintptr_t)this + 0xa8c);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_WebbedDuration() {
    return *(float*)((uintptr_t)this + 0xa98);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Multicast_PlayLandSound(void* Material) {
    return;
}
_Game_Player_Huggy_BP_HuggyJumpscare::BP_HuggyJumpscare_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_JumpscareActorOld() {
    return *(_Game_Player_Huggy_BP_HuggyJumpscare::BP_HuggyJumpscare_C**)((uintptr_t)this + 0xaa0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_JumpscareActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xaa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_PreJumpscareThirdPersonMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xab8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xab8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CachedUI_WalkableLobby() {
    return *(_Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C**)((uintptr_t)this + 0xac0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_IsJumping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xac8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CachedABP() {
    return *(_Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C**)((uintptr_t)this + 0xad0);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_WantsToStandUp() {
    return (*(uint8_t*)((uintptr_t)this + 0xad8 + 0)) & 1 != 0;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Left_Hand_Animations() {
    return (void*)((uintptr_t)this + 0xb00);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CanEmoteAgain() {
    return (*(uint8_t*)((uintptr_t)this + 0xb10 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::StartHookUI() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::WebOpacityTime__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ReceiveUnpossessed(_Script_Engine::Controller* OldController) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_CanEmoteAgain(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb10 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_AnimPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb11 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BreathRechargeTime() {
    return *(float*)((uintptr_t)this + 0xb14);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Client_UpdateHeatlhUI() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::PoitnsTimerEvent() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SetHealthVisibility(bool IsVisible) {
    return;
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_AmountOfBreath() {
    return *(float*)((uintptr_t)this + 0xb18);
}
_Script_Engine::StaticMeshComponent* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_GetHeldToyPart0() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SelfRevive_TL__FinishedFunc() {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CanHoldBreath() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1c + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_CanHoldBreath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1c + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Random_Player_Movement(bool Enabled) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ReceivePossessed(_Script_Engine::Controller* NewController) {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_HoldingBreath() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1d + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_HoldingBreath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1d + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_HoldBreathHandle() {
    return (void*)((uintptr_t)this + 0xb20);
}
_Script_Engine::AudioComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_BreathSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0xb28);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Saved_Max_Distance() {
    return (void*)((uintptr_t)this + 0xb30);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::GetFootstepAttenuation(_Script_Engine::SoundAttenuation*& Attenuation) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Event_Fix_Grabpack() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::End_Living_Nightmare(bool Force_) {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_IsAutoCarry() {
    return (*(uint8_t*)((uintptr_t)this + 0xb40 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_IsAutoCarry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb40 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::GetPlayerNumber(int32_t& Array_Index) {
    return;
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_HealingChar() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0xc70);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_GrabpackRepairTime() {
    return *(float*)((uintptr_t)this + 0xb44);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::MultiBreathing(bool StartBreathing_) {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_UseJumpscares() {
    return (*(uint8_t*)((uintptr_t)this + 0xb90 + 0)) & 1 != 0;
}
_Game_Gameplay_Interaction_BP_Locker::BP_Locker_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LockerRef() {
    return *(_Game_Gameplay_Interaction_BP_Locker::BP_Locker_C**)((uintptr_t)this + 0xb48);
}
int32_t& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Strikes() {
    return *(int32_t*)((uintptr_t)this + 0xb50);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_Being_Carried_By_Monster(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb54 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Breath_Spam_Prevention() {
    return (*(uint8_t*)((uintptr_t)this + 0xb55 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Sabotage_AutoCarry(float Duration) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_Breath_Spam_Prevention(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb55 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb55 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AudioComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_OutOfBreathSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0xb58);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnRep_Strikes() {
    return;
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SoundAttenLevel() {
    return *(float*)((uintptr_t)this + 0xb60);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LockerTimerHandle() {
    return (void*)((uintptr_t)this + 0xb68);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_PlayerIsDetected() {
    return (*(uint8_t*)((uintptr_t)this + 0xb78 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::NewLoadCosmetics() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_CanInteract(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc88 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Player_Attach() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0xb80);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::UpdateChargeNumberUI() {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_AttachSocketName() {
    return (void*)((uintptr_t)this + 0xb88);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::PickedUpThirdPerson() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_UseJumpscares(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb90 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SoundBase*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LReturnSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0xbe0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SetHealingAuraVisibility(bool Visible_, _Script_Playtime_Multiplayer::ANetworkCharacter* HealingChar) {
    return;
}
_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_JumpscareMasterActor() {
    return *(_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C**)((uintptr_t)this + 0xb98);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Sabotage_NoPack(float Duration) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Timeline_1__UpdateFunc() {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CrouchPressed() {
    return (*(uint8_t*)((uintptr_t)this + 0xba0 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_CrouchPressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xba0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Character*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Monster_Self() {
    return *(_Script_Engine::Character**)((uintptr_t)this + 0xbb8);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Webs_Visible_() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc0 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_Webs_Visible_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ServerToggleLight() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ChangeClientInput(bool ShouldDisable) {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Is_Jumpscare_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc1 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_Is_Jumpscare_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CachedPersp() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc2 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_Crouch_K2Node_InputActionEvent_10(_Script_InputCore::Key Key) {
    return;
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LockerTime_Refresh_Multiplier() {
    return *(float*)((uintptr_t)this + 0xcd4);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_CachedPersp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CharInteractingWithThis() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0xbc8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SwitchChase() {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_NetInteractedWithState() {
    return (void*)((uintptr_t)this + 0xbd0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_OnRep_HeldToyPartIndex0() {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_NetInteractingState() {
    return (void*)((uintptr_t)this + 0xbd1);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LocalInteractingState() {
    return (void*)((uintptr_t)this + 0xbd2);
}
_Script_Engine::SoundBase*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LLaunchSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0xbd8);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_OriginalCamLocation() {
    return (void*)((uintptr_t)this + 0xbf0);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CrouchCamLocation() {
    return (void*)((uintptr_t)this + 0xc08);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Footprints() {
    return (void*)((uintptr_t)this + 0xca8);
}
_Script_Engine::AudioComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_FixingSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0xc30);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_On_Started_Jumpscare_Animation() {
    return (void*)((uintptr_t)this + 0xc38);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_InMainMenu_() {
    return (*(uint8_t*)((uintptr_t)this + 0xc48 + 0)) & 1 != 0;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_EnteredMonsterDetection() {
    return (void*)((uintptr_t)this + 0xd10);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_InMainMenu_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc48 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Get_All_Character_Meshes(void*& Components) {
    return;
}
int32_t& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_PuzzleSoundPackID() {
    return *(int32_t*)((uintptr_t)this + 0xcfc);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_NightmareFog() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0xc60);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_PlayDamageFX0() {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CanInteract() {
    return (*(uint8_t*)((uintptr_t)this + 0xc88 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SetGeneralVisibility(bool FirstPerson_, bool VisibleToOthers_) {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_HasEnteredWuggyHole() {
    return (*(uint8_t*)((uintptr_t)this + 0xc68 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_HasEnteredWuggyHole(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc68 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_Customize_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_SpawnToyLockerHandle() {
    return (void*)((uintptr_t)this + 0xc90);
}
_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Player_Mesh_Container() {
    return *(_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C**)((uintptr_t)this + 0xc98);
}
_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_First_Person_Grabpack_Mesh_Container() {
    return *(_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C**)((uintptr_t)this + 0xca0);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_FootstepRemovalTimer() {
    return (void*)((uintptr_t)this + 0xcb8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Client_UpdateChargeNumberUI(int32_t RollCharges) {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_IsScoreboardOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0xcc8 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ToggleDownWidget(bool Condition) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_IsScoreboardOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CanToggleThirdPerson() {
    return (*(uint8_t*)((uintptr_t)this + 0xcc9 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_CanToggleThirdPerson(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcc9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcc9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LockerTime() {
    return *(float*)((uintptr_t)this + 0xccc);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_MaxLockerTime() {
    return *(float*)((uintptr_t)this + 0xcd0);
}
_Script_Playtime_Multiplayer::AmbiencePack*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_AmbientSoundPack() {
    return *(_Script_Playtime_Multiplayer::AmbiencePack**)((uintptr_t)this + 0xce8);
}
_Script_Playtime_Multiplayer::ChaseMusicPack*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_ChaseSoundPack() {
    return *(_Script_Playtime_Multiplayer::ChaseMusicPack**)((uintptr_t)this + 0xcf0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Play_Jumpscare_Montage(_Script_Engine::AnimMontage* AnimMontage) {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_canSeeMonster() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf8 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_canSeeMonster(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::set_isChaseMusicActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_InteractionDistance() {
    return *(float*)((uintptr_t)this + 0xd04);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ServerSpawnCommIndicator(void* Type) {
    return;
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_MaxInteractionDistance() {
    return *(float*)((uintptr_t)this + 0xd08);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ShakeCamera(void* Shake, float Scale) {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_MapNameToLobbyReference() {
    return (void*)((uintptr_t)this + 0xd38);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ClientToggleThirdTrue() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SetGlitchOpacity__FinishedFunc() {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Object_Types() {
    return (void*)((uintptr_t)this + 0xda8);
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Comm() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C**)((uintptr_t)this + 0xdb8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Owner_InteractingToFixing() {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CommsRequested() {
    return (void*)((uintptr_t)this + 0xdc0);
}
_Script_Engine::SpotLightComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_RightSpotlight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0xdd0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Client_Sabotage_LivingNightmare(float Duration) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_Interact_K2Node_InputActionEvent_1(_Script_InputCore::Key Key) {
    return;
}
_Script_Engine::SpotLightComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LeftSpotlight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0xdd8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::LockerTakeout() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SetInteractUI(bool Active) {
    return;
}
int32_t& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_FearLevel() {
    return *(int32_t*)((uintptr_t)this + 0xde0);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_ProneTimer() {
    return (void*)((uintptr_t)this + 0xde8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ClientResetDeathScreen() {
    return;
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CachedCamHeight() {
    return *(float*)((uintptr_t)this + 0xdf0);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Anim_Set_Entering_Locker() {
    return;
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_TargetCamHeight() {
    return *(float*)((uintptr_t)this + 0xdf4);
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_CachedCamHeight_1() {
    return *(float*)((uintptr_t)this + 0xdf8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Emote(int32_t Index) {
    return;
}
float& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_NewVar_0() {
    return *(float*)((uintptr_t)this + 0xdfc);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Carry_Offset() {
    return (void*)((uintptr_t)this + 0xe00);
}
_Script_Engine::Controller*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_ControllerRef() {
    return *(_Script_Engine::Controller**)((uintptr_t)this + 0xe18);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_Temp() {
    return (void*)((uintptr_t)this + 0xe28);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Owner_BeginInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration) {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::get_LivingNightmare() {
    return (*(uint8_t*)((uintptr_t)this + 0xe29 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ResetViewTarget(bool JustDestroyUI) {
    return;
}
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/CPPChildren/BP_NetworkCharacter.BP_NetworkCharacter_C");
    return result;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Auth_Get_Matching_Controller(_Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C*& PlayerController) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::GetMatchingPlayerState(_Script_Engine::PlayerState*& PlayerState) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnRep_FearLevel() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::IsOutOfMonset() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_Crouch_K2Node_InputActionEvent_11(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::MonsterProximityCheck() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Multicast_Roll_Sound() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SetDefaultPlayerVisibility() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnRep_PuzzleSoundPackID() {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::CanPlayerCrouch() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SwitchTense() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::CancelAutoReviveUI() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Multicast_SetNameTagVisibility(bool Visible) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ShowStrikes(int32_t Strikes) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Func_extractedFromWuggyHole() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Client_Emote(int32_t Index) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Get_Footstep_Volume_Multiplier(float& Volume) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnRep_SurvivorSoundPackID() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Update_Cosmetics(_Script_Playtime_Multiplayer::PresetSlot Cosmetic) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::IsPlayerOnTrain(bool& Value) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SetThirdPersonVisibility(bool Hide_) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SpawnFootprint(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Sabotage_LivingNightmare(float Duration) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnRep_NetInteractingState() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::IsBeingInteractedWith(bool& InteractedWith_) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Authority_BeginInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnRep_StartedGame() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::GetOwningPlayerController(_Script_Engine::PlayerController*& Controller, bool& bSuccess) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Sabotage_NavIndicators(float Duration) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::GetABP(_Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C*& ABP) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::UserConstructionScript() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Toggle_Third_Person(bool Use_Manual_Input, bool Manual_Input) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Can_Play_Game(bool& Status) {
    return;
}
_Script_Engine::CameraComponent* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_GetCameraComponent0() {
    return;
}
_Script_Engine::SkeletalMeshComponent* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_GetThirdPersonMesh0() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ManageHands(_Script_Playtime_Multiplayer::UHandRigPackageComponent* self2, void* HSC) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::DoHandSounds(void* Limb, void* HSC) {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::CanStandUp(_Script_Engine::Actor*& HitActor) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnRep_PlayerColor() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SetDownWidgetName() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::LookAround(float Val, bool Pitch) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BndEvt__BP_NetworkCharacter_RightHandPkg_K2Node_ComponentBoundEvent_1_HandStateChangeSignature__DelegateSignature(_Script_Playtime_Multiplayer::UHandRigPackageComponent* Pkg, void* HandStateChange) {
    return;
}
bool _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::IsPlayerSprinting() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::MovementCameraShake() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Timeline_3__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Timeline_3__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::WebOpacityTime__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::FootprintOnDestroyed(_Script_Engine::Actor* DestroyedActor) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InteractingWithTimeline__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InteractingWithTimeline__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EnterExitLockerClient(_Game_Gameplay_Interaction_BP_Locker::BP_Locker_C* LockerRef) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InteractedWithTimeline__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_KickPlayer() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SetGlitchOpacity__UpdateFunc() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Timeline_1__FinishedFunc() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_Roll_K2Node_InputActionEvent_12(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_Run_K2Node_InputActionEvent_9(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_Run_K2Node_InputActionEvent_8(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::MultiOuttaBreath() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_7(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_FireComm(int32_t CommToFire) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_6(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_ReadyUp_K2Node_InputActionEvent_4(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EscapedMonsterDetection__DelegateSignature() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_ThirdPerson_K2Node_InputActionEvent_3(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SetToyDepositIndicators(bool On_) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpActEvt_Interact_K2Node_InputActionEvent_2(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Client_CheckHatchIndicators() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Switch_Ambience() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Raise_Lower_Hands(bool Lowered) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::HitByWeb() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::DetectedByMonster(bool Value) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Authority_StartOnTrain(_Script_CoreUObject::Transform& NewTransform) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::NotDetected() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::PlayJumpSound() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::StartInteractFromClient(bool ThirdPerson_, void* InputPin) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::PlayBrokenHandAttemptThings(bool LHand) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::PlayRevivingSound(bool Play_) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::PlayFixingSound(bool Play_) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::GoProne() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::AdjustCam() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_ShowIdleWarning() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_IdleKickReset() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::NetSetPlayerColor() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::TryUncrouch() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Client_ShowRollRecharge() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1(float AxisValue) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::InpAxisEvt_LookPitch_K2Node_InputAxisEvent_0(float AxisValue) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::HoldBreathClient(bool Holding_) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::HoldBreathServer(bool Holding_) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OwnerFinishedInteractingWith() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::CallHoldBreath() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Multicast_Web_Sound() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EventShowWebs(bool bNewVisibility) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::MulticastSpawnComm(void* InputPin) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SpawnCommIndicator(void* CommType) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ShowDeathScreen() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Multicast_Emote(int32_t Index) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EnterExitLockerServer(_Game_Gameplay_Interaction_BP_Locker::BP_Locker_C* LockerRef) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Server_Emote(int32_t Index) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::MulticastToggleLight() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BndEvt__BP_NetworkCharacter_LeftHandPkg_K2Node_ComponentBoundEvent_0_HandStateChangeSignature__DelegateSignature(_Script_Playtime_Multiplayer::UHandRigPackageComponent* Pkg, void* HandStateChange) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ReceiveBeginPlay() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Owner_InteractingToIdle() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Owner_InteractingTransitionState(void* NewState) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Authority_IWSToFixing() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Authority_IWSToIdle() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Authority_TransitionInteractedWithState(void* NewState) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::On_Started_Jumpscare() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Owning_SetInteractInProgress(bool InProgress) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::CancelInteractFromClient() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::CancelInteract() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::IncrementFear() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BndEvt__BP_NetworkCharacter_PerceptionComponent_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::MultiShowWin(int32_t PlayerCount) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Server_SetSoundPackIDs(int32_t PuzzleSoundPackID, int32_t SurvivorSoundPackID) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Event_Sabotage_NavIndicators(float Duration) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EventFixNameTag() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EventExtractedFromWuggyHole() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::NetSetPlayerName(void* UserName) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EnteredMonsterDetection__DelegateSignature() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Anim_Set_Interrupted_Locker() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Disable_Player_Mesh_Shadows(bool Enabled_) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Anim_Set_Exiting_Locker() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ExitLockerFinish() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EnterLockerFinish() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::SpawnToyLocker() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EnableClientInput() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::StopUIDeathTimers() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::StartTempInvulnerability(float Seconds) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::CreateHatchSpectator() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ReturnController() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Ended_Jumpscare() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_OnRep_PlayerNeedsRevived0() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::StopCarryUI() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::StartAutoReviveUI() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::AutoRevive() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ServerOnly_EvaluateAutoReviveTimer() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::MakeBoogieBot() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Owner_PlayJumpscareVisuals(void* Character_Type, _Script_Playtime_Multiplayer::Monster* Monster_Actor) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_GetDropped0() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_GetPickedUp0(_Script_Playtime_Multiplayer::Monster* Monster) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::JumpscareInterruption() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Server_SetLivingNightmare(float Duration) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::BP_OnRep_Health0() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Owning_Kill() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EventJumpscare(_Script_Engine::Character* Monster, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, float Distance_From_Monster, float Duration, float Blend_Out, bool Enough_Space_for_Jumpscare, void* Monster_Type) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::ClientSetCachedPersp() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::TrySendToWuggyHole() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::OnRep_GrabpackBroken0() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Event_Try_Send_To_Wuggy_Hole() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::EmoteRequested__DelegateSignature() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::On_Started_Jumpscare_Animation__DelegateSignature() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C::Toggled_Third_Person_During_Jumpscare__DelegateSignature() {
    return;
}
