#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Qos {
#pragma pack(push, 1)
struct QosDatacenterInfo {
    private: char pad_0[0x38]; public:
    void* get_ID();
    void* get_RegionId();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    void* get_Servers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
