#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PropertyBinding.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct FloatBinding : public PropertyBinding {
    static _Script_CoreUObject::Class* static_class();
    float GetValue();
}; // Size: 0x60
#pragma pack(pop)
}