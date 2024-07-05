#include "..\FUObjectArray.hpp"
#include "BP_WebProjectile_C.hpp"
#include "..\_Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy\BP_NetworkMommy_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::ParticleSystemComponent*& _Game_Player_Mommy_BP_WebProjectile::BP_WebProjectile_C::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x228);
}
void* _Game_Player_Mommy_BP_WebProjectile::BP_WebProjectile_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_Mommy_BP_WebProjectile::BP_WebProjectile_C::get_Sphere() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Game_Player_Mommy_BP_WebProjectile::BP_WebProjectile_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Mommy/BP_WebProjectile.BP_WebProjectile_C");
    return result;
}
_Script_Engine::SceneComponent*& _Game_Player_Mommy_BP_WebProjectile::BP_WebProjectile_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
float& _Game_Player_Mommy_BP_WebProjectile::BP_WebProjectile_C::get_Speed() {
    return *(float*)((uintptr_t)this + 0x248);
}
_Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C*& _Game_Player_Mommy_BP_WebProjectile::BP_WebProjectile_C::get_Spider() {
    return *(_Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C**)((uintptr_t)this + 0x240);
}
_Script_CoreUObject::Vector _Game_Player_Mommy_BP_WebProjectile::BP_WebProjectile_C::GetLocationOverTime(float DeltaTime) {
    return;
}
void _Game_Player_Mommy_BP_WebProjectile::BP_WebProjectile_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Player_Mommy_BP_WebProjectile::BP_WebProjectile_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Player_Mommy_BP_WebProjectile::BP_WebProjectile_C::ExecuteUbergraph_BP_WebProjectile(int32_t EntryPoint) {
    return;
}
