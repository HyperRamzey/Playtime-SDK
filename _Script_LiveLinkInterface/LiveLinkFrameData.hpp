#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkFrameData {
    private: char pad_0[0x90]; public:
    void* get_Transforms();
    void* get_CurveElements();
    void* get_WorldTime();
    void* get_MetaData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
