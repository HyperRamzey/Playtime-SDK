#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TireConfigMaterialFriction.hpp"
#include "..\_Script_PhysicsCore\PhysicalMaterial.hpp"
_Script_PhysicsCore::PhysicalMaterial*& _Script_PhysXVehicles::TireConfigMaterialFriction::get_PhysicalMaterial() {
    return *(_Script_PhysicsCore::PhysicalMaterial**)((uintptr_t)this + 0x0);
}
float& _Script_PhysXVehicles::TireConfigMaterialFriction::get_FrictionScale() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::TireConfigMaterialFriction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PhysXVehicles.TireConfigMaterialFriction");
    return result;
}
