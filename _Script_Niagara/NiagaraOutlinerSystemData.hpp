#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraOutlinerSystemData {
    private: char pad_0[0x30]; public:
    void* get_SystemInstances();
    void* get_AveragePerFrameTime();
    void* get_MaxPerFrameTime();
    void* get_AveragePerInstanceTime();
    void* get_MaxPerInstanceTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
