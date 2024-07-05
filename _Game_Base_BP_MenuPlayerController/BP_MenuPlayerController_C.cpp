#include "..\FUObjectArray.hpp"
#include "BP_MenuPlayerController_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MainMenu\UI_MainMenu_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimePlayerController.hpp"
void* _Game_Base_BP_MenuPlayerController::BP_MenuPlayerController_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x570);
}
_Script_CoreUObject::Class* _Game_Base_BP_MenuPlayerController::BP_MenuPlayerController_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/BP_MenuPlayerController.BP_MenuPlayerController_C");
    return result;
}
bool _Game_Base_BP_MenuPlayerController::BP_MenuPlayerController_C::get_CanEscQuit() {
    return (*(uint8_t*)((uintptr_t)this + 0x578 + 0)) & 1 != 0;
}
void _Game_Base_BP_MenuPlayerController::BP_MenuPlayerController_C::set_CanEscQuit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x578 + 0);
    *(uint8_t*)((uintptr_t)this + 0x578 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Base_BP_MenuPlayerController::BP_MenuPlayerController_C::ReceiveTick(float DeltaSeconds) {
    return;
}
_Script_CoreUObject::Vector _Game_Base_BP_MenuPlayerController::BP_MenuPlayerController_C::GetCursorWorldLocation() {
    return;
}
_Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C*& _Game_Base_BP_MenuPlayerController::BP_MenuPlayerController_C::get_Menu() {
    return *(_Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C**)((uintptr_t)this + 0x580);
}
void _Game_Base_BP_MenuPlayerController::BP_MenuPlayerController_C::ReceiveBeginPlay() {
    return;
}
void _Game_Base_BP_MenuPlayerController::BP_MenuPlayerController_C::ExecuteUbergraph_BP_MenuPlayerController(int32_t EntryPoint) {
    return;
}
