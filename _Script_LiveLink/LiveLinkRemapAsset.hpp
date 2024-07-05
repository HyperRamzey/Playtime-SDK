#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LiveLinkRetargetAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkRemapAsset : public LiveLinkRetargetAsset {
    private: char pad_28[0xa0]; public:
    static _Script_CoreUObject::Class* static_class();
    void RemapCurveElements(void*& CurveItems);
    void* GetRemappedCurveName(void* CurveName);
    void* GetRemappedBoneName(void* BoneName);
}; // Size: 0xc8
#pragma pack(pop)
}
