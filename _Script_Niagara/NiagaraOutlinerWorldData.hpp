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
struct NiagaraOutlinerWorldData {
    private: char pad_0[0x68]; public:
    void* get_Systems();
    bool get_bHasBegunPlay();
    void set_bHasBegunPlay(bool value);
    void* get_WorldType();
    void* get_NetMode();
    void* get_AveragePerFrameTime();
    void* get_MaxPerFrameTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
