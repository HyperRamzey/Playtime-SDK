#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_MatchMaking_UI_MMButtonToolTip\UI_MMButtonToolTip_C.hpp"
#include "UI_MatchmakingMenuButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::UpdateButtontEXT(void* ButtonText, void* DescriptionText) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_HighlightButton() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Button*& _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_Button_108() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
_Game_Interface_MatchMaking_UI_MMButtonToolTip::UI_MMButtonToolTip_C*& _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_UI_MMButtonToolTip() {
    return *(_Game_Interface_MatchMaking_UI_MMButtonToolTip::UI_MMButtonToolTip_C**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_ButtonIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::SizeBox*& _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_SizeBox_32() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x290);
}
void* _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_ButtonPressed() {
    return (void*)((uintptr_t)this + 0x2a0);
}
_Script_Engine::Texture2D*& _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_Icon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2b0);
}
void* _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_ButtonName() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_ButtonDescription() {
    return (void*)((uintptr_t)this + 0x2d0);
}
float& _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::get_ButtonSize() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
_Script_CoreUObject::Class* _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MatchMaking/UI_MatchmakingMenuButton.UI_MatchmakingMenuButton_C");
    return result;
}
void _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::BndEvt__UI_MatchmakingMenuButton_Button_108_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::BndEvt__UI_MatchmakingMenuButton_Button_108_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::BndEvt__UI_MatchmakingMenuButton_Button_108_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::ExecuteUbergraph_UI_MatchmakingMenuButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MatchMaking_UI_MatchmakingMenuButton::UI_MatchmakingMenuButton_C::ButtonPressed__DelegateSignature() {
    return;
}
