#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "MagicLeapPlanesComponent.hpp"
void* _Script_MagicLeapPlanes::MagicLeapPlanesComponent::get_QueryFlags() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_MagicLeapPlanes::MagicLeapPlanesComponent::get_QueryType() {
    return (void*)((uintptr_t)this + 0x21c);
}
float& _Script_MagicLeapPlanes::MagicLeapPlanesComponent::get_MinPlaneArea() {
    return *(float*)((uintptr_t)this + 0x218);
}
_Script_Engine::BoxComponent*& _Script_MagicLeapPlanes::MagicLeapPlanesComponent::get_SearchVolume() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x208);
}
float& _Script_MagicLeapPlanes::MagicLeapPlanesComponent::get_MinHolePerimeter() {
    return *(float*)((uintptr_t)this + 0x214);
}
int32_t& _Script_MagicLeapPlanes::MagicLeapPlanesComponent::get_MaxResults() {
    return *(int32_t*)((uintptr_t)this + 0x210);
}
float& _Script_MagicLeapPlanes::MagicLeapPlanesComponent::get_SimilarityThreshold() {
    return *(float*)((uintptr_t)this + 0x220);
}
void* _Script_MagicLeapPlanes::MagicLeapPlanesComponent::get_OnPlanesQueryResult() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_MagicLeapPlanes::MagicLeapPlanesComponent::get_OnPersistentPlanesQueryResult() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Script_MagicLeapPlanes::MagicLeapPlanesComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapPlanes.MagicLeapPlanesComponent");
    return result;
}
bool _Script_MagicLeapPlanes::MagicLeapPlanesComponent::RequestPlanesAsync() {
    return;
}
