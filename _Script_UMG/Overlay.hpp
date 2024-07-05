#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PanelWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_UMG {
struct OverlaySlot;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct Overlay : public PanelWidget {
    private: char pad_120[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::OverlaySlot* AddChildToOverlay(_Script_UMG::Widget* Content);
}; // Size: 0x130
#pragma pack(pop)
}
