#include "..\FUObjectArray.hpp"
#include "UI_InGameNotification_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::FadeOutFinished() {
    return;
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::get_NotifBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::get_Action() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::get_TicketImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::get_TicketReward() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_InGameNotification.UI_InGameNotification_C");
    return result;
}
void* _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::get_In_Notif_Text() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::get_In_Ticket_Reward() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::EndLife() {
    return;
}
void _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::OnInitialized0() {
    return;
}
void _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C::ExecuteUbergraph_UI_InGameNotification(int32_t EntryPoint) {
    return;
}
