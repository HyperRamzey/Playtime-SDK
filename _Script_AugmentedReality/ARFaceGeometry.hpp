#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARFaceGeometry : public ARTrackedGeometry {
    private: char pad_100[0xf0]; public:
    void* get_LookAtTarget();
    bool get_bIsTracked();
    void set_bIsTracked(bool value);
    void* get_BlendShapes();
    void* get_LeftEyeTransform();
    void* get_RightEyeTransform();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Transform GetWorldSpaceEyeTransform(void* Eye);
    _Script_CoreUObject::Transform GetLocalSpaceEyeTransform(void* Eye);
    float GetBlendShapeValue(void* BlendShape);
    void* GetBlendShapes();
}; // Size: 0x1f0
#pragma pack(pop)
}
