#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PartyBeaconCrossplayPlatformMapping.hpp"
void* _Script_OnlineSubsystemUtils::PartyBeaconCrossplayPlatformMapping::get_PlatformName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_OnlineSubsystemUtils::PartyBeaconCrossplayPlatformMapping::get_PlatformType() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::PartyBeaconCrossplayPlatformMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping");
    return result;
}
