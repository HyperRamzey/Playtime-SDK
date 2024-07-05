#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_MRMesh {
struct MRMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeap {
struct MagicLeapTrackingMeshInfo;
}
namespace _Script_MagicLeap {
#pragma pack(push, 1)
struct MagicLeapMeshTrackerComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x90]; public:
    void* get_OnMeshTrackerUpdated();
    bool get_ScanWorld();
    void set_ScanWorld(bool value);
    void* get_MeshType();
    _Script_Engine::BoxComponent*& get_BoundingVolume();
    void* get_LevelOfDetail();
    float& get_PerimeterOfGapsToFill();
    bool get_Planarize();
    void set_Planarize(bool value);
    float& get_DisconnectedSectionArea();
    bool get_RequestNormals();
    void set_RequestNormals(bool value);
    bool get_RequestVertexConfidence();
    void set_RequestVertexConfidence(bool value);
    void* get_VertexColorMode();
    void* get_BlockVertexColors();
    void* get_VertexColorFromConfidenceZero();
    void* get_VertexColorFromConfidenceOne();
    bool get_RemoveOverlappingTriangles();
    void set_RemoveOverlappingTriangles(bool value);
    _Script_MRMesh::MRMeshComponent*& get_MRMesh();
    int32_t& get_BricksPerFrame();
    static _Script_CoreUObject::Class* static_class();
    void SelectMeshBlocks(_Script_MagicLeap::MagicLeapTrackingMeshInfo& NewMeshInfo, void*& RequestedMesh);
    int32_t GetNumQueuedBlockUpdates();
    void DisconnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr);
    void DisconnectBlockSelector();
    void ConnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr);
    void ConnectBlockSelector(void* Selector);
}; // Size: 0x290
#pragma pack(pop)
}
