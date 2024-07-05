#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand {
#pragma pack(push, 1)
struct ABP_PlayerExtendoHand_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x6b0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_TransitionResult_7();
    void* get_AnimGraphNode_TransitionResult_6();
    void* get_AnimGraphNode_TransitionResult_5();
    void* get_AnimGraphNode_TransitionResult_4();
    void* get_AnimGraphNode_TransitionResult_3();
    void* get_AnimGraphNode_TransitionResult_2();
    void* get_AnimGraphNode_TransitionResult_1();
    void* get_AnimGraphNode_TransitionResult();
    void* get_AnimGraphNode_SequencePlayer_3();
    void* get_AnimGraphNode_StateResult_3();
    void* get_AnimGraphNode_SequencePlayer_2();
    void* get_AnimGraphNode_StateResult_2();
    void* get_AnimGraphNode_SequencePlayer_1();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_BlendListByBool();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_BlendSpacePlayer();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    _Script_Engine::AnimSequence*& get_CustomAnim();
    bool get_Get_Ready();
    void set_Get_Ready(bool value);
    bool get_Play();
    void set_Play(bool value);
    float& get_Thickness();
    float& get_Distance_From_Palm();
    bool get_Touched();
    void set_Touched(bool value);
    bool get_IsActive();
    void set_IsActive(bool value);
    void*& get_HandMagnetAnim();
    bool get_Smacked();
    void set_Smacked(bool value);
    bool get_ShouldUseCustomAnim();
    void set_ShouldUseCustomAnim(bool value);
    bool get_Wants_To_Prone();
    void set_Wants_To_Prone(bool value);
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Network_Character();
    float& get_Horizontal_Speed();
    bool get_Is_Moving_Backward();
    void set_Is_Moving_Backward(bool value);
    bool get_ForceFirstPersonProne();
    void set_ForceFirstPersonProne(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerExtendoHand_AnimGraphNode_SequencePlayer_4BC4C6EE43A480E4EF806B9E806EBCE6();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void BlueprintBeginPlay0();
    void Set_Wants_To_Prone();
    void SetForcedProne(bool ForceFirstPersonProne);
    void ExecuteUbergraph_ABP_PlayerExtendoHand(int32_t EntryPoint);
}; // Size: 0x970
#pragma pack(pop)
}
