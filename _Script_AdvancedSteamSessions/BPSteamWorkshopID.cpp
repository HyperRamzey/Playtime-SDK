#include "..\FUObjectArray.hpp"
#include "BPSteamWorkshopID.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AdvancedSteamSessions::BPSteamWorkshopID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AdvancedSteamSessions.BPSteamWorkshopID");
    return result;
}
