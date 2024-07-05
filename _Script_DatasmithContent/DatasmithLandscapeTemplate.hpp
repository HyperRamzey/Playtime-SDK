#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DatasmithObjectTemplate.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithLandscapeTemplate : public DatasmithObjectTemplate {
    private: char pad_30[0x10]; public:
    _Script_Engine::MaterialInterface*& get_LandscapeMaterial();
    int32_t& get_StaticLightingLOD();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
