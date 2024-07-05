#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SocialChatRoom.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Party {
#pragma pack(push, 1)
struct SocialPartyChatRoom : public SocialChatRoom {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
