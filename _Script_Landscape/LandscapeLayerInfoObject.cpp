#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LandscapeLayerInfoObject.hpp"
#include "..\_Script_PhysicsCore\PhysicalMaterial.hpp"
void* _Script_Landscape::LandscapeLayerInfoObject::get_LayerName() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_Landscape::LandscapeLayerInfoObject::get_Hardness() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_PhysicsCore::PhysicalMaterial*& _Script_Landscape::LandscapeLayerInfoObject::get_PhysMaterial() {
    return *(_Script_PhysicsCore::PhysicalMaterial**)((uintptr_t)this + 0x30);
}
void* _Script_Landscape::LandscapeLayerInfoObject::get_LayerUsageDebugColor() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeLayerInfoObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeLayerInfoObject");
    return result;
}
