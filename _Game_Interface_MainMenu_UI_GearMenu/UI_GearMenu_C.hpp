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
struct Button;
}
namespace _Game_Interface_MainMenu_Components_UI_OptionMenu_Button {
struct UI_OptionMenu_Button_C;
}
namespace _Game_Interface_General_UI_BasicButton {
struct UI_BasicButton_C;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Script_UMG {
struct RichTextBlock;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Game_Interface_MainMenu_UI_Credits {
struct UI_Credits_C;
}
namespace _Game_Interface_Settings_UI_Settings_Menu {
struct UI_Settings_Menu_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_UI_GearMenu {
#pragma pack(push, 1)
struct UI_GearMenu_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xb8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::Button*& get_Button_61();
    _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& get_CreditsButton();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_ExitPatchNotes();
    _Script_UMG::Image*& get_Image();
    _Script_UMG::Image*& get_Image_327();
    _Script_UMG::Image*& get_PatchNoteBackground();
    _Script_UMG::RichTextBlock*& get_Patchnotebody();
    _Script_UMG::Overlay*& get_PatchNotes();
    _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& get_PatchNotesButton();
    _Script_UMG::ScrollBox*& get_PatchNotesScroll();
    _Script_UMG::Overlay*& get_PrimaryContent();
    _Script_UMG::WidgetSwitcher*& get_PrimaryWidgetSwitcher();
    _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& get_QuitGameButton();
    _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& get_ReportABugButton();
    _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& get_SettingsButton();
    _Game_Interface_MainMenu_Components_UI_OptionMenu_Button::UI_OptionMenu_Button_C*& get_SocialsButton();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Game_Interface_MainMenu_UI_Credits::UI_Credits_C*& get_UI_Credits();
    _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C*& get_UI_Settings_Menu();
    void* get_GearMenu_BackPressed();
    static _Script_CoreUObject::Class* static_class();
    void Name_Array_To_Verticle_Text_List(void*& Text, void*& Final_Text);
    void Text_Array_To_Verticle_Format_Text(void*& Text, void*& Final_Text);
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void BndEvt__UI_GearMenu_UI_Settings_Menu_K2Node_ComponentBoundEvent_1_Back__DelegateSignature();
    void BndEvt__UI_GearMenu_SettingsButton_K2Node_ComponentBoundEvent_2_OptionMenuButtonReleased__DelegateSignature();
    void BndEvt__UI_GearMenu_UI_Credits_K2Node_ComponentBoundEvent_3_CreditsBack__DelegateSignature();
    void BndEvt__UI_GearMenu_CreditsButton_K2Node_ComponentBoundEvent_4_OptionMenuButtonReleased__DelegateSignature();
    void BndEvt__UI_GearMenu_ExitPatchNotes_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature();
    void BndEvt__UI_GearMenu_PatchNotesButton_K2Node_ComponentBoundEvent_6_OptionMenuButtonReleased__DelegateSignature();
    void BndEvt__UI_GearMenu_ReportABugButton_K2Node_ComponentBoundEvent_7_OptionMenuButtonReleased__DelegateSignature();
    void BndEvt__UI_GearMenu_QuitGameButton_K2Node_ComponentBoundEvent_8_OptionMenuButtonReleased__DelegateSignature();
    void Update();
    void Update_Localization();
    void BndEvt__UI_GearMenu_SocialsButton_K2Node_ComponentBoundEvent_9_OptionMenuButtonReleased__DelegateSignature();
    void BndEvt__UI_GearMenu_UI_BackButton_K2Node_ComponentBoundEvent_12_Released__DelegateSignature();
    void ExecuteUbergraph_UI_GearMenu(int32_t EntryPoint);
    void GearMenu_BackPressed__DelegateSignature();
}; // Size: 0x318
#pragma pack(pop)
}
