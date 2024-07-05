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
struct MediaIOInputConfiguration {
    private: char pad_0[0x44]; public:
    void* get_MediaConfiguration();
    void* get_InputType();
    int32_t& get_KeyPortIdentifier();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x44
#pragma pack(pop)
}
