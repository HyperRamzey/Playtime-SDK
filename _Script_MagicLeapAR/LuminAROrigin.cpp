#include "..\FUObjectArray.hpp"
#include "..\_Script_AugmentedReality\AROriginActor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_MRMesh\MRMeshComponent.hpp"
#include "LuminAROrigin.hpp"
_Script_MRMesh::MRMeshComponent*& _Script_MagicLeapAR::LuminAROrigin::get_MRMeshComponent() {
    return *(_Script_MRMesh::MRMeshComponent**)((uintptr_t)this + 0x220);
}
_Script_Engine::MaterialInterface*& _Script_MagicLeapAR::LuminAROrigin::get_PlaneSurfaceMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x228);
}
_Script_Engine::MaterialInterface*& _Script_MagicLeapAR::LuminAROrigin::get_WireframeMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Script_MagicLeapAR::LuminAROrigin::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapAR.LuminAROrigin");
    return result;
}
