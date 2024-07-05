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
struct GetAppDependenciesResult {
    private: char pad_0[0x28]; public:
    void* get_Result();
    void* get_PublishedFileID();
    void* get_AppIDs();
    int32_t& get_NumAppDependencies();
    int32_t& get_TotalNumAppDependencies();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
