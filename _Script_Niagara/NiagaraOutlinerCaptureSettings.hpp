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
struct NiagaraOutlinerCaptureSettings {
    private: char pad_0[0xc]; public:
    bool get_bTriggerCapture();
    void set_bTriggerCapture(bool value);
    void* get_CaptureDelayFrames();
    bool get_bGatherPerfData();
    void set_bGatherPerfData(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
