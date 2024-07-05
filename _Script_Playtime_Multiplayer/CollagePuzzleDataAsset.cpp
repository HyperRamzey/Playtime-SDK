#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "CollagePuzzleDataAsset.hpp"
float& _Script_Playtime_Multiplayer::CollagePuzzleDataAsset::get_IndividualRotateDuration() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_Engine::MaterialInterface*& _Script_Playtime_Multiplayer::CollagePuzzleDataAsset::get_SolvedMat() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x68);
}
void* _Script_Playtime_Multiplayer::CollagePuzzleDataAsset::get_Materials() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Playtime_Multiplayer::CollagePuzzleDataAsset::get_IndividualPoppingOutDuration() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_Playtime_Multiplayer::CollagePuzzleDataAsset::get_FullShuffleRotateDuration() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Playtime_Multiplayer::CollagePuzzleDataAsset::get_FullShufflePoppingOutDuration() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_Playtime_Multiplayer::CollagePuzzleDataAsset::get_Meshes() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_Engine::MaterialInterface*& _Script_Playtime_Multiplayer::CollagePuzzleDataAsset::get_ShutDownMat() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::CollagePuzzleDataAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.CollagePuzzleDataAsset");
    return result;
}
