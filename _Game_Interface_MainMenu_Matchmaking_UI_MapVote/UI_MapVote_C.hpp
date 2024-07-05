#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem {
struct UI_MapVoteItem_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Content_UI_N_RadialProgressBar {
struct UI_N_RadialProgressBar_C;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Game_Interface_MainMenu_Matchmaking_UI_MapVote {
#pragma pack(push, 1)
struct UI_MapVote_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x80]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_TimerLabel();
    _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C*& get_UI_MapVoteItem_0();
    _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C*& get_UI_MapVoteItem_1();
    _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C*& get_UI_MapVoteItem_2();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_UI_N_RadialProgressBar();
    int32_t& get_Index();
    int32_t& get_TargetIndex();
    int32_t& get_Cycles();
    _Script_Engine::CurveFloat*& get_SequenceCurve();
    void* get_SequenceTimer();
    void* get_Maps();
    void* get_MapVoteOptions();
    int32_t& get_Timer();
    static _Script_CoreUObject::Class* static_class();
    void SetMapOptions();
    void ClearHighlights();
    int32_t GetTargetIndex(void* MapName);
    float GetSequenceTime();
    void StartSequence(void* MapName);
    void UpdateSequence();
    void HighlightMap();
    void OnInitialized0();
    void Construct0();
    void DisableMapVoting();
    void CountdownTimer();
    void ExecuteUbergraph_UI_MapVote(int32_t EntryPoint);
}; // Size: 0x2e0
#pragma pack(pop)
}
