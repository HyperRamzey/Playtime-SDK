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
struct HoudiniInputObject : public _Script_CoreUObject::Object {
    private: char pad_28[0x88]; public:
    void* get_InputObject();
    void* get_Transform();
    void* get_Type();
    int32_t& get_InputNodeId();
    int32_t& get_InputObjectNodeId();
    void* get_Guid();
    bool get_bHasChanged();
    void set_bHasChanged(bool value);
    bool get_bNeedsToTriggerUpdate();
    void set_bNeedsToTriggerUpdate(bool value);
    bool get_bTransformChanged();
    void set_bTransformChanged(bool value);
    bool get_bImportAsReference();
    void set_bImportAsReference(bool value);
    bool get_bImportAsReferenceRotScaleEnabled();
    void set_bImportAsReferenceRotScaleEnabled(bool value);
    bool get_bCanDeleteHoudiniNodes();
    void set_bCanDeleteHoudiniNodes(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
