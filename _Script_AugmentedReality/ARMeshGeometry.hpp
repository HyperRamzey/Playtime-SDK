#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARTrackedGeometry.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARMeshGeometry : public ARTrackedGeometry {
    static _Script_CoreUObject::Class* static_class();
    bool GetObjectClassificationAtLocation(_Script_CoreUObject::Vector& InWorldLocation, void*& OutClassification, _Script_CoreUObject::Vector& OutClassificationLocation, float MaxLocationDiff);
}; // Size: 0x100
#pragma pack(pop)
}
