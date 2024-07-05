#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP {
#pragma pack(push, 1)
struct GrabPackHose_AnimBP_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x290]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_RotationOffsetBlendSpace();
    void* get_AnimGraphNode_Root();
    float& get_LookUp();
    bool get_Crouched();
    void set_Crouched(bool value);
    bool get_NeedsRevived();
    void set_NeedsRevived(bool value);
    void* get_HeadPosition();
    void* get_HeadRotation();
    bool get_LeftHand();
    void set_LeftHand(bool value);
    void* get_BeginningPosition();
    void* get_BeginningRotation();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    _Script_CoreUObject::Vector ReturnSceneTransforms(void* Tag, _Script_CoreUObject::Rotator& Rotator);
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_GrabPackHose_AnimBP(int32_t EntryPoint);
}; // Size: 0x550
#pragma pack(pop)
}
