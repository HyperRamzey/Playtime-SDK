#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ItemAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct BundleAsset : public ItemAsset {
    private: char pad_38[0x20]; public:
    bool get_bOutfit();
    void set_bOutfit(bool value);
    void* get_BundlePreviewClass();
    void* get_BundleContent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
