#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Button;
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
namespace _Game_Interface_Settings_UI_ScrollerSetting {
#pragma pack(push, 1)
struct UI_ScrollerSetting_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x88]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_93();
    _Script_UMG::Button*& get_LeftButton();
    _Script_UMG::Image*& get_LeftButtonImage();
    _Script_UMG::Button*& get_RightButton();
    _Script_UMG::Image*& get_RightButtonText();
    _Script_UMG::TextBlock*& get_SettingText();
    _Script_UMG::Spacer*& get_Spacer_96();
    _Script_UMG::TextBlock*& get_TextBlock_133();
    void* get_Label();
    void* get_ValueChanged();
    void* get_Values();
    int32_t& get_Value();
    static _Script_CoreUObject::Class* static_class();
    void Update_Localization();
    void Convert_String_To_Text(void*& String_Array, void*& Text_Array);
    void GetCurrentValue(int32_t& Value, void*& Output);
    void PreConstruct0(bool IsDesignTime);
    void SetLabel(void* Label);
    void UpdateVisuals();
    void BndEvt__UI_ScrollerSetting_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_ScrollerSetting_RightButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void SetValue(int32_t Value);
    void SetValuesEvent(void*& Values);
    void SetValueFromString(void* Str);
    void Set_Index_Array_Text(void* Text, int32_t Index);
    void Construct0();
    void ExecuteUbergraph_UI_ScrollerSetting(int32_t EntryPoint);
    void ValueChanged__DelegateSignature(int32_t Index, void* Value);
}; // Size: 0x2e8
#pragma pack(pop)
}
