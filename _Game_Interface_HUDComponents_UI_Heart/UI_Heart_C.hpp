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
namespace _Game_Interface_HUDComponents_UI_Heart {
#pragma pack(push, 1)
struct UI_Heart_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x20]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Pulse();
    _Script_UMG::WidgetAnimation*& get_A_LoseHeart();
    _Script_UMG::Image*& get_HeartIcon();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void LoseHeart();
    void ExecuteUbergraph_UI_Heart(int32_t EntryPoint);
}; // Size: 0x280
#pragma pack(pop)
}
