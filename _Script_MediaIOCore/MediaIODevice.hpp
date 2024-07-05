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
struct MediaIODevice {
    private: char pad_0[0xc]; public:
    void* get_DeviceName();
    int32_t& get_DeviceIdentifier();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
