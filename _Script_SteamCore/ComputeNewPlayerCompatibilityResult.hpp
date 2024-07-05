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
struct ComputeNewPlayerCompatibilityResult {
    private: char pad_0[0x18]; public:
    void* get_Result();
    int32_t& get_PlayersThatDontLikeCandidate();
    int32_t& get_PlayersThatCandidateDoesntLike();
    int32_t& get_ClanPlayersThatDontLikeCandidate();
    void* get_SteamIDCandidate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
