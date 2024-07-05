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
namespace _Game_Interface_MainMenu_Components_UI_OptionMenu_Button {
struct UI_OptionMenu_Button_C;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_Interface_MainMenu_UI_MP_N_MenuButton {
struct UI_MP_N_MenuButton_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_UI_Credits {
#pragma pack(push, 1)
struct UI_Credits_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x78]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade_In();
    _Script_UMG::WidgetAnimation*& get_Open();
    _Script_UMG::WidgetAnimation*& get_Animation();
    _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& get_ActiveCreditsButton();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::TextBlock*& get_CreditsText();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& get_Exit();
    _Script_UMG::Image*& get_Image_71();
    _Script_UMG::Image*& get_Image_84();
    _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& get_LegacyCreditsButton();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    void* get_CreditsBack();
    bool get_Legacy();
    void set_Legacy(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Text_Array_To_Verticle_Format_Text(void*& Text, void*& Final_Text);
    void Name_Array_To_Verticle_Text_List(void*& Text, void*& Final_Text);
    void InstantExitCredits();
    void BndEvt__UI_Credits_Exit_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller);
    void EnterCredits();
    void Construct0();
    void PreConstruct0(bool IsDesignTime);
    void Update_Credits();
    void BndEvt__UI_Credits_UI_OptionMenu_Button_K2Node_ComponentBoundEvent_1_OptionMenuButtonReleased__DelegateSignature();
    void BndEvt__UI_Credits_UI_OptionMenu_Button_1_K2Node_ComponentBoundEvent_2_OptionMenuButtonReleased__DelegateSignature();
    void Begin_Credits();
    void ExitCredits();
    void BndEvt__UI_Credits_UI_BackButton_K2Node_ComponentBoundEvent_3_Released__DelegateSignature();
    void ExecuteUbergraph_UI_Credits(int32_t EntryPoint);
    void CreditsBack__DelegateSignature();
}; // Size: 0x2d8
#pragma pack(pop)
}
