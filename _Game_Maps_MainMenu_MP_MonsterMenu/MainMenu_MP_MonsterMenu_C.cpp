#include "..\FUObjectArray.hpp"
#include "MainMenu_MP_MonsterMenu_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
void _Game_Maps_MainMenu_MP_MonsterMenu::MainMenu_MP_MonsterMenu_C::ExecuteUbergraph_MainMenu_MP_MonsterMenu(int32_t EntryPoint) {
    return;
}
void* _Game_Maps_MainMenu_MP_MonsterMenu::MainMenu_MP_MonsterMenu_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x228);
}
void _Game_Maps_MainMenu_MP_MonsterMenu::MainMenu_MP_MonsterMenu_C::ReceiveBeginPlay() {
    return;
}
_Script_CoreUObject::Class* _Game_Maps_MainMenu_MP_MonsterMenu::MainMenu_MP_MonsterMenu_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Maps/MainMenu_MP_MonsterMenu.MainMenu_MP_MonsterMenu_C");
    return result;
}
