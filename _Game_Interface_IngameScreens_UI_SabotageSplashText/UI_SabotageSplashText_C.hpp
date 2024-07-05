#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\SabotageDef.hpp"
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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_SabotageSplashText {
#pragma pack(push, 1)
struct UI_SabotageSplashText_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x138]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_SaboWithdrawn();
    _Script_UMG::WidgetAnimation*& get_SaboActivated();
    _Script_UMG::TextBlock*& get_SabotageActivatedText();
    _Script_UMG::Image*& get_SabotageCard();
    _Script_UMG::Image*& get_SabotageDescBackground();
    _Script_UMG::Image*& get_SabotageIconBox();
    _Script_UMG::TextBlock*& get_SabotageLevel();
    _Script_UMG::Image*& get_SabotageOutline();
    _Script_UMG::Image*& get_SabotagePreview();
    _Script_UMG::TextBlock*& get_SabotageSubText();
    _Script_UMG::Image*& get_SabotIcon();
    void* get_SabotageDef();
    void* get_IconHandoff();
    int32_t& get_SabotageLvl();
    static _Script_CoreUObject::Class* static_class();
    void SequenceEvent__ENTRYPOINTUI_SabotageSplashText_0();
    void AnimationFinished();
    void BeginLifecycle(bool Activated_);
    void PseudoConstruct(_Script_Playtime_Multiplayer::SabotageDef SabotageDef, int32_t SabotageLevel);
    void TriggerIconHandoff();
    void WithdrawFinished();
    void ExecuteUbergraph_UI_SabotageSplashText(int32_t EntryPoint);
    void IconHandoff__DelegateSignature();
}; // Size: 0x398
#pragma pack(pop)
}
