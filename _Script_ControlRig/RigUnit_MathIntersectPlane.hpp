#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathVectorBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathIntersectPlane : public RigUnit_MathVectorBase {
    private: char pad_8[0x40]; public:
    void* get_Start();
    void* get_Direction();
    void* get_PlanePoint();
    void* get_PlaneNormal();
    void* get_Result();
    float& get_Distance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
