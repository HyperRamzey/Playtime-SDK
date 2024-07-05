#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CreateBeaconData.hpp"
void* _Script_SteamCore::CreateBeaconData::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::CreateBeaconData::get_BeaconID() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::CreateBeaconData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.CreateBeaconData");
    return result;
}
