#include "..\FUObjectArray.hpp"
#include "..\_Game_Player_Boxy_BP_NetworkBoxy\BP_NetworkBoxy_C.hpp"
#include "BP_MonsterShrinker_C.hpp"
#include "..\_Game_Player_Huggy_BP_NetworkHuggy\BP_NetworkHuggy_C.hpp"
#include "..\_Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy\BP_NetworkMommy_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
bool _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::get_MonsterIgnore() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
void* _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Huggy/BP_MonsterShrinker.BP_MonsterShrinker_C");
    return result;
}
_Script_Engine::BoxComponent*& _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
void _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::set_MonsterIgnore(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::get_Height() {
    return *(float*)((uintptr_t)this + 0x238);
}
float& _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::get_New_Walk_Speed() {
    return *(float*)((uintptr_t)this + 0x23c);
}
void _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::BoxyExitCrouch(_Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C* BoxyRef) {
    return;
}
void _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::BoxyEnterCrouch(_Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C* BoxyRef) {
    return;
}
void _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::MommyExitCrouch(_Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C* MommyRef) {
    return;
}
void _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::MommyEnterCrouch(_Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C* MommyRef) {
    return;
}
void _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::HuggyExitCrouch(_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C* HuggyRef) {
    return;
}
void _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::HuggyEnterCrouch(_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C* HuggyRef) {
    return;
}
void _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::ReceiveActorEndOverlap0(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::ReceiveActorBeginOverlap0(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Player_Huggy_BP_MonsterShrinker::BP_MonsterShrinker_C::ExecuteUbergraph_BP_MonsterShrinker(int32_t EntryPoint) {
    return;
}
