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
struct HoudiniAsset : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    void* get_AssetFileName();
    void* get_AssetBytes();
    void* get_AssetBytesCount();
    bool get_bAssetLimitedCommercial();
    void set_bAssetLimitedCommercial(bool value);
    bool get_bAssetNonCommercial();
    void set_bAssetNonCommercial(bool value);
    bool get_bAssetExpanded();
    void set_bAssetExpanded(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
