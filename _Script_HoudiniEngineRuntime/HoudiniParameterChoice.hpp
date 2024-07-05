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
struct HoudiniParameterChoice : public HoudiniParameter {
    private: char pad_108[0x70]; public:
    int32_t& get_IntValue();
    int32_t& get_DefaultIntValue();
    void* get_StringValue();
    void* get_DefaultStringValue();
    void* get_StringChoiceValues();
    void* get_StringChoiceLabels();
    bool get_bIsChildOfRamp();
    void set_bIsChildOfRamp(bool value);
    void* get_IntValuesArray();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x178
#pragma pack(pop)
}
