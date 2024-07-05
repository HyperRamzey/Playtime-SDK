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
struct CameraShakeScrubParams {
    private: char pad_0[0x600]; public:
    float& get_AbsoluteTime();
    float& get_ShakeScale();
    float& get_DynamicScale();
    float& get_BlendingWeight();
    void* get_POV();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x600
#pragma pack(pop)
}