#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RigVM {
#pragma pack(push, 1)
struct RigVMOperand {
    private: char pad_0[0x6]; public:
    void* get_MemoryType();
    void* get_RegisterIndex();
    void* get_RegisterOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x6
#pragma pack(pop)
}
