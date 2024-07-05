#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniParameter.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniParameterInt : public HoudiniParameter {
    private: char pad_108[0x48]; public:
    void* get_Values();
    void* get_DefaultValues();
    void* get_Unit();
    bool get_bHasMin();
    void set_bHasMin(bool value);
    bool get_bHasMax();
    void set_bHasMax(bool value);
    bool get_bHasUIMin();
    void set_bHasUIMin(bool value);
    bool get_bHasUIMax();
    void set_bHasUIMax(bool value);
    bool get_bIsLogarithmic();
    void set_bIsLogarithmic(bool value);
    int32_t& get_Min();
    int32_t& get_Max();
    int32_t& get_UIMin();
    int32_t& get_UIMax();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}
