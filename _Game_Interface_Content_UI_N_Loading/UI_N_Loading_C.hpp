#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Content_UI_N_Loading {
#pragma pack(push, 1)
struct UI_N_Loading_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x10]; public:
    _Script_UMG::WidgetAnimation*& get_Spin();
    _Script_UMG::Image*& get_LoadingTexture();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
