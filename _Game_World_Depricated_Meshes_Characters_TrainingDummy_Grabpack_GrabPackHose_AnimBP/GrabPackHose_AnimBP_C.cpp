#include "..\FUObjectArray.hpp"
#include "GrabPackHose_AnimBP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
bool _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::get_NeedsRevived() {
    return (*(uint8_t*)((uintptr_t)this + 0x50d + 0)) & 1 != 0;
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
float& _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::get_LookUp() {
    return *(float*)((uintptr_t)this + 0x508);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x4d8);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::get_AnimGraphNode_RotationOffsetBlendSpace() {
    return (void*)((uintptr_t)this + 0x348);
}
bool _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::get_Crouched() {
    return (*(uint8_t*)((uintptr_t)this + 0x50c + 0)) & 1 != 0;
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::set_Crouched(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50c + 0);
    *(uint8_t*)((uintptr_t)this + 0x50c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::set_NeedsRevived(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50d + 0);
    *(uint8_t*)((uintptr_t)this + 0x50d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::get_HeadPosition() {
    return (void*)((uintptr_t)this + 0x510);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::get_HeadRotation() {
    return (void*)((uintptr_t)this + 0x51c);
}
bool _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::get_LeftHand() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 1 != 0;
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::set_LeftHand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::get_BeginningPosition() {
    return (void*)((uintptr_t)this + 0x52c);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::get_BeginningRotation() {
    return (void*)((uintptr_t)this + 0x538);
}
_Script_CoreUObject::Class* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Depricated/Meshes/Characters/TrainingDummy/Grabpack/GrabPackHose_AnimBP.GrabPackHose_AnimBP_C");
    return result;
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
_Script_CoreUObject::Vector _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::ReturnSceneTransforms(void* Tag, _Script_CoreUObject::Rotator& Rotator) {
    return;
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C::ExecuteUbergraph_GrabPackHose_AnimBP(int32_t EntryPoint) {
    return;
}
