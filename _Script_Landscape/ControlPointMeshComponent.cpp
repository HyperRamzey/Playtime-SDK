#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "ControlPointMeshComponent.hpp"
float& _Script_Landscape::ControlPointMeshComponent::get_VirtualTextureMainPassMaxDrawDistance() {
    return *(float*)((uintptr_t)this + 0x4e0);
}
_Script_CoreUObject::Class* _Script_Landscape::ControlPointMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.ControlPointMeshComponent");
    return result;
}
