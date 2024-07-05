#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LowBatteryPower.hpp"
int32_t& _Script_SteamCore::LowBatteryPower::get_MinutesBatteryLeft() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::LowBatteryPower::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.LowBatteryPower");
    return result;
}
