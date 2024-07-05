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
namespace _Game_Interface_Shoppy_Widgets_UI_PurchaseButton {
#pragma pack(push, 1)
struct UI_PurchaseButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Button*& get_Button_99();
    _Script_UMG::TextBlock*& get_BuyWith();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::Image*& get_Icon();
    _Script_UMG::TextBlock*& get_PriceLabel();
    void* get_ButtonReleased();
    bool get_bIsTicket();
    void set_bIsTicket(bool value);
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_PurchaseButton_Button_99_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void SetPrice(void* Price);
    void BndEvt__UI_PurchaseButton_Button_99_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_PurchaseButton_Button_99_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_PurchaseButton(int32_t EntryPoint);
    void ButtonReleased__DelegateSignature();
}; // Size: 0x2b0
#pragma pack(pop)
}
