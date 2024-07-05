#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
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
namespace _Script_UMG {
struct SizeBox;
}
namespace _Game_Interface_MatchMaking_UI_MMButtonToolTip {
struct UI_MMButtonToolTip_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MatchMaking_UI_MatchmakingMenuButton {
#pragma pack(push, 1)
struct UI_MatchmakingMenuButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x90]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HighlightButton();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Button*& get_Button_108();
    _Script_UMG::Image*& get_ButtonIcon();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::SizeBox*& get_SizeBox_32();
    _Game_Interface_MatchMaking_UI_MMButtonToolTip::UI_MMButtonToolTip_C*& get_UI_MMButtonToolTip();
    void* get_ButtonPressed();
    _Script_Engine::Texture2D*& get_Icon();
    void* get_ButtonName();
    void* get_ButtonDescription();
    float& get_ButtonSize();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_MatchmakingMenuButton_Button_108_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_MatchmakingMenuButton_Button_108_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_MatchmakingMenuButton_Button_108_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void UpdateButtontEXT(void* ButtonText, void* DescriptionText);
    void ExecuteUbergraph_UI_MatchmakingMenuButton(int32_t EntryPoint);
    void ButtonPressed__DelegateSignature();
}; // Size: 0x2f0
#pragma pack(pop)
}
