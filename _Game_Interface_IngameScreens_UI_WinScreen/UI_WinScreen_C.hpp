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
struct Image;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_Interface_MainMenu_UI_MP_N_MenuButton {
struct UI_MP_N_MenuButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_WinScreen {
#pragma pack(push, 1)
struct UI_WinScreen_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x80]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::WidgetAnimation*& get_Anim();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::HorizontalBox*& get_CountdownBox();
    _Script_UMG::TextBlock*& get_Heading();
    _Script_UMG::TextBlock*& get_Subheading();
    _Script_UMG::TextBlock*& get_T_Countdown();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& get_UI_MP_N_MenuButton();
    void* get_HeadingText();
    void* get_SubheadingText();
    void* get_PlayerType();
    int32_t& get_NewGameDuration();
    static _Script_CoreUObject::Class* static_class();
    void OnFailure_A070BB30474FFF9F1707AE876026909F();
    void OnSuccess_A070BB30474FFF9F1707AE876026909F();
    void EventLeave();
    void SetFont();
    void Construct0();
    void ExecuteUbergraph_UI_WinScreen(int32_t EntryPoint);
}; // Size: 0x2e0
#pragma pack(pop)
}
