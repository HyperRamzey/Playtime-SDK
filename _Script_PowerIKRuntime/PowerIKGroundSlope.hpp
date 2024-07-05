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
struct PowerIKGroundSlope {
    private: char pad_0[0x94]; public:
    void* get_StrideDirection();
    float& get_MaxGroundAngle();
    float& get_MaxNormalAngularSpeed();
    bool get_OrientToGround();
    void set_OrientToGround(bool value);
    float& get_OrientToPitch();
    float& get_OrientToRoll();
    bool get_ScaleStride();
    void set_ScaleStride(bool value);
    float& get_UphillStrideScale();
    float& get_DownhillStrideScale();
    float& get_SidehillStrideScale();
    float& get_SidehillPushOuterFeet();
    bool get_Lean();
    void set_Lean(bool value);
    float& get_UphillLean();
    float& get_DownhillLean();
    float& get_SidehillLean();
    bool get_CounterLean();
    void set_CounterLean(bool value);
    void* get_CounterLeanBoneName();
    float& get_UphillCounterLean();
    float& get_DownhillCounterLean();
    float& get_SidehillCounterLean();
    bool get_MoveRoot();
    void set_MoveRoot(bool value);
    float& get_UphillVertOffset();
    float& get_UphillHorizOffset();
    float& get_DownhillVertOffset();
    float& get_DownhillHorizOffset();
    float& get_SidehillHorizOffset();
    float& get_SidehillVertOffset();
    bool get_RotateFootToGround();
    void set_RotateFootToGround(bool value);
    float& get_PitchFootAmount();
    float& get_RollFootAmount();
    float& get_FootAngleDeltaSmoothSpeed();
    bool get_OffsetFeetPositions();
    void set_OffsetFeetPositions(bool value);
    float& get_StaticFootOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x94
#pragma pack(pop)
}
