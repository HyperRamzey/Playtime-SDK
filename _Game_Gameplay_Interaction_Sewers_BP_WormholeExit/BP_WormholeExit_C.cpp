#include "..\FUObjectArray.hpp"
#include "BP_WormholeExit_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
_Script_Engine::SplineComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C::get_HandSpline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x220);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C::get_CMOVE_Spline_Input() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C::get_CMOVE_Spline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Interaction/Sewers/BP_WormholeExit.BP_WormholeExit_C");
    return result;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C::get_OutputScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x240);
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C::GetHandSpawnLocation(_Script_CoreUObject::Transform& Transform) {
    return;
}
