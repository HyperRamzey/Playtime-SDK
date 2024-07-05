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
struct GetUserItemVoteResult {
    private: char pad_0[0x10]; public:
    void* get_PublishedFileID();
    void* get_Result();
    bool get_bVotedUp();
    void set_bVotedUp(bool value);
    bool get_bVotedDown();
    void set_bVotedDown(bool value);
    bool get_bVoteSkipped();
    void set_bVoteSkipped(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
