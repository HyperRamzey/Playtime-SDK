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
namespace _Game_Interface_General_UI_BackButton {
#pragma pack(push, 1)
struct UI_BackButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x40]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Button*& get_Button_103();
    _Script_UMG::Image*& get_ButtonIcon();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::TextBlock*& get_Label();
    void* get_Released();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__UI_BackButton_Button_103_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_BackButton_Button_103_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BackButton_Button_103_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BackButton(int32_t EntryPoint);
    void Released__DelegateSignature();
}; // Size: 0x2a0
#pragma pack(pop)
}
