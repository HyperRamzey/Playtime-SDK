#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Game_Player_Huggy_BP_BabyHuggy {
struct BP_BabyHuggy_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_Huggy_Animations_ABP_SentryHuggy {
#pragma pack(push, 1)
struct ABP_SentryHuggy_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0xe50]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_BoneDrivenController_6();
    void* get_AnimGraphNode_LocalToComponentSpace_1();
    void* get_AnimGraphNode_ComponentToLocalSpace_1();
    void* get_AnimGraphNode_BoneDrivenController_5();
    void* get_AnimGraphNode_BoneDrivenController_4();
    void* get_AnimGraphNode_BoneDrivenController_3();
    void* get_AnimGraphNode_BoneDrivenController_2();
    void* get_AnimGraphNode_SequencePlayer_1();
    void* get_AnimGraphNode_BlendListByBool_1();
    void* get_AnimGraphNode_Slot();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_SaveCachedPose();
    void* get_AnimGraphNode_UseCachedPose_1();
    void* get_AnimGraphNode_UseCachedPose();
    void* get_AnimGraphNode_BlendListByBool();
    void* get_AnimGraphNode_LookAt();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_BoneDrivenController_1();
    void* get_AnimGraphNode_BoneDrivenController();
    _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C*& get_SentryHuggy();
    float& get_Look_Weight();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_LookAt_4C2BA7FE4C57B72C29BF1B9CC5CF95CC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_BlendListByBool_5FA338944DD247BD0F7F50AE8023C4FC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_BlendListByBool_84562E7E4CA38E3B850649A57A182832();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_ABP_SentryHuggy(int32_t EntryPoint);
}; // Size: 0x1110
#pragma pack(pop)
}
