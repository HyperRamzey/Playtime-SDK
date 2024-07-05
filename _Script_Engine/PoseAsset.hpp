#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimationAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PoseAsset : public AnimationAsset {
    private: char pad_80[0xb0]; public:
    void* get_PoseContainer();
    bool get_bAdditivePose();
    void set_bAdditivePose(bool value);
    int32_t& get_BasePoseIndex();
    void* get_RetargetSource();
    void* get_RetargetSourceAssetReferencePose();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
