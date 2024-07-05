#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Overlay;
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
namespace _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory {
struct UI_N_ServerCategory_C;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Script_UMG {
struct EditableTextBox;
}
namespace _Game_Interface_Content_UI_N_Loading {
struct UI_N_Loading_C;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow {
struct UI_N_ServerRow_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser {
#pragma pack(push, 1)
struct UI_MP_ServerBrowser_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xc8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::Button*& get_Button();
    _Script_UMG::Button*& get_Button_1();
    _Script_UMG::Button*& get_Button_144();
    _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C*& get_CategoryFriends();
    _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C*& get_CategoryLAN();
    _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C*& get_CategoryPublic();
    _Script_UMG::ScrollBox*& get_Content();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& get_Exit();
    _Script_UMG::TextBlock*& get_MapName();
    _Script_UMG::TextBlock*& get_NoGameSelected();
    _Script_UMG::TextBlock*& get_NoGamesFound();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& get_Play();
    _Script_UMG::TextBlock*& get_Population();
    _Script_UMG::Overlay*& get_RightContent();
    _Script_UMG::EditableTextBox*& get_Search();
    _Script_UMG::Image*& get_Thumb();
    _Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& get_UI_N_Loading();
    _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C*& get_CurrentRow();
    void* get_Back();
    void* get_ServerNameList();
    static _Script_CoreUObject::Class* static_class();
    void FailServers();
    void ClearServers();
    void PopulateServers(void*& SteamSessions);
    void PopulateRightData(_Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C* Row);
    void OnFailure_7EECB2314B992AA8E6AB5BB3D8E913F7();
    void OnSuccess_7EECB2314B992AA8E6AB5BB3D8E913F7();
    void OnCallback_BE0D16BF44C98FD5E825EB91E429D311(void*& Results);
    void BndEvt__UI_MP_ServerBrowser_Button_144_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_MP_ServerBrowser_Search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(void*& Text);
    void OnInitialized0();
    void Initialize();
    void BndEvt__UI_MP_ServerBrowser_Play_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller);
    void BndEvt__UI_MP_ServerBrowser_Exit_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller);
    void BndEvt__UI_MP_ServerBrowser_CategoryFriends_K2Node_ComponentBoundEvent_6_Released__DelegateSignature(void* Category);
    void BndEvt__UI_MP_ServerBrowser_CategoryPublic_K2Node_ComponentBoundEvent_3_Released__DelegateSignature(void* Category);
    void ExecuteUbergraph_UI_MP_ServerBrowser(int32_t EntryPoint);
    void Back__DelegateSignature();
}; // Size: 0x328
#pragma pack(pop)
}
