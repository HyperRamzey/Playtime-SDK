#include "..\FUObjectArray.hpp"
#include "UI_SubMenuButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::ExecuteUbergraph_UI_SubMenuButton(int32_t EntryPoint) {
    return;
}
void* _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Border*& _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::get_Highlight() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::get_HighlightBorder() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::get_Button_415() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::get_Outline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_Engine::Texture2D*& _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::get_IconImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::get_ButtonHover() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::get_ButtonUnhover() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::get_ButtonRelease() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Widgets/UI_SubMenuButton.UI_SubMenuButton_C");
    return result;
}
void _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::BndEvt__UI_SubMenuButton_Button_415_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::BndEvt__UI_SubMenuButton_Button_415_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::BndEvt__UI_SubMenuButton_Button_415_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::ButtonRelease__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::ButtonUnhover__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C::ButtonHover__DelegateSignature() {
    return;
}
