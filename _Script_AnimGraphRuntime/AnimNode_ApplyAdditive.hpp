#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_ApplyAdditive : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0xb8]; public:
    void* get_Base();
    void* get_Additive();
    float& get_Alpha();
    void* get_AlphaScaleBias();
    int32_t& get_LODThreshold();
    void* get_AlphaBoolBlend();
    void* get_AlphaCurveName();
    void* get_AlphaScaleBiasClamp();
    void* get_AlphaInputType();
    bool get_bAlphaBoolEnabled();
    void set_bAlphaBoolEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}