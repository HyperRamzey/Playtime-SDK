#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InteractiveToolPropertySet.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct BrushBaseProperties : public InteractiveToolPropertySet {
    private: char pad_60[0x18]; public:
    float& get_BrushSize();
    bool get_bSpecifyRadius();
    void set_bSpecifyRadius(bool value);
    float& get_BrushRadius();
    float& get_BrushStrength();
    float& get_BrushFalloffAmount();
    bool get_bShowStrength();
    void set_bShowStrength(bool value);
    bool get_bShowFalloff();
    void set_bShowFalloff(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
