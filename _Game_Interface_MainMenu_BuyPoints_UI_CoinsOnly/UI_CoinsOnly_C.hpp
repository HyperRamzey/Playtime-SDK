#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins {
struct UI_BuyPlaycoins_C;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_BuyPoints_UI_CoinsOnly {
#pragma pack(push, 1)
struct UI_CoinsOnly_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::Image*& get_Image_33();
    _Script_UMG::TextBlock*& get_Title();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C*& get_UI_BuyPlaycoins();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void BndEvt__UI_CoinsOnly_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature();
    void ExecuteUbergraph_UI_CoinsOnly(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
}
