#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkComponents {
#pragma pack(push, 1)
struct LiveLinkTransformControllerData {
    private: char pad_0[0x6]; public:
    bool get_bWorldTransform();
    void set_bWorldTransform(bool value);
    bool get_bUseLocation();
    void set_bUseLocation(bool value);
    bool get_bUseRotation();
    void set_bUseRotation(bool value);
    bool get_bUseScale();
    void set_bUseScale(bool value);
    bool get_bSweep();
    void set_bSweep(bool value);
    bool get_bTeleport();
    void set_bTeleport(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x6
#pragma pack(pop)
}
