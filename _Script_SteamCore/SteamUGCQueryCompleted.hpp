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
struct SteamUGCQueryCompleted {
    private: char pad_0[0x18]; public:
    void* get_Handle();
    void* get_Result();
    int32_t& get_NumResultsReturned();
    int32_t& get_TotalMatchingResults();
    bool get_bCachedData();
    void set_bCachedData(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
