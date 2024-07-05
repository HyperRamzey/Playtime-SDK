#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_MRMesh {
struct MRMeshComponent;
}
namespace _Script_AugmentedReality {
struct ARTrackedGeometry;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x80]; public:
    void* get_NativeID();
    bool get_bUseDefaultReplication();
    void set_bUseDefaultReplication(bool value);
    _Script_Engine::MaterialInterface*& get_DefaultMeshMaterial();
    _Script_Engine::MaterialInterface*& get_DefaultWireframeMeshMaterial();
    _Script_MRMesh::MRMeshComponent*& get_MRMeshComponent();
    _Script_AugmentedReality::ARTrackedGeometry*& get_MyTrackedGeometry();
    static _Script_CoreUObject::Class* static_class();
    void UpdateVisualization();
    void SetNativeID(_Script_CoreUObject::Guid NativeID);
    void ReceiveRemove();
    void OnRep_Payload();
    _Script_MRMesh::MRMeshComponent* GetMRMesh();
}; // Size: 0x280
#pragma pack(pop)
}
