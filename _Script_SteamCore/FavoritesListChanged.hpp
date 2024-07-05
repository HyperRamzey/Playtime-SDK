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
struct FavoritesListChanged {
    private: char pad_0[0x40]; public:
    void* get_IP();
    int32_t& get_QueryPort();
    int32_t& get_ConnectionPort();
    int32_t& get_AppID();
    void* get_Flags();
    bool get_bAdd();
    void set_bAdd(bool value);
    void* get_SteamID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
