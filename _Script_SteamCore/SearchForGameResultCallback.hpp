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
struct SearchForGameResultCallback {
    private: char pad_0[0x30]; public:
    void* get_SearchID();
    void* get_Result();
    int32_t& get_CountPlayersInGame();
    int32_t& get_CountAcceptedGame();
    void* get_SteamIDHost();
    bool get_bFinalCallback();
    void set_bFinalCallback(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
