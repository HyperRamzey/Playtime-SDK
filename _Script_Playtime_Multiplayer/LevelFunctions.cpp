#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "LevelFunctions.hpp"
#include "LevelStruct.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::LevelFunctions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.LevelFunctions");
    return result;
}
_Script_Playtime_Multiplayer::LevelStruct _Script_Playtime_Multiplayer::LevelFunctions::GetLevelByName(void* Level) {
    return;
}
_Script_Playtime_Multiplayer::LevelStruct _Script_Playtime_Multiplayer::LevelFunctions::GetLevelByID(int32_t Level) {
    return;
}
void* _Script_Playtime_Multiplayer::LevelFunctions::GetAllPlayableLevels() {
    return;
}
void* _Script_Playtime_Multiplayer::LevelFunctions::GetAllLevels() {
    return;
}
