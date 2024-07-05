#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct InputDigitalActionData {
    private: char pad_0[0x2]; public:
    bool get_bState();
    void set_bState(bool value);
    bool get_bActive();
    void set_bActive(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2
#pragma pack(pop)
}
