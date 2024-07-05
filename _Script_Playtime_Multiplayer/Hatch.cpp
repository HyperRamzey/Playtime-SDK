#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "ANetworkCharacter.hpp"
#include "Hatch.hpp"
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::Hatch::get_CloseDoorSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x2d8);
}
void _Script_Playtime_Multiplayer::Hatch::HatchProgress(float Value) {
    return;
}
bool _Script_Playtime_Multiplayer::Hatch::get_Opened() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::Hatch::get_HatchBangSounds() {
    return (void*)((uintptr_t)this + 0x2e0);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::Hatch::get_OpenDoorSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x2d0);
}
void _Script_Playtime_Multiplayer::Hatch::set_Opened(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Script_Playtime_Multiplayer::Hatch::get_ImprisonedPlayer() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x228);
}
void* _Script_Playtime_Multiplayer::Hatch::get_OpeningTimeline() {
    return (void*)((uintptr_t)this + 0x230);
}
_Script_Engine::CurveFloat*& _Script_Playtime_Multiplayer::Hatch::get_RotationCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Hatch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.Hatch");
    return result;
}
void _Script_Playtime_Multiplayer::Hatch::PutPlayerIn(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
void _Script_Playtime_Multiplayer::Hatch::OpenHatch() {
    return;
}
void _Script_Playtime_Multiplayer::Hatch::OnComponentOverlap(_Script_Engine::Actor* Actor) {
    return;
}
void _Script_Playtime_Multiplayer::Hatch::KillPlayer() {
    return;
}
void _Script_Playtime_Multiplayer::Hatch::CloseHatch() {
    return;
}
void _Script_Playtime_Multiplayer::Hatch::BP_ShowOpenHatchIndicator(bool Shown) {
    return;
}
void _Script_Playtime_Multiplayer::Hatch::BP_SetHingeRotation(float Progress) {
    return;
}
void _Script_Playtime_Multiplayer::Hatch::BP_PlayerFuncImprisonedInWuggyHole(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
void _Script_Playtime_Multiplayer::Hatch::BP_MakeBoogieBot(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
