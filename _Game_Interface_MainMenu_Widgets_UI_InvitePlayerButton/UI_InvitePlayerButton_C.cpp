#include "..\FUObjectArray.hpp"
#include "UI_InvitePlayerButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::get_HighlightButton() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::get_ButtonRelease() {
    return (void*)((uintptr_t)this + 0x298);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::get_Button_88() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_Engine::Texture2D*& _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::get_IconImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::get_playericon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
bool _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::get_ShowingPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::set_ShowingPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::get_PFP() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Widgets/UI_InvitePlayerButton.UI_InvitePlayerButton_C");
    return result;
}
void _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::ShowPlayerIcon(_Script_Engine::Texture2D* Avatar) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::HidePlayerIcon() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::BndEvt__UI_InvitePlayerButton_Button_88_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::BndEvt__UI_InvitePlayerButton_Button_88_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::BndEvt__UI_InvitePlayerButton_Button_88_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::ExecuteUbergraph_UI_InvitePlayerButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton::UI_InvitePlayerButton_C::ButtonRelease__DelegateSignature() {
    return;
}
