#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeSplineSegment : public _Script_CoreUObject::Object {
    private: char pad_28[0x88]; public:
    void* get_Connections();
    void* get_SplineInfo();
    void* get_Points();
    void* get_Bounds();
    void* get_LocalMeshComponents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
