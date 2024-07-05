#include "..\FUObjectArray.hpp"
#include "BP_SprintFootprint_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\DecalComponent.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::DecalComponent*& _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::get_Decal() {
    return *(_Script_Engine::DecalComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
float& _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::get_Fader_Track_853569C14BFD131DC13895BD21911E04() {
    return *(float*)((uintptr_t)this + 0x238);
}
void* _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::get_Color() {
    return (void*)((uintptr_t)this + 0x250);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::get_Fader() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x240);
}
void* _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::get_Fader__Direction_853569C14BFD131DC13895BD21911E04() {
    return (void*)((uintptr_t)this + 0x23c);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::get_Material() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x248);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Footsteps/BP_SprintFootprint.BP_SprintFootprint_C");
    return result;
}
void _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::SetMaterial() {
    return;
}
void _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::Fader__FinishedFunc() {
    return;
}
void _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::Fader__UpdateFunc() {
    return;
}
void _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::FadePrint() {
    return;
}
void _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::QuickFadePrint() {
    return;
}
void _Game_Gameplay_Character_Footsteps_BP_SprintFootprint::BP_SprintFootprint_C::ExecuteUbergraph_BP_SprintFootprint(int32_t EntryPoint) {
    return;
}
