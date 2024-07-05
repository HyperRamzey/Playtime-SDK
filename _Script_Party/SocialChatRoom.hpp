#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SocialChatChannel.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Party {
#pragma pack(push, 1)
struct SocialChatRoom : public SocialChatChannel {
    private: char pad_e8[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
