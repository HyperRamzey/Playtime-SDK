#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "SabotageDef.hpp"
_Script_Engine::Texture2D*& _Script_Playtime_Multiplayer::SabotageDef::get_Icon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x50);
}
float& _Script_Playtime_Multiplayer::SabotageDef::get_LevelTwo() {
    return *(float*)((uintptr_t)this + 0x70);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::SabotageDef::get_ActivationSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x48);
}
void* _Script_Playtime_Multiplayer::SabotageDef::get_Description() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Playtime_Multiplayer::SabotageDef::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Playtime_Multiplayer::SabotageDef::get_SplashDescription() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_Playtime_Multiplayer::SabotageDef::get_Cooldown() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_Playtime_Multiplayer::SabotageDef::get_ActorToSabotage() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Playtime_Multiplayer::SabotageDef::get_FunctionName() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Playtime_Multiplayer::SabotageDef::get_InterfaceToSabotage() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_Playtime_Multiplayer::SabotageDef::get_bShouldMulticast() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::SabotageDef::set_bShouldMulticast(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Playtime_Multiplayer::SabotageDef::get_LevelThreePrice() {
    return *(int32_t*)((uintptr_t)this + 0xb8);
}
bool _Script_Playtime_Multiplayer::SabotageDef::get_bUseDuration() {
    return (*(uint8_t*)((uintptr_t)this + 0x69 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::SabotageDef::set_bUseDuration(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x69 + 0);
    *(uint8_t*)((uintptr_t)this + 0x69 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::SabotageDef::get_LevelOne() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_Playtime_Multiplayer::SabotageDef::get_LevelThree() {
    return *(float*)((uintptr_t)this + 0x74);
}
bool _Script_Playtime_Multiplayer::SabotageDef::get_bLevelIsCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::SabotageDef::set_bLevelIsCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::SabotageDef::get_LevelOneDescription() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Playtime_Multiplayer::SabotageDef::get_LevelTwoDescription() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Playtime_Multiplayer::SabotageDef::get_LevelThreeDescription() {
    return (void*)((uintptr_t)this + 0xa0);
}
int32_t& _Script_Playtime_Multiplayer::SabotageDef::get_LevelOnePrice() {
    return *(int32_t*)((uintptr_t)this + 0xb0);
}
int32_t& _Script_Playtime_Multiplayer::SabotageDef::get_LevelTwoPrice() {
    return *(int32_t*)((uintptr_t)this + 0xb4);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::SabotageDef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.SabotageDef");
    return result;
}
