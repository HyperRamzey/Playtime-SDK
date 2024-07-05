#include "..\FUObjectArray.hpp"
#include "AdvancedSteamWorkshopLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_AdvancedSteamSessions::AdvancedSteamWorkshopLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSteamSessions.AdvancedSteamWorkshopLibrary");
    return result;
}
void* _Script_AdvancedSteamSessions::AdvancedSteamWorkshopLibrary::GetSubscribedWorkshopItems(int32_t& NumberOfItems) {
    return;
}
void _Script_AdvancedSteamSessions::AdvancedSteamWorkshopLibrary::GetNumSubscribedWorkshopItems(int32_t& NumberOfItems) {
    return;
}
