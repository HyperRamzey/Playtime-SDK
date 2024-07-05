#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraAssetVersion {
    private: char pad_0[0x1c]; public:
    int32_t& get_MajorVersion();
    int32_t& get_MinorVersion();
    void* get_VersionGuid();
    bool get_bIsVisibleInVersionSelector();
    void set_bIsVisibleInVersionSelector(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
