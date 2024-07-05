#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera\BP_AbstractJumpscare_Camera_C.hpp"
#include "BP_WuggyJumpscare_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
float& _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Jump_To_Player_Player_Look_Alpha_E2EC20B742F7C7F9063ED09E98134930() {
    return *(float*)((uintptr_t)this + 0x240);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Wuggy_Jump_Origin() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Jump_To_Player__Direction_E2EC20B742F7C7F9063ED09E98134930() {
    return (void*)((uintptr_t)this + 0x24c);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::ExecuteUbergraph_BP_WuggyJumpscare(int32_t EntryPoint) {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Wuggy() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x230);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Jumpscare_Camera_Location() {
    return (void*)((uintptr_t)this + 0x288);
}
float& _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Jump_To_Player_Huggy_Jump_Alpha_E2EC20B742F7C7F9063ED09E98134930() {
    return *(float*)((uintptr_t)this + 0x248);
}
_Script_Engine::SkeletalMesh*& _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Wuggy_Skeletal_Mesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x2d8);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::set_Jumpscare(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Jump_To_Player_Huggy_Z_Increase_E2EC20B742F7C7F9063ED09E98134930() {
    return *(float*)((uintptr_t)this + 0x244);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Jump_To_Player() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x250);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_PlayerToKill() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x258);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_ShouldKillPlayer() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::ReceiveBeginPlay0() {
    return;
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Huggy_Origin() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Player_Jumpscare_End_Rotation() {
    return (void*)((uintptr_t)this + 0x27c);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Huggy_Jumpscare_End_Point() {
    return (void*)((uintptr_t)this + 0x294);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Huggy_Origin_Rotator() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Huggy_Jumpscare_End_Rotator() {
    return (void*)((uintptr_t)this + 0x2ac);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Player_Origin_Rotator() {
    return (void*)((uintptr_t)this + 0x2b8);
}
_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C*& _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Jumpscare_Camera() {
    return *(_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C**)((uintptr_t)this + 0x2c8);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::Jump_To_Player__FinishedFunc() {
    return;
}
bool _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Jumpscare() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::get_Wuggy_Actor() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2e0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Interaction/Sewers/BP_WuggyJumpscare.BP_WuggyJumpscare_C");
    return result;
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::Jump_To_Player__UpdateFunc() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::ReceiveDestroyed0() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare::BP_WuggyJumpscare_C::ShouldKillPlayer__DelegateSignature() {
    return;
}
