#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AugmentedReality\AROriginActor.hpp"
namespace _Script_MRMesh {
struct MRMeshComponent;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapAR {
#pragma pack(push, 1)
struct LuminAROrigin : public _Script_AugmentedReality::AROriginActor {
    private: char pad_220[0xc0]; public:
    _Script_MRMesh::MRMeshComponent*& get_MRMeshComponent();
    _Script_Engine::MaterialInterface*& get_PlaneSurfaceMaterial();
    _Script_Engine::MaterialInterface*& get_WireframeMaterial();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2e0
#pragma pack(pop)
}
