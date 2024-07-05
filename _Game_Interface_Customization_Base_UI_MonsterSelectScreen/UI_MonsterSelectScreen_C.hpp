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
struct CanvasPanel;
}
namespace _Game_Interface_General_UI_WhiteBGButton {
struct UI_WhiteBGButton_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter {
struct UI_CustomizeCharacter_C;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct Button;
}
namespace _Game_Interface_UI_EarlyAccess_Overlay {
struct UI_EarlyAccess_Overlay_C;
}
namespace _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer {
struct BP_MonsterContainer_C;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Base_UI_MonsterSelectScreen {
#pragma pack(push, 1)
struct UI_MonsterSelectScreen_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xb8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Blink();
    _Script_UMG::TextBlock*& get_CharacterDescriptionText();
    _Script_UMG::TextBlock*& get_CharacterNameText();
    _Script_UMG::CanvasPanel*& get_CharacterSelector();
    _Game_Interface_General_UI_WhiteBGButton::UI_WhiteBGButton_C*& get_CustomizeButton();
    _Script_UMG::TextBlock*& get_FolderText();
    _Script_UMG::Image*& get_Image_45();
    _Script_UMG::Button*& get_NextCharButton();
    _Script_UMG::Button*& get_PreviousCharButton();
    _Script_UMG::WidgetSwitcher*& get_Switcher();
    _Script_UMG::TextBlock*& get_TimeRemainingText();
    _Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C*& get_UI_CustomizeCharacter();
    _Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C*& get_UI_EarlyAccess_Overlay();
    void* get_CurrentVisibleCharacter();
    void* get_Back_Pressed();
    bool get_IsCustomizingSpecificCharacter();
    void set_IsCustomizingSpecificCharacter(bool value);
    _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C*& get_MonsterContainer();
    int32_t& get_TimeRemaining();
    void* get_ClientTimer();
    _Script_Engine::AudioComponent*& get_MontageSound();
    float& get_CountdownDuration();
    static _Script_CoreUObject::Class* static_class();
    void Update_Localization();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_Customize_Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void RefreshVisuals();
    void BndEvt__UI_Customize_NextCharButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_Customize_CustomizeButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature();
    void BndEvt__UI_MonsterSelectScreen_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature();
    void BndEvt__UI_MonsterSelectScreen_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_4_ChangedAppearance__DelegateSignature();
    void Time_s_Up_Event();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void OnInitialized0();
    void Construct0();
    void ExecuteUbergraph_UI_MonsterSelectScreen(int32_t EntryPoint);
    void Back_Pressed__DelegateSignature();
}; // Size: 0x318
#pragma pack(pop)
}
