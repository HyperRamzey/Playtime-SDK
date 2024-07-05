#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BPOnlineUser.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct BPOnlineRecentPlayer : public BPOnlineUser {
    private: char pad_40[0x10]; public:
    void* get_LastSeen();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
