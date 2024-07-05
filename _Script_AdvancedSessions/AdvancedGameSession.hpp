#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameSession.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct AdvancedGameSession : public _Script_Engine::GameSession {
    private: char pad_238[0x50]; public:
    void* get_BanList();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x288
#pragma pack(pop)
}
