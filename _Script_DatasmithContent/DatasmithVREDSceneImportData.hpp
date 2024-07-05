#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DatasmithFBXSceneImportData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithVREDSceneImportData : public DatasmithFBXSceneImportData {
    private: char pad_48[0x60]; public:
    bool get_bMergeNodes();
    void set_bMergeNodes(bool value);
    bool get_bOptimizeDuplicatedNodes();
    void set_bOptimizeDuplicatedNodes(bool value);
    bool get_bImportMats();
    void set_bImportMats(bool value);
    void* get_MatsPath();
    bool get_bImportVar();
    void set_bImportVar(bool value);
    bool get_bCleanVar();
    void set_bCleanVar(bool value);
    void* get_VarPath();
    bool get_bImportLightInfo();
    void set_bImportLightInfo(bool value);
    void* get_LightInfoPath();
    bool get_bImportClipInfo();
    void set_bImportClipInfo(bool value);
    void* get_ClipInfoPath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
