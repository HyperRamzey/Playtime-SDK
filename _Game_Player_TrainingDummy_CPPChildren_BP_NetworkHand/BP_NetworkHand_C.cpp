#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic\BP_MeshContainer_HandCosmetic_C.hpp"
#include "BP_NetworkHand_C.hpp"
#include "..\_Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand\ABP_PlayerExtendoHand_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkHand.hpp"
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x390);
}
_Script_Engine::ChildActorComponent*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::get_BP_MeshContainer_HandCosmetic() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x398);
}
_Script_Engine::MaterialInterface*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::get_RightHandMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x3a0);
}
_Script_Engine::MaterialInterface*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::get_LeftHandMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x3a8);
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::BP_PseudoSpawn0() {
    return;
}
_Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::get_Anim_BP() {
    return *(_Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C**)((uintptr_t)this + 0x3b0);
}
_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic::BP_MeshContainer_HandCosmetic_C*& _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::get_Hand_Mesh_Container() {
    return *(_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic::BP_MeshContainer_HandCosmetic_C**)((uintptr_t)this + 0x3b8);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::get_HandLaunched() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::get_HandRetracted() {
    return (void*)((uintptr_t)this + 0x3d0);
}
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/CPPChildren/BP_NetworkHand.BP_NetworkHand_C");
    return result;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::ExecuteUbergraph_BP_NetworkHand(int32_t EntryPoint) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::SetStyle() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::UserConstructionScript() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::ReceiveBeginPlay() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::BP_BeginTouch0(float GrabbedThickness_, float DistanceFromPalm_, _Script_Engine::AnimSequence* AnimToPlay) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::BP_PseudoDestroy0() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::BP_EndTouch0() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::HandRetracted__DelegateSignature() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C::HandLaunched__DelegateSignature() {
    return;
}
