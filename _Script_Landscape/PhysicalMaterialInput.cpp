#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PhysicalMaterialInput.hpp"
#include "..\_Script_PhysicsCore\PhysicalMaterial.hpp"
_Script_PhysicsCore::PhysicalMaterial*& _Script_Landscape::PhysicalMaterialInput::get_PhysicalMaterial() {
    return *(_Script_PhysicsCore::PhysicalMaterial**)((uintptr_t)this + 0x0);
}
void* _Script_Landscape::PhysicalMaterialInput::get_Input() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Landscape::PhysicalMaterialInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.PhysicalMaterialInput");
    return result;
}
