#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SocialChatChannel.hpp"
namespace _Script_Party {
struct SocialUser;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Party {
#pragma pack(push, 1)
struct SocialPrivateMessageChannel : public SocialChatChannel {
    private: char pad_e8[0x8]; public:
    _Script_Party::SocialUser*& get_TargetUser();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
