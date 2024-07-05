#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\LocalPlayer.hpp"
#include "SocialChatManager.hpp"
#include "SocialToolkit.hpp"
#include "SocialUser.hpp"
_Script_Party::SocialUser*& _Script_Party::SocialToolkit::get_LocalUser() {
    return *(_Script_Party::SocialUser**)((uintptr_t)this + 0x68);
}
void* _Script_Party::SocialToolkit::get_AllUsers() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Party::SocialToolkit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.SocialToolkit");
    return result;
}
_Script_Engine::LocalPlayer*& _Script_Party::SocialToolkit::get_LocalPlayerOwner() {
    return *(_Script_Engine::LocalPlayer**)((uintptr_t)this + 0xd0);
}
_Script_Party::SocialChatManager*& _Script_Party::SocialToolkit::get_SocialChatManager() {
    return *(_Script_Party::SocialChatManager**)((uintptr_t)this + 0xd8);
}
