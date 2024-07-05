#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone {
#pragma pack(push, 1)
struct ABP_WallPhone_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x3f0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_TransitionResult_3();
    void* get_AnimGraphNode_TransitionResult_2();
    void* get_AnimGraphNode_TransitionResult_1();
    void* get_AnimGraphNode_TransitionResult();
    void* get_AnimGraphNode_SequencePlayer_1();
    void* get_AnimGraphNode_StateResult_3();
    void* get_AnimGraphNode_SequenceEvaluator_1();
    void* get_AnimGraphNode_StateResult_2();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_SequenceEvaluator();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    bool get_Detached_From_Dock();
    void set_Detached_From_Dock(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WallPhone_AnimGraphNode_TransitionResult_955FE4254A74F1594934BAB4FEF1C0E3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WallPhone_AnimGraphNode_TransitionResult_C5E199294E97FCE82794A6B807D84A8E();
    void Set_Phone_State(bool Detached_From_Dock);
    void Toggle_Phone_State();
    void ExecuteUbergraph_ABP_WallPhone(int32_t EntryPoint);
}; // Size: 0x6b0
#pragma pack(pop)
}
