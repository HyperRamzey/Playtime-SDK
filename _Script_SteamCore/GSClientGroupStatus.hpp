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
struct GSClientGroupStatus {
    private: char pad_0[0x18]; public:
    void* get_SteamIDUser();
    void* get_SteamIDGroup();
    bool get_bMember();
    void set_bMember(bool value);
    bool get_bOfficer();
    void set_bOfficer(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
