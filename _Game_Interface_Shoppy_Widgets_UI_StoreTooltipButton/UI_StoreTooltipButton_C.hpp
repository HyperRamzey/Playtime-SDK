#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton {
#pragma pack(push, 1)
struct UI_StoreTooltipButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x68]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_Button_100();
    _Script_UMG::Image*& get_ButtonBG();
    _Script_UMG::SizeBox*& get_ButtonBox();
    _Script_UMG::Image*& get_ButtonFrame();
    _Script_UMG::TextBlock*& get_ButtonLabel();
    void* get_ButtonReleased();
    void* get_ButtonText();
    bool get_StartSelected();
    void set_StartSelected(bool value);
    float& get_ButtonWidth();
    float& get_ButtonHeight();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_StoreTooltipButton_Button_100_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ActivateButton();
    void DeactivateButton();
    void UpdateButtonLabelText(void* NewText);
    void BndEvt__UI_StoreTooltipButton_Button_100_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_StoreTooltipButton_Button_100_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_StoreTooltipButton(int32_t EntryPoint);
    void ButtonReleased__DelegateSignature();
}; // Size: 0x2c8
#pragma pack(pop)
}
