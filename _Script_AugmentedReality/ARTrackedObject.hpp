#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARTrackedGeometry.hpp"
namespace _Script_AugmentedReality {
struct ARCandidateObject;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARTrackedObject : public ARTrackedGeometry {
    _Script_AugmentedReality::ARCandidateObject*& get_DetectedObject();
    static _Script_CoreUObject::Class* static_class();
    _Script_AugmentedReality::ARCandidateObject* GetDetectedObject();
}; // Size: 0x100
#pragma pack(pop)
}
