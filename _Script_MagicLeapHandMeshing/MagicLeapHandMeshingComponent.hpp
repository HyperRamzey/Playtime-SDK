#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MRMesh {
struct MRMeshComponent;
}
namespace _Script_MagicLeapHandMeshing {
#pragma pack(push, 1)
struct MagicLeapHandMeshingComponent : public _Script_Engine::ActorComponent {
    static _Script_CoreUObject::Class* static_class();
    void SetUseWeightedNormals(bool bInUseWeightedNormals);
    bool DisconnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr);
    bool ConnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr);
}; // Size: 0xb0
#pragma pack(pop)
}
