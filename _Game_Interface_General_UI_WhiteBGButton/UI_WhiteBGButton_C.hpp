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
namespace _Game_Interface_General_UI_WhiteBGButton {
#pragma pack(push, 1)
struct UI_WhiteBGButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x98]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Button*& get_Button_69();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::Image*& get_Icon();
    _Script_UMG::TextBlock*& get_TextBlock_88();
    void* get_Text();
    void* get_OnReleased();
    void* get_OnUnhovered();
    void* get_OnHovered();
    void* get_OnClicked();
    void* get_OnPressed();
    static _Script_CoreUObject::Class* static_class();
    void SetText(void* NewValue);
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_WhiteBGButton_Button_69_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_WhiteBGButton(int32_t EntryPoint);
    void OnPressed__DelegateSignature();
    void OnClicked__DelegateSignature();
    void OnHovered__DelegateSignature();
    void OnUnhovered__DelegateSignature();
    void OnReleased__DelegateSignature();
}; // Size: 0x2f8
#pragma pack(pop)
}
