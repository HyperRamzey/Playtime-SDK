#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PartyMember.hpp"
#include "SocialUser.hpp"
_Script_Party::SocialUser*& _Script_Party::PartyMember::get_SocialUser() {
    return *(_Script_Party::SocialUser**)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Party::PartyMember::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.PartyMember");
    return result;
}
