#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Playtime_Multiplayer\SabotageDef.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
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
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MonsterHUDs_UI_SabotageComponent {
#pragma pack(push, 1)
struct UI_SabotageComponent_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x68]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_SabotageReady();
    _Script_UMG::WidgetAnimation*& get_SabotageRefill();
    _Script_UMG::TextBlock*& get_SabotageControlLabel();
    _Script_UMG::TextBlock*& get_SabotageCooldown();
    _Script_UMG::Image*& get_SabotageIcon();
    _Script_UMG::Image*& get_SabotageOutline();
    _Script_UMG::ProgressBar*& get_SabotageProgressBar();
    void* get_Initial_Color();
    float& get_SabotagePercent();
    float& get_SabotageMin();
    float& get_SabotageMax();
    void* get_SabotageCooldownHandle();
    static _Script_CoreUObject::Class* static_class();
    void SetMappedPercent(float Percent);
    void PreConstruct0(bool IsDesignTime);
    void ResetFillColorAndOpacity();
    void SetFillColorAndOpacity(_Script_CoreUObject::LinearColor InColor);
    void SetTextFillColorAndOpacity(float InOpacity);
    void DoRefillAbility(float Time);
    void SetSabotageCooldown(_Script_Playtime_Multiplayer::SabotageDef SabotageDef);
    void DisableSabotageCooldown();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void DisableSabotage();
    void ExecuteUbergraph_UI_SabotageComponent(int32_t EntryPoint);
}; // Size: 0x2c8
#pragma pack(pop)
}
