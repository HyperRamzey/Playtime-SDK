#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_ClothingSystemRuntimeCommon\ClothSharedConfigCommon.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosCloth {
#pragma pack(push, 1)
struct ChaosClothSharedSimConfig : public _Script_ClothingSystemRuntimeCommon::ClothSharedConfigCommon {
    private: char pad_28[0x10]; public:
    int32_t& get_IterationCount();
    int32_t& get_SubdivisionCount();
    bool get_bUseLocalSpaceSimulation();
    void set_bUseLocalSpaceSimulation(bool value);
    bool get_bUseXPBDConstraints();
    void set_bUseXPBDConstraints(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
