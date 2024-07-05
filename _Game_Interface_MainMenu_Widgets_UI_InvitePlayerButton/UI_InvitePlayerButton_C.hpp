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
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Widgets_UI_InvitePlayerButton {
#pragma pack(push, 1)
struct UI_InvitePlayerButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x58]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HighlightButton();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Button*& get_Button_88();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::Image*& get_playericon();
    _Script_Engine::Texture2D*& get_IconImage();
    void* get_ButtonRelease();
    bool get_ShowingPlayer();
    void set_ShowingPlayer(bool value);
    _Script_Engine::MaterialInstanceDynamic*& get_PFP();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void ShowPlayerIcon(_Script_Engine::Texture2D* Avatar);
    void HidePlayerIcon();
    void BndEvt__UI_InvitePlayerButton_Button_88_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_InvitePlayerButton_Button_88_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_InvitePlayerButton_Button_88_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_InvitePlayerButton(int32_t EntryPoint);
    void ButtonRelease__DelegateSignature();
}; // Size: 0x2b8
#pragma pack(pop)
}
