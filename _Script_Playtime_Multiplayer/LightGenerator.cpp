#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "LightGenerator.hpp"
void* _Script_Playtime_Multiplayer::LightGenerator::get_CachedLightComponents() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_Playtime_Multiplayer::LightGenerator::get_CachedLightGenerators() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::LightGenerator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.LightGenerator");
    return result;
}
void _Script_Playtime_Multiplayer::LightGenerator::FixGenerator() {
    return;
}
void _Script_Playtime_Multiplayer::LightGenerator::BrakeGenerator() {
    return;
}
