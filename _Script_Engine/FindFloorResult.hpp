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
struct FindFloorResult {
    private: char pad_0[0x94]; public:
    bool get_bBlockingHit();
    void set_bBlockingHit(bool value);
    bool get_bWalkableFloor();
    void set_bWalkableFloor(bool value);
    bool get_bLineTrace();
    void set_bLineTrace(bool value);
    float& get_FloorDist();
    float& get_LineDist();
    void* get_HitResult();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x94
#pragma pack(pop)
}
