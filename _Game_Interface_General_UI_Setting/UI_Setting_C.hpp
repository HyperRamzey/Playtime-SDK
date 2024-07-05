#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct CheckBox;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct ComboBoxString;
}
namespace _Game_Interface_General_UI_BasicButton {
struct UI_BasicButton_C;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Slider;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Spacer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_General_UI_Setting {
#pragma pack(push, 1)
struct UI_Setting_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xc8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::CheckBox*& get_CheckBox_125();
    _Script_UMG::ComboBoxString*& get_ComboBox();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_High();
    _Script_UMG::CanvasPanel*& get_Label();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_Low();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_Medium();
    _Script_UMG::TextBlock*& get_Name();
    _Script_UMG::HorizontalBox*& get_Quality();
    _Script_UMG::WidgetSwitcher*& get_Selector();
    _Script_UMG::HorizontalBox*& get_Slider();
    _Script_UMG::Slider*& get_Slider_85();
    _Script_UMG::TextBlock*& get_SliderValue();
    _Script_UMG::Spacer*& get_Spacer_130();
    void* get_SettingName();
    void* get_SettingType();
    void* get_ValueChanged();
    float& get_MinSliderValue();
    float& get_MaxSliderValue();
    void* get_ComboBoxOptions();
    int32_t& get_DefaultSelectedOption();
    int32_t& get_TabLevel();
    bool get_RequiresApply();
    void set_RequiresApply(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetComboBoxOptions_(void*& ComboBoxOptions);
    void SetSliderValue(float InValue);
    void SetSliderValueRaw(float Value_[0_1]);
    void BndEvt__UI_Setting_Slider_85_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_Setting_CheckBox_125_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__UI_Setting_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(void* SelectedItem, void* SelectionType);
    void Update_Localization();
    void Construct0();
    void ExecuteUbergraph_UI_Setting(int32_t EntryPoint);
    void ValueChanged__DelegateSignature(float Slider, int32_t IntValue, bool CheckBox, bool RequiresApply);
}; // Size: 0x328
#pragma pack(pop)
}
