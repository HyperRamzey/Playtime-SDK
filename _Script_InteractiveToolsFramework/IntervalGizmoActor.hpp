#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GizmoActor.hpp"
namespace _Script_InteractiveToolsFramework {
struct GizmoLineHandleComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct IntervalGizmoActor : public GizmoActor {
    private: char pad_220[0x18]; public:
    _Script_InteractiveToolsFramework::GizmoLineHandleComponent*& get_UpIntervalComponent();
    _Script_InteractiveToolsFramework::GizmoLineHandleComponent*& get_DownIntervalComponent();
    _Script_InteractiveToolsFramework::GizmoLineHandleComponent*& get_ForwardIntervalComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x238
#pragma pack(pop)
}
