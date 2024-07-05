#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "PlaytimeProfilingLibrary.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PlaytimeProfilingLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PlaytimeProfilingLibrary");
    return result;
}
void* _Script_Playtime_Multiplayer::PlaytimeProfilingLibrary::GetStreamingLevelNameFromActor(_Script_Engine::Actor* Actor) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeProfilingLibrary::DefineCSVStat(void* StatName, int32_t Category, float Value) {
    return;
}
