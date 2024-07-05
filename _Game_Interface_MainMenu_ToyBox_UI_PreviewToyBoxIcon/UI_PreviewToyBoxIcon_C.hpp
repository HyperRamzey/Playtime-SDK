#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon {
#pragma pack(push, 1)
struct UI_PreviewToyBoxIcon_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x20]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::Image*& get_Icon();
    int32_t& get_ID();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_PreviewToyBoxIcon(int32_t EntryPoint);
}; // Size: 0x280
#pragma pack(pop)
}
