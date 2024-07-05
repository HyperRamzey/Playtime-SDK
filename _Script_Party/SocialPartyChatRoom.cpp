#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SocialChatRoom.hpp"
#include "SocialPartyChatRoom.hpp"
_Script_CoreUObject::Class* _Script_Party::SocialPartyChatRoom::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.SocialPartyChatRoom");
    return result;
}
