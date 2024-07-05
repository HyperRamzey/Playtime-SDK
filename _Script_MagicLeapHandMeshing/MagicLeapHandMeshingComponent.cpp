#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_MRMesh\MRMeshComponent.hpp"
#include "MagicLeapHandMeshingComponent.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapHandMeshing::MagicLeapHandMeshingComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent");
    return result;
}
void _Script_MagicLeapHandMeshing::MagicLeapHandMeshingComponent::SetUseWeightedNormals(bool bInUseWeightedNormals) {
    return;
}
bool _Script_MagicLeapHandMeshing::MagicLeapHandMeshingComponent::DisconnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr) {
    return;
}
bool _Script_MagicLeapHandMeshing::MagicLeapHandMeshingComponent::ConnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr) {
    return;
}
