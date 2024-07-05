#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "ANetworkCharacter.hpp"
#include "PerkFunctionLibrary.hpp"
#include "PerkPackage.hpp"
void* _Script_Playtime_Multiplayer::PerkFunctionLibrary::GetPerkSaveGameSlotName() {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PerkFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PerkFunctionLibrary");
    return result;
}
float _Script_Playtime_Multiplayer::PerkFunctionLibrary::LevelToValue(void* PerkType, int32_t Level) {
    return;
}
void _Script_Playtime_Multiplayer::PerkFunctionLibrary::CleanPerkPackage(_Script_Playtime_Multiplayer::PerkPackage& Perks, void*& PerkInventory) {
    return;
}
bool _Script_Playtime_Multiplayer::PerkFunctionLibrary::DoesOwnPerk(void*& PerkInventory, void* Type) {
    return;
}
bool _Script_Playtime_Multiplayer::PerkFunctionLibrary::GetPerkData(void* Type, void* Perks, int32_t& Level) {
    return;
}
void _Script_Playtime_Multiplayer::PerkFunctionLibrary::GetPerkRowName(void* PerkType, void*& Name) {
    return;
}
void _Script_Playtime_Multiplayer::PerkFunctionLibrary::GetHighestPerkLevelFromPlayers(void* Players, void* PerkType, int32_t& PerkLevel, _Script_Playtime_Multiplayer::ANetworkCharacter*& CharWithPerk) {
    return;
}
bool _Script_Playtime_Multiplayer::PerkFunctionLibrary::CharHasPerk(_Script_Playtime_Multiplayer::ANetworkCharacter* Character, void* Type, int32_t& Level) {
    return;
}
