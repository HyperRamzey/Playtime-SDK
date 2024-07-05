#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "CustomPlayerController.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::CustomPlayerController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.CustomPlayerController");
    return result;
}
void _Script_Playtime_Multiplayer::CustomPlayerController::SetViewTargetToMommyCamera() {
    return;
}
