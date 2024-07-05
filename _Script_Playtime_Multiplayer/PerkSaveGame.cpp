#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PerkPackage.hpp"
#include "PerkSaveGame.hpp"
void* _Script_Playtime_Multiplayer::PerkSaveGame::get_Perks() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Playtime_Multiplayer::PerkSaveGame::PerkTypeToString(void*& In) {
    return;
}
void _Script_Playtime_Multiplayer::PerkSaveGame::UnequipPerk(void* Perk) {
    return;
}
void* _Script_Playtime_Multiplayer::PerkSaveGame::GetSelectedPerks(_Script_Playtime_Multiplayer::PerkPackage& Package) {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PerkSaveGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PerkSaveGame");
    return result;
}
void* _Script_Playtime_Multiplayer::PerkSaveGame::StringToPerkType(void* In) {
    return;
}
void _Script_Playtime_Multiplayer::PerkSaveGame::SetPerkLevel(void* Perk, int32_t Level) {
    return;
}
void _Script_Playtime_Multiplayer::PerkSaveGame::Save() {
    return;
}
_Script_Playtime_Multiplayer::PerkSaveGame* _Script_Playtime_Multiplayer::PerkSaveGame::LoadPerkSaveGame() {
    return;
}
void _Script_Playtime_Multiplayer::PerkSaveGame::LevelUpPerk(void* Perk) {
    return;
}
bool _Script_Playtime_Multiplayer::PerkSaveGame::IsPerkTypeSelected(void* Perk, int32_t& Level) {
    return;
}
void* _Script_Playtime_Multiplayer::PerkSaveGame::GetSelectedPerkList() {
    return;
}
int32_t _Script_Playtime_Multiplayer::PerkSaveGame::GetPerkLevel(void* Perk) {
    return;
}
void _Script_Playtime_Multiplayer::PerkSaveGame::GetLevelFromPerks(_Script_Playtime_Multiplayer::PerkPackage& Package, void* Type, int32_t& Level) {
    return;
}
void _Script_Playtime_Multiplayer::PerkSaveGame::EquipPerk(void* Perk, int32_t PerkIndex, bool& Success) {
    return;
}
