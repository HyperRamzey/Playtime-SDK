#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AssetManagerSearchRules {
    private: char pad_0[0x50]; public:
    void* get_AssetScanPaths();
    void* get_IncludePatterns();
    void* get_ExcludePatterns();
    void* get_AssetBaseClass();
    bool get_bHasBlueprintClasses();
    void set_bHasBlueprintClasses(bool value);
    bool get_bForceSynchronousScan();
    void set_bForceSynchronousScan(bool value);
    bool get_bSkipVirtualPathExpansion();
    void set_bSkipVirtualPathExpansion(bool value);
    bool get_bSkipManagerIncludeCheck();
    void set_bSkipManagerIncludeCheck(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
