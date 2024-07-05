#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap {
struct W_NavOnlyBigMap_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap {
#pragma pack(push, 1)
struct W_NavBigMap_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x40]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_mouse_left();
    _Script_UMG::Image*& get_Image_mouse_middle();
    _Script_UMG::Image*& get_Image_mouse_right();
    _Script_UMG::Image*& get_Image_mouse_wheel();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C*& get_W_OnlyBigMap();
    bool get_IsShow();
    void set_IsShow(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ToggleShow();
    void Show(bool IsShow);
    void Construct0();
    void ExecuteUbergraph_W_NavBigMap(int32_t EntryPoint);
}; // Size: 0x2a0
#pragma pack(pop)
}
