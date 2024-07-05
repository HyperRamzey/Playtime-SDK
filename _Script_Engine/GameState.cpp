#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameState.hpp"
#include "GameStateBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::GameState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameState");
    return result;
}
void* _Script_Engine::GameState::get_MatchState() {
    return (void*)((uintptr_t)this + 0x270);
}
int32_t& _Script_Engine::GameState::get_ElapsedTime() {
    return *(int32_t*)((uintptr_t)this + 0x280);
}
void* _Script_Engine::GameState::get_PreviousMatchState() {
    return (void*)((uintptr_t)this + 0x278);
}
void _Script_Engine::GameState::OnRep_MatchState() {
    return;
}
void _Script_Engine::GameState::OnRep_ElapsedTime() {
    return;
}
