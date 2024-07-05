#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DatasmithObjectTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithPostProcessVolumeTemplate : public DatasmithObjectTemplate {
    private: char pad_30[0x50]; public:
    void* get_Settings();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    bool get_bUnbound();
    void set_bUnbound(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
