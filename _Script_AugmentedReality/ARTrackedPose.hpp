#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARPose3D.hpp"
#include "ARTrackedGeometry.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARTrackedPose : public ARTrackedGeometry {
    private: char pad_100[0x50]; public:
    void* get_TrackedPose();
    static _Script_CoreUObject::Class* static_class();
    _Script_AugmentedReality::ARPose3D GetTrackedPoseData();
}; // Size: 0x150
#pragma pack(pop)
}
