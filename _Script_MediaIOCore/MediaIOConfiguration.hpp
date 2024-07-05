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
struct MediaIOConfiguration {
    private: char pad_0[0x3c]; public:
    bool get_bIsInput();
    void set_bIsInput(bool value);
    void* get_MediaConnection();
    void* get_MediaMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3c
#pragma pack(pop)
}
