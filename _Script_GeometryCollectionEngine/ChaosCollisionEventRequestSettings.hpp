#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct ChaosCollisionEventRequestSettings {
    private: char pad_0[0x18]; public:
    int32_t& get_MaxNumberResults();
    float& get_MinMass();
    float& get_MinSpeed();
    float& get_MinImpulse();
    float& get_MaxDistance();
    void* get_SortMethod();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}