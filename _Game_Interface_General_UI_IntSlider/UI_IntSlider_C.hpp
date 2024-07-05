#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Slider;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_General_UI_IntSlider {
#pragma pack(push, 1)
struct UI_IntSlider_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Slider*& get_Slider_65();
    void* get_ValueChanged();
    int32_t& get_Min();
    int32_t& get_Max();
    int32_t& get_Value();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_Slider_Slider_65_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void SetValue(int32_t Value);
    void SetMax(int32_t Max);
    void SetMin(int32_t Min);
    void ExecuteUbergraph_UI_IntSlider(int32_t EntryPoint);
    void ValueChanged__DelegateSignature(int32_t Value);
}; // Size: 0x290
#pragma pack(pop)
}
