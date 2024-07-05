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
struct QosRegionInfo {
    private: char pad_0[0x30]; public:
    void* get_DisplayName();
    void* get_RegionId();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    bool get_bVisible();
    void set_bVisible(bool value);
    bool get_bAutoAssignable();
    void set_bAutoAssignable(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
