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
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_PlayerDown {
#pragma pack(push, 1)
struct UI_PlayerDown_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::Image*& get_Core_1();
    _Script_UMG::Image*& get_LeftFade_1();
    _Script_UMG::TextBlock*& get_Name();
    _Script_UMG::Image*& get_ReviveIcon();
    _Script_UMG::Image*& get_RightFade_1();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_UI_PlayerDown(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
}
