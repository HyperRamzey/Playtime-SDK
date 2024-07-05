#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavLinkDefinition : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    void* get_Links();
    void* get_SegmentLinks();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}