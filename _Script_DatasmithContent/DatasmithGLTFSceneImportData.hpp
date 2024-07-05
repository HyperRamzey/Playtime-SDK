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
struct DatasmithGLTFSceneImportData : public DatasmithSceneImportData {
    private: char pad_28[0x48]; public:
    void* get_Generator();
    float& get_Version();
    void* get_Author();
    void* get_License();
    void* get_Source();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}