#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CollagePuzzleDataAsset.hpp"
#include "CollagePuzzleTile.hpp"
#include "HandMagnetComponent.hpp"
#include "PuzzleBase.hpp"
#include "PuzzleCollage.hpp"
_Script_Playtime_Multiplayer::CollagePuzzleDataAsset*& _Script_Playtime_Multiplayer::PuzzleCollage::get_CollagePuzzleDataAsset() {
    return *(_Script_Playtime_Multiplayer::CollagePuzzleDataAsset**)((uintptr_t)this + 0x480);
}
void* _Script_Playtime_Multiplayer::PuzzleCollage::get_Tiles() {
    return (void*)((uintptr_t)this + 0x488);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PuzzleCollage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PuzzleCollage");
    return result;
}
void _Script_Playtime_Multiplayer::PuzzleCollage::Rotate(_Script_Playtime_Multiplayer::HandMagnetComponent* Magnet, _Script_Playtime_Multiplayer::CollagePuzzleTile* Tile) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleCollage::PlaySolvedSound() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleCollage::Authority_AnimFinished() {
    return;
}
