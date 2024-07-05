#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingAssetBase.hpp"
namespace _Script_Engine {
struct PhysicsAsset;
}
namespace _Script_ClothingSystemRuntimeCommon {
struct ClothingAssetCustomData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeCommon {
#pragma pack(push, 1)
struct ClothingAssetCommon : public _Script_ClothingSystemRuntimeInterface::ClothingAssetBase {
    private: char pad_48[0xa8]; public:
    _Script_Engine::PhysicsAsset*& get_PhysicsAsset();
    void* get_ClothConfigs();
    void* get_LODData();
    void* get_LodMap();
    void* get_UsedBoneNames();
    void* get_UsedBoneIndices();
    int32_t& get_ReferenceBoneIndex();
    _Script_ClothingSystemRuntimeCommon::ClothingAssetCustomData*& get_CustomData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
