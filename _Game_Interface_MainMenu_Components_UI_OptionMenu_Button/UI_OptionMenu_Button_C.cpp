#include "..\FUObjectArray.hpp"
#include "UI_OptionMenu_Button_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::get_Button_60() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::get_TextBlock_38() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Components/UI_OptionMenu_Button.UI_OptionMenu_Button_C");
    return result;
}
void* _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::get_OptionMenuButtonReleased() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::get_Text() {
    return (void*)((uintptr_t)this + 0x290);
}
void _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::BndEvt__UI_OptionMenu_Button_Button_60_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::BndEvt__UI_OptionMenu_Button_Button_60_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::OptionMenuButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::BndEvt__UI_OptionMenu_Button_Button_60_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::BndEvt__UI_OptionMenu_Button_Button_60_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::Set_Text(void* Text) {
    return;
}
void _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C::ExecuteUbergraph_UI_OptionMenu_Button(int32_t EntryPoint) {
    return;
}
