#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Party {
#pragma pack(push, 1)
struct SocialChatManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x1f8]; public:
    void* get_DirectChannelsByTargetUser();
    void* get_ChatRoomsById();
    void* get_ReadOnlyChannelsByDisplayName();
    bool get_bEnableChatSlashCommands();
    void set_bEnableChatSlashCommands(bool value);
    void* get_GroupChannels();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x220
#pragma pack(pop)
}
