#include "..\FUObjectArray.hpp"
#include "BPI_MinimalHUDSettingsHook_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Game_Interface_BPI_MinimalHUDSettingsHook::BPI_MinimalHUDSettingsHook_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/BPI_MinimalHUDSettingsHook.BPI_MinimalHUDSettingsHook_C");
    return result;
}
void _Game_Interface_BPI_MinimalHUDSettingsHook::BPI_MinimalHUDSettingsHook_C::SetNonEssentialHUDVisibility(bool Visible) {
    return;
}
