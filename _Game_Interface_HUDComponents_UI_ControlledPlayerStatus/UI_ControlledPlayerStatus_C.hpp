#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_HUDComponents_UI_Heart {
struct UI_Heart_C;
}
namespace _Game_Interface_Content_UI_N_RadialProgressBar {
struct UI_N_RadialProgressBar_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_HUDComponents_UI_ControlledPlayerStatus {
#pragma pack(push, 1)
struct UI_ControlledPlayerStatus_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x90]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_RadialProgress();
    _Script_UMG::WidgetAnimation*& get_RechargeFinished();
    _Script_UMG::WidgetAnimation*& get_RollRecharge();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Image*& get_EKGBackground();
    _Script_UMG::Image*& get_EKGLine();
    _Game_Interface_HUDComponents_UI_Heart::UI_Heart_C*& get_Heart1();
    _Game_Interface_HUDComponents_UI_Heart::UI_Heart_C*& get_Heart2();
    _Game_Interface_HUDComponents_UI_Heart::UI_Heart_C*& get_Heart3();
    _Script_UMG::Image*& get_Icon();
    _Script_UMG::TextBlock*& get_PlayerNameLabel();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_PortraitRadialBar();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_ProgressGlow();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_ProgressLine();
    _Script_UMG::Image*& get_RechargeFinishedRing();
    _Script_UMG::Image*& get_RollBG();
    _Script_UMG::Image*& get_RollIcon();
    static _Script_CoreUObject::Class* static_class();
    void LoseHeart(int32_t Index);
    void UpdateRollRechargeProgress(float Progress);
    void BeginRollRecharge(float Time);
    void RollRechargeFinished();
    void SwitchState();
    void PreConstruct0(bool IsDesignTime);
    void BeginRadialTick();
    void StopRadialTick();
    void PauseRadialTick();
    void UnpauseRadialTick();
    void ExecuteUbergraph_UI_ControlledPlayerStatus(int32_t EntryPoint);
}; // Size: 0x2f0
#pragma pack(pop)
}
