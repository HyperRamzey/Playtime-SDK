#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SocialChatChannelConfig.hpp"
#include "SocialUser.hpp"
_Script_Party::SocialUser*& _Script_Party::SocialChatChannelConfig::get_SocialUser() {
    return *(_Script_Party::SocialUser**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Party::SocialChatChannelConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Party.SocialChatChannelConfig");
    return result;
}
void* _Script_Party::SocialChatChannelConfig::get_ListenChannels() {
    return (void*)((uintptr_t)this + 0x18);
}
