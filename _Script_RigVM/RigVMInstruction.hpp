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
struct RigVMInstruction {
    private: char pad_0[0x10]; public:
    void* get_ByteCodeIndex();
    void* get_OpCode();
    void* get_OperandAlignment();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
