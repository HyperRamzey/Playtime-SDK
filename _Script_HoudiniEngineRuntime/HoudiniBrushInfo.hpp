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
struct HoudiniBrushInfo {
    private: char pad_0[0x70]; public:
    void* get_BrushActor();
    void* get_CachedTransform();
    void* get_CachedOrigin();
    void* get_CachedExtent();
    void* get_CachedBrushType();
    void* get_CachedSurfaceHash();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
