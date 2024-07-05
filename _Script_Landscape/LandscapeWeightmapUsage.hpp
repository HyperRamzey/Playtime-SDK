#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Landscape {
struct LandscapeComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeWeightmapUsage : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    _Script_Landscape::LandscapeComponent*& get_ChannelUsage();
    void* get_LayerGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
