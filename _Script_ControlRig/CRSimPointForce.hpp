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
struct CRSimPointForce {
    private: char pad_0[0x18]; public:
    void* get_ForceType();
    void* get_Vector();
    float& get_Coefficient();
    bool get_bNormalize();
    void set_bNormalize(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}