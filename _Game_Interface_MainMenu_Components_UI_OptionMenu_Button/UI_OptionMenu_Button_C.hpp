#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Components_UI_OptionMenu_Button {
#pragma pack(push, 1)
struct UI_OptionMenu_Button_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x48]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::Button*& get_Button_60();
    _Script_UMG::TextBlock*& get_TextBlock_38();
    void* get_OptionMenuButtonReleased();
    void* get_Text();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_OptionMenu_Button_Button_60_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_OptionMenu_Button_Button_60_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_OptionMenu_Button_Button_60_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_OptionMenu_Button_Button_60_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void Set_Text(void* Text);
    void ExecuteUbergraph_UI_OptionMenu_Button(int32_t EntryPoint);
    void OptionMenuButtonReleased__DelegateSignature();
}; // Size: 0x2a8
#pragma pack(pop)
}
