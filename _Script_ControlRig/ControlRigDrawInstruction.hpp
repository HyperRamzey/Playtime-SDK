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
struct ControlRigDrawInstruction {
    private: char pad_0[0xa0]; public:
    void* get_Name();
    void* get_PrimitiveType();
    void* get_Positions();
    void* get_Color();
    float& get_Thickness();
    void* get_Transform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
