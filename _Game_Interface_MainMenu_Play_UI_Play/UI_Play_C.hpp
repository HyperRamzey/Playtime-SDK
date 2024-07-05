#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Interface_MainMenu_Play_UI_PlayCard {
struct UI_PlayCard_C;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_Interface_General_UI_BasicButton {
struct UI_BasicButton_C;
}
namespace _Game_Interface_MainMenu_Play_UI_FindingGame {
struct UI_FindingGame_C;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser {
struct UI_MP_ServerBrowser_C;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer {
struct UI_MP_StartServer_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Play_UI_Play {
#pragma pack(push, 1)
struct UI_Play_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_ShowSwitcher();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_Back();
    _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C*& get_Host();
    _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C*& get_Quickplay();
    _Script_UMG::TextBlock*& get_SelectPlayMode();
    _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C*& get_ServerList();
    _Script_UMG::TextBlock*& get_TR();
    _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C*& get_UI_FindingGame();
    _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C*& get_UI_MP_ServerBrowser();
    _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C*& get_UI_MP_StartServer();
    _Script_UMG::WidgetSwitcher*& get_WidgetSwitcher_134();
    void* get_HostReleased();
    void* get_ListReleased();
    void* get_QuickplayReleased();
    void* get_GoBack();
    bool get_Penalized();
    void set_Penalized(bool value);
    int32_t& get_PenaltySeconds();
    static _Script_CoreUObject::Class* static_class();
    int32_t GetMinutesTimespan(_Script_CoreUObject::Timespan InTimespan);
    void OnFailure_0A33D4554B1C14C6362812B574431F02();
    void OnSuccess_0A33D4554B1C14C6362812B574431F02();
    void BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_5_Back__DelegateSignature();
    void BndEvt__UI_Play_UI_MP_ServerBrowser_K2Node_ComponentBoundEvent_4_Back__DelegateSignature();
    void PreConstruct0(bool IsDesignTime);
    void Update_Localization();
    void GetPenaltiesFail(void* ErrorMessage);
    void GetPenaltiesSuccess(int32_t Value);
    void Construct0();
    void BndEvt__UI_Play_Back_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature();
    void BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_8_QuickplayHostFailed__DelegateSignature();
    void BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature();
    void BndEvt__UI_Play_ServerList_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature();
    void BndEvt__UI_Play_Quickplay_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature();
    void BndEvt__UI_Play_Host_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
    void BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_7_WantsToTryHosting__DelegateSignature();
    void ExecuteUbergraph_UI_Play(int32_t EntryPoint);
    void GoBack__DelegateSignature();
    void QuickplayReleased__DelegateSignature();
    void ListReleased__DelegateSignature();
    void HostReleased__DelegateSignature();
}; // Size: 0x308
#pragma pack(pop)
}
