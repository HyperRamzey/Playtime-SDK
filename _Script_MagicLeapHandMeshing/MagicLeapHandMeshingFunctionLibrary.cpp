#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_MRMesh\MRMeshComponent.hpp"
#include "MagicLeapHandMeshingFunctionLibrary.hpp"
bool _Script_MagicLeapHandMeshing::MagicLeapHandMeshingFunctionLibrary::CreateClient() {
    return;
}
_Script_CoreUObject::Class* _Script_MagicLeapHandMeshing::MagicLeapHandMeshingFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary");
    return result;
}
bool _Script_MagicLeapHandMeshing::MagicLeapHandMeshingFunctionLibrary::ConnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr) {
    return;
}
bool _Script_MagicLeapHandMeshing::MagicLeapHandMeshingFunctionLibrary::DisconnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr) {
    return;
}
bool _Script_MagicLeapHandMeshing::MagicLeapHandMeshingFunctionLibrary::DestroyClient() {
    return;
}
