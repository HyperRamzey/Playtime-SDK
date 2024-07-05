#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_PlaytimeButton\UI_PlaytimeButton_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_CosmeticInfo\UI_CosmeticInfo_C.hpp"
#include "UI_NewReward_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Script_UMG::Image*& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_Image_44() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::BndEvt__UI_NewReward_UI_PlaytimeButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_Popup() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_From() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_ContinuePressed() {
    return (void*)((uintptr_t)this + 0x2c0);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_NewRewardText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
void _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::NewReward_UpdateVisuals() {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_Image_113() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_Overlay_93() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x298);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_NextButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x290);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_PreviousButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::BndEvt__UI_NewReward_PreviousButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C*& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_UI_CosmeticInfo() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C*& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_UI_PlaytimeButton() {
    return *(_Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_WidgetSwitcher_0() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2b8);
}
int32_t& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_ItemId() {
    return *(int32_t*)((uintptr_t)this + 0x2d0);
}
void* _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_Items() {
    return (void*)((uintptr_t)this + 0x2d8);
}
int32_t& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x2e8);
}
_Script_CoreUObject::Object*& _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::get_Sender() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x2f0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Modals/UI_NewReward.UI_NewReward_C");
    return result;
}
void _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::BndEvt__UI_NewReward_NextButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::OnInitialized0() {
    return;
}
void _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::ExecuteUbergraph_UI_NewReward(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_Modals_UI_NewReward::UI_NewReward_C::ContinuePressed__DelegateSignature() {
    return;
}
