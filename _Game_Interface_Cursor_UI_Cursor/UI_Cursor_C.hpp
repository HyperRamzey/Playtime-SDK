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
namespace _Game_Interface_Cursor_UI_Cursor {
#pragma pack(push, 1)
struct UI_Cursor_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x18]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Pride();
    _Script_UMG::Image*& get_Image_40();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_Cursor(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
