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
struct RigUnit_SlideChain_WorkData {
    private: char pad_0[0x48]; public:
    float& get_ChainLength();
    void* get_ItemSegments();
    void* get_CachedItems();
    void* get_Transforms();
    void* get_BlendedTransforms();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
