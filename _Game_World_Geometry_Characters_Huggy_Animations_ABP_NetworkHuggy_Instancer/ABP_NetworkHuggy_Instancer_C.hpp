#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy_Instancer {
#pragma pack(push, 1)
struct ABP_NetworkHuggy_Instancer_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x220]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_CopyPoseFromMesh();
    _Script_Engine::SkeletalMeshComponent*& get_Skeletal_Mesh();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_ABP_NetworkHuggy_Instancer(int32_t EntryPoint);
}; // Size: 0x4e0
#pragma pack(pop)
}
