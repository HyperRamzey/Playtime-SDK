#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SocialChatChannel.hpp"
#include "SocialReadOnlyChatChannel.hpp"
_Script_CoreUObject::Class* _Script_Party::SocialReadOnlyChatChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.SocialReadOnlyChatChannel");
    return result;
}
