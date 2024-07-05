#include "..\FUObjectArray.hpp"
#include "UI_ClearPerk_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Perks/UI_ClearPerk.UI_ClearPerk_C");
    return result;
}
_Script_UMG::Button*& _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C::get_Button_97() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
void _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C::BndEvt__UI_ClearPerk_Button_97_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C::get_ButtonLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C::get_Button_Pressed() {
    return (void*)((uintptr_t)this + 0x288);
}
void _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C::BndEvt__UI_ClearPerk_Button_97_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C::BndEvt__UI_ClearPerk_Button_97_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C::ExecuteUbergraph_UI_ClearPerk(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Perks_UI_ClearPerk::UI_ClearPerk_C::Button_Pressed__DelegateSignature() {
    return;
}
