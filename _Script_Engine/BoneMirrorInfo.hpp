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
struct BoneMirrorInfo {
    private: char pad_0[0x8]; public:
    int32_t& get_SourceIndex();
    void* get_BoneFlipAxis();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}