#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Playtime_Multiplayer {
struct ANetworkHand;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct HandTimer {
    private: char pad_0[0x18]; public:
    _Script_Playtime_Multiplayer::ANetworkHand*& get_Hand();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
