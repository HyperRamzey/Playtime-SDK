#include "..\FUObjectArray.hpp"
#include "UI_ShopButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_HighlightFrame() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_Fade() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Border*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_Border_196() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_BundleImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_Button_213() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::BndEvt__UI_ShopButton_Button_213_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_ShopRender() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
_Script_Engine::Texture2D*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_ButtonBackground() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2b0);
}
void* _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_ButtonText() {
    return (void*)((uintptr_t)this + 0x2b8);
}
_Script_Engine::Texture2D*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_ButtonIcon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2d0);
}
_Script_Engine::Texture2D*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_ButtonFrame() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2d8);
}
void* _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_ShopButtonPressed() {
    return (void*)((uintptr_t)this + 0x2e0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::get_RenderMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2f0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Widgets/UI_ShopButton.UI_ShopButton_C");
    return result;
}
void _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::BndEvt__UI_ShopButton_Button_213_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::BndEvt__UI_ShopButton_Button_213_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::ExecuteUbergraph_UI_ShopButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_ShopButton::UI_ShopButton_C::ShopButtonPressed__DelegateSignature() {
    return;
}
