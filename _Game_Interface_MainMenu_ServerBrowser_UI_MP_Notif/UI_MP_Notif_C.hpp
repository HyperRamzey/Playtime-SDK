#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_General_UI_BasicButton {
struct UI_BasicButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif {
#pragma pack(push, 1)
struct UI_MP_Notif_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xa8]; public:
    void* get_UberGraphFrame();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_AffirmativeButton();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::TextBlock*& get_BodyLabel();
    _Script_UMG::Image*& get_HeaderBackground();
    _Script_UMG::SizeBox*& get_HeaderBox();
    _Script_UMG::Image*& get_HeaderFrame();
    _Script_UMG::TextBlock*& get_HeaderLabel();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_NegativeButton();
    void* get_HeaderText();
    void* get_BodyText();
    bool get_OnScreen();
    void set_OnScreen(bool value);
    void* get_ClickYes();
    void* get_ClickNo();
    _Script_Engine::MaterialInstanceDynamic*& get_HeaderBGMat();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ForceNo();
    void OnEscapeInputCapture();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_MP_Notif_AffirmativeButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
    void BndEvt__UI_MP_Notif_NegativeButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature();
    void ExecuteUbergraph_UI_MP_Notif(int32_t EntryPoint);
    void ClickNo__DelegateSignature();
    void ClickYes__DelegateSignature();
}; // Size: 0x308
#pragma pack(pop)
}
