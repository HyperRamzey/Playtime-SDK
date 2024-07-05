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
struct SocialPlatformDescription {
    private: char pad_0[0x58]; public:
    void* get_Name();
    void* get_PlatformType();
    void* get_OnlineSubsystem();
    void* get_SessionType();
    void* get_ExternalAccountType();
    void* get_CrossplayPool();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
