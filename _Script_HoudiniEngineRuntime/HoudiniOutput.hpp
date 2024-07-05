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
struct HoudiniOutput : public _Script_CoreUObject::Object {
    private: char pad_28[0x188]; public:
    void* get_Type();
    void* get_HoudiniGeoPartObjects();
    void* get_OutputObjects();
    void* get_InstancedOutputs();
    void* get_AssignementMaterials();
    void* get_ReplacementMaterials();
    bool get_bLandscapeWorldComposition();
    void set_bLandscapeWorldComposition(bool value);
    void* get_HoudiniCreatedSocketActors();
    void* get_HoudiniAttachedSocketActors();
    bool get_bIsEditableNode();
    void set_bIsEditableNode(bool value);
    bool get_bHasEditableNodeBuilt();
    void set_bHasEditableNodeBuilt(bool value);
    bool get_bIsUpdating();
    void set_bIsUpdating(bool value);
    bool get_bCanDeleteHoudiniNodes();
    void set_bCanDeleteHoudiniNodes(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b0
#pragma pack(pop)
}
