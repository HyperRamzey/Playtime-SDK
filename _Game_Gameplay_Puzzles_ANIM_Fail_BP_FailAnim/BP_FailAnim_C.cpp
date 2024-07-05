#include "..\FUObjectArray.hpp"
#include "BP_FailAnim_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "..\_Script_Paper2D\PaperFlipbookComponent.hpp"
void* _Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim::BP_FailAnim_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim::BP_FailAnim_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
_Script_Paper2D::PaperFlipbookComponent*& _Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim::BP_FailAnim_C::get_FB_fail() {
    return *(_Script_Paper2D::PaperFlipbookComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim::BP_FailAnim_C::get_TextRender() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim::BP_FailAnim_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/ANIM_Fail/BP_FailAnim.BP_FailAnim_C");
    return result;
}
void _Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim::BP_FailAnim_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim::BP_FailAnim_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim::BP_FailAnim_C::BndEvt__BP_FailAnim_FB_fail_K2Node_ComponentBoundEvent_0_FlipbookFinishedPlaySignature__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim::BP_FailAnim_C::ExecuteUbergraph_BP_FailAnim(int32_t EntryPoint) {
    return;
}
