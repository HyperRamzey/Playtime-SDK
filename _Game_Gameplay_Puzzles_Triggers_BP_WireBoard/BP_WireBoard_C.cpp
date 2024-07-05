#include "..\FUObjectArray.hpp"
#include "BP_WireBoard_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::CheckWireConnections(bool& Solved_) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::get_Cube() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x230);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::get_Cube1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::get_Zone() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x238);
}
int32_t& _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::get_WireCount() {
    return *(int32_t*)((uintptr_t)this + 0x250);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x248);
}
float& _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::get_Spacing() {
    return *(float*)((uintptr_t)this + 0x254);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::get_Wires() {
    return (void*)((uintptr_t)this + 0x258);
}
bool _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::get_Solved_() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/Triggers/BP_WireBoard.BP_WireBoard_C");
    return result;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::set_Solved_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::get_OnSolved() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::get_WireColor() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::RandomizeEndPoints() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::UserConstructionScript0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::OnConnected() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::Disconnect() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::ExecuteUbergraph_BP_WireBoard(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireBoard::BP_WireBoard_C::OnSolved__DelegateSignature() {
    return;
}
