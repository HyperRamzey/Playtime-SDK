#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_ColorItem {
struct UI_ColorItem_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_ColorSelector {
#pragma pack(push, 1)
struct UI_ColorSelector_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::UniformGridPanel*& get_ColorGrid();
    _Script_UMG::Image*& get_Image_331();
    int32_t& get_Int();
    void* get_ColorSelectedMenu();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void PopulateColorMenu(void*& Colors);
    void ColorSelectedMenu_Event(int32_t ColorIndex, _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C* SelectedColor);
    void ExecuteUbergraph_UI_ColorSelector(int32_t EntryPoint);
    void ColorSelectedMenu__DelegateSignature(int32_t ColorIndex, _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C* SelectedColor);
}; // Size: 0x290
#pragma pack(pop)
}
