#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "..\_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel\BP_MP_HandPanel_C.hpp"
#include "BP_HuggyVent_C.hpp"
#include "..\_Game_Player_Huggy_BP_NetworkHuggy\BP_NetworkHuggy_C.hpp"
#include "..\_Game_Player_Huggy_HuggyVentManager\HuggyVentManager_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::ChildActorComponent*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_BP_MP_HandPanel_1() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x250);
}
_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_Huggy() {
    return *(_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C**)((uintptr_t)this + 0x288);
}
void* _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::ChildActorComponent*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_BP_MP_HandPanel_2() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::SceneComponent*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_Cube3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_Cube1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_Cube2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SphereComponent*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_Cube() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::SceneComponent*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x268);
}
bool _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_Locked() {
    return (*(uint8_t*)((uintptr_t)this + 0x270 + 0)) & 1 != 0;
}
int32_t& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_RightVent2() {
    return *(int32_t*)((uintptr_t)this + 0x29c);
}
void _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::set_Locked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x270 + 0);
    *(uint8_t*)((uintptr_t)this + 0x270 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_Hand_Panel_1() {
    return *(_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C**)((uintptr_t)this + 0x278);
}
_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_Hand_Panel_2() {
    return *(_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C**)((uintptr_t)this + 0x280);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_BPC_Hand_Magnet() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x290);
}
int32_t& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_LeftVent2() {
    return *(int32_t*)((uintptr_t)this + 0x298);
}
_Game_Player_Huggy_HuggyVentManager::HuggyVentManager_C*& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_VentManager() {
    return *(_Game_Player_Huggy_HuggyVentManager::HuggyVentManager_C**)((uintptr_t)this + 0x2a0);
}
int32_t& _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Huggy/BP_HuggyVent.BP_HuggyVent_C");
    return result;
}
void _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::GetRightVent(_Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C*& RightVent) {
    return;
}
void _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::GetLeftVent(_Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C*& LeftVent) {
    return;
}
void _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::Is_In_Range_(_Script_Engine::Actor* Actor, bool& InRange) {
    return;
}
void _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::LockVent() {
    return;
}
void _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::EnterVent() {
    return;
}
void _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::MoveToVent() {
    return;
}
void _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::ExitVent() {
    return;
}
void _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::Alert(void* AttachmentStateChange) {
    return;
}
void _Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C::ExecuteUbergraph_BP_HuggyVent(int32_t EntryPoint) {
    return;
}
