#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniParameterMultiParm.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniParameterRampFloat : public HoudiniParameterMultiParm {
    private: char pad_150[0x68]; public:
    void* get_Points();
    void* get_CachedPoints();
    void* get_DefaultPositions();
    void* get_DefaultValues();
    void* get_DefaultChoices();
    int32_t& get_NumDefaultPoints();
    bool get_bCaching();
    void set_bCaching(bool value);
    void* get_ModificationEvents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b8
#pragma pack(pop)
}
