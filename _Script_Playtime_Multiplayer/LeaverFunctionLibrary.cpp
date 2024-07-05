#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "LeaverFunctionLibrary.hpp"
#include "LeaverSaveGame.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::LeaverFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.LeaverFunctionLibrary");
    return result;
}
void _Script_Playtime_Multiplayer::LeaverFunctionLibrary::SaveLeaverSaveGame(_Script_Playtime_Multiplayer::LeaverSaveGame* SaveGame) {
    return;
}
_Script_Playtime_Multiplayer::LeaverSaveGame* _Script_Playtime_Multiplayer::LeaverFunctionLibrary::LoadLeaverSaveGame() {
    return;
}
