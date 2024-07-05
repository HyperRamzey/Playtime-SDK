#include "..\FUObjectArray.hpp"
#include "UI_AFKCountDown_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::Construct0() {
    return;
}
void* _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::get_ShowAFKKick() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
int32_t& _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::get_TimeRemaining() {
    return *(int32_t*)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::get_AFKKickText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::get_Timer() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MonsterHUDs/UI_AFKCountDown.UI_AFKCountDown_C");
    return result;
}
void _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::StartCountdownTimer() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::CancelCountdownTimer() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::UpdateText() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::TickTimer() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C::ExecuteUbergraph_UI_AFKCountDown(int32_t EntryPoint) {
    return;
}
