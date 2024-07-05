#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SocialGroupChannel.hpp"
#include "SocialUser.hpp"
_Script_Party::SocialUser*& _Script_Party::SocialGroupChannel::get_SocialUser() {
    return *(_Script_Party::SocialUser**)((uintptr_t)this + 0x28);
}
void* _Script_Party::SocialGroupChannel::get_GroupID() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Party::SocialGroupChannel::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Party::SocialGroupChannel::get_Members() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Party::SocialGroupChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.SocialGroupChannel");
    return result;
}
