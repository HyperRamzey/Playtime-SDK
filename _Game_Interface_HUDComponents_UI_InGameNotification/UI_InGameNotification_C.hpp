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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_HUDComponents_UI_InGameNotification {
#pragma pack(push, 1)
struct UI_InGameNotification_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x68]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::TextBlock*& get_Action();
    _Script_UMG::Image*& get_NotifBackground();
    _Script_UMG::Image*& get_TicketImage();
    _Script_UMG::TextBlock*& get_TicketReward();
    void* get_In_Notif_Text();
    void* get_In_Ticket_Reward();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void EndLife();
    void FadeOutFinished();
    void OnInitialized0();
    void ExecuteUbergraph_UI_InGameNotification(int32_t EntryPoint);
}; // Size: 0x2c8
#pragma pack(pop)
}
