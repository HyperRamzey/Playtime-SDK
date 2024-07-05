#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniInputObject.hpp"
namespace _Script_HoudiniEngineRuntime {
struct HoudiniSplineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniInputHoudiniSplineComponent : public HoudiniInputObject {
    private: char pad_b0[0x10]; public:
    void* get_CurveType();
    void* get_CurveMethod();
    bool get_Reversed();
    void set_Reversed(bool value);
    _Script_HoudiniEngineRuntime::HoudiniSplineComponent*& get_CachedComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
