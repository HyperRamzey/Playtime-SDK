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
struct InputAnalogActionData {
    private: char pad_0[0x10]; public:
    void* get_Mode();
    float& get_X();
    float& get_Y();
    bool get_bActive();
    void set_bActive(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
