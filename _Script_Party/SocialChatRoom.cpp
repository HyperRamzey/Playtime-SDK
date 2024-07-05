#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SocialChatChannel.hpp"
#include "SocialChatRoom.hpp"
_Script_CoreUObject::Class* _Script_Party::SocialChatRoom::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.SocialChatRoom");
    return result;
}
