#include "..\FUObjectArray.hpp"
#include "BP_DualSplineFollower_C.hpp"
#include "..\_Game_Gameplay_Interaction_Sewers_BP_PseudoHand\BP_PseudoHand_C.hpp"
#include "..\_Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance\BP_WormholeEntrance_C.hpp"
#include "..\_Game_Gameplay_Interaction_Sewers_BP_WuggyHole\BP_WuggyHole_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Playtime_Multiplayer\DualSplineFollower.hpp"
void* _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::get_FinishedMoving_Dispatch() {
    return (void*)((uintptr_t)this + 0x298);
}
float& _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::get_ReviveTime() {
    return *(float*)((uintptr_t)this + 0x290);
}
_Game_Gameplay_Interaction_Sewers_BP_PseudoHand::BP_PseudoHand_C*& _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::get_Pseudo_Hand() {
    return *(_Game_Gameplay_Interaction_Sewers_BP_PseudoHand::BP_PseudoHand_C**)((uintptr_t)this + 0x288);
}
void* _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::get_State() {
    return (void*)((uintptr_t)this + 0x270);
}
_Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C*& _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::get_WuggyHoleRef() {
    return *(_Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C**)((uintptr_t)this + 0x278);
}
_Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C*& _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::get_WormHole() {
    return *(_Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C**)((uintptr_t)this + 0x280);
}
bool _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::get_MonsterSpawnedThisOne() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::To_Exiting() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::set_MonsterSpawnedThisOne(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::get_EnteringTime() {
    return *(float*)((uintptr_t)this + 0x2ac);
}
bool _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::get_IsSpawnedToRevive() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b0 + 0)) & 1 != 0;
}
void _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::set_IsSpawnedToRevive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Interaction/Sewers/BP_DualSplineFollower.BP_DualSplineFollower_C");
    return result;
}
void _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::IsAvailable(bool& Available) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::ReceiveBeginPlay() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::Transition_State(void* State) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::Event_FinishedMoving(_Script_Engine::Actor* Caller) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::Multicast_PlaySuccessSound() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::To_Idle() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::To_Entering() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::ExecuteUbergraph_BP_DualSplineFollower(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C::FinishedMoving_Dispatch__DelegateSignature() {
    return;
}
