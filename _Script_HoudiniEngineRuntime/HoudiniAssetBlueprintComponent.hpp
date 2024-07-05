#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniAssetComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniAssetBlueprintComponent : public HoudiniAssetComponent {
    private: char pad_920[0x100]; public:
    bool get_FauxBPProperty();
    void set_FauxBPProperty(bool value);
    bool get_bHoudiniAssetChanged();
    void set_bHoudiniAssetChanged(bool value);
    bool get_bUpdatedFromTemplate();
    void set_bUpdatedFromTemplate(bool value);
    bool get_bIsInBlueprintEditor();
    void set_bIsInBlueprintEditor(bool value);
    bool get_bCanDeleteHoudiniNodes();
    void set_bCanDeleteHoudiniNodes(bool value);
    bool get_bHasRegisteredComponentTemplate();
    void set_bHasRegisteredComponentTemplate(bool value);
    void* get_CachedOutputNodes();
    void* get_CachedInputNodes();
    static _Script_CoreUObject::Class* static_class();
    void SetToggleValueAt(void* Name, bool Value, int32_t Index);
    void SetFloatParameter(void* Name, float Value, int32_t Index);
    bool HasParameter(void* Name);
}; // Size: 0xa20
#pragma pack(pop)
}
