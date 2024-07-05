#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
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
namespace _Game_Interface_HUDComponents_UI_TimerComponent {
#pragma pack(push, 1)
struct UI_TimerComponent_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_TimerDangerColor();
    _Script_UMG::WidgetAnimation*& get_TimerWarningColor();
    _Script_UMG::WidgetAnimation*& get_ResetTimerColorAndSize();
    _Script_UMG::TextBlock*& get_Timer();
    _Script_UMG::Image*& get_TimerIcon();
    static _Script_CoreUObject::Class* static_class();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_TimerComponent(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
}
