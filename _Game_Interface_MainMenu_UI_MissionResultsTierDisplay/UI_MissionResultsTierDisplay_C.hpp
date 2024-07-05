#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\LevelResponse.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Throbber;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_UI_MissionResultsTierDisplay {
#pragma pack(push, 1)
struct UI_MissionResultsTierDisplay_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x58]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_BadgeBG();
    _Script_UMG::TextBlock*& get_CurrentProgress();
    _Script_UMG::TextBlock*& get_Divider();
    _Script_UMG::TextBlock*& get_LevelLabel();
    _Script_UMG::Throbber*& get_LoadingBigNumber_Throbber();
    _Script_UMG::Throbber*& get_LoadingProgress_Throbber();
    _Script_UMG::Image*& get_ProgressFrame();
    _Script_UMG::ProgressBar*& get_Tier_ProgressBar();
    _Script_UMG::TextBlock*& get_TotalProgress();
    _Script_UMG::TextBlock*& get_XPLabel();
    static _Script_CoreUObject::Class* static_class();
    void ManualGetXP();
    void OnXPFailure(void* ErrorMessage);
    void OnXPSuccess(_Script_Playtime_Multiplayer::LevelResponse Response);
    void SetLoading(bool IsLoading);
    void OnInitialized0();
    void ExecuteUbergraph_UI_MissionResultsTierDisplay(int32_t EntryPoint);
}; // Size: 0x2b8
#pragma pack(pop)
}
