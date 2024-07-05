#include "..\FUObjectArray.hpp"
#include "GM_MainMenu_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\GameMode.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Game_Base_GM_MainMenu::GM_MainMenu_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x308);
}
_Script_Engine::SceneComponent*& _Game_Base_GM_MainMenu::GM_MainMenu_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x310);
}
void _Game_Base_GM_MainMenu::GM_MainMenu_C::clearbackendcaches() {
    return;
}
_Script_CoreUObject::Class* _Game_Base_GM_MainMenu::GM_MainMenu_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/GM_MainMenu.GM_MainMenu_C");
    return result;
}
void _Game_Base_GM_MainMenu::GM_MainMenu_C::ReceiveBeginPlay() {
    return;
}
void _Game_Base_GM_MainMenu::GM_MainMenu_C::printauthtoken() {
    return;
}
void _Game_Base_GM_MainMenu::GM_MainMenu_C::K2_OnLogout(_Script_Engine::Controller* ExitingController) {
    return;
}
void _Game_Base_GM_MainMenu::GM_MainMenu_C::K2_PostLogin(_Script_Engine::PlayerController* NewPlayer) {
    return;
}
void _Game_Base_GM_MainMenu::GM_MainMenu_C::SilentlyRefreshCoins() {
    return;
}
void _Game_Base_GM_MainMenu::GM_MainMenu_C::ExecuteUbergraph_GM_MainMenu(int32_t EntryPoint) {
    return;
}
