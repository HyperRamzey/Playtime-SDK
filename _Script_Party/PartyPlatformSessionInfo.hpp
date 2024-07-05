#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Party {
#pragma pack(push, 1)
struct PartyPlatformSessionInfo {
    private: char pad_0[0x48]; public:
    void* get_SessionType();
    void* get_SessionID();
    void* get_OwnerPrimaryId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
