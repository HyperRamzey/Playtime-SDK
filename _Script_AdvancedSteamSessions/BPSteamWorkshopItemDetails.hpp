#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AdvancedSteamSessions {
#pragma pack(push, 1)
struct BPSteamWorkshopItemDetails {
    private: char pad_0[0x60]; public:
    void* get_ResultOfRequest();
    void* get_FileType();
    int32_t& get_CreatorAppID();
    int32_t& get_ConsumerAppID();
    void* get_Title();
    void* get_Description();
    void* get_ItemUrl();
    int32_t& get_VotesUp();
    int32_t& get_VotesDown();
    float& get_CalculatedScore();
    bool get_bBanned();
    void set_bBanned(bool value);
    bool get_bAcceptedForUse();
    void set_bAcceptedForUse(bool value);
    bool get_bTagsTruncated();
    void set_bTagsTruncated(bool value);
    void* get_CreatorSteamID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
