#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter {
struct UI_CustomizeCharacter_C;
}
namespace _Game_Interface_MainMenu_UI_MP_N_MenuButton {
struct UI_MP_N_MenuButton_C;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Game_Interface_Content_UI_N_RadialProgressBar {
struct UI_N_RadialProgressBar_C;
}
namespace _Game_Interface_MainMenu_Components_T_CurrencyDisplay {
struct T_CurrencyDisplay_C;
}
namespace _Game_Interface_UI_EarlyAccess_Overlay {
struct UI_EarlyAccess_Overlay_C;
}
namespace _Game_Interface_Customization_Emotes_UI_EmoteHolder {
struct UI_EmoteHolder_C;
}
namespace _Game_Interface_Lobby_UI_Ready_Indicator {
struct UI_Ready_Indicator_C;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Lobby_UI_WalkableLobby {
#pragma pack(push, 1)
struct UI_WalkableLobby_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xe0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Open();
    _Script_UMG::WidgetAnimation*& get_GameStartingLoop();
    _Script_UMG::WidgetAnimation*& get_GameStart();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& get_CosmeticButton();
    _Script_UMG::Image*& get_CustomizeBackground();
    _Script_UMG::TextBlock*& get_CustomizeText();
    _Script_UMG::TextBlock*& get_GameStartingText();
    _Script_UMG::Image*& get_Image_100();
    _Script_UMG::Image*& get_Image_183();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_LobbyCrosshair();
    _Script_UMG::WidgetSwitcher*& get_MainWidgetSwitcher();
    _Script_UMG::Overlay*& get_PlayersOverlay();
    _Script_UMG::TextBlock*& get_PlayersText();
    _Script_UMG::Image*& get_QueuedForMonsterBG();
    _Script_UMG::Image*& get_QueuedForMonsterOutline();
    _Script_UMG::TextBlock*& get_QueueDisplay();
    _Script_UMG::ScrollBox*& get_ScrollBox_171();
    _Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C*& get_T_CurrencyDisplay();
    _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C*& get_UI_Customize();
    _Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C*& get_UI_EarlyAccess_Overlay();
    _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C*& get_UI_EmoteHolder();
    _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C*& get_UI_Ready_Indicator();
    bool get_Ready_();
    void set_Ready_(bool value);
    bool get_PerkMenu();
    void set_PerkMenu(bool value);
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Character();
    bool get_HidePlaycoins();
    void set_HidePlaycoins(bool value);
    void* get_GameStartCountdownTimerHandle();
    int32_t& get_GameStartCountdown();
    static _Script_CoreUObject::Class* static_class();
    void UpdateCrosshair();
    void* Get_PlayersText_Text_0();
    void Construct0();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void SetReady(bool Ready_);
    void Update_Lobby();
    void StartGameAnim();
    void EventSwitchCustomization(bool NewCustomizing);
    void BndEvt__UI_WalkableLobby_CosmeticButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller);
    void OnInitialized0();
    void Event_Show_Emotes();
    void BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature(int32_t Index);
    void Destruct0();
    void BndEvt__UI_WalkableLobby_UI_Customize_K2Node_ComponentBoundEvent_3_ChangedAppearance__DelegateSignature();
    void UpdateQueueState(bool Monster_Queue__);
    void UpdateQueueInfo();
    void GameStartCountdownTimer();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_WalkableLobby(int32_t EntryPoint);
}; // Size: 0x340
#pragma pack(pop)
}
