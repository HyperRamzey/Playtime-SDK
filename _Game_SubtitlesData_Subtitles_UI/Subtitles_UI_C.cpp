#include "..\FUObjectArray.hpp"
#include "..\_Game_SubtitlesData_Simple_Subtitles\Simple_Subtitles.hpp"
#include "Subtitles_UI_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::set_Maximized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::WidgetAnimation*& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Maximize() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::ScaleBox*& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_ScaleBox_39() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x290);
}
_Script_Engine::DataTable*& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Subtitles_Data() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::WidgetAnimation*& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Minimize() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
float& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Subtitle_Opacity() {
    return *(float*)((uintptr_t)this + 0x31c);
}
_Script_UMG::WidgetAnimation*& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_LittleBounce() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Script_UMG::Button*& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Button() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x280);
}
_Script_UMG::CanvasPanel*& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_CanvasPanel_0() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x288);
}
_Script_UMG::ScaleBox*& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_ScaleBox_79() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x298);
}
_Script_UMG::HorizontalBox*& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Subtitle() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::CanvasPanel*& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_SubtitleBox() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::TextBlock*& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_SubtitleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b0);
}
float& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Inner_Distance() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
float& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Subtitle_Start_Audio_Time() {
    return *(float*)((uintptr_t)this + 0x300);
}
float& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Outer_Distance() {
    return *(float*)((uintptr_t)this + 0x2bc);
}
void* _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Distance_Location() {
    return (void*)((uintptr_t)this + 0x2c0);
}
int32_t& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Subtitle_Priority() {
    return *(int32_t*)((uintptr_t)this + 0x2cc);
}
void* _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Subtitle_IDs() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Quick_Subtitle_IDs() {
    return (void*)((uintptr_t)this + 0x2e8);
}
int32_t& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Subtitle_State() {
    return *(int32_t*)((uintptr_t)this + 0x2f8);
}
float& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Render_Scale() {
    return *(float*)((uintptr_t)this + 0x2fc);
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Play() {
    return;
}
void* _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Interval_Subtitle_Times() {
    return (void*)((uintptr_t)this + 0x308);
}
float& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Subtitle_End_Audio_Time() {
    return *(float*)((uintptr_t)this + 0x318);
}
bool _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Maximized() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 1 != 0;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Construct0() {
    return;
}
void* _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Subtitle_Row_Name() {
    return (void*)((uintptr_t)this + 0x328);
}
bool _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Paused() {
    return (*(uint8_t*)((uintptr_t)this + 0x338 + 0)) & 1 != 0;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::set_Paused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x338 + 0);
    *(uint8_t*)((uintptr_t)this + 0x338 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Amount_of_Paused_Audio_Time() {
    return *(float*)((uintptr_t)this + 0x33c);
}
float& _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::get_Audio_Time_At_Pause() {
    return *(float*)((uintptr_t)this + 0x340);
}
_Script_CoreUObject::Class* _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/SubtitlesData/Subtitles_UI.Subtitles_UI_C");
    return result;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Parse_Quick_Subtitle_IDs() {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Find_Current_Subtitle_State(int32_t& Current_Subtitle) {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Get_Subtitle_Variables_From_ID(int32_t Row, _Game_SubtitlesData_Simple_Subtitles::Simple_Subtitles& Subtitle) {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Hide_Subtitle_Background_if_Empty(void*& Text, void*& OutText) {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Update_Subtitle_Text(bool Updating_Language, bool Only_Update_Current_Langauge) {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Minimize_Subtitle() {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Maximize_Subtitle() {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Instant_Minimize() {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Pause() {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Set_Paused(bool Pause) {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Update_Subtitle_Visiblity() {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::Update_Distance() {
    return;
}
void _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C::ExecuteUbergraph_Subtitles_UI(int32_t EntryPoint) {
    return;
}
