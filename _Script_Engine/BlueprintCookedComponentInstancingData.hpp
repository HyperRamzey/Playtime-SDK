#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BlueprintCookedComponentInstancingData {
    private: char pad_0[0x48]; public:
    void* get_ChangedPropertyList();
    bool get_bHasValidCookedData();
    void set_bHasValidCookedData(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
