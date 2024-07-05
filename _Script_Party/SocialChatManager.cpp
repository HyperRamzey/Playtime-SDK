#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SocialChatManager.hpp"
void* _Script_Party::SocialChatManager::get_GroupChannels() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_Party::SocialChatManager::get_DirectChannelsByTargetUser() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_Party::SocialChatManager::get_bEnableChatSlashCommands() {
    return (*(uint8_t*)((uintptr_t)this + 0x168 + 0)) & 1 != 0;
}
void* _Script_Party::SocialChatManager::get_ChatRoomsById() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Party::SocialChatManager::get_ReadOnlyChannelsByDisplayName() {
    return (void*)((uintptr_t)this + 0x118);
}
void _Script_Party::SocialChatManager::set_bEnableChatSlashCommands(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x168 + 0);
    *(uint8_t*)((uintptr_t)this + 0x168 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Party::SocialChatManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.SocialChatManager");
    return result;
}
