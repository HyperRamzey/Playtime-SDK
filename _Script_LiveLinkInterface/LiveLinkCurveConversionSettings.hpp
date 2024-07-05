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
struct LiveLinkCurveConversionSettings {
    private: char pad_0[0x50]; public:
    void* get_CurveConversionAssetMap();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}