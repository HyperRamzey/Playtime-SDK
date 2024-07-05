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
namespace _Game_Interface_Shoppy_Widgets_UI_FilterButton {
#pragma pack(push, 1)
struct UI_FilterButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x58]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_CheckBox();
    _Script_UMG::Image*& get_checkmark();
    _Script_UMG::Button*& get_FilterButton();
    _Script_UMG::TextBlock*& get_Label();
    void* get_ButtonText();
    void* get_FilterButtonReleased();
    void* get_FilterType();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_FilterButton_FilterButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ShowCheckmark();
    void HideCheckmark();
    void ExecuteUbergraph_UI_FilterButton(int32_t EntryPoint);
    void FilterButtonReleased__DelegateSignature(_Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C* ObjectReference, void* Filter);
}; // Size: 0x2b8
#pragma pack(pop)
}
