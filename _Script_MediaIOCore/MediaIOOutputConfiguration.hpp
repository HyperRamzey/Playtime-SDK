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
struct MediaIOOutputConfiguration {
    private: char pad_0[0x4c]; public:
    void* get_MediaConfiguration();
    void* get_OutputType();
    int32_t& get_KeyPortIdentifier();
    void* get_OutputReference();
    int32_t& get_ReferencePortIdentifier();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4c
#pragma pack(pop)
}
