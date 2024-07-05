#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaIOCore {
#pragma pack(push, 1)
struct MediaIOMode {
    private: char pad_0[0x18]; public:
    void* get_FrameRate();
    void* get_Resolution();
    void* get_Standard();
    int32_t& get_DeviceModeIdentifier();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
