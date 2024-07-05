#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\LevelResponse.hpp"
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
struct Border;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Widgets_UI_ToyBoxButton {
#pragma pack(push, 1)
struct UI_ToyBoxButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xa0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HighlightFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Border*& get_Border_60();
    _Script_UMG::Button*& get_Button_129();
    _Script_UMG::TextBlock*& get_CurrentProgress();
    _Script_UMG::TextBlock*& get_Divider();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::Image*& get_Image_481();
    _Script_UMG::TextBlock*& get_LevelLabel();
    _Script_UMG::TextBlock*& get_LevelText();
    _Script_UMG::ProgressBar*& get_ProgressBar_54();
    _Script_UMG::TextBlock*& get_TotalProgress();
    _Script_UMG::TextBlock*& get_XPLabel();
    void* get_ToyBoxButtonPressed();
    void* get_ToyBoxButtonHovered();
    void* get_ToyBoxButtonUnhovered();
    static _Script_CoreUObject::Class* static_class();
    void SetLoading(bool IsLoading1);
    void BndEvt__UI_ToyBoxButton_Button_129_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_ToyBoxButton_Button_129_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_ToyBoxButton_Button_129_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void OnXPSuccess(_Script_Playtime_Multiplayer::LevelResponse Response);
    void OnXPFailure(void* ErrorMessage);
    void OnInitialized0();
    void ExecuteUbergraph_UI_ToyBoxButton(int32_t EntryPoint);
    void ToyBoxButtonUnhovered__DelegateSignature();
    void ToyBoxButtonHovered__DelegateSignature();
    void ToyBoxButtonPressed__DelegateSignature();
}; // Size: 0x300
#pragma pack(pop)
}
