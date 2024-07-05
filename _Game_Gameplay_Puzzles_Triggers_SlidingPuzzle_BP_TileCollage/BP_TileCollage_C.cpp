#include "..\FUObjectArray.hpp"
#include "BP_TileCollage_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\CollagePuzzleTile.hpp"
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/Triggers/SlidingPuzzle/BP_TileCollage.BP_TileCollage_C");
    return result;
}
