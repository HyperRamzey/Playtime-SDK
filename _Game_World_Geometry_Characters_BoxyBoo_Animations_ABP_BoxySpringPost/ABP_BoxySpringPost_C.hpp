#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_BoxySpringPost {
#pragma pack(push, 1)
struct ABP_BoxySpringPost_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x710]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_BoneDrivenController_4();
    void* get_AnimGraphNode_BoneDrivenController_3();
    void* get_AnimGraphNode_BoneDrivenController_2();
    void* get_AnimGraphNode_BoneDrivenController_1();
    void* get_AnimGraphNode_BoneDrivenController();
    void* get_AnimGraphNode_LinkedInputPose();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink InPose, _Script_Engine::PoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_BoxySpringPost(int32_t EntryPoint);
}; // Size: 0x9d0
#pragma pack(pop)
}
