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
struct HoudiniParameterFloat : public HoudiniParameter {
    private: char pad_108[0x50]; public:
    void* get_Values();
    void* get_DefaultValues();
    void* get_Unit();
    bool get_bNoSwap();
    void set_bNoSwap(bool value);
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
    float& get_Min();
    float& get_Max();
    float& get_UIMin();
    float& get_UIMax();
    bool get_bIsChildOfRamp();
    void set_bIsChildOfRamp(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x158
#pragma pack(pop)
}
