#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniInputStaticMesh.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniInputFoliageType_InstancedStaticMesh : public HoudiniInputStaticMesh {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
