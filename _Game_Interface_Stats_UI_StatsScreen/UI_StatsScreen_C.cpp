#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "UI_StatsScreen_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
void* _Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C::get_Image_234() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x270);
}
_Script_UMG::VerticalBox*& _Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C::get_VerticalBox_128() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C::get_Back() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Stats/UI_StatsScreen.UI_StatsScreen_C");
    return result;
}
void _Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C::RefreshStats() {
    return;
}
void _Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C::BndEvt__UI_StatsScreen_UI_BackButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature() {
    return;
}
void _Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C::ExecuteUbergraph_UI_StatsScreen(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Stats_UI_StatsScreen::UI_StatsScreen_C::Back__DelegateSignature() {
    return;
}
