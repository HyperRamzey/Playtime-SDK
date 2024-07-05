#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstance.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "HandMagnetComponent.hpp"
#include "PuzzleBase.hpp"
#include "PuzzlePiano.hpp"
bool _Script_Playtime_Multiplayer::PuzzlePiano::get_bShowingPattern() {
    return (*(uint8_t*)((uintptr_t)this + 0x478 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::PuzzlePiano::get_DefaultMaterials() {
    return (void*)((uintptr_t)this + 0x4c0);
}
void _Script_Playtime_Multiplayer::PuzzlePiano::set_bShowingPattern(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x478 + 0);
    *(uint8_t*)((uintptr_t)this + 0x478 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInstance*& _Script_Playtime_Multiplayer::PuzzlePiano::get_WrongKeyMaterial() {
    return *(_Script_Engine::MaterialInstance**)((uintptr_t)this + 0x4b8);
}
int32_t& _Script_Playtime_Multiplayer::PuzzlePiano::get_SubProgress() {
    return *(int32_t*)((uintptr_t)this + 0x480);
}
int32_t& _Script_Playtime_Multiplayer::PuzzlePiano::get_CurrentKey() {
    return *(int32_t*)((uintptr_t)this + 0x488);
}
void* _Script_Playtime_Multiplayer::PuzzlePiano::get_CorrectPattern() {
    return (void*)((uintptr_t)this + 0x490);
}
void* _Script_Playtime_Multiplayer::PuzzlePiano::get_KeyMeshes() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void _Script_Playtime_Multiplayer::PuzzlePiano::MultiCast_DisplaySequence() {
    return;
}
void* _Script_Playtime_Multiplayer::PuzzlePiano::get_HighlightMaterials() {
    return (void*)((uintptr_t)this + 0x4d0);
}
void* _Script_Playtime_Multiplayer::PuzzlePiano::get_KeySounds() {
    return (void*)((uintptr_t)this + 0x4e0);
}
_Script_Engine::TimelineComponent*& _Script_Playtime_Multiplayer::PuzzlePiano::get_ShowKeyTimeLine() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4f8);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PuzzlePiano::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PuzzlePiano");
    return result;
}
void _Script_Playtime_Multiplayer::PuzzlePiano::SolvedButtonGlow() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzlePiano::PlaySolvedSound() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzlePiano::MultiCast_PlayKey(int32_t KeySelected, bool isCorrect) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzlePiano::KeySelected(_Script_Playtime_Multiplayer::HandMagnetComponent* Key, int32_t KeyIndex) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzlePiano::ClearKeys() {
    return;
}
