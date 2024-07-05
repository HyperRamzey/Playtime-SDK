#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_Loading\UI_N_Loading_C.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "UI_FindingGame_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::get_StatusText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::get_Image_96() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x278);
}
bool _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::get_Cancelled() {
    return (*(uint8_t*)((uintptr_t)this + 0x29c + 0)) & 1 != 0;
}
_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::get_UI_N_Loading() {
    return *(_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::get_CachedResults() {
    return (void*)((uintptr_t)this + 0x288);
}
int32_t& _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::get_CurrentIndex() {
    return *(int32_t*)((uintptr_t)this + 0x298);
}
void _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::set_Cancelled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29c + 0);
    *(uint8_t*)((uintptr_t)this + 0x29c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::get_Back() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::get_WantsToTryHosting() {
    return (void*)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Play/UI_FindingGame.UI_FindingGame_C");
    return result;
}
void _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::ShowErrorFindingGame() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::ShowErrorHosting() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::Show_Joining() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::Show_Searching() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::SetCancelButtonVisibility(bool IsVisible) {
    return;
}
void _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::BndEvt__UI_FindingGame_UI_BackButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::ExecuteUbergraph_UI_FindingGame(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::WantsToTryHosting__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C::Back__DelegateSignature() {
    return;
}
