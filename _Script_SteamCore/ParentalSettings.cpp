#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParentalSettings.hpp"
#include "SteamCoreSubsystem.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::ParentalSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.ParentalSettings");
    return result;
}
bool _Script_SteamCore::ParentalSettings::BIsParentalLockLocked() {
    return;
}
bool _Script_SteamCore::ParentalSettings::BIsParentalLockEnabled() {
    return;
}
bool _Script_SteamCore::ParentalSettings::BIsFeatureInBlockList(void* Feature) {
    return;
}
bool _Script_SteamCore::ParentalSettings::BIsAppInBlockList(int32_t AppID) {
    return;
}
bool _Script_SteamCore::ParentalSettings::BIsFeatureBlocked(void* Feature) {
    return;
}
bool _Script_SteamCore::ParentalSettings::BIsAppBlocked(int32_t AppID) {
    return;
}
