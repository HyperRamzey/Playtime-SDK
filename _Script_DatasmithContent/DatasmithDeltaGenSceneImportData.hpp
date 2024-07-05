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
struct DatasmithDeltaGenSceneImportData : public DatasmithFBXSceneImportData {
    private: char pad_48[0x48]; public:
    bool get_bMergeNodes();
    void set_bMergeNodes(bool value);
    bool get_bOptimizeDuplicatedNodes();
    void set_bOptimizeDuplicatedNodes(bool value);
    bool get_bRemoveInvisibleNodes();
    void set_bRemoveInvisibleNodes(bool value);
    bool get_bSimplifyNodeHierarchy();
    void set_bSimplifyNodeHierarchy(bool value);
    bool get_bImportVar();
    void set_bImportVar(bool value);
    void* get_VarPath();
    bool get_bImportPos();
    void set_bImportPos(bool value);
    void* get_PosPath();
    bool get_bImportTml();
    void set_bImportTml(bool value);
    void* get_TmlPath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
