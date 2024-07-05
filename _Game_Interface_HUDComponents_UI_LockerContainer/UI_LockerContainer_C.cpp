#include "..\FUObjectArray.hpp"
#include "UI_LockerContainer_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::ProgressBar*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_BreathBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_OutOfBreath() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_ShowBreathBar() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_Core1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_BreathButton() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_BreathTextPrefix() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_BreathTextSuffix() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_Core2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_ExitButton() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::CanvasPanel*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_ExitContainer() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_ExitText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::CanvasPanel*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_HoldBreathContainer() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_Left1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_Left2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_LockerOutline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d8);
}
void _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::ExecuteUbergraph_UI_LockerContainer(int32_t EntryPoint) {
    return;
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_Right1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::get_Right2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e8);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_LockerContainer.UI_LockerContainer_C");
    return result;
}
void _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::Localization() {
    return;
}
void* _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::Get_BreathTextPrefix_Text_0() {
    return;
}
void _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::SetBreathVisibility(bool MakeVisible) {
    return;
}
void _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::OuttaBreath() {
    return;
}
void _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::SetBreathTextVisibility(bool MakeVisible) {
    return;
}
void _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::SetExitTextVisibility(bool Make_Visible) {
    return;
}
void _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::Construct0() {
    return;
}
void _Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C::PreConstruct0(bool IsDesignTime) {
    return;
}
