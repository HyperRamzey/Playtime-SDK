#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_Interface_General_UI_BasicButton {
struct UI_BasicButton_C;
}
namespace _Game_Interface_Settings_UI_Settings_Menu {
struct UI_Settings_Menu_C;
}
namespace _Script_UMG {
struct ScrollBox;
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
namespace _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif {
struct UI_MP_Notif_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_PauseMenu {
#pragma pack(push, 1)
struct UI_PauseMenu_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xb0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HideSettingsMenu();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_Challenges_BasicButton();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_Continue_BasicButton();
    _Script_UMG::ScrollBox*& get_FriendsList();
    _Script_UMG::Image*& get_Image_100();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_LeaveGame_BasicButton();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_Menu_BasicButton();
    _Script_UMG::Overlay*& get_PauseMenu();
    _Script_UMG::WidgetSwitcher*& get_PrimaryWidgetSwitcher();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_Settings_BasicButton();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_SkipTutorial_BasicButton();
    _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C*& get_UI_Settings_Menu();
    void* get_Text();
    _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C*& get_W_Notif();
    _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C*& get_W_Settings();
    void* get_OnUnpause();
    _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C*& get_W_Notif_SkipTutorial();
    bool get_EnableLeaverPenaltySystem();
    void set_EnableLeaverPenaltySystem(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnFailure_D9C8593747F77C44853ACDB8F04BBFDC(void*& Results);
    void OnSuccess_D9C8593747F77C44853ACDB8F04BBFDC(void*& Results);
    void DontQuit();
    void BndEvt__UI_PauseMenu_Settings_BasicButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature();
    void BndEvt__UI_PauseMenu_Continue_BasicButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature();
    void BndEvt__UI_PauseMenu_LeaveGame_BasicButton_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature();
    void BndEvt__UI_PauseMenu_Menu_BasicButton_K2Node_ComponentBoundEvent_7_OnReleased__DelegateSignature();
    void PreConstruct0(bool IsDesignTime);
    void ForceUnpause();
    void QuitToMenu();
    void Construct0();
    void BndEvt__UI_PauseMenu_UI_Settings_Menu_K2Node_ComponentBoundEvent_0_Back__DelegateSignature();
    void BndEvt__UI_PauseMenu_LeaveGame_BasicButton_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature();
    void SkipTutorial();
    void DontSkip();
    void Update_Localization();
    void Success();
    void Fail(void* ErrorMessage);
    void ExecuteUbergraph_UI_PauseMenu(int32_t EntryPoint);
    void OnUnpause__DelegateSignature();
}; // Size: 0x310
#pragma pack(pop)
}
