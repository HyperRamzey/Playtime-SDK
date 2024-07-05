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
namespace _Game_Interface_IngameScreens_UI_Damage {
#pragma pack(push, 1)
struct UI_Damage_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x20]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Animate();
    _Script_UMG::Image*& get_PainBorder();
    void* get_HideTimer();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void Play();
    void Hide();
    void ExecuteUbergraph_UI_Damage(int32_t EntryPoint);
}; // Size: 0x280
#pragma pack(pop)
}
