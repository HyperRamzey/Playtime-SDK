#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AmbiencePack.hpp"
#include "ChaseMusicPack.hpp"
#include "LobbyMusicPack.hpp"
#include "PuzzleSoundPack.hpp"
#include "SoundPack.hpp"
#include "SoundPackEntry.hpp"
#include "SoundPackSaveGame.hpp"
#include "SurvivorSoundPack.hpp"
int32_t& _Script_Playtime_Multiplayer::SoundPackSaveGame::get_SelectedChasePackID() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Playtime_Multiplayer::SoundPackSaveGame::get_SelectedPuzzlePackID() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Playtime_Multiplayer::SoundPackSaveGame::get_SelectedSurvivorPackID() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
_Script_Playtime_Multiplayer::PuzzleSoundPack* _Script_Playtime_Multiplayer::SoundPackSaveGame::GetSelectedPuzzlePack() {
    return;
}
int32_t& _Script_Playtime_Multiplayer::SoundPackSaveGame::get_SelectedLobbyPackID() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
_Script_Playtime_Multiplayer::SurvivorSoundPack* _Script_Playtime_Multiplayer::SoundPackSaveGame::GetSelectedSurvivorPack() {
    return;
}
int32_t& _Script_Playtime_Multiplayer::SoundPackSaveGame::get_SelectedAmbiencePackID() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::SoundPackSaveGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.SoundPackSaveGame");
    return result;
}
void _Script_Playtime_Multiplayer::SoundPackSaveGame::SetSelectedPack(void* SoundPackType, int32_t ID) {
    return;
}
_Script_Playtime_Multiplayer::SoundPackSaveGame* _Script_Playtime_Multiplayer::SoundPackSaveGame::LoadSounds() {
    return;
}
_Script_Playtime_Multiplayer::SurvivorSoundPack* _Script_Playtime_Multiplayer::SoundPackSaveGame::GetSurvivorPack(int32_t ID) {
    return;
}
_Script_Playtime_Multiplayer::SoundPackEntry _Script_Playtime_Multiplayer::SoundPackSaveGame::GetSoundPackData(int32_t ID) {
    return;
}
_Script_Playtime_Multiplayer::SoundPack* _Script_Playtime_Multiplayer::SoundPackSaveGame::GetSoundPack(int32_t ID) {
    return;
}
int32_t _Script_Playtime_Multiplayer::SoundPackSaveGame::GetSelectedSoundPackID(void* SoundPack) {
    return;
}
_Script_Playtime_Multiplayer::LobbyMusicPack* _Script_Playtime_Multiplayer::SoundPackSaveGame::GetSelectedLobbySoundPack() {
    return;
}
int32_t _Script_Playtime_Multiplayer::SoundPackSaveGame::GetSelectedPackID(void* Type) {
    return;
}
_Script_Playtime_Multiplayer::ChaseMusicPack* _Script_Playtime_Multiplayer::SoundPackSaveGame::GetSelectedChaseMusicPack() {
    return;
}
_Script_Playtime_Multiplayer::AmbiencePack* _Script_Playtime_Multiplayer::SoundPackSaveGame::GetSelectedAmbiencePack() {
    return;
}
_Script_Playtime_Multiplayer::PuzzleSoundPack* _Script_Playtime_Multiplayer::SoundPackSaveGame::GetPuzzlePack(int32_t ID) {
    return;
}
_Script_Playtime_Multiplayer::LobbyMusicPack* _Script_Playtime_Multiplayer::SoundPackSaveGame::GetLobbySoundPack(int32_t ID) {
    return;
}
_Script_Playtime_Multiplayer::ChaseMusicPack* _Script_Playtime_Multiplayer::SoundPackSaveGame::GetChaseMusicPack(int32_t ID) {
    return;
}
_Script_Playtime_Multiplayer::AmbiencePack* _Script_Playtime_Multiplayer::SoundPackSaveGame::GetAmbiencePack(int32_t ID) {
    return;
}
