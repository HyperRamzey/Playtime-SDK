#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct CRSimLinearSpring {
    private: char pad_0[0x10]; public:
    int32_t& get_SubjectA();
    int32_t& get_SubjectB();
    float& get_Coefficient();
    float& get_Equilibrium();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
