#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SocialDebugTools.hpp"
#include "SocialManager.hpp"
void* _Script_Party::SocialManager::get_SocialToolkits() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Party::SocialManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.SocialManager");
    return result;
}
_Script_Party::SocialDebugTools*& _Script_Party::SocialManager::get_SocialDebugTools() {
    return *(_Script_Party::SocialDebugTools**)((uintptr_t)this + 0x60);
}
