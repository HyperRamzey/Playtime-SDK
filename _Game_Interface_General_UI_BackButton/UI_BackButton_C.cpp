#include "..\FUObjectArray.hpp"
#include "UI_BackButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_General_UI_BackButton::UI_BackButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_General_UI_BackButton::UI_BackButton_C::get_Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
void _Game_Interface_General_UI_BackButton::UI_BackButton_C::BndEvt__UI_BackButton_Button_103_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_Interface_General_UI_BackButton::UI_BackButton_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_General_UI_BackButton::UI_BackButton_C::get_Released() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_UMG::Button*& _Game_Interface_General_UI_BackButton::UI_BackButton_C::get_Button_103() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_General_UI_BackButton::UI_BackButton_C::get_ButtonIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_General_UI_BackButton::UI_BackButton_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Interface_General_UI_BackButton::UI_BackButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/General/UI_BackButton.UI_BackButton_C");
    return result;
}
void _Game_Interface_General_UI_BackButton::UI_BackButton_C::BndEvt__UI_BackButton_Button_103_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_General_UI_BackButton::UI_BackButton_C::BndEvt__UI_BackButton_Button_103_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_General_UI_BackButton::UI_BackButton_C::ExecuteUbergraph_UI_BackButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_General_UI_BackButton::UI_BackButton_C::Released__DelegateSignature() {
    return;
}
