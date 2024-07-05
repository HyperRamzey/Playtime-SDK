#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\FastArraySerializerItem.hpp"
namespace _Script_Lobby {
struct LobbyBeaconPlayerState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Lobby {
#pragma pack(push, 1)
struct LobbyPlayerStateActorInfo : public _Script_Engine::FastArraySerializerItem {
    private: char pad_c[0xc]; public:
    _Script_Lobby::LobbyBeaconPlayerState*& get_LobbyPlayerState();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
