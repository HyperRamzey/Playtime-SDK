#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MatchMaking_UI_MMButtonToolTip {
#pragma pack(push, 1)
struct UI_MMButtonToolTip_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x18]; public:
    _Script_UMG::TextBlock*& get_ButtonLabel();
    _Script_UMG::TextBlock*& get_DescriptionLabel();
    _Script_UMG::Image*& get_Image_36();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x278
#pragma pack(pop)
}
