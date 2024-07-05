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
struct ConstraintNodeData {
    private: char pad_0[0xb0]; public:
    void* get_RelativeParent();
    void* get_ConstraintOffset();
    void* get_LinkedNode();
    void* get_Constraints();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
