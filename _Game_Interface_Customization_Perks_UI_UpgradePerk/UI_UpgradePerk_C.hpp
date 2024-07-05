#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
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
struct SizeBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Perks_UI_UpgradePerk {
#pragma pack(push, 1)
struct UI_UpgradePerk_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x68]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Button*& get_Button_97();
    _Script_UMG::TextBlock*& get_ButtonLabel();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::Image*& get_Image_58();
    _Script_UMG::TextBlock*& get_PriceLabel();
    _Script_UMG::SizeBox*& get_SizeBox_167();
    void* get_ButtonPressed();
    void* get_TextCheck();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__UI_UpgradePerk_Button_97_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_UpgradePerk_Button_97_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_UpgradePerk_Button_97_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_UpgradePerk_Button_97_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void Construct0();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_UpgradePerk(int32_t EntryPoint);
    void ButtonPressed__DelegateSignature();
}; // Size: 0x2c8
#pragma pack(pop)
}
