#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniInput : public _Script_CoreUObject::Object {
    private: char pad_28[0x1e0]; public:
    void* get_Name();
    void* get_Label();
    void* get_Type();
    void* get_PreviousType();
    int32_t& get_AssetNodeId();
    int32_t& get_InputNodeId();
    int32_t& get_InputIndex();
    int32_t& get_ParmId();
    bool get_bIsObjectPathParameter();
    void set_bIsObjectPathParameter(bool value);
    void* get_CreatedDataNodeIds();
    bool get_bHasChanged();
    void set_bHasChanged(bool value);
    bool get_bNeedsToTriggerUpdate();
    void set_bNeedsToTriggerUpdate(bool value);
    void* get_Help();
    void* get_KeepWorldTransform();
    bool get_bPackBeforeMerge();
    void set_bPackBeforeMerge(bool value);
    bool get_bImportAsReference();
    void set_bImportAsReference(bool value);
    bool get_bImportAsReferenceRotScaleEnabled();
    void set_bImportAsReferenceRotScaleEnabled(bool value);
    bool get_bExportLODs();
    void set_bExportLODs(bool value);
    bool get_bExportSockets();
    void set_bExportSockets(bool value);
    bool get_bExportColliders();
    void set_bExportColliders(bool value);
    bool get_bCookOnCurveChanged();
    void set_bCookOnCurveChanged(bool value);
    void* get_GeometryInputObjects();
    bool get_bStaticMeshChanged();
    void set_bStaticMeshChanged(bool value);
    void* get_AssetInputObjects();
    bool get_bInputAssetConnectedInHoudini();
    void set_bInputAssetConnectedInHoudini(bool value);
    void* get_CurveInputObjects();
    float& get_DefaultCurveOffset();
    bool get_bAddRotAndScaleAttributesOnCurves();
    void set_bAddRotAndScaleAttributesOnCurves(bool value);
    bool get_bUseLegacyInputCurves();
    void set_bUseLegacyInputCurves(bool value);
    void* get_LandscapeInputObjects();
    bool get_bLandscapeHasExportTypeChanged();
    void set_bLandscapeHasExportTypeChanged(bool value);
    void* get_WorldInputObjects();
    void* get_WorldInputBoundSelectorObjects();
    bool get_bIsWorldInputBoundSelector();
    void set_bIsWorldInputBoundSelector(bool value);
    bool get_bWorldInputBoundSelectorAutoUpdate();
    void set_bWorldInputBoundSelectorAutoUpdate(bool value);
    float& get_UnrealSplineResolution();
    void* get_SkeletalInputObjects();
    void* get_GeometryCollectionInputObjects();
    void* get_LandscapeSelectedComponents();
    void* get_InputNodesPendingDelete();
    void* get_LastInsertedInputs();
    void* get_LastUndoDeletedInputs();
    bool get_bUpdateInputLandscape();
    void set_bUpdateInputLandscape(bool value);
    void* get_LandscapeExportType();
    bool get_bLandscapeExportSelectionOnly();
    void set_bLandscapeExportSelectionOnly(bool value);
    bool get_bLandscapeAutoSelectComponent();
    void set_bLandscapeAutoSelectComponent(bool value);
    bool get_bLandscapeExportMaterials();
    void set_bLandscapeExportMaterials(bool value);
    bool get_bLandscapeExportLighting();
    void set_bLandscapeExportLighting(bool value);
    bool get_bLandscapeExportNormalizedUVs();
    void set_bLandscapeExportNormalizedUVs(bool value);
    bool get_bLandscapeExportTileUVs();
    void set_bLandscapeExportTileUVs(bool value);
    bool get_bCanDeleteHoudiniNodes();
    void set_bCanDeleteHoudiniNodes(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x208
#pragma pack(pop)
}
