#include "..\FUObjectArray.hpp"
#include "GS_MenuState_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameStateBase.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Game_Base_GS_MenuState::GS_MenuState_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_Engine::SceneComponent*& _Game_Base_GS_MenuState::GS_MenuState_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x278);
}
int32_t& _Game_Base_GS_MenuState::GS_MenuState_C::get_XP() {
    return *(int32_t*)((uintptr_t)this + 0x280);
}
void* _Game_Base_GS_MenuState::GS_MenuState_C::get_ToyBoxResponse() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_CoreUObject::Class* _Game_Base_GS_MenuState::GS_MenuState_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/GS_MenuState.GS_MenuState_C");
    return result;
}
void _Game_Base_GS_MenuState::GS_MenuState_C::ReceiveBeginPlay() {
    return;
}
void _Game_Base_GS_MenuState::GS_MenuState_C::ExecuteUbergraph_GS_MenuState(int32_t EntryPoint) {
    return;
}
