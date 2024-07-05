#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSequenceInstanceData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct MovieSceneControlRigInstanceData : public _Script_MovieScene::MovieSceneSequenceInstanceData {
    private: char pad_8[0xd0]; public:
    bool get_bAdditive();
    void set_bAdditive(bool value);
    bool get_bApplyBoneFilter();
    void set_bApplyBoneFilter(bool value);
    void* get_BoneFilter();
    void* get_Weight();
    void* get_Operand();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
