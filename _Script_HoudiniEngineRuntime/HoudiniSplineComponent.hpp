#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniSplineComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x2a0]; public:
    void* get_CurvePoints();
    void* get_DisplayPoints();
    void* get_DisplayPointIndexDivider();
    void* get_HoudiniSplineName();
    bool get_bClosed();
    void set_bClosed(bool value);
    bool get_bReversed();
    void set_bReversed(bool value);
    int32_t& get_CurveOrder();
    bool get_bIsHoudiniSplineVisible();
    void set_bIsHoudiniSplineVisible(bool value);
    void* get_CurveType();
    void* get_CurveMethod();
    void* get_CurveBreakpointParameterization();
    bool get_bIsOutputCurve();
    void set_bIsOutputCurve(bool value);
    bool get_bCookOnCurveChanged();
    void set_bCookOnCurveChanged(bool value);
    bool get_bIsLegacyInputCurve();
    void set_bIsLegacyInputCurve(bool value);
    bool get_bHasChanged();
    void set_bHasChanged(bool value);
    bool get_bNeedsToTriggerUpdate();
    void set_bNeedsToTriggerUpdate(bool value);
    bool get_bIsInputCurve();
    void set_bIsInputCurve(bool value);
    bool get_bIsEditableOutputCurve();
    void set_bIsEditableOutputCurve(bool value);
    int32_t& get_NodeId();
    void* get_PartName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4a0
#pragma pack(pop)
}
