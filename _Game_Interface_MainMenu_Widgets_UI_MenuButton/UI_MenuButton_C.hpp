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
namespace _Script_Engine {
struct Texture2D;
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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Widgets_UI_MenuButton {
#pragma pack(push, 1)
struct UI_MenuButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x80]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HighlightFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Border*& get_Border_50();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::Image*& get_Icon();
    _Script_UMG::TextBlock*& get_Label();
    _Script_UMG::Button*& get_PlayButton();
    _Script_Engine::Texture2D*& get_ButtonBackground();
    void* get_ButtonText();
    _Script_Engine::Texture2D*& get_ButtonIcon();
    _Script_Engine::Texture2D*& get_ButtonFrame();
    void* get_ButtonPressed();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_MenuButton_Button_218_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_MenuButton_Button_218_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_MenuButton_Button_218_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_MenuButton(int32_t EntryPoint);
    void ButtonPressed__DelegateSignature();
}; // Size: 0x2e0
#pragma pack(pop)
}
