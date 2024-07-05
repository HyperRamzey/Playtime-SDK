#include "..\FUObjectArray.hpp"
#include "BP_AbstractJumpscareMaster_C.hpp"
#include "..\_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera\BP_AbstractJumpscare_Camera_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_End_Location() {
    return (void*)((uintptr_t)this + 0x358);
}
_Script_Engine::ArrowComponent*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Arrow() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
bool _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Toggle_Players_Third_Person_After_() {
    return (*(uint8_t*)((uintptr_t)this + 0x318 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
float& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Huggy_Jumpscare_Scale() {
    return *(float*)((uintptr_t)this + 0x240);
}
float& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x24c);
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Create_Floored_Original_Position_For_Pawn(_Script_CoreUObject::Vector Original_Location) {
    return;
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_Original_Rotation() {
    return (void*)((uintptr_t)this + 0x2e0);
}
float& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Duration() {
    return *(float*)((uintptr_t)this + 0x248);
}
float& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Distance_From_Monster() {
    return *(float*)((uintptr_t)this + 0x244);
}
float& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x250);
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::set_Monster_Crouch_After_Jumpscare(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x364 + 0);
    *(uint8_t*)((uintptr_t)this + 0x364 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Kill_Player() {
    return;
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_TargetPlayer() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x258);
}
_Script_Engine::Character*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Target_Monster() {
    return *(_Script_Engine::Character**)((uintptr_t)this + 0x260);
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Play_Jumpscare_Character_Animations() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Determine_If_Two_Locations_are_on_Stairs(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float Check_Length, float Stairs_Threshold, bool& On_Stairs_) {
    return;
}
_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Player_Camera() {
    return *(_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C**)((uintptr_t)this + 0x268);
}
_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_Camera() {
    return *(_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C**)((uintptr_t)this + 0x270);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Player_Original_Location() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Player_Target_Location() {
    return (void*)((uintptr_t)this + 0x284);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Player_Target_Location_Based_on_MonsterPawn() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Player_Original_Rotation() {
    return (void*)((uintptr_t)this + 0x29c);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Player_Target_Rotation() {
    return (void*)((uintptr_t)this + 0x2a8);
}
float& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Blend_Alpha() {
    return *(float*)((uintptr_t)this + 0x2b4);
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Ground_Location_For_Pawn(_Script_CoreUObject::Vector Original_Location, _Script_CoreUObject::Vector Alternate_Location_On_Fail, _Script_CoreUObject::Vector Bound_To_Location, float Pawn_Half_Size, float Max_Angle, float Radius, bool Use_Floor_Hit_Z, _Script_CoreUObject::Vector& Found_Location) {
    return;
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_On_End_Jumpscare() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_Original_Location() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_Target_Location() {
    return (void*)((uintptr_t)this + 0x2d4);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_Target_Rotation() {
    return (void*)((uintptr_t)this + 0x2ec);
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Get_Monsters_Camera(_Script_Engine::CameraComponent*& Camera) {
    return;
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_Target_Control_Rotation() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Get_Is_Monster_In_Third_Person(bool& In_Third_Person) {
    return;
}
float& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Delta_Seconds() {
    return *(float*)((uintptr_t)this + 0x304);
}
_Script_Engine::Actor*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Players_Original_Owner() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x308);
}
_Script_Engine::Actor*& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monsters_Original_Owner() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x310);
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::set_Toggle_Players_Third_Person_After_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x318 + 0);
    *(uint8_t*)((uintptr_t)this + 0x318 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Toggle_Monsters_Third_Person_After_() {
    return (*(uint8_t*)((uintptr_t)this + 0x319 + 0)) & 1 != 0;
}
float& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Jumpscare_Scale() {
    return *(float*)((uintptr_t)this + 0x34c);
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Toggle_Third_Person_Views_If_Needed() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::set_Toggle_Monsters_Third_Person_After_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x319 + 0);
    *(uint8_t*)((uintptr_t)this + 0x319 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_On_Started_Jumpscare_Animation() {
    return (void*)((uintptr_t)this + 0x320);
}
bool _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Enough_Space_for_Jumpscare() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 1 != 0;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::set_Enough_Space_for_Jumpscare(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_Type() {
    return (void*)((uintptr_t)this + 0x331);
}
float& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Mommy_Jumpscare_Scale() {
    return *(float*)((uintptr_t)this + 0x334);
}
float& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Boxy_Jumpscare_Scale() {
    return *(float*)((uintptr_t)this + 0x338);
}
float& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_Pawn_Scale() {
    return *(float*)((uintptr_t)this + 0x33c);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_Forward_Ignoring_Z() {
    return (void*)((uintptr_t)this + 0x340);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Jumpscares/BP_AbstractJumpscareMaster.BP_AbstractJumpscareMaster_C");
    return result;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Get_Target_Monsters_Player_Controller(_Script_Engine::PlayerController*& Controller) {
    return;
}
float& _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Jumpscare_Floor_Z() {
    return *(float*)((uintptr_t)this + 0x350);
}
bool _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_Toggled_Crouch_Once() {
    return (*(uint8_t*)((uintptr_t)this + 0x365 + 0)) & 1 != 0;
}
bool _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_Is_Crouching_() {
    return (*(uint8_t*)((uintptr_t)this + 0x354 + 0)) & 1 != 0;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::set_Monster_Is_Crouching_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x354 + 0);
    *(uint8_t*)((uintptr_t)this + 0x354 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Set_Huggy_First_Person_Jumpscare_Transforms() {
    return;
}
bool _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Monster_Crouch_After_Jumpscare() {
    return (*(uint8_t*)((uintptr_t)this + 0x364 + 0)) & 1 != 0;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::set_Monster_Toggled_Crouch_Once(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x365 + 0);
    *(uint8_t*)((uintptr_t)this + 0x365 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::get_Actors_To_Ignore() {
    return (void*)((uintptr_t)this + 0x368);
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Find_New_Location_if_Capsule_Intersects(_Script_CoreUObject::Vector Test_Position_Start, _Script_CoreUObject::Vector Test_Position_End, float Capsule_Radius, float Capsule_HalfHeight, bool Use_Start_If_Didnt_Hit, void*& ActorsToIgnore, void* DrawDebugType, _Script_CoreUObject::Vector& New_Location, bool& Hit) {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Get_Monster_Jumpscare_Sound(_Script_Engine::SoundBase*& Jumpscare_Sound) {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Transfer_B_Transforms_To_A(_Script_Engine::SceneComponent* A, _Script_Engine::SceneComponent* B) {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Play_Jumpscare_Camera_Animations() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Toggle_Player_Third_Person_After_Jumpscare() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Toggle_Monster_Third_Person_After_Jumpscare() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Monster_Bind_Toggled_Third_Person_During_Jumpscare() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Set_Mommy_First_Person_Jumpscare_Transforms() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Set_Boxy_Boo_First_Person_Jumpscare_Transforms() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Finish_Jumpscare() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Trigger_Jumpscare() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Create_Original_and_Target_Transforms_for_Player() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Create_Original_and_Target_Transforms_For_Monster() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Play_Monster_Jumpscare() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Hide_UnHide_Monster_Character_Skeleton(bool Hide) {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Hide_UnHide_Player_Character_Skeleton(bool Hide_Character) {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::End_Monster_Jumpscares() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Find_Monsters_Pawn_Size_And_Forward_Direction_And_Floor_Z() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Monster_Bind_Crouch_During_Jumpscare() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Turn_On_Crouch_After_Jumpscare() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Turn_Off_Crouch_After_Jumpscare() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::Set_Monsters_and_Players_Final_Locations() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::ExecuteUbergraph_BP_AbstractJumpscareMaster(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::On_Started_Jumpscare_Animation__DelegateSignature() {
    return;
}
void _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C::On_End_Jumpscare__DelegateSignature() {
    return;
}
