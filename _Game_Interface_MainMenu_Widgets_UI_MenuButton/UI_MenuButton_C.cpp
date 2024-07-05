#include "..\FUObjectArray.hpp"
#include "UI_MenuButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Border*& _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_Border_50() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Widgets/UI_MenuButton.UI_MenuButton_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_HighlightFrame() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_PlayButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_Engine::Texture2D*& _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_ButtonBackground() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_ButtonText() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_Engine::Texture2D*& _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_ButtonIcon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2c0);
}
_Script_Engine::Texture2D*& _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_ButtonFrame() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2c8);
}
void* _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::get_ButtonPressed() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::BndEvt__UI_MenuButton_Button_218_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::BndEvt__UI_MenuButton_Button_218_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::BndEvt__UI_MenuButton_Button_218_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::ExecuteUbergraph_UI_MenuButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_MenuButton::UI_MenuButton_C::ButtonPressed__DelegateSignature() {
    return;
}
