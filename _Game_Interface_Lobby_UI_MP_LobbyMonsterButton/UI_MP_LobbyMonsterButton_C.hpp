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
struct Button;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Lobby_UI_MP_LobbyMonsterButton {
#pragma pack(push, 1)
struct UI_MP_LobbyMonsterButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Select();
    _Script_UMG::WidgetAnimation*& get_Hover();
    _Script_UMG::Button*& get_B_Monster();
    _Script_UMG::Image*& get_BG_Image();
    _Script_UMG::Overlay*& get_Overlay_0();
    int32_t& get_Number();
    bool get_SelectedAsMonster();
    void set_SelectedAsMonster(bool value);
    bool get_Authority();
    void set_Authority(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ShowFriendOverlay();
    void BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void ToggleButtonColor(bool Value);
    void OnInitialized0();
    void BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_MP_LobbyMonsterButton(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
}
