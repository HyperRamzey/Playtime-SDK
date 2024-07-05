#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MaterialInstanceConstant.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeMaterialInstanceConstant : public _Script_Engine::MaterialInstanceConstant {
    private: char pad_318[0x18]; public:
    void* get_TextureStreamingInfo();
    bool get_bIsLayerThumbnail();
    void set_bIsLayerThumbnail(bool value);
    bool get_bDisableTessellation();
    void set_bDisableTessellation(bool value);
    bool get_bMobile();
    void set_bMobile(bool value);
    bool get_bEditorToolUsage();
    void set_bEditorToolUsage(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x330
#pragma pack(pop)
}
