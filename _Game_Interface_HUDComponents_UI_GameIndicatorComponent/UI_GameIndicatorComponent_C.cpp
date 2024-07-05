#include "..\FUObjectArray.hpp"
#include "UI_GameIndicatorComponent_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_PlayerStatus\UI_PlayerStatus_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::get_ToySelection() {
    return (void*)((uintptr_t)this + 0x290);
}
_Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C*& _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::get_UI_PlayerStatus() {
    return *(_Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C**)((uintptr_t)this + 0x288);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::get_ToyPartAdd() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::get_ToyIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::get_ToyPartText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_GameIndicatorComponent.UI_GameIndicatorComponent_C");
    return result;
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::get_ToyPartText_1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::InitToyPart(void* ToySelection) {
    return;
}
void _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::Update_Toy_Count(void*& Toys_Found) {
    return;
}
int32_t _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::How_Many_Bools_True(void*& Input) {
    return;
}
void _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::Construct0() {
    return;
}
void _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C::ExecuteUbergraph_UI_GameIndicatorComponent(int32_t EntryPoint) {
    return;
}
