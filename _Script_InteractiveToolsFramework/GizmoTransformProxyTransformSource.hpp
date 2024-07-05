#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GizmoBaseTransformSource.hpp"
namespace _Script_InteractiveToolsFramework {
struct TransformProxy;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct GizmoTransformProxyTransformSource : public GizmoBaseTransformSource {
    private: char pad_48[0x8]; public:
    _Script_InteractiveToolsFramework::TransformProxy*& get_Proxy();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
