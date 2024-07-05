#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DatasmithSceneImportData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithFBXSceneImportData : public DatasmithSceneImportData {
    private: char pad_28[0x20]; public:
    bool get_bGenerateLightmapUVs();
    void set_bGenerateLightmapUVs(bool value);
    void* get_TexturesDir();
    void* get_IntermediateSerialization();
    bool get_bColorizeMaterials();
    void set_bColorizeMaterials(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
