#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapPlanes {
#pragma pack(push, 1)
struct MagicLeapPlaneResult {
    private: char pad_0[0x60]; public:
    void* get_PlanePosition();
    void* get_PlaneOrientation();
    void* get_ContentOrientation();
    void* get_PlaneDimensions();
    void* get_PlaneFlags();
    void* get_ID();
    void* get_InnerID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
