#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_RadialProgressBar\UI_N_RadialProgressBar_C.hpp"
#include "UI_MapVote_C.hpp"
#include "..\_Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem\UI_MapVoteItem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
int32_t& _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_Timer() {
    return *(int32_t*)((uintptr_t)this + 0x2d8);
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_TimerLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x268);
}
int32_t& _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x290);
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_UI_N_RadialProgressBar() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x288);
}
_Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C*& _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_UI_MapVoteItem_0() {
    return *(_Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C**)((uintptr_t)this + 0x270);
}
int32_t& _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_TargetIndex() {
    return *(int32_t*)((uintptr_t)this + 0x294);
}
_Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C*& _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_UI_MapVoteItem_1() {
    return *(_Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C**)((uintptr_t)this + 0x278);
}
_Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C*& _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_UI_MapVoteItem_2() {
    return *(_Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C**)((uintptr_t)this + 0x280);
}
int32_t& _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_Cycles() {
    return *(int32_t*)((uintptr_t)this + 0x298);
}
_Script_Engine::CurveFloat*& _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_SequenceCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_SequenceTimer() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_Maps() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::get_MapVoteOptions() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::UpdateSequence() {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Matchmaking/UI_MapVote.UI_MapVote_C");
    return result;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::SetMapOptions() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::ClearHighlights() {
    return;
}
int32_t _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::GetTargetIndex(void* MapName) {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::DisableMapVoting() {
    return;
}
float _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::GetSequenceTime() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::StartSequence(void* MapName) {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::HighlightMap() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::OnInitialized0() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::CountdownTimer() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C::ExecuteUbergraph_UI_MapVote(int32_t EntryPoint) {
    return;
}
