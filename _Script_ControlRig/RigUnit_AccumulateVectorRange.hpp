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
struct RigUnit_AccumulateVectorRange : public RigUnit_SimBase {
    private: char pad_8[0x40]; public:
    void* get_Value();
    void* get_Minimum();
    void* get_Maximum();
    void* get_AccumulatedMinimum();
    void* get_AccumulatedMaximum();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
