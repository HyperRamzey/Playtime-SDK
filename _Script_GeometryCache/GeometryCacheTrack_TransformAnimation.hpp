#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GeometryCacheTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCache {
struct GeometryCacheMeshData;
}
namespace _Script_GeometryCache {
#pragma pack(push, 1)
struct GeometryCacheTrack_TransformAnimation : public GeometryCacheTrack {
    private: char pad_58[0xb0]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetMesh(_Script_GeometryCache::GeometryCacheMeshData& NewMeshData);
}; // Size: 0x108
#pragma pack(pop)
}
