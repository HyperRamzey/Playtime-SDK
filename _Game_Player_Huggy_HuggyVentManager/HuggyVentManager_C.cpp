#include "..\FUObjectArray.hpp"
#include "HuggyVentManager_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Game_Player_Huggy_HuggyVentManager::HuggyVentManager_C::get_Vents() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Game_Player_Huggy_HuggyVentManager::HuggyVentManager_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::SceneComponent*& _Game_Player_Huggy_HuggyVentManager::HuggyVentManager_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
void _Game_Player_Huggy_HuggyVentManager::HuggyVentManager_C::ExecuteUbergraph_HuggyVentManager(int32_t EntryPoint) {
    return;
}
_Script_CoreUObject::Class* _Game_Player_Huggy_HuggyVentManager::HuggyVentManager_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Huggy/HuggyVentManager.HuggyVentManager_C");
    return result;
}
void _Game_Player_Huggy_HuggyVentManager::HuggyVentManager_C::ReceiveBeginPlay0() {
    return;
}
