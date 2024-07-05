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
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_HUDComponents_UI_PrimaryObjective {
#pragma pack(push, 1)
struct UI_PrimaryObjective_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x28]; public:
    _Script_UMG::Image*& get_CheckBackground();
    _Script_UMG::Image*& get_checkmark();
    _Script_UMG::Image*& get_NotifBackground();
    _Script_UMG::TextBlock*& get_ObjectiveLabel();
    _Script_UMG::TextBlock*& get_ProgressLabel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x288
#pragma pack(pop)
}
