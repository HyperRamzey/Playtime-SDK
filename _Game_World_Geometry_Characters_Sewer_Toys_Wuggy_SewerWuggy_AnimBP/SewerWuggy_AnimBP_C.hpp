#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint {
struct BP_WhackAWuggySpawnPoint_C;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggy_AnimBP {
#pragma pack(push, 1)
struct SewerWuggy_AnimBP_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0xc40]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
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
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    void* get_AnimGraphNode_LookAt_2();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_LookAt_1();
    void* get_AnimGraphNode_LookAt();
    void* get_AnimGraphNode_ModifyBone_1();
    void* get_AnimGraphNode_ModifyBone();
    bool get_Crawl();
    void set_Crawl(bool value);
    bool get_Crawl_Backwards();
    void set_Crawl_Backwards(bool value);
    bool get_Punched();
    void set_Punched(bool value);
    bool get_Jumpscare_Player();
    void set_Jumpscare_Player(bool value);
    void* get_Closest_Player();
    _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C*& get_Wuggy_BP();
    float& get_Dont_Look_At_Player_Alpha();
    void* get_Random_Eye_Rotation();
    float& get_Random_Delay();
    float& get_Delta_Time_X();
    void* get_Don_t_Look_At_Player_Timer();
    _Script_Engine::CameraComponent*& get_Player_Target_Camera();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void Get_Player_Target_Camera(bool& Valid);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SewerWuggy_AnimBP_AnimGraphNode_LookAt_0A106C754279D5D7BB5FBC925D7FC712();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SewerWuggy_AnimBP_AnimGraphNode_LookAt_E28AD50B4066D3C626C20890877F854D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SewerWuggy_AnimBP_AnimGraphNode_LookAt_F686F043494B41393FBA2F859C8D6933();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SewerWuggy_AnimBP_AnimGraphNode_SequencePlayer_5C1BBF34435512D50F6775875058D93E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SewerWuggy_AnimBP_AnimGraphNode_SequencePlayer_FB54D67A4A6AEC149EDA44991C518A3F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SewerWuggy_AnimBP_AnimGraphNode_SequencePlayer_7880E3E943E958DAA3904998D9C66A8E();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void Actor_Based_Variables();
    void Wuggy_Was_Punched(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* WhackedWuggy);
    void Update_Random_Eye_Movement();
    void New_Don_t_Look_At_Player_Value();
    void Update_Don_t_Look_At_Player();
    void Set_Wuggy_Crawl(bool Crawl, _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* WuggyToWhack);
    void Set_Wuggy_Crawl_Back(bool Crawl_Back);
    void ExecuteUbergraph_SewerWuggy_AnimBP(int32_t EntryPoint);
}; // Size: 0xf00
#pragma pack(pop)
}
