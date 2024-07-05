#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MRMesh {
struct MRMeshComponent;
}
namespace _Script_MagicLeapHandMeshing {
#pragma pack(push, 1)
struct MagicLeapHandMeshingFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool DisconnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr);
    bool DestroyClient();
    bool CreateClient();
    bool ConnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr);
}; // Size: 0x28
#pragma pack(pop)
}
