#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\FastArraySerializer.hpp"
namespace _Script_Lobby {
struct LobbyBeaconState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Lobby {
#pragma pack(push, 1)
struct LobbyPlayerStateInfoArray : public _Script_Engine::FastArraySerializer {
    private: char pad_108[0x18]; public:
    void* get_Players();
    _Script_Lobby::LobbyBeaconState*& get_ParentState();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
