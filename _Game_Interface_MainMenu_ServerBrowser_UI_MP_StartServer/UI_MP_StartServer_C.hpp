#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_UI_LoadingScreen {
struct UI_LoadingScreen_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_MainMenu_UI_MP_N_MenuButton {
struct UI_MP_N_MenuButton_C;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct CheckBox;
}
namespace _Game_Interface_General_UI_BasicButton {
struct UI_BasicButton_C;
}
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer {
#pragma pack(push, 1)
struct UI_MP_StartServer_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x90]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_ShowLoadingScreen();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::Button*& get_Button();
    _Script_UMG::CheckBox*& get_FriendsOnly();
    _Script_UMG::CheckBox*& get_LanGame();
    _Script_UMG::TextBlock*& get_showdev();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& get_Start();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_UI_BasicButton();
    _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C*& get_UI_LoadingScreen();
    _Script_UMG::UniformGridPanel*& get_UniformGridPanel_0();
    int32_t& get_Level();
    void* get_BackPressed();
    bool get_CalledFromQuickplay();
    void set_CalledFromQuickplay(bool value);
    void* get_QuickplayHostFailed();
    bool get_TryingToHost();
    void set_TryingToHost(bool value);
    bool get_AddComingSoon();
    void set_AddComingSoon(bool value);
    static _Script_CoreUObject::Class* static_class();
    void* GetAllPublicLevels();
    void CreateLevelButtons(void*& Levels);
    void GetRandomLevel(int32_t& OutItem);
    void OnFailure_8953034D42070F751E3C3A94F517334F();
    void OnSuccess_8953034D42070F751E3C3A94F517334F();
    void BndEvt__UI_MP_StartServer_Start_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller);
    void QuickplayHost();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_MP_StartServer_PublicGame_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Construct0();
    void BndEvt__UI_MP_StartServer_UI_BasicButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature();
    void ExecuteUbergraph_UI_MP_StartServer(int32_t EntryPoint);
    void QuickplayHostFailed__DelegateSignature();
    void BackPressed__DelegateSignature();
}; // Size: 0x2f0
#pragma pack(pop)
}
