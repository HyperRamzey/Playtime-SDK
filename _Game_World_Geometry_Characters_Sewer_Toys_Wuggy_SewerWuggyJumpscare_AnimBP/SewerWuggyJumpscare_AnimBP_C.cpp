#include "..\FUObjectArray.hpp"
#include "SewerWuggyJumpscare_AnimBP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
void* _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::get_AnimGraphNode_ComponentToLocalSpace() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void* _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::get_AnimGraphNode_ModifyBone() {
    return (void*)((uintptr_t)this + 0x378);
}
float& _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::get_Jumping_Alpha() {
    return *(float*)((uintptr_t)this + 0x4c0);
}
void* _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::get_AnimGraphNode_LocalToComponentSpace() {
    return (void*)((uintptr_t)this + 0x480);
}
bool _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::get_Jumpscare() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c4 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::set_Jumpscare(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/Sewer_Toys/Wuggy/SewerWuggyJumpscare_AnimBP.SewerWuggyJumpscare_AnimBP_C");
    return result;
}
void _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SewerWuggyJumpscare_AnimBP_AnimGraphNode_SequencePlayer_2EA87C2B4C4FC41125E5079EF8910576() {
    return;
}
void _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
void _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP::SewerWuggyJumpscare_AnimBP_C::ExecuteUbergraph_SewerWuggyJumpscare_AnimBP(int32_t EntryPoint) {
    return;
}
