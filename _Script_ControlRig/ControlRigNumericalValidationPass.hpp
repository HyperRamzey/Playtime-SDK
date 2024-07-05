#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ControlRigValidationPass.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRigNumericalValidationPass : public ControlRigValidationPass {
    private: char pad_28[0x38]; public:
    bool get_bCheckControls();
    void set_bCheckControls(bool value);
    bool get_bCheckBones();
    void set_bCheckBones(bool value);
    bool get_bCheckCurves();
    void set_bCheckCurves(bool value);
    float& get_TranslationPrecision();
    float& get_RotationPrecision();
    float& get_ScalePrecision();
    float& get_CurvePrecision();
    void* get_EventNameA();
    void* get_EventNameB();
    void* get_Pose();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
