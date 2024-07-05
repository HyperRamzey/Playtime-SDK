#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MobilePatchingUtils {
#pragma pack(push, 1)
struct MobileInstalledContent : public _Script_CoreUObject::Object {
    private: char pad_28[0x20]; public:
    static _Script_CoreUObject::Class* static_class();
    bool Mount(int32_t PakOrder, void* MountPoint);
    float GetInstalledContentSize();
    float GetDiskFreeSpace();
}; // Size: 0x48
#pragma pack(pop)
}
