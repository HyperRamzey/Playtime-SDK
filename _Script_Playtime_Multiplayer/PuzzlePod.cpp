#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PuzzlePillar.hpp"
#include "PuzzlePod.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PuzzlePod::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PuzzlePod");
    return result;
}
void _Script_Playtime_Multiplayer::PuzzlePod::OnPuzzleSolved(int32_t PuzzleIndex) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzlePod::OnPanelHit(int32_t PuzzleIndex) {
    return;
}
