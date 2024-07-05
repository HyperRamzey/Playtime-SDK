#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "ZoneDetectionComponent.hpp"
void* _Script_Playtime_Multiplayer::ZoneDetectionComponent::get_CachedZones() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Playtime_Multiplayer::ZoneDetectionComponent::get_CurrentZoneName() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ZoneDetectionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.ZoneDetectionComponent");
    return result;
}
