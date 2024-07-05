#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARPlaneGeometry : public ARTrackedGeometry {
    private: char pad_100[0x30]; public:
    void* get_Orientation();
    void* get_Center();
    void* get_Extent();
    void* get_BoundaryPolygon();
    _Script_AugmentedReality::ARPlaneGeometry*& get_SubsumedBy();
    static _Script_CoreUObject::Class* static_class();
    _Script_AugmentedReality::ARPlaneGeometry* GetSubsumedBy();
    void* GetOrientation();
    _Script_CoreUObject::Vector GetExtent();
    _Script_CoreUObject::Vector GetCenter();
    void* GetBoundaryPolygonInLocalSpace();
}; // Size: 0x130
#pragma pack(pop)
}
