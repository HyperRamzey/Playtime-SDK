#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "NetworkRope.hpp"
float& _Script_Playtime_Multiplayer::NetworkRope::get_LerpToPull() {
    return *(float*)((uintptr_t)this + 0x230);
}
void* _Script_Playtime_Multiplayer::NetworkRope::get_SlackSpringState() {
    return (void*)((uintptr_t)this + 0x220);
}
void _Script_Playtime_Multiplayer::NetworkRope::set_IsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x234 + 0);
    *(uint8_t*)((uintptr_t)this + 0x234 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::NetworkRope::get_SlowLerpToIdle() {
    return *(float*)((uintptr_t)this + 0x228);
}
float& _Script_Playtime_Multiplayer::NetworkRope::get_LerpToIdle() {
    return *(float*)((uintptr_t)this + 0x22c);
}
bool _Script_Playtime_Multiplayer::NetworkRope::get_IsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x234 + 0)) & 1 != 0;
}
_Script_Engine::Actor*& _Script_Playtime_Multiplayer::NetworkRope::get_Hand() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x238);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::NetworkRope::get_StartScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::NetworkRope::get_EndScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::SplineComponent*& _Script_Playtime_Multiplayer::NetworkRope::get_Spline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x250);
}
void* _Script_Playtime_Multiplayer::NetworkRope::get_SplineMeshes() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_Engine::StaticMesh*& _Script_Playtime_Multiplayer::NetworkRope::get_StaticMeshToUse() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x268);
}
_Script_Engine::MaterialInterface*& _Script_Playtime_Multiplayer::NetworkRope::get_MaterialToUse() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x270);
}
float& _Script_Playtime_Multiplayer::NetworkRope::get_DistancePerSplineMeshComponent() {
    return *(float*)((uintptr_t)this + 0x278);
}
bool _Script_Playtime_Multiplayer::NetworkRope::get_RetractMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x27c + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::NetworkRope::set_RetractMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x27c + 0);
    *(uint8_t*)((uintptr_t)this + 0x27c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::NetworkRope::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.NetworkRope");
    return result;
}
void _Script_Playtime_Multiplayer::NetworkRope::MakeSimpleRope(_Script_Engine::SceneComponent* StartComponent, _Script_Engine::SceneComponent* EndComponent) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkRope::EnterRetractMode() {
    return;
}
