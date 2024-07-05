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
struct DatasmithSpotLightComponentTemplate : public DatasmithObjectTemplate {
    private: char pad_30[0x8]; public:
    float& get_InnerConeAngle();
    float& get_OuterConeAngle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
