#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AugmentedReality\ARSessionConfig.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapAR {
#pragma pack(push, 1)
struct LuminARSessionConfig : public _Script_AugmentedReality::ARSessionConfig {
    private: char pad_110[0x90]; public:
    void* get_PlanesQuery();
    int32_t& get_MaxPlaneQueryResults();
    int32_t& get_MinPlaneArea();
    bool get_bArbitraryOrientationPlaneDetection();
    void set_bArbitraryOrientationPlaneDetection(bool value);
    void* get_PlaneSearchExtents();
    void* get_PlaneQueryFlags();
    bool get_bDiscardZeroExtentPlanes();
    void set_bDiscardZeroExtentPlanes(bool value);
    bool get_bDefaultUseUnreliablePose();
    void set_bDefaultUseUnreliablePose(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
