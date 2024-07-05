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
struct CRSimSoftCollision {
    private: char pad_0[0x50]; public:
    void* get_Transform();
    void* get_ShapeType();
    float& get_MinimumDistance();
    float& get_MaximumDistance();
    void* get_FalloffType();
    float& get_Coefficient();
    bool get_bInverted();
    void set_bInverted(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
