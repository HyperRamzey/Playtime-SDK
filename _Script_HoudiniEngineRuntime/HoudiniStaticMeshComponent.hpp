#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_HoudiniEngineRuntime {
struct HoudiniStaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniStaticMeshComponent : public _Script_Engine::MeshComponent {
    private: char pad_480[0x20]; public:
    _Script_HoudiniEngineRuntime::HoudiniStaticMesh*& get_Mesh();
    void* get_LocalBounds();
    bool get_bHoudiniIconVisible();
    void set_bHoudiniIconVisible(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetMesh(_Script_HoudiniEngineRuntime::HoudiniStaticMesh* InMesh);
    void SetHoudiniIconVisible(bool bInHoudiniIconVisible);
    void NotifyMeshUpdated();
    bool IsHoudiniIconVisible();
    _Script_HoudiniEngineRuntime::HoudiniStaticMesh* GetMesh();
}; // Size: 0x4a0
#pragma pack(pop)
}
