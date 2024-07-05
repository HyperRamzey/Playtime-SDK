#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosSolverEngine {
#pragma pack(push, 1)
struct ChaosHandlerSet {
    private: char pad_0[0x58]; public:
    void* get_ChaosHandlers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}