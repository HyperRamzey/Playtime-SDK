#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "CollagePuzzleDataAsset.hpp"
#include "CollagePuzzleTile.hpp"
void _Script_Playtime_Multiplayer::CollagePuzzleTile::TimelineEnded() {
    return;
}
bool _Script_Playtime_Multiplayer::CollagePuzzleTile::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e0 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::CollagePuzzleTile::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Playtime_Multiplayer::CollagePuzzleTile::get_MeshIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4e4);
}
void _Script_Playtime_Multiplayer::CollagePuzzleTile::Authority_ResetTile() {
    return;
}
void* _Script_Playtime_Multiplayer::CollagePuzzleTile::get_OnAnimationFinished() {
    return (void*)((uintptr_t)this + 0x4e8);
}
_Script_Engine::CurveFloat*& _Script_Playtime_Multiplayer::CollagePuzzleTile::get_RotationCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x598);
}
_Script_Engine::CurveFloat*& _Script_Playtime_Multiplayer::CollagePuzzleTile::get_InOutCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x590);
}
int32_t& _Script_Playtime_Multiplayer::CollagePuzzleTile::get_TextureIndex() {
    return *(int32_t*)((uintptr_t)this + 0x5a0);
}
void _Script_Playtime_Multiplayer::CollagePuzzleTile::OnRep_TextureIndex() {
    return;
}
int32_t& _Script_Playtime_Multiplayer::CollagePuzzleTile::get_CurrentRotation() {
    return *(int32_t*)((uintptr_t)this + 0x5a4);
}
int32_t& _Script_Playtime_Multiplayer::CollagePuzzleTile::get_DesiredRotation() {
    return *(int32_t*)((uintptr_t)this + 0x5a8);
}
_Script_Playtime_Multiplayer::CollagePuzzleDataAsset*& _Script_Playtime_Multiplayer::CollagePuzzleTile::get_DataAsset() {
    return *(_Script_Playtime_Multiplayer::CollagePuzzleDataAsset**)((uintptr_t)this + 0x5b0);
}
bool _Script_Playtime_Multiplayer::CollagePuzzleTile::IsCorrectPosition() {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::CollagePuzzleTile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.CollagePuzzleTile");
    return result;
}
void _Script_Playtime_Multiplayer::CollagePuzzleTile::TryStartRotation() {
    return;
}
void _Script_Playtime_Multiplayer::CollagePuzzleTile::Server_SetTextureIndex(int32_t Index) {
    return;
}
void _Script_Playtime_Multiplayer::CollagePuzzleTile::RotationProgress(float Value) {
    return;
}
void _Script_Playtime_Multiplayer::CollagePuzzleTile::OnRep_DesiredRotation() {
    return;
}
void _Script_Playtime_Multiplayer::CollagePuzzleTile::InOutProgress(float Value) {
    return;
}
bool _Script_Playtime_Multiplayer::CollagePuzzleTile::HasFailed() {
    return;
}
void _Script_Playtime_Multiplayer::CollagePuzzleTile::Authority_RandomizeTile() {
    return;
}
