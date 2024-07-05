#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Slate\InputChord.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct InputKeySelector;
}
namespace _Script_UMG {
struct Spacer;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_General_UI_KeyBind {
#pragma pack(push, 1)
struct UI_KeyBind_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::Image*& get_Image_164();
    _Script_UMG::Image*& get_Image_260();
    _Script_UMG::InputKeySelector*& get_InputKeySelector();
    _Script_UMG::TextBlock*& get_Name();
    _Script_UMG::Spacer*& get_Spacer_130();
    void* get_VisibleName();
    void* get_ValueChanged();
    int32_t& get_TabLevel();
    void* get_ActionName();
    bool get_IsAxisMapping();
    void set_IsAxisMapping(bool value);
    float& get_AxisMapValue();
    void* get_Key();
    void* get_Default();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void SetupKeyBinding(_Script_InputCore::Key Key);
    void BndEvt__UI_KeyBind_InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(_Script_Slate::InputChord SelectedKey);
    void RESETTODEFAULTS();
    void Update_Visuals();
    void Construct0();
    void Set_Visible_Name(void* VisibleName);
    void BndEvt__UI_KeyBind_InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature();
    void ExecuteUbergraph_UI_KeyBind(int32_t EntryPoint);
    void ValueChanged__DelegateSignature(float Slider, int32_t ComboBoxIndex, bool CheckBox, bool RequiresApply);
}; // Size: 0x308
#pragma pack(pop)
}
