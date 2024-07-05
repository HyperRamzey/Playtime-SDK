#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "SteamWebUtilities.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamWebUtilities::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamWebUtilities");
    return result;
}
void* _Script_SteamCoreWeb::SteamWebUtilities::GetDevSteamID() {
    return;
}
bool _Script_SteamCoreWeb::SteamWebUtilities::ParseJson(void* JsonString, void*& Data) {
    return;
}
void _Script_SteamCoreWeb::SteamWebUtilities::FindJsonNumbers(void* JsonString, void* Key, void*& Values, void*& Result) {
    return;
}
void* _Script_SteamCoreWeb::SteamWebUtilities::GetProjectKey() {
    return;
}
int32_t _Script_SteamCoreWeb::SteamWebUtilities::GetProjectAppID() {
    return;
}
void _Script_SteamCoreWeb::SteamWebUtilities::FindJsonStrings(void* JsonString, void* Key, void*& Values, void*& Result) {
    return;
}
void _Script_SteamCoreWeb::SteamWebUtilities::FindJsonString(void* JsonString, void* Key, void*& Value, void*& Result) {
    return;
}
void _Script_SteamCoreWeb::SteamWebUtilities::FindJsonNumber(void* JsonString, void* Key, int32_t& Value, void*& Result) {
    return;
}
void _Script_SteamCoreWeb::SteamWebUtilities::FindJsonBools(void* JsonString, void* Key, void*& bValues, void*& Result) {
    return;
}
void _Script_SteamCoreWeb::SteamWebUtilities::FindJsonBool(void* JsonString, void* Key, bool& bValue, void*& Result) {
    return;
}
