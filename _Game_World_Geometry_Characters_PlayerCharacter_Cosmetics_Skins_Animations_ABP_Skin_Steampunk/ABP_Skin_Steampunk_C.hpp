#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\OutfitSkinAnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Skins_Animations_ABP_Skin_Steampunk {
#pragma pack(push, 1)
struct ABP_Skin_Steampunk_C : public _Script_Playtime_Multiplayer::OutfitSkinAnimInstance {
    private: char pad_2c0[0x2520]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_CopyPoseFromMesh();
    void* get_AnimGraphNode_ModifyBone_30();
    void* get_AnimGraphNode_LocalToComponentSpace_1();
    void* get_AnimGraphNode_ComponentToLocalSpace_1();
    void* get_AnimGraphNode_ModifyBone_29();
    void* get_AnimGraphNode_ModifyBone_28();
    void* get_AnimGraphNode_ModifyBone_27();
    void* get_AnimGraphNode_ModifyBone_26();
    void* get_AnimGraphNode_ModifyBone_25();
    void* get_AnimGraphNode_ModifyBone_24();
    void* get_AnimGraphNode_ModifyBone_23();
    void* get_AnimGraphNode_ModifyBone_22();
    void* get_AnimGraphNode_ModifyBone_21();
    void* get_AnimGraphNode_ModifyBone_20();
    void* get_AnimGraphNode_LayeredBoneBlend();
    void* get_AnimGraphNode_SaveCachedPose();
    void* get_AnimGraphNode_UseCachedPose_1();
    void* get_AnimGraphNode_UseCachedPose();
    void* get_AnimGraphNode_ModifyBone_19();
    void* get_AnimGraphNode_ModifyBone_18();
    void* get_AnimGraphNode_ModifyBone_17();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_ModifyBone_16();
    void* get_AnimGraphNode_ModifyBone_15();
    void* get_AnimGraphNode_ModifyBone_14();
    void* get_AnimGraphNode_ModifyBone_13();
    void* get_AnimGraphNode_ModifyBone_12();
    void* get_AnimGraphNode_ModifyBone_11();
    void* get_AnimGraphNode_ModifyBone_10();
    void* get_AnimGraphNode_ModifyBone_9();
    void* get_AnimGraphNode_ModifyBone_8();
    void* get_AnimGraphNode_ModifyBone_7();
    void* get_AnimGraphNode_ModifyBone_6();
    void* get_AnimGraphNode_ModifyBone_5();
    void* get_AnimGraphNode_ModifyBone_4();
    void* get_AnimGraphNode_ModifyBone_3();
    void* get_AnimGraphNode_ModifyBone_2();
    void* get_AnimGraphNode_ModifyBone_1();
    void* get_AnimGraphNode_ModifyBone();
    bool get_RotateTorsoGears();
    void set_RotateTorsoGears(bool value);
    float& get_Timer();
    void* get_Spring_State_A();
    float& get_Spring_A();
    float& get_Delta_Time_X();
    void* get_Spring_State_B();
    float& get_Spring_B();
    float& get_Spring_C();
    void* get_Spring_State_C();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_50ADB14342F1D557FFA062B3D99B0574();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_061B60E64E5BA88B79DDF19440CC9341();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_236BE012474AD0530C372EAA7772A610();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_EEADA9A243BDF0631CF887B124E535E7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_35247B3442C3B29785520EB4DD2E305C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_00D18F3642B5D4C14C16D4BD8B4A5920();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_B7388B62432125269355178E3ED84583();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_124C8399464627CB9B909A853F262AD1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_8C17FEE843858C0639F414B725ECC7AA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_B580D8F64CF9EA27268701A48AA5160E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_AC645198466FB6263B4496B69C9A4837();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_573311474844D186574B81A5CF893F34();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_B0A8BD124A0F6C529DDF09AC91BCAC5D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_06518C57404E13E6E0B78DA59B7B7500();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_DB758C2E43EBB0EE0230DE892A47F7F0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_6B49FBC349A20706B0FEC5990B9F5CC9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_9985A00C44AE49B9A725F9A73CD9B773();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_EA8BE368477C6ECADE2E4B937018B062();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_18412A6648E9B147ACD2B69BD99E3187();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_390743CE408831C972CFE48DBF0AB47C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_LayeredBoneBlend_308E98364894AEC74BBF59A5A83F5911();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_C0985A1D446441C797D3A78972373E5F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_0B1A8C7940E07CD410C9A89425B17DBF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_AD56A6FD4D7E4EA624744F852104CB5A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_2FD9977D475D67C921D7CBB14BC10560();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_86E690D74D217EB03C8637AC6F9BB07A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_24190EDB405EF91AB23D8AABF6EB9177();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_47B16B2D4477AC01B4307FA484D105FE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_266EB3984127A947FBFEA2A2B6C47CF0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_4DB5D9D44C124F383248EEBB48634DC8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_A4FDE9FF44AA3B2FFDE7E1A07765C8B8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Skin_Steampunk_AnimGraphNode_ModifyBone_923F6AE343BA337C3374C2A549F03CF7();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_Skin_Steampunk(int32_t EntryPoint);
}; // Size: 0x27e0
#pragma pack(pop)
}
