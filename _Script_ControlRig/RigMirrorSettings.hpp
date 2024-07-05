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
struct RigMirrorSettings {
    private: char pad_0[0x28]; public:
    void* get_MirrorAxis();
    void* get_AxisToFlip();
    void* get_OldName();
    void* get_NewName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
