#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RealCurve.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SimpleCurve : public RealCurve {
    private: char pad_70[0x18]; public:
    void* get_InterpMode();
    void* get_Keys();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
