#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AugmentedReality\ARCandidateImage.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapAR {
#pragma pack(push, 1)
struct LuminARCandidateImage : public _Script_AugmentedReality::ARCandidateImage {
    private: char pad_58[0x8]; public:
    bool get_bUseUnreliablePose();
    void set_bUseUnreliablePose(bool value);
    bool get_bImageIsStationary();
    void set_bImageIsStationary(bool value);
    void* get_AxisOrientation();
    static _Script_CoreUObject::Class* static_class();
    bool GetUseUnreliablePose();
    bool GetImageIsStationary();
    void* GetAxisOrientation();
}; // Size: 0x60
#pragma pack(pop)
}
