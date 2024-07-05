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
struct SupportedSubTrackInfo {
    private: char pad_0[0x20]; public:
    void* get_SupportedClass();
    void* get_SubTrackName();
    int32_t& get_GroupIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}