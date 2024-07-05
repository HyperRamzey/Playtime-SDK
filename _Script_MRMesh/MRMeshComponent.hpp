#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MRMesh {
#pragma pack(push, 1)
struct MRMeshComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_450[0xc0]; public:
    _Script_Engine::MaterialInterface*& get_Material();
    _Script_Engine::MaterialInterface*& get_WireframeMaterial();
    bool get_bCreateMeshProxySections();
    void set_bCreateMeshProxySections(bool value);
    bool get_bUpdateNavMeshOnMeshUpdate();
    void set_bUpdateNavMeshOnMeshUpdate(bool value);
    bool get_bNeverCreateCollisionMesh();
    void set_bNeverCreateCollisionMesh(bool value);
    _Script_Engine::BodySetup*& get_CachedBodySetup();
    void* get_BodySetups();
    static _Script_CoreUObject::Class* static_class();
    void SetWireframeMaterial(_Script_Engine::MaterialInterface* InMaterial);
    void SetWireframeColor(_Script_CoreUObject::LinearColor& InColor);
    void SetUseWireframe(bool bUseWireframe);
    void SetEnableMeshOcclusion(bool bEnable);
    bool IsConnected();
    _Script_CoreUObject::LinearColor GetWireframeColor();
    bool GetUseWireframe();
    bool GetEnableMeshOcclusion();
    void ForceNavMeshUpdate();
    void Clear();
}; // Size: 0x510
#pragma pack(pop)
}
