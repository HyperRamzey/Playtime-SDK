#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StopPlaytimeTrackingResult.hpp"
void* _Script_SteamCore::StopPlaytimeTrackingResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::StopPlaytimeTrackingResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.StopPlaytimeTrackingResult");
    return result;
}
