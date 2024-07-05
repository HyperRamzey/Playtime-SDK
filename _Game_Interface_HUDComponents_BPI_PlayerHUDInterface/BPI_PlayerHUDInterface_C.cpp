#include "..\FUObjectArray.hpp"
#include "BPI_PlayerHUDInterface_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_BPI_PlayerHUDInterface::BPI_PlayerHUDInterface_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/HUDComponents/BPI_PlayerHUDInterface.BPI_PlayerHUDInterface_C");
    return result;
}
void _Game_Interface_HUDComponents_BPI_PlayerHUDInterface::BPI_PlayerHUDInterface_C::SetPlayerName() {
    return;
}
void _Game_Interface_HUDComponents_BPI_PlayerHUDInterface::BPI_PlayerHUDInterface_C::SetPerkIcon() {
    return;
}
