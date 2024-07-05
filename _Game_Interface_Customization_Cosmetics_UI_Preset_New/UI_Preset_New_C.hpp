#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Button;
}
namespace _Game_Interface_MainMenu_UI_MP_N_MenuButton {
struct UI_MP_N_MenuButton_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct RichTextBlock;
}
namespace _Script_UMG {
struct EditableTextBox;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_Preset_New {
#pragma pack(push, 1)
struct UI_Preset_New_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x60]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_Button();
    _Script_UMG::Image*& get_Image_100();
    _Script_UMG::TextBlock*& get_Length();
    _Script_UMG::RichTextBlock*& get_RichLabel();
    _Script_UMG::EditableTextBox*& get_Search();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& get_Start();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    void* get_NewName();
    void* get_ClickOkayButton();
    static _Script_CoreUObject::Class* static_class();
    bool ContainsEnglishCharacters(void* String);
    void SetOtherWindowsFocus(bool Is_Focusable);
    void BndEvt__UI_Preset_New_Search_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(void*& Text);
    void BndEvt__UI_Preset_New_Start_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller);
    void BndEvt__UI_Preset_New_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature();
    void Construct0();
    void ExecuteUbergraph_UI_Preset_New(int32_t EntryPoint);
    void ClickOkayButton__DelegateSignature(void* Name);
}; // Size: 0x2c0
#pragma pack(pop)
}
