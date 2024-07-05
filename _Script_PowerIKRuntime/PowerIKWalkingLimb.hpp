#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PowerIKRuntime {
#pragma pack(push, 1)
struct PowerIKWalkingLimb {
    private: char pad_0[0x130]; public:
    void* get_StartBone();
    void* get_EndBone();
    float& get_LimbMaxLengthMultiplier();
    float& get_StepLengthMultiplier();
    float& get_StepDuration();
    float& get_StepHeight();
    void* get_RelatedLimbs();
    float& get_RotateFootToGround();
    float& get_FootCollisionRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
