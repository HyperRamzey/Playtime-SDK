#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_HoudiniEngineRuntime {
struct HoudiniAsset;
}
namespace _Script_HoudiniEngineRuntime {
struct HoudiniPDGAssetLink;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniAssetComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_450[0x4d0]; public:
    _Script_HoudiniEngineRuntime::HoudiniAsset*& get_HoudiniAsset();
    bool get_bCookOnParameterChange();
    void set_bCookOnParameterChange(bool value);
    bool get_bUploadTransformsToHoudiniEngine();
    void set_bUploadTransformsToHoudiniEngine(bool value);
    bool get_bCookOnTransformChange();
    void set_bCookOnTransformChange(bool value);
    bool get_bCookOnAssetInputCook();
    void set_bCookOnAssetInputCook(bool value);
    bool get_bOutputless();
    void set_bOutputless(bool value);
    bool get_bOutputTemplateGeos();
    void set_bOutputTemplateGeos(bool value);
    bool get_bUseOutputNodes();
    void set_bUseOutputNodes(bool value);
    void* get_TemporaryCookFolder();
    void* get_BakeFolder();
    void* get_StaticMeshMethod();
    void* get_StaticMeshGenerationProperties();
    void* get_StaticMeshBuildSettings();
    bool get_bOverrideGlobalProxyStaticMeshSettings();
    void set_bOverrideGlobalProxyStaticMeshSettings(bool value);
    bool get_bEnableProxyStaticMeshOverride();
    void set_bEnableProxyStaticMeshOverride(bool value);
    bool get_bEnableProxyStaticMeshRefinementByTimerOverride();
    void set_bEnableProxyStaticMeshRefinementByTimerOverride(bool value);
    float& get_ProxyMeshAutoRefineTimeoutSecondsOverride();
    bool get_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride();
    void set_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride(bool value);
    bool get_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride();
    void set_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride(bool value);
    int32_t& get_AssetId();
    void* get_NodeIdsToCook();
    void* get_OutputNodeCookCounts();
    void* get_DownstreamHoudiniAssets();
    void* get_ComponentGUID();
    void* get_HapiGUID();
    void* get_HapiAssetName();
    void* get_AssetState();
    void* get_DebugLastAssetState();
    void* get_AssetStateResult();
    void* get_LastComponentTransform();
    void* get_SubAssetIndex();
    int32_t& get_AssetCookCount();
    bool get_bHasBeenLoaded();
    void set_bHasBeenLoaded(bool value);
    bool get_bHasBeenDuplicated();
    void set_bHasBeenDuplicated(bool value);
    bool get_bPendingDelete();
    void set_bPendingDelete(bool value);
    bool get_bRecookRequested();
    void set_bRecookRequested(bool value);
    bool get_bRebuildRequested();
    void set_bRebuildRequested(bool value);
    bool get_bEnableCooking();
    void set_bEnableCooking(bool value);
    bool get_bForceNeedUpdate();
    void set_bForceNeedUpdate(bool value);
    bool get_bLastCookSuccess();
    void set_bLastCookSuccess(bool value);
    bool get_bParameterDefinitionUpdateNeeded();
    void set_bParameterDefinitionUpdateNeeded(bool value);
    bool get_bBlueprintStructureModified();
    void set_bBlueprintStructureModified(bool value);
    bool get_bBlueprintModified();
    void set_bBlueprintModified(bool value);
    void* get_Parameters();
    void* get_Inputs();
    void* get_Outputs();
    void* get_BakedOutputs();
    void* get_UntrackedOutputs();
    void* get_HandleComponents();
    bool get_bHasComponentTransformChanged();
    void set_bHasComponentTransformChanged(bool value);
    bool get_bFullyLoaded();
    void set_bFullyLoaded(bool value);
    _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink*& get_PDGAssetLink();
    void* get_RefineMeshesTimer();
    bool get_bNoProxyMeshNextCookRequested();
    void set_bNoProxyMeshNextCookRequested(bool value);
    void* get_InputPresets();
    bool get_bBakeAfterNextCook();
    void set_bBakeAfterNextCook(bool value);
    bool get_bCachedIsPreview();
    void set_bCachedIsPreview(bool value);
    double& get_LastTickTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x920
#pragma pack(pop)
}
