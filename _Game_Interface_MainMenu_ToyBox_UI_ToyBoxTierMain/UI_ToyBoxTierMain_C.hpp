#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\ToyBoxResponse.hpp"
#include "..\_Script_Playtime_Multiplayer\ToyBoxResponseItem.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_Playtime_Multiplayer {
struct LevelResponse;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain {
#pragma pack(push, 1)
struct UI_ToyBoxTierMain_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x290]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HoverAnim();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::Button*& get_Button_78();
    _Script_UMG::Image*& get_Check();
    _Script_UMG::Image*& get_CheckOutline();
    _Script_UMG::Overlay*& get_Content();
    _Script_UMG::Overlay*& get_Fail();
    _Script_UMG::Image*& get_Free();
    _Script_UMG::Image*& get_Index();
    _Script_UMG::Overlay*& get_Loading();
    _Script_UMG::Image*& get_Lock();
    _Script_UMG::Image*& get_Locked();
    _Script_UMG::Image*& get_Overlay();
    _Script_UMG::Image*& get_TBG();
    _Script_UMG::TextBlock*& get_Text_Free();
    _Script_UMG::Image*& get_Thumbnail();
    _Script_UMG::ProgressBar*& get_Tier_ProgressBar();
    _Script_UMG::TextBlock*& get_TierText();
    _Script_UMG::WidgetSwitcher*& get_WidgetSwitcher_36();
    int32_t& get_UserLevel();
    bool get_Selected();
    void set_Selected(bool value);
    void* get_ToyboxTierClicked();
    void* get_ToyboxTierOnHovered();
    int32_t& get_LevelOffset();
    void* get_UserLevelResponse();
    int32_t& get_ActualLevel();
    void* get_Item();
    void* get_Color_BG_Coin();
    void* get_Color_BG_Common();
    void* get_Color_BG_Rare();
    void* get_Color_BG_Epic();
    void* get_Color_BG_Legendary();
    void* get_Color_Index_Coin();
    void* get_Color_Index_Common();
    void* get_Color_Index_Rare();
    void* get_Color_Index_Epic();
    void* get_Color_Index_Legendary();
    void* get_Found_Widgets();
    static _Script_CoreUObject::Class* static_class();
    bool IsCoins();
    void SetSelected(bool Condition);
    void PreConstruct0(bool IsDesignTime);
    void DisplayContent();
    void BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void SetPage(int32_t Page, _Script_Playtime_Multiplayer::ToyBoxResponse ToyBox);
    void SetupLevels(_Script_Playtime_Multiplayer::LevelResponse& LevelResponse);
    void ExecuteUbergraph_UI_ToyBoxTierMain(int32_t EntryPoint);
    void ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item);
    void ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level);
}; // Size: 0x4f0
#pragma pack(pop)
}
