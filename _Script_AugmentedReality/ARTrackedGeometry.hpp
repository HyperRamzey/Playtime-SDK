#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
namespace _Script_MRMesh {
struct MRMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARTrackedGeometry : public _Script_CoreUObject::Object {
    private: char pad_28[0xd8]; public:
    void* get_UniqueId();
    void* get_LocalToTrackingTransform();
    void* get_LocalToAlignedTrackingTransform();
    void* get_TrackingState();
    _Script_MRMesh::MRMeshComponent*& get_UnderlyingMesh();
    void* get_ObjectClassification();
    void* get_SpatialMeshUsageFlags();
    int32_t& get_LastUpdateFrameNumber();
    void* get_DebugName();
    static _Script_CoreUObject::Class* static_class();
    bool IsTracked();
    bool HasSpatialMeshUsageFlag(void* InFlag);
    _Script_MRMesh::MRMeshComponent* GetUnderlyingMesh();
    void* GetTrackingState();
    void* GetObjectClassification();
    void* GetName();
    _Script_CoreUObject::Transform GetLocalToWorldTransform();
    _Script_CoreUObject::Transform GetLocalToTrackingTransform();
    float GetLastUpdateTimestamp();
    int32_t GetLastUpdateFrameNumber();
    void* GetDebugName();
}; // Size: 0x100
#pragma pack(pop)
}
