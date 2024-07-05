#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniParameter.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniParameterColor : public HoudiniParameter {
    private: char pad_108[0x28]; public:
    void* get_Color();
    void* get_DefaultColor();
    bool get_bIsChildOfRamp();
    void set_bIsChildOfRamp(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
