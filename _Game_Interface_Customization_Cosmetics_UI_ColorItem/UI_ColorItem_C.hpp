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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_ColorItem {
#pragma pack(push, 1)
struct UI_ColorItem_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x40]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_Button_53();
    _Script_UMG::Image*& get_Check();
    void* get_Color();
    void* get_ColorSelectedItem();
    int32_t& get_ColorIndex();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void BndEvt__UI_ColorItem_Button_53_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void IsSelected(bool Selected);
    void ExecuteUbergraph_UI_ColorItem(int32_t EntryPoint);
    void ColorSelectedItem__DelegateSignature(int32_t ColorIndex, _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C* SelectedColor);
}; // Size: 0x2a0
#pragma pack(pop)
}
