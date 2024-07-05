#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Party {
struct SocialUser;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Party {
#pragma pack(push, 1)
struct SocialChatChannelConfig {
    private: char pad_0[0x40]; public:
    _Script_Party::SocialUser*& get_SocialUser();
    void* get_ListenChannels();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
