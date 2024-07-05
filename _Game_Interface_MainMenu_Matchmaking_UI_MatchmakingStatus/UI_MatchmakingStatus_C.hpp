#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface {
struct UI_PrivateMatchCodeInterface_C;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton {
struct UI_StoreTooltipButton_C;
}
namespace _Script_UMG {
struct Throbber;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus {
#pragma pack(push, 1)
struct UI_MatchmakingStatus_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xc0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_MapPreview();
    _Script_UMG::Image*& get_MapPreviewFrame();
    _Script_UMG::Border*& get_Players_Header();
    _Script_UMG::WidgetSwitcher*& get_PublicPrivate_Switcher();
    _Script_UMG::HorizontalBox*& get_Status_Searching();
    _Script_UMG::WidgetSwitcher*& get_Status_Switcher();
    _Script_UMG::TextBlock*& get_T_PlayerCount();
    _Script_UMG::Throbber*& get_Throbber_122();
    _Script_UMG::TextBlock*& get_Timer();
    _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C*& get_UI_PrivateMatchCodeInterface();
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& get_UI_StoreTooltipButton();
    _Script_UMG::VerticalBox*& get_VB_Players();
    int32_t& get_CurrentThumbnail();
    void* get_OnQueueStarted();
    void* get_OnQueueStopped();
    bool get_PrivateMatch();
    void set_PrivateMatch(bool value);
    _Script_Engine::MaterialInstanceDynamic*& get_MapPreviewMat();
    bool get_isQueued();
    void set_isQueued(bool value);
    bool get_RateLimited();
    void set_RateLimited(bool value);
    void* get_QueueStatus_Timer();
    void* get_Starting_Timer();
    int32_t& get_StartTime();
    bool get_StartedCountdownTimer();
    void set_StartedCountdownTimer(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ToggleLobbyStatusWidgets(bool Visible);
    void GetUpdatedLobbyList(void*& List);
    void* Get_T_PlayerCount_Text_0();
    void* Get_T_QueueBanner_Text_0();
    void ThumbnailSequence();
    void StopQueue();
    void StartQueue();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_MatchmakingStatus_UI_StoreTooltipButton_K2Node_ComponentBoundEvent_0_ButtonReleased__DelegateSignature();
    void EnableMatchButton();
    void RateLimit();
    void UpdateQueueStatus();
    void StartQueueStatusTimer();
    void EndQueueStatusTimer();
    void DecrementTimer();
    void ExecuteUbergraph_UI_MatchmakingStatus(int32_t EntryPoint);
    void OnQueueStopped__DelegateSignature();
    void OnQueueStarted__DelegateSignature();
}; // Size: 0x320
#pragma pack(pop)
}
