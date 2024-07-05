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
struct RigUnit_ParentSwitchConstraint : public RigUnitMutable {
    private: char pad_68[0xf8]; public:
    void* get_Subject();
    int32_t& get_ParentIndex();
    void* get_Parents();
    void* get_InitialGlobalTransform();
    float& get_Weight();
    void* get_Transform();
    bool get_Switched();
    void set_Switched(bool value);
    void* get_CachedSubject();
    void* get_CachedParent();
    void* get_RelativeOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x160
#pragma pack(pop)
}
