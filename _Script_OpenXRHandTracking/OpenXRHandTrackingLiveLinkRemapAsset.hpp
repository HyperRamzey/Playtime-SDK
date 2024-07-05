#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LiveLink\LiveLinkRetargetAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OpenXRHandTracking {
#pragma pack(push, 1)
struct OpenXRHandTrackingLiveLinkRemapAsset : public _Script_LiveLink::LiveLinkRetargetAsset {
    private: char pad_28[0x58]; public:
    bool get_bHasMetacarpals();
    void set_bHasMetacarpals(bool value);
    bool get_bRetargetRotationOnly();
    void set_bRetargetRotationOnly(bool value);
    void* get_SwizzleX();
    void* get_SwizzleY();
    void* get_SwizzleZ();
    void* get_SwizzleW();
    void* get_HandTrackingBoneNameMap();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
