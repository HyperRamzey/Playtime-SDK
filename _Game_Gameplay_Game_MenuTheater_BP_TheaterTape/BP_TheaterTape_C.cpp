#include "..\FUObjectArray.hpp"
#include "BP_TheaterTape_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
bool _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::get_Selected() {
    return (*(uint8_t*)((uintptr_t)this + 0x23c + 0)) & 1 != 0;
}
void* _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::get_Cube() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x228);
}
void _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::RetrieveTapeInfo() {
    return;
}
void _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::set_Selected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23c + 0);
    *(uint8_t*)((uintptr_t)this + 0x23c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
int32_t& _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::get_VHS_Index() {
    return *(int32_t*)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Game/MenuTheater/BP_TheaterTape.BP_TheaterTape_C");
    return result;
}
void _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::SetSelected(bool Condition) {
    return;
}
void _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::ReceiveActorBeginCursorOver0() {
    return;
}
void _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::ReceiveActorEndCursorOver0() {
    return;
}
void _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::LoadDefault() {
    return;
}
void _Game_Gameplay_Game_MenuTheater_BP_TheaterTape::BP_TheaterTape_C::ExecuteUbergraph_BP_TheaterTape(int32_t EntryPoint) {
    return;
}
