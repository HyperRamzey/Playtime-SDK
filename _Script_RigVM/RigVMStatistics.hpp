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
struct RigVMStatistics {
    private: char pad_0[0x2c]; public:
    void* get_BytesForCDO();
    void* get_BytesPerInstance();
    void* get_LiteralMemory();
    void* get_WorkMemory();
    void* get_BytesForCaching();
    void* get_ByteCode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
