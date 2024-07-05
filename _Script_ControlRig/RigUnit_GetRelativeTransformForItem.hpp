#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_GetRelativeTransformForItem : public RigUnit {
    private: char pad_8[0x88]; public:
    void* get_Child();
    bool get_bChildInitial();
    void set_bChildInitial(bool value);
    void* get_Parent();
    bool get_bParentInitial();
    void set_bParentInitial(bool value);
    void* get_RelativeTransform();
    void* get_CachedChild();
    void* get_CachedParent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
