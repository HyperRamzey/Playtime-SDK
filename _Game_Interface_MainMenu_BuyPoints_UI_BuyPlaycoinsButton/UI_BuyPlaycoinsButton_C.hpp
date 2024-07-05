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
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton {
#pragma pack(push, 1)
struct UI_BuyPlaycoinsButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xd8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Hover();
    _Script_UMG::WidgetAnimation*& get_ThrobStars();
    _Script_UMG::TextBlock*& get_CoinAmount();
    _Script_UMG::Image*& get_Divider();
    _Script_UMG::Image*& get_Footer();
    _Script_UMG::Button*& get_MainButton();
    _Script_UMG::Image*& get_PLaycoinIcon();
    _Script_UMG::TextBlock*& get_Price();
    _Script_UMG::Image*& get_ShopCardBackground();
    _Script_UMG::Image*& get_StarArt();
    _Script_UMG::Image*& get_TierArt();
    void* get_Bundle();
    void* get_Clicked();
    void* get_BestValueCustomText();
    _Script_Engine::Texture2D*& get_CoinTexture();
    _Script_Engine::Texture2D*& get_StarTexture();
    static _Script_CoreUObject::Class* static_class();
    void SetPrice(void* Price);
    void SetStyle();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct0();
    void BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_N_BuyPointsButton_Button_145_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BuyPlaycoinsButton(int32_t EntryPoint);
    void Clicked__DelegateSignature();
}; // Size: 0x338
#pragma pack(pop)
}
