#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnitMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_ForLoopCount : public RigUnitMutable {
    private: char pad_68[0x70]; public:
    int32_t& get_Count();
    int32_t& get_Index();
    float& get_Ratio();
    bool get_Continue();
    void set_Continue(bool value);
    void* get_Completed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
