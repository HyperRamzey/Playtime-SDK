#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavIndicator {
#pragma pack(push, 1)
struct W_NavIndicator_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x18]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Overlay*& get_Overlay_Indicator();
    bool get_IsShow();
    void set_IsShow(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Toggle();
    void Show(bool IsShow);
    _Script_UMG::UserWidget* AddIcon(void* UserWidgetClass);
    void Construct0();
    void ExecuteUbergraph_W_NavIndicator(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
