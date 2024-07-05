#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapSharedWorld {
#pragma pack(push, 1)
struct MagicLeapSharedWorldPinData {
    private: char pad_0[0x24]; public:
    void* get_PinId();
    void* get_PinState();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
