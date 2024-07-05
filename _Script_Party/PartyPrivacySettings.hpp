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
struct PartyPrivacySettings {
    private: char pad_0[0x3]; public:
    void* get_PartyType();
    void* get_PartyInviteRestriction();
    bool get_bOnlyLeaderFriendsCanJoin();
    void set_bOnlyLeaderFriendsCanJoin(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3
#pragma pack(pop)
}
