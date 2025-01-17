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
struct RigVMByteCodeEntry {
    private: char pad_0[0xc]; public:
    void* get_Name();
    int32_t& get_InstructionIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
