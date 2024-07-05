#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_Customization_Cosmetics_UI_Emotes {
struct UI_Emotes_C;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Game_Interface_Customization_Sabotages_UI_Sabotages {
struct UI_Sabotages_C;
}
namespace _Game_Interface_General_UI_BasicButton {
struct UI_BasicButton_C;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct Button;
}
namespace _Game_Interface_Customization_Perks_UI_Perks {
struct UI_Perks_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_Presets {
struct UI_Presets_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization {
struct UI_TabbedCustomization_C;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter {
struct BP_CustomizationMenuCharacter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter {
#pragma pack(push, 1)
struct UI_CustomizeCharacter_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x100]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_ExpandCatalogFull();
    _Script_UMG::WidgetAnimation*& get_ExpandCatalogHalf();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_AppearanceButton();
    _Script_UMG::CanvasPanel*& get_BackPanel();
    _Script_UMG::Button*& get_CharacterRotator();
    _Script_UMG::CanvasPanel*& get_Emotes();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_EmotesButton();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_PerksButton();
    _Script_UMG::CanvasPanel*& get_Presets();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_PresetsButton();
    _Game_Interface_Customization_Sabotages_UI_Sabotages::UI_Sabotages_C*& get_Sabotages();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_SabotagesButton();
    _Script_UMG::WidgetSwitcher*& get_Switcher();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C*& get_UI_Emotes();
    _Game_Interface_Customization_Perks_UI_Perks::UI_Perks_C*& get_UI_Perks();
    _Game_Interface_Customization_Cosmetics_UI_Presets::UI_Presets_C*& get_UI_Presets();
    _Game_Interface_Customization_Cosmetics_UI_TabbedCustomization::UI_TabbedCustomization_C*& get_UI_TabbedCustomization();
    void* get_BackPressed();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Character();
    bool get_LastWasPerks();
    void set_LastWasPerks(bool value);
    void* get_CharacterType();
    bool get_InMonsterSelector();
    void set_InMonsterSelector(bool value);
    void* get_ChangedAppearance();
    void* get_UpdateRotatingCharacter();
    void* get_PreviousMousePosition();
    bool get_RotatingCharacter();
    void set_RotatingCharacter(bool value);
    void* get_MouseDragged();
    _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& get_Menu_Character();
    static _Script_CoreUObject::Class* static_class();
    void SetCharacterType(void* NewValue);
    void UpdateVisuals();
    void SetCharacter(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C* MenuCharacter);
    void BndEvt__UI_Customize_TEMP_SabotagesButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature();
    void SelectFirstPage(void* CharacterType);
    void SetPersistentButtonStyleOnCorrectButton();
    void BndEvt__UI_Customize_PresetsButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature();
    void BndEvt__UI_Customize_EmotesButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature();
    void BndEvt__UI_Customize_PerksButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature();
    void BndEvt__UI_Customize_AppearanceButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature();
    void BndEvt__UI_CustomizeCharacter_UI_BackButton_K2Node_ComponentBoundEvent_7_Released__DelegateSignature();
    void BndEvt__UI_CustomizeCharacter_UI_Emotes_K2Node_ComponentBoundEvent_0_Changed__DelegateSignature();
    void BndEvt__UI_CustomizeCharacter_Button_559_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_CustomizeCharacter_Button_559_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void BndEvt__UI_CustomizeCharacter_UI_TabbedCustomization_K2Node_ComponentBoundEvent_10_ChangedAppearance__DelegateSignature();
    void Update_Localization();
    void ExecuteUbergraph_UI_CustomizeCharacter(int32_t EntryPoint);
    void MouseDragged__DelegateSignature(_Script_CoreUObject::Vector2D DeltaMouse);
    void UpdateRotatingCharacter__DelegateSignature(bool Rotating_);
    void ChangedAppearance__DelegateSignature();
    void BackPressed__DelegateSignature();
}; // Size: 0x360
#pragma pack(pop)
}
