#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_NinjaCharacter\NinjaCharacter.hpp"
#include "CustomNinjaCharacter.hpp"
#include "CustomPlayerController.hpp"
#include "MommyCameraPawn.hpp"
bool _Script_Playtime_Multiplayer::CustomNinjaCharacter::get_bUseActorRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x540 + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::CustomNinjaCharacter::get_bTouchingWall() {
    return (*(uint8_t*)((uintptr_t)this + 0x518 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::CustomNinjaCharacter::get_MommyCameraPawnClass() {
    return (void*)((uintptr_t)this + 0x538);
}
void _Script_Playtime_Multiplayer::CustomNinjaCharacter::set_bTouchingWall(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x518 + 0);
    *(uint8_t*)((uintptr_t)this + 0x518 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::CameraComponent*& _Script_Playtime_Multiplayer::CustomNinjaCharacter::get_CameraComp() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x520);
}
_Script_Playtime_Multiplayer::CustomPlayerController*& _Script_Playtime_Multiplayer::CustomNinjaCharacter::get_CPC() {
    return *(_Script_Playtime_Multiplayer::CustomPlayerController**)((uintptr_t)this + 0x528);
}
_Script_Playtime_Multiplayer::MommyCameraPawn*& _Script_Playtime_Multiplayer::CustomNinjaCharacter::get_MommyCamera() {
    return *(_Script_Playtime_Multiplayer::MommyCameraPawn**)((uintptr_t)this + 0x530);
}
void _Script_Playtime_Multiplayer::CustomNinjaCharacter::set_bUseActorRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x540 + 0);
    *(uint8_t*)((uintptr_t)this + 0x540 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::CustomNinjaCharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.CustomNinjaCharacter");
    return result;
}
void _Script_Playtime_Multiplayer::CustomNinjaCharacter::SpawnMommyCamera() {
    return;
}
void _Script_Playtime_Multiplayer::CustomNinjaCharacter::OnTouchingWallChanged() {
    return;
}
void _Script_Playtime_Multiplayer::CustomNinjaCharacter::OnRep_TouchingWall() {
    return;
}
void _Script_Playtime_Multiplayer::CustomNinjaCharacter::MoveRight(float Val) {
    return;
}
void _Script_Playtime_Multiplayer::CustomNinjaCharacter::MoveForward(float Val) {
    return;
}
