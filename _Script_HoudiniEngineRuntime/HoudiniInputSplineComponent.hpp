#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniInputSceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniInputSplineComponent : public HoudiniInputSceneComponent {
    private: char pad_e0[0x20]; public:
    int32_t& get_NumberOfSplineControlPoints();
    float& get_SplineLength();
    float& get_SplineResolution();
    bool get_SplineClosed();
    void set_SplineClosed(bool value);
    void* get_SplineControlPoints();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
