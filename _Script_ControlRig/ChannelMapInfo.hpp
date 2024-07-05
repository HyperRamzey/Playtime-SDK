#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ChannelMapInfo {
    private: char pad_0[0x18]; public:
    int32_t& get_ControlIndex();
    int32_t& get_TotalChannelIndex();
    int32_t& get_ChannelIndex();
    int32_t& get_ParentControlIndex();
    void* get_ChannelTypeName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
