#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
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
namespace _Game_Interface_MainMenu_Widgets_UI_SubMenuButton {
#pragma pack(push, 1)
struct UI_SubMenuButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x78]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HighlightBorder();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Button*& get_Button_415();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::Border*& get_Highlight();
    _Script_UMG::Image*& get_Icon();
    _Script_UMG::Image*& get_Outline();
    _Script_Engine::Texture2D*& get_IconImage();
    void* get_ButtonHover();
    void* get_ButtonUnhover();
    void* get_ButtonRelease();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_SubMenuButton_Button_415_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_SubMenuButton_Button_415_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_SubMenuButton_Button_415_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_SubMenuButton(int32_t EntryPoint);
    void ButtonRelease__DelegateSignature();
    void ButtonUnhover__DelegateSignature();
    void ButtonHover__DelegateSignature();
}; // Size: 0x2d8
#pragma pack(pop)
}
