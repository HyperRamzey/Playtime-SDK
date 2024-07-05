#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct RadialBoxSettings {
    private: char pad_0[0x10]; public:
    float& get_StartingAngle();
    bool get_bDistributeItemsEvenly();
    void set_bDistributeItemsEvenly(bool value);
    float& get_AngleBetweenItems();
    float& get_SectorCentralAngle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
