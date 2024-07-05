#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "ControlPointMeshActor.hpp"
#include "ControlPointMeshComponent.hpp"
_Script_Landscape::ControlPointMeshComponent*& _Script_Landscape::ControlPointMeshActor::get_ControlPointMeshComponent() {
    return *(_Script_Landscape::ControlPointMeshComponent**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_Landscape::ControlPointMeshActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.ControlPointMeshActor");
    return result;
}
