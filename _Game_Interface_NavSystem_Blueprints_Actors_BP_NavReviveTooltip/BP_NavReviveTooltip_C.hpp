#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
namespace _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Default_W_HoleReviveTooltip {
struct W_HoleReviveTooltip_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavReviveTooltip {
#pragma pack(push, 1)
struct BP_NavReviveTooltip_C : public _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C {
    private: char pad_240[0x20]; public:
    void* get_UberGraphFrame0();
    float& get_LifeTime();
    _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Default_W_HoleReviveTooltip::W_HoleReviveTooltip_C*& get_ToolTipWidget();
    void* get_LimbForTooltip();
    static _Script_CoreUObject::Class* static_class();
    void StartRevive();
    void SetReviveProgress(float Progress);
    void SuccessRevive();
    void CancelRevive();
    void ReceiveBeginPlay();
    void OnAnimationFinished();
    void ExecuteUbergraph_BP_NavReviveTooltip(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
}
