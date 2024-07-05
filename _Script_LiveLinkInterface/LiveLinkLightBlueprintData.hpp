#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LiveLinkBaseBlueprintData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkLightBlueprintData : public LiveLinkBaseBlueprintData {
    private: char pad_8[0x128]; public:
    void* get_StaticData();
    void* get_FrameData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
