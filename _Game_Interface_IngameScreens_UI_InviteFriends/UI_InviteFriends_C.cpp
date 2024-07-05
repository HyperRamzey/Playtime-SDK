#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_General_UI_BasicButton\UI_BasicButton_C.hpp"
#include "UI_InviteFriends_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void _Game_Interface_IngameScreens_UI_InviteFriends::UI_InviteFriends_C::ExecuteUbergraph_UI_InviteFriends(int32_t EntryPoint) {
    return;
}
void* _Game_Interface_IngameScreens_UI_InviteFriends::UI_InviteFriends_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_InviteFriends::UI_InviteFriends_C::get_T_FriendName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x268);
}
void _Game_Interface_IngameScreens_UI_InviteFriends::UI_InviteFriends_C::Construct0() {
    return;
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_IngameScreens_UI_InviteFriends::UI_InviteFriends_C::get_UI_BasicButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_IngameScreens_UI_InviteFriends::UI_InviteFriends_C::get_Friend() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_InviteFriends::UI_InviteFriends_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_InviteFriends.UI_InviteFriends_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_InviteFriends::UI_InviteFriends_C::BndEvt__UI_InviteFriends_UI_BasicButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature() {
    return;
}
