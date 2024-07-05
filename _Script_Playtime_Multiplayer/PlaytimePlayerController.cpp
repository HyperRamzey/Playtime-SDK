#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "PlaytimePlayerController.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PlaytimePlayerController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PlaytimePlayerController");
    return result;
}
void _Script_Playtime_Multiplayer::PlaytimePlayerController::ServerNotifyLoadedWorldWorkaround(void* WorldPackageName) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimePlayerController::Server_SetQueueData(int32_t RoundsSinceLastMonster, bool bWantsToBeMonster) {
    return;
}
