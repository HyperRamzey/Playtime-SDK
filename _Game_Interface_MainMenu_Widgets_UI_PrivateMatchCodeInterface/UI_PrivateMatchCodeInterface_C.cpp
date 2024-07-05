#include "..\FUObjectArray.hpp"
#include "UI_PrivateMatchCodeInterface_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_SteamCore\LobbyMatchList.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_Num1Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_Num4Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_Num2Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_Num3Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_ShowHideButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_ShowHideEyeImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
bool _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_isNumPadVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a0 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::set_isNumPadVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_TargetCode() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_RandomStream() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_GameName() {
    return (void*)((uintptr_t)this + 0x300);
}
void* _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_LocalCode() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_FormattedTargetCode() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_FormattedLocalCode() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void* _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_GameServer_Timer() {
    return (void*)((uintptr_t)this + 0x310);
}
void* _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_OnPlayerJoinedLobby() {
    return (void*)((uintptr_t)this + 0x318);
}
bool _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::get_ShowingCode() {
    return (*(uint8_t*)((uintptr_t)this + 0x328 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::set_ShowingCode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x328 + 0);
    *(uint8_t*)((uintptr_t)this + 0x328 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Widgets/UI_PrivateMatchCodeInterface.UI_PrivateMatchCodeInterface_C");
    return result;
}
void _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::SetCodeVisibility(bool ShowCode) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::GetCode(void*& Code) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::RandomizeCode() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::ClearCode() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::Handle_New_Input(int32_t Input_Key) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::OnCallback_6591F97E42D3254104C8A1B52DE3EB3F(_Script_SteamCore::LobbyMatchList& Data, bool bWasSuccessful) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::HandleCodeGeneration() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::BndEvt__UI_PrivateMatch_Button_55_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::ExecuteUbergraph_UI_PrivateMatchCodeInterface(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C::OnPlayerJoinedLobby__DelegateSignature(int32_t LobbyMemberIndex, _Script_Engine::Texture2D* SteamAvatar) {
    return;
}
