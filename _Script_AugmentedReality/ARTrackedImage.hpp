#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
namespace _Script_AugmentedReality {
struct ARCandidateImage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARTrackedImage : public ARTrackedGeometry {
    private: char pad_100[0x10]; public:
    _Script_AugmentedReality::ARCandidateImage*& get_DetectedImage();
    void* get_EstimatedSize();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector2D GetEstimateSize();
    _Script_AugmentedReality::ARCandidateImage* GetDetectedImage();
}; // Size: 0x110
#pragma pack(pop)
}
