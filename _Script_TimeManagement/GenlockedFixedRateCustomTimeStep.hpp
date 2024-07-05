#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GenlockedCustomTimeStep.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TimeManagement {
#pragma pack(push, 1)
struct GenlockedFixedRateCustomTimeStep : public GenlockedCustomTimeStep {
    private: char pad_28[0x20]; public:
    void* get_FrameRate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
