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
namespace _Game_Interface_General_UI_HeaderButton {
#pragma pack(push, 1)
struct UI_HeaderButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Button*& get_Button_509();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::TextBlock*& get_Label();
    void* get_HeaderText();
    void* get_ButtonPressed();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_HeaderButton_Button_509_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ActivateButton();
    void DeactivateButton();
    void BndEvt__UI_HeaderButton_Button_509_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_HeaderButton_Button_509_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_HeaderButton(int32_t EntryPoint);
    void ButtonPressed__DelegateSignature();
}; // Size: 0x2b0
#pragma pack(pop)
}
