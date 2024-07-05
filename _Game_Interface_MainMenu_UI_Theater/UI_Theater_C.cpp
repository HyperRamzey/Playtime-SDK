#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct\F_TheaterTapesStruct.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MP_N_MenuButton_New\UI_MP_N_MenuButton_New_C.hpp"
#include "UI_Theater_C.hpp"
#include "..\_Game_Interface_UI_EarlyAccess_Overlay\UI_EarlyAccess_Overlay_C.hpp"
#include "..\_Game_SubtitlesData_Subtitles_UI\Subtitles_UI_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_MediaAssets\MediaPlayer.hpp"
#include "..\_Script_MediaAssets\MediaSource.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_fs() {
    return *(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C**)((uintptr_t)this + 0x290);
}
void* _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_Engine::DataTable*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_Subtitle_Data_Table() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x328);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_FullScreenAnim() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_ChangeTape() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::BndEvt__UI_Theater_Button_84_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature() {
    return;
}
_Script_UMG::Button*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_Button_84() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_Button_234() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x288);
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::BndEvt__UI_Theater_PauseButton_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_FullScreen() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_FullScreenOverlay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_Image_59() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_Information() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2b0);
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::Construct0() {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_Locked() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_PauseButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2c0);
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::OpenAudioSource() {
    return;
}
_Script_UMG::Button*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_PlayButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2c8);
}
void* _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_Subtitle_Row_Name() {
    return (void*)((uintptr_t)this + 0x330);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_RestartButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2d0);
}
bool _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_Played() {
    return (*(uint8_t*)((uintptr_t)this + 0x310 + 0)) & 1 != 0;
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_TapeName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d8);
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::BndEvt__UI_Theater_fs_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C* Caller) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_TextInfo() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e0);
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x2e8);
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::ExecuteUbergraph_UI_Theater(int32_t EntryPoint) {
    return;
}
_Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_UI_EarlyAccess_Overlay() {
    return *(_Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C**)((uintptr_t)this + 0x2f0);
}
void* _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_BackReleased() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::Actor*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_MovieScreen() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2f8);
}
_Script_MediaAssets::MediaPlayer*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_Media() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x300);
}
_Script_MediaAssets::MediaSource*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_Movie() {
    return *(_Script_MediaAssets::MediaSource**)((uintptr_t)this + 0x308);
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::set_Played(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x310 + 0);
    *(uint8_t*)((uintptr_t)this + 0x310 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C*& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_VHS_Tape_Subtitle() {
    return *(_Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C**)((uintptr_t)this + 0x340);
}
int32_t& _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::get_Number_Of_Subtitles() {
    return *(int32_t*)((uintptr_t)this + 0x348);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/UI_Theater.UI_Theater_C");
    return result;
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::Remove_Current_Subtitle() {
    return;
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::Create_a_New_Subtitle() {
    return;
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::SetMovieInfo(_Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct::F_TheaterTapesStruct Info, bool Unlocked) {
    return;
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::BndEvt__UI_Theater_PlayButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::BndEvt__UI_Theater_PauseButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::Refresh() {
    return;
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::BndEvt__UI_Theater_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::Update_Localization() {
    return;
}
void _Game_Interface_MainMenu_UI_Theater::UI_Theater_C::BackReleased__DelegateSignature() {
    return;
}
