#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "RopeComponent.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::RopeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.RopeComponent");
    return result;
}
float& _Script_Playtime_Multiplayer::RopeComponent::get_DistancePerSplineMeshComponent() {
    return *(float*)((uintptr_t)this + 0x548);
}
void* _Script_Playtime_Multiplayer::RopeComponent::get_SlackSpringState() {
    return (void*)((uintptr_t)this + 0x570);
}
void* _Script_Playtime_Multiplayer::RopeComponent::get_SplineMeshes() {
    return (void*)((uintptr_t)this + 0x550);
}
_Script_Engine::StaticMesh*& _Script_Playtime_Multiplayer::RopeComponent::get_StaticMeshToUse() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x560);
}
void _Script_Playtime_Multiplayer::RopeComponent::SetSplineMeshesHiddenInGame(bool Hidden) {
    return;
}
_Script_Engine::MaterialInterface*& _Script_Playtime_Multiplayer::RopeComponent::get_MaterialToUse() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x568);
}
void _Script_Playtime_Multiplayer::RopeComponent::MakeRope(_Script_Engine::SceneComponent* AttachComponent, _Script_CoreUObject::Vector RopeStart, _Script_CoreUObject::Vector RopeEnd, bool IsPulling, bool isIdle) {
    return;
}
