#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct QuartzQuantizationBoundary {
    private: char pad_0[0xc]; public:
    void* get_Quantization();
    float& get_Multiplier();
    void* get_CountingReferencePoint();
    bool get_bFireOnClockStart();
    void set_bFireOnClockStart(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
