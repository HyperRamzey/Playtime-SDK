#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "TooltipSaveGame.hpp"
void* _Script_Playtime_Multiplayer::TooltipSaveGame::get_TooltipKeys() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::TooltipSaveGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.TooltipSaveGame");
    return result;
}
