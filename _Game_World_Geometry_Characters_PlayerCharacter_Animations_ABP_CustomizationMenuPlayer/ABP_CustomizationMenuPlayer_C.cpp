#include "..\FUObjectArray.hpp"
#include "ABP_CustomizationMenuPlayer_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_StateMachine() {
    return (void*)((uintptr_t)this + 0x9e8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_SaveCachedPose_1() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_SequencePlayer_2() {
    return (void*)((uintptr_t)this + 0x670);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::set_Is_Customizing_Grabpack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1678 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1678 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_Slot() {
    return (void*)((uintptr_t)this + 0x6f0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_SequencePlayer_3() {
    return (void*)((uintptr_t)this + 0x450);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_Slot_1() {
    return (void*)((uintptr_t)this + 0x4d0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_SaveCachedPose() {
    return (void*)((uintptr_t)this + 0x518);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_ControlRig() {
    return (void*)((uintptr_t)this + 0x1310);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_TransitionResult_3() {
    return (void*)((uintptr_t)this + 0x738);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_TransitionResult_2() {
    return (void*)((uintptr_t)this + 0x760);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_TransitionResult_1() {
    return (void*)((uintptr_t)this + 0x788);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_TransitionResult() {
    return (void*)((uintptr_t)this + 0x7b0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_UseCachedPose_1() {
    return (void*)((uintptr_t)this + 0x7d8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_StateResult_3() {
    return (void*)((uintptr_t)this + 0x800);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_SequencePlayer_1() {
    return (void*)((uintptr_t)this + 0x830);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_StateResult_2() {
    return (void*)((uintptr_t)this + 0x8b0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0x8e0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_StateResult_1() {
    return (void*)((uintptr_t)this + 0x960);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_UseCachedPose() {
    return (void*)((uintptr_t)this + 0x990);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_StateResult() {
    return (void*)((uintptr_t)this + 0x9b8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_RigidBody() {
    return (void*)((uintptr_t)this + 0xaa0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_LocalToComponentSpace() {
    return (void*)((uintptr_t)this + 0x12d0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_AnimGraphNode_ComponentToLocalSpace() {
    return (void*)((uintptr_t)this + 0x12f0);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::get_Is_Customizing_Grabpack() {
    return (*(uint8_t*)((uintptr_t)this + 0x1678 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/PlayerCharacter/Animations/ABP_CustomizationMenuPlayer.ABP_CustomizationMenuPlayer_C");
    return result;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::PlaySelectMontage(_Script_Engine::AnimMontage* Montage) {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C::ExecuteUbergraph_ABP_CustomizationMenuPlayer(int32_t EntryPoint) {
    return;
}
