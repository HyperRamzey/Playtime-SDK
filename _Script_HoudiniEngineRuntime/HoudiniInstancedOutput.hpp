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
struct HoudiniInstancedOutput {
    private: char pad_0[0x88]; public:
    void* get_OriginalObject();
    int32_t& get_OriginalObjectIndex();
    void* get_OriginalTransforms();
    void* get_VariationObjects();
    void* get_VariationTransformOffsets();
    void* get_TransformVariationIndices();
    void* get_OriginalInstanceIndices();
    bool get_bChanged();
    void set_bChanged(bool value);
    bool get_bStale();
    void set_bStale(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
