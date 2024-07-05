#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_HUDComponents_UI_InGameNotification\UI_InGameNotification_C.hpp"
#include "UI_InGameNotificationList_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\Widget.hpp"
void* _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::VerticalBox*& _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C::get_VerticalBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C::get_RebirthWidgets() {
    return (void*)((uintptr_t)this + 0x290);
}
int32_t& _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C::get_LoopDex() {
    return *(int32_t*)((uintptr_t)this + 0x280);
}
void* _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C::get_VerticalBoxSlotPadding() {
    return (void*)((uintptr_t)this + 0x270);
}
_Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C*& _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C::get_NewNotification() {
    return *(_Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C**)((uintptr_t)this + 0x288);
}
void _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C::HandleNotificationAddition(_Script_UMG::Widget* HandledWidget) {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_InGameNotificationList.UI_InGameNotificationList_C");
    return result;
}
void _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C::OnInitialized0() {
    return;
}
void _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C::DisplayNotification(void* Notif_Text, void* TicketReward) {
    return;
}
void _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C::ExecuteUbergraph_UI_InGameNotificationList(int32_t EntryPoint) {
    return;
}
