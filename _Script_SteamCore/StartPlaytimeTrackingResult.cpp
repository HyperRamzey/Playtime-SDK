#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StartPlaytimeTrackingResult.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::StartPlaytimeTrackingResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.StartPlaytimeTrackingResult");
    return result;
}
void* _Script_SteamCore::StartPlaytimeTrackingResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
