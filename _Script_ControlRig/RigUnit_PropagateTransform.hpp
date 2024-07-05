#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnitMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_PropagateTransform : public RigUnitMutable {
    private: char pad_68[0x28]; public:
    void* get_Item();
    bool get_bRecomputeGlobal();
    void set_bRecomputeGlobal(bool value);
    bool get_bApplyToChildren();
    void set_bApplyToChildren(bool value);
    bool get_bRecursive();
    void set_bRecursive(bool value);
    void* get_CachedIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
