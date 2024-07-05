#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ReservationNotificationData.hpp"
void* _Script_SteamCore::ReservationNotificationData::get_BeaconID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::ReservationNotificationData::get_SteamIDJoiner() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::ReservationNotificationData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.ReservationNotificationData");
    return result;
}
