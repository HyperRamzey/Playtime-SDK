#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AdvancedSteamSessions {
#pragma pack(push, 1)
struct BPSteamGroupOfficer {
    private: char pad_0[0x28]; public:
    void* get_OfficerUniqueNetID();
    bool get_bIsOwner();
    void set_bIsOwner(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
