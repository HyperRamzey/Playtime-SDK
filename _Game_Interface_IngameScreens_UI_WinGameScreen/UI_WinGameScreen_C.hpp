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
namespace _Game_Interface_MainMenu_UI_MP_N_MenuButton {
struct UI_MP_N_MenuButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_WinGameScreen {
#pragma pack(push, 1)
struct UI_WinGameScreen_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x40]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::WidgetAnimation*& get_Anim();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::TextBlock*& get_Heading();
    _Script_UMG::TextBlock*& get_Subheading();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& get_UI_MP_N_MenuButton();
    int32_t& get_PointsByCount();
    static _Script_CoreUObject::Class* static_class();
    void OnFailure_02BBAA10401390C9AC553689D90391FA();
    void OnSuccess_02BBAA10401390C9AC553689D90391FA();
    void EventLeave();
    void Construct0();
    void ExecuteUbergraph_UI_WinGameScreen(int32_t EntryPoint);
}; // Size: 0x2a0
#pragma pack(pop)
}
