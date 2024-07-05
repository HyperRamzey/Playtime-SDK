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
struct NumberOfCurrentPlayers {
    private: char pad_0[0x8]; public:
    bool get_bSuccess();
    void set_bSuccess(bool value);
    int32_t& get_Players();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
