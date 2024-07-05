#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_MRMesh {
struct MRMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MRMesh {
#pragma pack(push, 1)
struct MockDataMeshTrackerComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x70]; public:
    void* get_OnMeshTrackerUpdated();
    bool get_ScanWorld();
    void set_ScanWorld(bool value);
    bool get_RequestNormals();
    void set_RequestNormals(bool value);
    bool get_RequestVertexConfidence();
    void set_RequestVertexConfidence(bool value);
    void* get_VertexColorMode();
    void* get_BlockVertexColors();
    void* get_VertexColorFromConfidenceZero();
    void* get_VertexColorFromConfidenceOne();
    float& get_UpdateInterval();
    _Script_MRMesh::MRMeshComponent*& get_MRMesh();
    static _Script_CoreUObject::Class* static_class();
    void DisconnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr);
    void ConnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr);
}; // Size: 0x270
#pragma pack(pop)
}
