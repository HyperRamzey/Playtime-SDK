#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct BPOnlineUser {
    private: char pad_0[0x40]; public:
    void* get_UniqueNetId();
    void* get_DisplayName();
    void* get_RealName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
