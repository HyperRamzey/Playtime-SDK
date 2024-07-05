#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct ProviderPollResult {
    private: char pad_0[0x38]; public:
    void* get_Name();
    void* get_MachineName();
    double& get_MachineTimeOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
