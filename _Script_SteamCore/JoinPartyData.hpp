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
struct JoinPartyData {
    private: char pad_0[0x28]; public:
    void* get_Result();
    void* get_BeaconID();
    void* get_SteamIDBeaconOwner();
    void* get_ConnectString();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
