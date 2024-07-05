#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct BackgroundBlur;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_Interface_Content_UI_N_RadialProgressBar {
struct UI_N_RadialProgressBar_C;
}
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_DeathScreen {
#pragma pack(push, 1)
struct UI_DeathScreen_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x88]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_UpdateScaryText();
    _Script_UMG::WidgetAnimation*& get_CancelAutoRevive();
    _Script_UMG::WidgetAnimation*& get_BeginAutoRevive();
    _Script_UMG::WidgetAnimation*& get_Loop();
    _Script_UMG::WidgetAnimation*& get_Anim();
    _Script_UMG::TextBlock*& get_Auto_ReviveTimer();
    _Script_UMG::BackgroundBlur*& get_BackgroundBlur_52();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::Image*& get_JumpscareScreen();
    _Script_UMG::TextBlock*& get_ScaryText();
    _Script_UMG::TextBlock*& get_TextBlock();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_UI_N_RadialProgressBar();
    _Script_MediaAssets::MediaPlayer*& get_JumpscareMovie();
    void* get_MonsterName();
    static _Script_CoreUObject::Class* static_class();
    void SetScaryText(void* SuffixText, bool Direct_);
    void StartSelfReviveTimer();
    void EndSelfReviveTimer();
    void CancelSelfReviveTimer();
    void SetSelfReviveProgress(float Progress, float TimeLeft);
    void StartCarried();
    void StartHooked();
    void Construct0();
    void KilledEvent(void* Spectated_Player);
    void ChangeSpectatedPlayerEvent(void* Spectated_Player);
    void ExecuteUbergraph_UI_DeathScreen(int32_t EntryPoint);
}; // Size: 0x2e8
#pragma pack(pop)
}
