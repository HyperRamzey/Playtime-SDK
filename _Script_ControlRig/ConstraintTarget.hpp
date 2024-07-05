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
struct ConstraintTarget {
    private: char pad_0[0x40]; public:
    void* get_Transform();
    float& get_Weight();
    bool get_bMaintainOffset();
    void set_bMaintainOffset(bool value);
    void* get_Filter();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
