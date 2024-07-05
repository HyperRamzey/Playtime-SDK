#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Base_GS_Escape {
struct GS_Escape_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Base_BP_MultiplayerPlayerState {
struct BP_MultiplayerPlayerState_C;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Game_Interface_Content_UI_N_RadialProgressBar {
struct UI_N_RadialProgressBar_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_PlayerStatusItem {
#pragma pack(push, 1)
struct UI_PlayerStatusItem_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xc8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_RadialProgress();
    _Script_UMG::Image*& get_EKG();
    _Script_UMG::Image*& get_HeldToyPart();
    _Script_UMG::Image*& get_HeldToyPartBackground();
    _Script_UMG::ScaleBox*& get_NameTextBox();
    _Script_UMG::Image*& get_PlayerStatusBackground();
    _Script_UMG::Image*& get_PlayerStatusIcon();
    _Script_UMG::Image*& get_StatusBackground();
    _Script_UMG::TextBlock*& get_T_PlayerName();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_UI_N_RadialProgressBar();
    _Game_Base_GS_Escape::GS_Escape_C*& get_GS_Escape();
    void* get_PlayerName();
    void* get_Status();
    _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& get_PlayerState();
    static _Script_CoreUObject::Class* static_class();
    void UpdateHealth();
    _Script_SlateCore::SlateColor Get_T_PlayerName_ColorAndOpacity_0();
    _Script_SlateCore::SlateBrush Get_Player_Status_Icon();
    _Script_SlateCore::SlateColor Get_Status_Color();
    void* Get_Status_Text();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void SetPlayerName();
    void SetPerkIcon();
    void UpdateHeldToyPart(_Script_Engine::Texture2D* ToyPart, bool IsHoldingToyPart, void* Toy_Type);
    void UpdatePerksVisibility();
    void BeginRadialTick();
    void StopRadialTick();
    void PauseRadialTick();
    void UnpauseRadialTick();
    void ExecuteUbergraph_UI_PlayerStatusItem(int32_t EntryPoint);
}; // Size: 0x328
#pragma pack(pop)
}
