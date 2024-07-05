#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponentInstanceData.hpp"
namespace _Script_HoudiniEngineRuntime {
struct HoudiniAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniAssetBlueprintInstanceData : public _Script_Engine::ActorComponentInstanceData {
    private: char pad_68[0xb8]; public:
    _Script_HoudiniEngineRuntime::HoudiniAsset*& get_HoudiniAsset();
    int32_t& get_AssetId();
    void* get_AssetState();
    void* get_SubAssetIndex();
    void* get_AssetCookCount();
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
    void* get_ComponentGUID();
    void* get_HapiGUID();
    bool get_bRegisteredComponentTemplate();
    void set_bRegisteredComponentTemplate(bool value);
    void* get_SourceName();
    void* get_Outputs();
    void* get_Inputs();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
