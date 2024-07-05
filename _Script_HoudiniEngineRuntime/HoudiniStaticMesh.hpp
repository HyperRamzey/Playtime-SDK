#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Color;
}
namespace _Script_Engine {
struct StaticMaterial;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_CoreUObject {
struct IntVector;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniStaticMesh : public _Script_CoreUObject::Object {
    private: char pad_28[0xa0]; public:
    bool get_bHasNormals();
    void set_bHasNormals(bool value);
    bool get_bHasTangents();
    void set_bHasTangents(bool value);
    bool get_bHasColors();
    void set_bHasColors(bool value);
    void* get_NumUVLayers();
    bool get_bHasPerFaceMaterials();
    void set_bHasPerFaceMaterials(bool value);
    void* get_VertexPositions();
    void* get_TriangleIndices();
    void* get_VertexInstanceColors();
    void* get_VertexInstanceNormals();
    void* get_VertexInstanceUTangents();
    void* get_VertexInstanceVTangents();
    void* get_VertexInstanceUVs();
    void* get_MaterialIDsPerTriangle();
    void* get_StaticMaterials();
    static _Script_CoreUObject::Class* static_class();
    void SetVertexPosition(void* InVertexIndex, _Script_CoreUObject::Vector& InPosition);
    void SetTriangleVertexVTangent(void* InTriangleIndex, void* InTriangleVertexIndex, _Script_CoreUObject::Vector& InVTangent);
    void SetTriangleVertexUV(void* InTriangleIndex, void* InTriangleVertexIndex, void* InUVLayer, _Script_CoreUObject::Vector2D& InUV);
    void SetTriangleVertexUTangent(void* InTriangleIndex, void* InTriangleVertexIndex, _Script_CoreUObject::Vector& InUTangent);
    void SetTriangleVertexNormal(void* InTriangleIndex, void* InTriangleVertexIndex, _Script_CoreUObject::Vector& InNormal);
    void SetTriangleVertexIndices(void* InTriangleIndex, _Script_CoreUObject::IntVector& InTriangleVertexIndices);
    void SetTriangleVertexColor(void* InTriangleIndex, void* InTriangleVertexIndex, _Script_CoreUObject::Color& InColor);
    void SetTriangleMaterialID(void* InTriangleIndex, int32_t InMaterialID);
    void SetStaticMaterial(void* InMaterialIndex, _Script_Engine::StaticMaterial& InStaticMaterial);
    void SetNumUVLayers(void* InNumUVLayers);
    void SetNumStaticMaterials(void* InNumStaticMaterials);
    void SetHasTangents(bool bInHasTangents);
    void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);
    void SetHasNormals(bool bInHasNormals);
    void SetHasColors(bool bInHasColors);
    void Optimize();
    bool IsValid(bool bInSkipVertexIndicesCheck);
    void Initialize(void* InNumVertices, void* InNumTriangles, void* InNumUVLayers, void* InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);
    bool HasTangents();
    bool HasPerFaceMaterials();
    bool HasNormals();
    bool HasColors();
    void* GetVertexPositions();
    void* GetVertexInstanceVTangents();
    void* GetVertexInstanceUVs();
    void* GetVertexInstanceUTangents();
    void* GetVertexInstanceNormals();
    void* GetVertexInstanceColors();
    void* GetTriangleIndices();
    void* GetStaticMaterials();
    void* GetNumVertices();
    void* GetNumVertexInstances();
    void* GetNumUVLayers();
    void* GetNumTriangles();
    void* GetNumStaticMaterials();
    int32_t GetMaterialIndex(void* InMaterialSlotName);
    void* GetMaterialIDsPerTriangle();
    _Script_Engine::MaterialInterface* GetMaterial(int32_t InMaterialIndex);
    void CalculateTangents(bool bInComputeWeightedNormals);
    void CalculateNormals(bool bInComputeWeightedNormals);
    _Script_CoreUObject::Box CalcBounds();
    void* AddStaticMaterial(_Script_Engine::StaticMaterial& InStaticMaterial);
}; // Size: 0xc8
#pragma pack(pop)
}
