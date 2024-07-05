#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DatasmithOptionsBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithImportOptions : public DatasmithOptionsBase {
    private: char pad_28[0x48]; public:
    void* get_SearchPackagePolicy();
    void* get_MaterialConflictPolicy();
    void* get_TextureConflictPolicy();
    void* get_StaticMeshActorImportPolicy();
    void* get_LightImportPolicy();
    void* get_CameraImportPolicy();
    void* get_OtherActorImportPolicy();
    void* get_MaterialQuality();
    void* get_BaseOptions();
    void* get_ReimportOptions();
    void* get_Filename();
    void* get_FilePath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
