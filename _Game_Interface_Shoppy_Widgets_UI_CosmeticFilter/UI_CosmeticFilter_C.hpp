#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_Shoppy_Widgets_UI_FilterButton {
struct UI_FilterButton_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter {
#pragma pack(push, 1)
struct UI_CosmeticFilter_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x48]; public:
    void* get_UberGraphFrame();
    _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C*& get_AlphabeticalFilterButton();
    _Script_UMG::Image*& get_FilterBackground();
    _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C*& get_NewestFilterButton();
    _Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C*& get_RarityFilterButton();
    void* get_FilterButtons();
    void* get_FilterItems();
    static _Script_CoreUObject::Class* static_class();
    void SetActiveFilter(_Game_Interface_Shoppy_Widgets_UI_FilterButton::UI_FilterButton_C* ObjectReference, void* Filter);
    void OnInitialized0();
    void ExecuteUbergraph_UI_CosmeticFilter(int32_t EntryPoint);
    void FilterItems__DelegateSignature(void* Filter);
}; // Size: 0x2a8
#pragma pack(pop)
}
