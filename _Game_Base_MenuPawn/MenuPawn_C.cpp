#include "..\FUObjectArray.hpp"
#include "MenuPawn_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::SceneComponent*& _Game_Base_MenuPawn::MenuPawn_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x288);
}
void* _Game_Base_MenuPawn::MenuPawn_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Base_MenuPawn::MenuPawn_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/MenuPawn.MenuPawn_C");
    return result;
}
void _Game_Base_MenuPawn::MenuPawn_C::ExecuteUbergraph_MenuPawn(int32_t EntryPoint) {
    return;
}
