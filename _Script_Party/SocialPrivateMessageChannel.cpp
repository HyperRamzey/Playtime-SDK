#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SocialChatChannel.hpp"
#include "SocialPrivateMessageChannel.hpp"
#include "SocialUser.hpp"
_Script_Party::SocialUser*& _Script_Party::SocialPrivateMessageChannel::get_TargetUser() {
    return *(_Script_Party::SocialUser**)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_Party::SocialPrivateMessageChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.SocialPrivateMessageChannel");
    return result;
}
