#include "..\FUObjectArray.hpp"
#include "BP_Lobby_PlayerSlot_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_UMG\WidgetComponent.hpp"
int32_t& _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::get_Number() {
    return *(int32_t*)((uintptr_t)this + 0x248);
}
void* _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_UMG::WidgetComponent*& _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::get_W_Monster() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x228);
}
_Script_UMG::WidgetComponent*& _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::get_Widget() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x230);
}
bool _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::get_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::get_StaticMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x240);
}
void _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::set_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Game/Lobby/BP_Lobby_PlayerSlot.BP_Lobby_PlayerSlot_C");
    return result;
}
void _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::UpdateSlot() {
    return;
}
void _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::OnRep_Enabled() {
    return;
}
bool _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::IsMaterialReady() {
    return;
}
void _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::SetReady(bool Condition) {
    return;
}
void _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::GS_Escape_SetInterface() {
    return;
}
void _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::UpdatePlayerAsMonster(bool Value) {
    return;
}
void _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::SetInterface(int32_t Count) {
    return;
}
void _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C::ExecuteUbergraph_BP_Lobby_PlayerSlot(int32_t EntryPoint) {
    return;
}
