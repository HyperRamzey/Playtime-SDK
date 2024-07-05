#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_General_UI_Setting {
struct UI_Setting_C;
}
namespace _Game_Interface_Settings_UI_ScrollerSetting {
struct UI_ScrollerSetting_C;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Game_Interface_General_UI_WhiteBGButton {
struct UI_WhiteBGButton_C;
}
namespace _Game_Interface_General_UI_BasicButton {
struct UI_BasicButton_C;
}
namespace _Game_Interface_Settings_UI_FloatSliderSetting {
struct UI_FloatSliderSetting_C;
}
namespace _Game_Interface_General_UI_KeyBind {
struct UI_KeyBind_C;
}
namespace _Game_Interface_Settings_UI_IntSliderSetting {
struct UI_IntSliderSetting_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_General_UI_ResetToDefaults {
struct UI_ResetToDefaults_C;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Script_Playtime_Multiplayer {
struct PlaytimeSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Settings_UI_Settings_Menu {
#pragma pack(push, 1)
struct UI_Settings_Menu_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x238]; public:
    void* get_UberGraphFrame();
    _Game_Interface_General_UI_Setting::UI_Setting_C*& get_ActionsLabel();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_Anti_Aliasing();
    _Game_Interface_General_UI_WhiteBGButton::UI_WhiteBGButton_C*& get_Apply();
    _Script_UMG::ScrollBox*& get_Audio();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_AudioButton();
    _Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& get_backward();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_Bobbing();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_ColorblindMode();
    _Script_UMG::ScrollBox*& get_Controls();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_ControlsButton();
    _Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& get_Crouch();
    _Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& get_Emote();
    _Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& get_Forward();
    _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& get_FOV();
    _Script_UMG::ScrollBox*& get_Gameplay();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_GameplayButton();
    _Game_Interface_Settings_UI_FloatSliderSetting::UI_FloatSliderSetting_C*& get_Gamma();
    _Script_UMG::TextBlock*& get_GPUDisplay();
    _Script_UMG::ScrollBox*& get_Graphics();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_GraphicsButton();
    _Script_UMG::Image*& get_Image_14();
    _Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& get_Interact();
    _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& get_IntGrabpackVolume();
    _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& get_IntMainVolume();
    _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& get_IntMusicVolume();
    _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& get_IntSFXVolume();
    _Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& get_Jump();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_Language();
    _Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& get_Left();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_MinimalHUD();
    _Game_Interface_General_UI_Setting::UI_Setting_C*& get_MovementLabel();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_PostProcessQuality();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_ReflectionQuality();
    _Game_Interface_General_UI_ResetToDefaults::UI_ResetToDefaults_C*& get_RESETTODEFAULTS();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_Resolution();
    _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& get_ResolutionScale();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_RestorePurchasesButton();
    _Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& get_Right();
    _Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& get_Roll();
    _Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& get_Sabotage();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_ScreenMode();
    _Game_Interface_Settings_UI_FloatSliderSetting::UI_FloatSliderSetting_C*& get_Sensitivity();
    _Game_Interface_Settings_UI_FloatSliderSetting::UI_FloatSliderSetting_C*& get_Severity();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_ShaderQuality();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_ShadowQuality();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_ShouldLimitFPS();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_SkipCinematic();
    _Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& get_Sprint();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_StreamerMode();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_Subtitles();
    _Script_UMG::WidgetSwitcher*& get_Switcher();
    _Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& get_TargetFPS();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_TextChat();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_TextureQuality();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Game_Interface_General_UI_ResetToDefaults::UI_ResetToDefaults_C*& get_UI_ResetToDefaults();
    _Game_Interface_General_UI_WhiteBGButton::UI_WhiteBGButton_C*& get_UI_WhiteBGButton();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_VFXQuality();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_ViewDistanceQuality();
    _Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& get_VSYNC();
    int32_t& get_CurrentTab();
    void* get_Back();
    void* get_AvailableResolutions();
    _Script_Playtime_Multiplayer::PlaytimeSettings*& get_LocalSettings();
    void* get_UserCorrelation();
    void* get_SteamCorrelation();
    static _Script_CoreUObject::Class* static_class();
    void Update_Localization();
    void MinimalHUD_OnValueChanged(void* Selection);
    void PreConstruct0(bool IsDesignTime);
    void UpdateVisuals();
    void Set_Current_Tab(int32_t CurrentTab);
    void LoadSettings();
    void BndEvt__UI_Settings_Menu_Resolution_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_Anti_Aliasing_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_ResolutionScale_K2Node_ComponentBoundEvent_2_ValueChanged__DelegateSignature(int32_t Value);
    void BndEvt__UI_Settings_Menu_ScreenMode_K2Node_ComponentBoundEvent_3_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_ShaderQuality_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_ShadowQuality_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_TargetFPS_K2Node_ComponentBoundEvent_6_ValueChanged__DelegateSignature(int32_t Value);
    void BndEvt__UI_Settings_Menu_TextureQuality_K2Node_ComponentBoundEvent_7_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_VSYNC_K2Node_ComponentBoundEvent_8_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_Apply_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature();
    void BndEvt__UI_Settings_Menu_GraphicsButton_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature();
    void BndEvt__UI_Settings_Menu_ControlsButton_K2Node_ComponentBoundEvent_11_OnReleased__DelegateSignature();
    void BndEvt__UI_Settings_Menu_RESETTODEFAULTS_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature();
    void BndEvt__UI_Settings_Menu_AudioButton_K2Node_ComponentBoundEvent_14_OnReleased__DelegateSignature();
    void BndEvt__UI_Settings_Menu_Sensitivity_K2Node_ComponentBoundEvent_15_ValueChanged__DelegateSignature(float Value);
    void BndEvt__UI_Settings_Menu_GameplayButton_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature();
    void BndEvt__UI_Settings_Menu_IntSFXVolume_K2Node_ComponentBoundEvent_20_ValueChanged__DelegateSignature(int32_t Value);
    void BndEvt__UI_Settings_Menu_IntMusicVolume_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature(int32_t Value);
    void BndEvt__UI_Settings_Menu_IntMainVolume_K2Node_ComponentBoundEvent_24_ValueChanged__DelegateSignature(int32_t Value);
    void BndEvt__UI_Settings_Menu_Bobbing_K2Node_ComponentBoundEvent_18_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_ColorblindMode_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_Severity_K2Node_ComponentBoundEvent_21_ValueChanged__DelegateSignature(float Value);
    void BndEvt__UI_Settings_Menu_UI_BackButton_K2Node_ComponentBoundEvent_23_Released__DelegateSignature();
    void BndEvt__UI_Settings_Menu_SkipCinematic_K2Node_ComponentBoundEvent_13_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_ReflectionQuality_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void CloseMenu();
    void ForceCloseMenu();
    void BndEvt__UI_Settings_Menu_UI_WhiteBGButton_K2Node_ComponentBoundEvent_26_OnReleased__DelegateSignature();
    void BndEvt__UI_Settings_Menu_ShouldLimitFPS_K2Node_ComponentBoundEvent_27_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_PostProcessQuality_K2Node_ComponentBoundEvent_28_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_ViewDistanceQuality_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_FOV_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature(int32_t Value);
    void BndEvt__UI_Settings_Menu_Language_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_Subtitles_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void SaveSettingsOnDelay();
    void Construct0();
    void BndEvt__UI_Settings_Menu_IntGrabpackVolume_K2Node_ComponentBoundEvent_33_ValueChanged__DelegateSignature(int32_t Value);
    void BndEvt__UI_Settings_Menu_TextChat_K2Node_ComponentBoundEvent_34_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_VFXQuality_K2Node_ComponentBoundEvent_35_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_PlayerStatusPerks_K2Node_ComponentBoundEvent_36_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void BndEvt__UI_Settings_Menu_StreamerMode_K2Node_ComponentBoundEvent_37_ValueChanged__DelegateSignature(int32_t Index, void* Value);
    void Destruct0();
    void BndEvt__UI_Settings_Menu_RestorePurchasesButton_K2Node_ComponentBoundEvent_17_OnReleased__DelegateSignature();
    void BndEvt__UI_Settings_Menu_UI_ResetToDefaults_K2Node_ComponentBoundEvent_38_OnReleased__DelegateSignature();
    void CreateUserError(void* ErrorMessage);
    void CreateUserSuccess();
    void Fail(void* ErrorMessage);
    void MigrationSuccess();
    void ExecuteUbergraph_UI_Settings_Menu(int32_t EntryPoint);
    void Back__DelegateSignature();
}; // Size: 0x498
#pragma pack(pop)
}
