#include "..\FUObjectArray.hpp"
#include "UI_DailyReward_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::ProgressBar*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_ProgressBar_84() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x298);
}
void* _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_Image_367() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_Image() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_Image_38() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_Image_92() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_Image_282() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_ProgressText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_StreakBox() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_StreakText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_StreakTextEx() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_Time1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_Time2() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_TimeLTC() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::HorizontalBox*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_TimerBottom() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_XP_Amount() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e0);
}
void* _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::get_Next_Reward_Time() {
    return (void*)((uintptr_t)this + 0x2e8);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/DailyReward/UI_DailyReward.UI_DailyReward_C");
    return result;
}
void _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::SetBottomVisibility(bool Condition) {
    return;
}
void _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::Success(int32_t Streak, int32_t XPReward, bool IsNewReward, _Script_CoreUObject::DateTime NextRewardTime) {
    return;
}
void _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::Fail(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::Timer() {
    return;
}
void _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::Update_Localization() {
    return;
}
void _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_DailyReward_UI_DailyReward::UI_DailyReward_C::ExecuteUbergraph_UI_DailyReward(int32_t EntryPoint) {
    return;
}
