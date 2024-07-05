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
struct ClanOfficerListResponse {
    private: char pad_0[0x10]; public:
    void* get_SteamIDClan();
    int32_t& get_Officers();
    bool get_bSuccess();
    void set_bSuccess(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
