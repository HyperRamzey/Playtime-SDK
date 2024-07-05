#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AugmentedReality {
struct ARActor;
}
namespace _Script_AugmentedReality {
struct ARComponent;
}
namespace _Script_AugmentedReality {
struct ARTrackedGeometry;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct TrackedGeometryGroup {
    private: char pad_0[0x18]; public:
    _Script_AugmentedReality::ARActor*& get_ARActor();
    _Script_AugmentedReality::ARComponent*& get_ARComponent();
    _Script_AugmentedReality::ARTrackedGeometry*& get_TrackedGeometry();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
