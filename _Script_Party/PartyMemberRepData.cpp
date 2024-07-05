#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OnlinePartyRepDataBase.hpp"
#include "PartyMemberRepData.hpp"
void* _Script_Party::PartyMemberRepData::get_Platform() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Party::PartyMemberRepData::get_PlatformUniqueId() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Party::PartyMemberRepData::get_PlatformSessionId() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Party::PartyMemberRepData::get_CrossplayPreference() {
    return (void*)((uintptr_t)this + 0x140);
}
_Script_CoreUObject::Class* _Script_Party::PartyMemberRepData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Party.PartyMemberRepData");
    return result;
}
