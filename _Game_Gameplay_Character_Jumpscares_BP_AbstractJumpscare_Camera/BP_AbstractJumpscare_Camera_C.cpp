#include "..\FUObjectArray.hpp"
#include "BP_AbstractJumpscare_Camera_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Engine\SpringArmComponent.hpp"
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_Camera_End() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::CameraComponent*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_Camera1() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SpotLightComponent*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_SpotLight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SpringArmComponent*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_SpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::CameraComponent*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_Camera_Rig() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x250);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_Played_Animation() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_Engine::Pawn*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_Target_Pawn() {
    return *(_Script_Engine::Pawn**)((uintptr_t)this + 0x270);
}
_Script_Engine::AnimSequence*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_Anim_To_Play() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x278);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_Final_Camera_Animation() {
    return (void*)((uintptr_t)this + 0x280);
}
bool _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::get_Show_Light() {
    return (*(uint8_t*)((uintptr_t)this + 0x28c + 0)) & 1 != 0;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::set_Show_Light(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28c + 0);
    *(uint8_t*)((uintptr_t)this + 0x28c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Jumpscares/BP_AbstractJumpscare_Camera.BP_AbstractJumpscare_Camera_C");
    return result;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::OnCreated() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::Play_Animation() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::ExecuteUbergraph_BP_AbstractJumpscare_Camera(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C::Played_Animation__DelegateSignature() {
    return;
}
