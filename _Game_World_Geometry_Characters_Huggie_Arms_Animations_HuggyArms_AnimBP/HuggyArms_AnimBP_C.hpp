#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Game_Player_Huggy_BP_NetworkHuggy {
struct BP_NetworkHuggy_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP {
#pragma pack(push, 1)
struct HuggyArms_AnimBP_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x360]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_Slot();
    void* get_AnimGraphNode_TransitionResult_1();
    void* get_AnimGraphNode_TransitionResult();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_BlendSpacePlayer();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    float& get_AnimationDeltaTime();
    float& get_ForwardMovement();
    float& get_RightMovement();
    bool get_Is_Jumpscare_Active();
    void set_Is_Jumpscare_Active(bool value);
    _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C*& get_Network_Huggy();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void StartAttackAnimation();
    void ExecuteUbergraph_HuggyArms_AnimBP(int32_t EntryPoint);
}; // Size: 0x620
#pragma pack(pop)
}
