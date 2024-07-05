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
struct CRSimContainer {
    private: char pad_0[0x18]; public:
    float& get_TimeStep();
    float& get_AccumulatedTime();
    float& get_TimeLeftForStep();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
