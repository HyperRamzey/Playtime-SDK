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
struct HoudiniParameterButtonStrip : public HoudiniParameter {
    private: char pad_108[0x28]; public:
    int32_t& get_Count();
    void* get_Labels();
    void* get_Values();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
