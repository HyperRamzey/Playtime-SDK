#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Qos {
struct QosEvaluator;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Qos {
#pragma pack(push, 1)
struct QosRegionManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x98]; public:
    int32_t& get_NumTestsPerRegion();
    float& get_PingTimeout();
    void* get_RegionDefinitions();
    void* get_DatacenterDefinitions();
    void* get_LastCheckTimestamp();
    _Script_Qos::QosEvaluator*& get_Evaluator();
    void* get_QosEvalResult();
    void* get_RegionOptions();
    void* get_ForceRegionId();
    bool get_bRegionForcedViaCommandline();
    void set_bRegionForcedViaCommandline(bool value);
    void* get_SelectedRegionId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
