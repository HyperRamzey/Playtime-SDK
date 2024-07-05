#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_SequenceExecution : public RigUnit {
    private: char pad_8[0x1e0]; public:
    void* get_ExecuteContext();
    void* get_A();
    void* get_B();
    void* get_C();
    void* get_D();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1e8
#pragma pack(pop)
}
