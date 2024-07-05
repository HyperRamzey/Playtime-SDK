#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct ToyMachineData {
    private: char pad_0[0x18]; public:
    void* get_DepositedToyParts();
    float& get_PipeTimelineProgress();
    bool get_bPipeConnected();
    void set_bPipeConnected(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
