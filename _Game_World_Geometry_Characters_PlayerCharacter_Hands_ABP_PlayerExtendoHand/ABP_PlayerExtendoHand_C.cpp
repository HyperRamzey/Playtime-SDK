#include "..\FUObjectArray.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "ABP_PlayerExtendoHand_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_TransitionResult_6() {
    return (void*)((uintptr_t)this + 0x320);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_TransitionResult_7() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::set_ForceFirstPersonProne(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x965 + 0);
    *(uint8_t*)((uintptr_t)this + 0x965 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_TransitionResult_2() {
    return (void*)((uintptr_t)this + 0x3c0);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_Horizontal_Speed() {
    return *(float*)((uintptr_t)this + 0x960);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_TransitionResult_5() {
    return (void*)((uintptr_t)this + 0x348);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_Network_Character() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x958);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_TransitionResult_4() {
    return (void*)((uintptr_t)this + 0x370);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_Smacked() {
    return (*(uint8_t*)((uintptr_t)this + 0x950 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_TransitionResult_3() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_TransitionResult_1() {
    return (void*)((uintptr_t)this + 0x3e8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::BlueprintBeginPlay0() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_TransitionResult() {
    return (void*)((uintptr_t)this + 0x410);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::Set_Wants_To_Prone() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_SequencePlayer_3() {
    return (void*)((uintptr_t)this + 0x438);
}
void*& _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_HandMagnetAnim() {
    return *(void**)((uintptr_t)this + 0x948);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_BlendListByBool() {
    return (void*)((uintptr_t)this + 0x648);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_StateResult_3() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_SequencePlayer_2() {
    return (void*)((uintptr_t)this + 0x4e8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_StateResult_2() {
    return (void*)((uintptr_t)this + 0x568);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_SequencePlayer_1() {
    return (void*)((uintptr_t)this + 0x598);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_IsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x945 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_StateResult_1() {
    return (void*)((uintptr_t)this + 0x618);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_Wants_To_Prone() {
    return (*(uint8_t*)((uintptr_t)this + 0x952 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0x6e8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::SetForcedProne(bool ForceFirstPersonProne) {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_BlendSpacePlayer() {
    return (void*)((uintptr_t)this + 0x768);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_StateResult() {
    return (void*)((uintptr_t)this + 0x850);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_AnimGraphNode_StateMachine() {
    return (void*)((uintptr_t)this + 0x880);
}
_Script_Engine::AnimSequence*& _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_CustomAnim() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x930);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_Get_Ready() {
    return (*(uint8_t*)((uintptr_t)this + 0x938 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::set_Get_Ready(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x938 + 0);
    *(uint8_t*)((uintptr_t)this + 0x938 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_Play() {
    return (*(uint8_t*)((uintptr_t)this + 0x939 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::set_Touched(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x944 + 0);
    *(uint8_t*)((uintptr_t)this + 0x944 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::set_Play(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x939 + 0);
    *(uint8_t*)((uintptr_t)this + 0x939 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x93c);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_Is_Moving_Backward() {
    return (*(uint8_t*)((uintptr_t)this + 0x964 + 0)) & 1 != 0;
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_Distance_From_Palm() {
    return *(float*)((uintptr_t)this + 0x940);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_Touched() {
    return (*(uint8_t*)((uintptr_t)this + 0x944 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::set_IsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x945 + 0);
    *(uint8_t*)((uintptr_t)this + 0x945 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::set_Smacked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x950 + 0);
    *(uint8_t*)((uintptr_t)this + 0x950 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_ShouldUseCustomAnim() {
    return (*(uint8_t*)((uintptr_t)this + 0x951 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::set_ShouldUseCustomAnim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x951 + 0);
    *(uint8_t*)((uintptr_t)this + 0x951 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::set_Wants_To_Prone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x952 + 0);
    *(uint8_t*)((uintptr_t)this + 0x952 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::set_Is_Moving_Backward(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x964 + 0);
    *(uint8_t*)((uintptr_t)this + 0x964 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::get_ForceFirstPersonProne() {
    return (*(uint8_t*)((uintptr_t)this + 0x965 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/PlayerCharacter/Hands/ABP_PlayerExtendoHand.ABP_PlayerExtendoHand_C");
    return result;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerExtendoHand_AnimGraphNode_SequencePlayer_4BC4C6EE43A480E4EF806B9E806EBCE6() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C::ExecuteUbergraph_ABP_PlayerExtendoHand(int32_t EntryPoint) {
    return;
}
