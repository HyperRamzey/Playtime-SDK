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
struct SteamUGCDetails {
    private: char pad_0[0xa8]; public:
    void* get_PublishedFileID();
    void* get_Result();
    void* get_FileType();
    int32_t& get_CreatorAppID();
    int32_t& get_ConsumerAppID();
    void* get_Title();
    void* get_Description();
    void* get_SteamIDOwner();
    int32_t& get_TimeCreated();
    int32_t& get_TimeUpdated();
    int32_t& get_TimeAddedToUserList();
    void* get_Visibility();
    bool get_bBanned();
    void set_bBanned(bool value);
    bool get_bAcceptedForUse();
    void set_bAcceptedForUse(bool value);
    bool get_bTagsTruncated();
    void set_bTagsTruncated(bool value);
    void* get_Tags();
    void* get_File();
    void* get_PreviewFile();
    void* get_Filename();
    int32_t& get_FileSize();
    int32_t& get_PreviewFileSize();
    void* get_URL();
    int32_t& get_VotesUp();
    int32_t& get_VotesDown();
    float& get_Score();
    int32_t& get_NumChildren();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
