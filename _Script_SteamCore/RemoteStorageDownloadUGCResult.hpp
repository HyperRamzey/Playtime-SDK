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
struct RemoteStorageDownloadUGCResult {
    private: char pad_0[0x30]; public:
    void* get_Result();
    void* get_FileHandle();
    int32_t& get_AppID();
    int32_t& get_SizeInBytes();
    void* get_Filename();
    void* get_SteamIDOwner();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
