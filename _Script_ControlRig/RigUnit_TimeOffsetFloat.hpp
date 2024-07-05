#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_SimBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_TimeOffsetFloat : public RigUnit_SimBase {
    private: char pad_8[0x40]; public:
    float& get_Value();
    float& get_SecondsAgo();
    int32_t& get_BufferSize();
    float& get_TimeRange();
    float& get_Result();
    void* get_Buffer();
    void* get_DeltaTimes();
    int32_t& get_LastInsertIndex();
    int32_t& get_UpperBound();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
