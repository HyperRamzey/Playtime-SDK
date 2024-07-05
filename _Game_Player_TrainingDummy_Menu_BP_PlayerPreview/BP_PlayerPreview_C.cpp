#include "..\FUObjectArray.hpp"
#include "..\_Game_Player_TrainingDummy_Menu_BP_HandPackage\BP_HandPackage_C.hpp"
#include "..\_Game_Player_TrainingDummy_Menu_BP_NetExtendoHand\BP_NetExtendoHand_C.hpp"
#include "BP_PlayerPreview_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_Hose_Beg_R() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4c0);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_Hose_End_R() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4c8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_GrabPackGuns() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x4f0);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_Hose_End_L() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4d0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_Hose_R() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x4e0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_GrabpackPhysPack() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x4d8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_Hose_L() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x4e8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_Sticker() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x4f8);
}
void _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::ClearCosmetics() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_Shirt() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x500);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_Hat() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x508);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_GrabPack_HandL() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x510);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_GrabPack_HandR() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x518);
}
_Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_RightHandPackage() {
    return *(_Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C**)((uintptr_t)this + 0x520);
}
_Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_LeftHandPackage() {
    return *(_Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C**)((uintptr_t)this + 0x528);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_GrabPack_GunR() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x530);
}
void* _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_AppliedCosmetics() {
    return (void*)((uintptr_t)this + 0x558);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_GrabPack_GunL() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x538);
}
float& _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_LookPitch() {
    return *(float*)((uintptr_t)this + 0x540);
}
void* _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_Cosmetics() {
    return (void*)((uintptr_t)this + 0x548);
}
bool _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::get_ShouldInitLoadCosmetics() {
    return (*(uint8_t*)((uintptr_t)this + 0x568 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::set_ShouldInitLoadCosmetics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x568 + 0);
    *(uint8_t*)((uintptr_t)this + 0x568 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/Menu/BP_PlayerPreview.BP_PlayerPreview_C");
    return result;
}
void _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::ResetGrabPack() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::LoadCosmetics() {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::SaveCosmeticData() {
    return;
}
_Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C* _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::GetHandReference(bool LeftHand) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::SpawnExtendoHand(_Script_CoreUObject::Transform SpawnTransform, _Script_CoreUObject::Vector RoughEnd_Location, _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C* Player, bool LeftHand) {
    return;
}
void _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C::Rotate_Gun_to_Hand(_Script_Engine::SceneComponent* Gun, _Script_CoreUObject::Rotator NewRotation, bool Reset) {
    return;
}
