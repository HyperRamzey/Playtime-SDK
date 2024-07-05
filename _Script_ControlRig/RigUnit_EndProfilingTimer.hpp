#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_DebugBaseMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_EndProfilingTimer : public RigUnit_DebugBaseMutable {
    private: char pad_68[0x20]; public:
    int32_t& get_NumberOfMeasurements();
    void* get_Prefix();
    float& get_AccumulatedTime();
    int32_t& get_MeasurementsLeft();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
