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
struct MagicLeapSharedWorldLocalData {
    private: char pad_0[0x10]; public:
    void* get_LocalPins();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}