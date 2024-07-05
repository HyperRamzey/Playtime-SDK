#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_DailyReward_UI_DailyReward {
#pragma pack(push, 1)
struct UI_DailyReward_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x90]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_38();
    _Script_UMG::Image*& get_Image_92();
    _Script_UMG::Image*& get_Image_282();
    _Script_UMG::Image*& get_Image_367();
    _Script_UMG::ProgressBar*& get_ProgressBar_84();
    _Script_UMG::TextBlock*& get_ProgressText();
    _Script_UMG::Overlay*& get_StreakBox();
    _Script_UMG::TextBlock*& get_StreakText();
    _Script_UMG::TextBlock*& get_StreakTextEx();
    _Script_UMG::TextBlock*& get_Time1();
    _Script_UMG::TextBlock*& get_Time2();
    _Script_UMG::TextBlock*& get_TimeLTC();
    _Script_UMG::HorizontalBox*& get_TimerBottom();
    _Script_UMG::TextBlock*& get_XP_Amount();
    void* get_Next_Reward_Time();
    static _Script_CoreUObject::Class* static_class();
    void SetBottomVisibility(bool Condition);
    void Construct0();
    void Success(int32_t Streak, int32_t XPReward, bool IsNewReward, _Script_CoreUObject::DateTime NextRewardTime);
    void Fail(void* ErrorMessage);
    void Timer();
    void Update_Localization();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_DailyReward(int32_t EntryPoint);
}; // Size: 0x2f0
#pragma pack(pop)
}
