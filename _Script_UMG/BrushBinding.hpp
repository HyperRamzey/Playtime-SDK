#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "PropertyBinding.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct BrushBinding : public PropertyBinding {
    private: char pad_60[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    _Script_SlateCore::SlateBrush GetValue();
}; // Size: 0x68
#pragma pack(pop)
}
