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
namespace _Game_World_Geometry_Environment_Gameplay_Objects_Lockers_ABP_LockerTest {
#pragma pack(push, 1)
struct ABP_LockerTest_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0xb10]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_TransitionResult_13();
    void* get_AnimGraphNode_TransitionResult_12();
    void* get_AnimGraphNode_TransitionResult_11();
    void* get_AnimGraphNode_TransitionResult_10();
    void* get_AnimGraphNode_TransitionResult_9();
    void* get_AnimGraphNode_TransitionResult_8();
    void* get_AnimGraphNode_TransitionResult_7();
    void* get_AnimGraphNode_TransitionResult_6();
    void* get_AnimGraphNode_TransitionResult_5();
    void* get_AnimGraphNode_TransitionResult_4();
    void* get_AnimGraphNode_TransitionResult_3();
    void* get_AnimGraphNode_TransitionResult_2();
    void* get_AnimGraphNode_SequencePlayer_5();
    void* get_AnimGraphNode_StateResult_8();
    void* get_AnimGraphNode_SequencePlayer_4();
    void* get_AnimGraphNode_StateResult_7();
    void* get_AnimGraphNode_SequencePlayer_3();
    void* get_AnimGraphNode_StateResult_6();
    void* get_AnimGraphNode_SequencePlayer_2();
    void* get_AnimGraphNode_StateResult_5();
    void* get_AnimGraphNode_SequenceEvaluator_3();
    void* get_AnimGraphNode_StateResult_4();
    void* get_AnimGraphNode_SequencePlayer_1();
    void* get_AnimGraphNode_StateResult_3();
    void* get_AnimGraphNode_SequenceEvaluator_2();
    void* get_AnimGraphNode_StateResult_2();
    void* get_AnimGraphNode_StateMachine_1();
    void* get_AnimGraphNode_TransitionResult_1();
    void* get_AnimGraphNode_TransitionResult();
    void* get_AnimGraphNode_SequenceEvaluator_1();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    void* get_AnimGraphNode_MakeDynamicAdditive();
    void* get_AnimGraphNode_SequenceEvaluator();
    void* get_AnimGraphNode_ApplyAdditive();
    void* get_AnimGraphNode_Slot();
    bool get_IsOpen();
    void set_IsOpen(bool value);
    bool get_WantsToShake();
    void set_WantsToShake(bool value);
    bool get_TransitionToShake();
    void set_TransitionToShake(bool value);
    bool get_LockerEnter();
    void set_LockerEnter(bool value);
    bool get_LockerExit();
    void set_LockerExit(bool value);
    bool get_LockerTakeout();
    void set_LockerTakeout(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerTest_AnimGraphNode_TransitionResult_5F7DD5B14556FA60C1F1FC8601885EEC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerTest_AnimGraphNode_TransitionResult_328B5A2E413308E9ECA63E9366B4464C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerTest_AnimGraphNode_TransitionResult_C0ABB1114C9DA187A4206CBB0AC73267();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerTest_AnimGraphNode_TransitionResult_0FBAAFAD466BD85218F2D38683A41866();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void TriggerShake();
    void ExecuteUbergraph_ABP_LockerTest(int32_t EntryPoint);
}; // Size: 0xdd0
#pragma pack(pop)
}
