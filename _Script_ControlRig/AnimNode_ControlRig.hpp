#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_ControlRigBase.hpp"
namespace _Script_ControlRig {
struct ControlRig;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct AnimNode_ControlRig : public AnimNode_ControlRigBase {
    private: char pad_170[0x1f8]; public:
    void* get_ControlRigClass();
    _Script_ControlRig::ControlRig*& get_ControlRig();
    float& get_Alpha();
    void* get_AlphaInputType();
    bool get_bAlphaBoolEnabled();
    void set_bAlphaBoolEnabled(bool value);
    bool get_bSetRefPoseFromSkeleton();
    void set_bSetRefPoseFromSkeleton(bool value);
    void* get_AlphaScaleBias();
    void* get_AlphaBoolBlend();
    void* get_AlphaCurveName();
    void* get_AlphaScaleBiasClamp();
    void* get_InputMapping();
    void* get_OutputMapping();
    int32_t& get_LODThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x368
#pragma pack(pop)
}
