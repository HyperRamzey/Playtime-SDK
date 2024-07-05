#include "..\FUObjectArray.hpp"
#include "ABP_FPHuggyCamera_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_FPHuggyCamera::ABP_FPHuggyCamera_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_FPHuggyCamera::ABP_FPHuggyCamera_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0x340);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_FPHuggyCamera::ABP_FPHuggyCamera_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_FPHuggyCamera::ABP_FPHuggyCamera_C::Play_Montage(_Script_Engine::AnimMontage* MontageToPlay) {
    return;
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_FPHuggyCamera::ABP_FPHuggyCamera_C::get_AnimGraphNode_Slot() {
    return (void*)((uintptr_t)this + 0x2f8);
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_Camera_Animations_ABP_FPHuggyCamera::ABP_FPHuggyCamera_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/Camera/Animations/ABP_FPHuggyCamera.ABP_FPHuggyCamera_C");
    return result;
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_FPHuggyCamera::ABP_FPHuggyCamera_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_FPHuggyCamera::ABP_FPHuggyCamera_C::ExecuteUbergraph_ABP_FPHuggyCamera(int32_t EntryPoint) {
    return;
}
