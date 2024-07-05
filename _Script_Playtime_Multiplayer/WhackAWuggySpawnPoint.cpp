#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "ANetworkCharacter.hpp"
#include "HandMagnetComponent.hpp"
#include "WhackAWuggySpawnPoint.hpp"
void _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::UpdateOldestPlayer(_Script_Playtime_Multiplayer::ANetworkCharacter* Character) {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.WhackAWuggySpawnPoint");
    return result;
}
void _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::BP_Server_WuggyKillPlayer() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::get_Wuggy() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x220);
}
void _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::set_bWuggyIsSpawned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x235 + 0);
    *(uint8_t*)((uintptr_t)this + 0x235 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::get_bWuggyIsSpawned() {
    return (*(uint8_t*)((uintptr_t)this + 0x235 + 0)) & 1 != 0;
}
_Script_Playtime_Multiplayer::HandMagnetComponent*& _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::get_WuggyHandMagnet() {
    return *(_Script_Playtime_Multiplayer::HandMagnetComponent**)((uintptr_t)this + 0x228);
}
float& _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::get_MaxWuggyLivingTime() {
    return *(float*)((uintptr_t)this + 0x230);
}
bool _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::PseudoSpawnWuggy() {
    return;
}
void _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::PseudoDestroyWuggy() {
    return;
}
void _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::PseudoConstruct(_Script_Playtime_Multiplayer::HandMagnetComponent* In_WuggyHandMagnet, _Script_Engine::SkeletalMeshComponent* In_Wuggy) {
    return;
}
void _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::PrePseudoDestroyWuggy() {
    return;
}
void _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::OnRep_WuggyIsSpawned() {
    return;
}
void _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::BP_WuggySpawned() {
    return;
}
void _Script_Playtime_Multiplayer::WhackAWuggySpawnPoint::BP_OnRep_WuggyIsSpawned() {
    return;
}
