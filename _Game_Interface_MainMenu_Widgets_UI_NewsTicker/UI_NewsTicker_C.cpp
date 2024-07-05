#include "..\FUObjectArray.hpp"
#include "UI_NewsTicker_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::get_AnnocunementButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::get_BottomTInt() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::get_BorderHighlight() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
void _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::AnnoucnmentButtonPressed__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::get_NewsTickerMat() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x290);
}
void* _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::get_AnnoucnmentButtonPressed() {
    return (void*)((uintptr_t)this + 0x298);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Widgets/UI_NewsTicker.UI_NewsTicker_C");
    return result;
}
void _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::BndEvt__UI_NewsTicker_AnnocunementButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::BndEvt__UI_NewsTicker_AnnocunementButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::BndEvt__UI_NewsTicker_AnnocunementButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Widgets_UI_NewsTicker::UI_NewsTicker_C::ExecuteUbergraph_UI_NewsTicker(int32_t EntryPoint) {
    return;
}
