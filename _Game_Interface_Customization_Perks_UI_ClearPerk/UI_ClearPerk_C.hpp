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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Perks_UI_ClearPerk {
#pragma pack(push, 1)
struct UI_ClearPerk_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Button*& get_Button_97();
    _Script_UMG::TextBlock*& get_ButtonLabel();
    _Script_UMG::Image*& get_Frame();
    void* get_Button_Pressed();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__UI_ClearPerk_Button_97_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_ClearPerk_Button_97_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_ClearPerk_Button_97_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_ClearPerk(int32_t EntryPoint);
    void Button_Pressed__DelegateSignature();
}; // Size: 0x298
#pragma pack(pop)
}
