#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct EditableText;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Spacer;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Interface_General_UI_IntSlider {
struct UI_IntSlider_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Settings_UI_IntSliderSetting {
#pragma pack(push, 1)
struct UI_IntSliderSetting_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x70]; public:
    void* get_UberGraphFrame();
    _Script_UMG::EditableText*& get_EditableText_175();
    _Script_UMG::Image*& get_Image_119();
    _Script_UMG::Spacer*& get_Spacer_96();
    _Script_UMG::TextBlock*& get_TextBlock_133();
    _Game_Interface_General_UI_IntSlider::UI_IntSlider_C*& get_UI_IntSlider();
    void* get_Label();
    int32_t& get_Max();
    int32_t& get_Min();
    int32_t& get_Value();
    void* get_ValueChanged();
    int32_t& get_TabLevel();
    static _Script_CoreUObject::Class* static_class();
    void Update_Localization();
    void PreConstruct0(bool IsDesignTime);
    void SetLabel(void* Label);
    void UpdateVisuals();
    void BndEvt__UI_IntSliderSetting_UI_IntSlider_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature(int32_t Value);
    void SetValue(int32_t Value);
    void BndEvt__UI_IntSliderSetting_EditableText_175_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(void*& Text, void* CommitMethod);
    void Construct0();
    void ExecuteUbergraph_UI_IntSliderSetting(int32_t EntryPoint);
    void ValueChanged__DelegateSignature(int32_t Value);
}; // Size: 0x2d0
#pragma pack(pop)
}
