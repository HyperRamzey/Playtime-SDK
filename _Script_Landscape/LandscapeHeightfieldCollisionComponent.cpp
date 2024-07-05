#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "LandscapeComponent.hpp"
#include "LandscapeHeightfieldCollisionComponent.hpp"
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_ComponentLayerInfos() {
    return (void*)((uintptr_t)this + 0x450);
}
int32_t& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_SectionBaseX() {
    return *(int32_t*)((uintptr_t)this + 0x460);
}
int32_t& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_SimpleCollisionSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0x470);
}
int32_t& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CollisionSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0x468);
}
int32_t& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_SectionBaseY() {
    return *(int32_t*)((uintptr_t)this + 0x464);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CollisionQuadFlags() {
    return (void*)((uintptr_t)this + 0x478);
}
float& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CollisionScale() {
    return *(float*)((uintptr_t)this + 0x46c);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_HeightfieldGuid() {
    return (void*)((uintptr_t)this + 0x488);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CachedLocalBox() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_RenderComponent() {
    return (void*)((uintptr_t)this + 0x4b4);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CookedPhysicalMaterials() {
    return (void*)((uintptr_t)this + 0x4e0);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeHeightfieldCollisionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeHeightfieldCollisionComponent");
    return result;
}
_Script_Landscape::LandscapeComponent* _Script_Landscape::LandscapeHeightfieldCollisionComponent::GetRenderComponent() {
    return;
}
