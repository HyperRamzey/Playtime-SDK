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
struct DatasmithDecalComponentTemplate : public DatasmithObjectTemplate {
    private: char pad_30[0x18]; public:
    int32_t& get_SortOrder();
    void* get_DecalSize();
    _Script_Engine::MaterialInterface*& get_Material();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
