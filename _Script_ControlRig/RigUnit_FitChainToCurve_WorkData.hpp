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
struct RigUnit_FitChainToCurve_WorkData {
    private: char pad_0[0x98]; public:
    float& get_ChainLength();
    void* get_ItemPositions();
    void* get_ItemSegments();
    void* get_CurvePositions();
    void* get_CurveSegments();
    void* get_CachedItems();
    void* get_ItemRotationA();
    void* get_ItemRotationB();
    void* get_ItemRotationT();
    void* get_ItemLocalTransforms();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
