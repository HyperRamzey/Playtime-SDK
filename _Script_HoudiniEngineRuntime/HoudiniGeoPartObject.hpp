#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniGeoPartObject {
    private: char pad_0[0x230]; public:
    int32_t& get_AssetId();
    void* get_AssetName();
    int32_t& get_ObjectId();
    void* get_ObjectName();
    int32_t& get_GeoId();
    int32_t& get_PartId();
    void* get_PartName();
    bool get_bHasCustomPartName();
    void set_bHasCustomPartName(bool value);
    void* get_SplitGroups();
    void* get_TransformMatrix();
    void* get_NodePath();
    void* get_Type();
    void* get_InstancerType();
    void* get_VolumeName();
    bool get_bHasEditLayers();
    void set_bHasEditLayers(bool value);
    void* get_VolumeLayerName();
    int32_t& get_VolumeTileIndex();
    bool get_bIsVisible();
    void set_bIsVisible(bool value);
    bool get_bIsEditable();
    void set_bIsEditable(bool value);
    bool get_bIsTemplated();
    void set_bIsTemplated(bool value);
    bool get_bIsInstanced();
    void set_bIsInstanced(bool value);
    bool get_bHasGeoChanged();
    void set_bHasGeoChanged(bool value);
    bool get_bHasPartChanged();
    void set_bHasPartChanged(bool value);
    bool get_bHasTransformChanged();
    void set_bHasTransformChanged(bool value);
    bool get_bHasMaterialsChanged();
    void set_bHasMaterialsChanged(bool value);
    void* get_AllMeshSockets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x230
#pragma pack(pop)
}
