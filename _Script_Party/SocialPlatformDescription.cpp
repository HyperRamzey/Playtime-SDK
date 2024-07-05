#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SocialPlatformDescription.hpp"
void* _Script_Party::SocialPlatformDescription::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Party::SocialPlatformDescription::get_OnlineSubsystem() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Party::SocialPlatformDescription::get_PlatformType() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Party::SocialPlatformDescription::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Party.SocialPlatformDescription");
    return result;
}
void* _Script_Party::SocialPlatformDescription::get_SessionType() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Party::SocialPlatformDescription::get_ExternalAccountType() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Party::SocialPlatformDescription::get_CrossplayPool() {
    return (void*)((uintptr_t)this + 0x48);
}
